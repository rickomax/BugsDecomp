#!/usr/bin/env python3

"""
Reads BZE level archives and extracts their sections.

The format is documented in `doc/bze.md`; this implements it, and follows the
game's own code where the two differ. The relevant routines in v1.0 are:

- 0x42e910 - opens a level, checks the header and loads each section
- 0x42e5b0 - reads one section, padding the read to a 2048-byte boundary
- 0x431160 - decompresses a section

Usage:

    bze.py list <file.bze>
    bze.py extract <file.bze> [-o outdir] [--raw]

This has been run over the 10 known levels: every header checksum matched and
every section 1 walked cleanly to its terminator, so the format as documented
here is right.

Note the same compression turns up in other Behaviour titles under a `.bzz`
extension, wrapped in slightly different archive headers -- Jersey Devil,
Monsters Inc. and The Grinch. Their compressed streams should read the same;
the container in this file will not read them.
"""

import argparse
import os
import struct
import sys

import gltf
import tim
import tmd
import tod


# size of the header, and of the sector each section is padded out to
HEADER_SIZE = 0x800
SECTOR_SIZE = 0x800
# the header checksum covers everything before it
CHECKSUM_OFFSET = 0x7FC

# Section 1 is a stream of chunks describing how to build the level. These are
# the tags each chunk type takes and how many bytes follow each one, from
# `doc/bze.md`; a chunk runs to a 0x2e, the stream to a 0x2f.
CHUNK_END = 0x2E
SECTION_END = 0x2F
CHUNK_START = 0x2D
# top-level commands that stand alone, taking no operand
COMMANDS = (0x2C, 0x4B)

# tags shared by the entity chunk types
_ENTITY_TAGS = {
    0x0B: 4, 0x0C: 4, 0x0F: 2, 0x10: 12, 0x11: 6, 0x12: 12, 0x13: 1, 0x15: 1,
    0x16: 8, 0x17: 36, 0x18: 16, 0x19: 4, 0x1A: 4, 0x1B: 6, 0x1C: 8, 0x1D: 4,
    0x1E: 2, 0x1F: 1, 0x27: 4, 0x30: 32, 0x31: 32, 0x32: 12, 0x34: 24,
    0x35: 40, 0x38: 2, 0x39: 2, 0x3A: 4, 0x41: 20, 0x42: 6, 0x46: 2,
}

CHUNK_TAGS = {
    0x00: {0x01: 8, 0x02: 8, 0x04: 8, 0x44: 12, 0x4C: 48, 0x4D: 48},
    0x05: {0x06: 3},
    0x07: _ENTITY_TAGS,
    0x08: _ENTITY_TAGS,
    0x09: {0x10: 12, 0x11: 6, 0x16: 8, 0x1C: 8, 0x1F: 1, 0x33: 32},
    0x0A: _ENTITY_TAGS,
    0x20: {0x10: 12, 0x11: 6, 0x12: 12, 0x21: 4, 0x24: 8, 0x39: 2, 0x43: 1},
    0x22: {0x0D: 12, 0x24: 8, 0x25: 8, 0x26: 4, 0x27: 4, 0x28: 3, 0x3F: 12,
           0x40: 8},
    0x29: {0x2A: 8},
    0x36: {0x37: 8},
    0x3B: {0x2B: 12, 0x3C: 4, 0x3D: 6, 0x3E: 28},
    0x47: {0x48: 8},
    0x49: {0x4A: 48},
}

# what each section ID is known to hold
SECTION_NAMES = {
    1: "load-instructions",
    2: "unknown",
    3: "shared-assets",
    4: "models",
    5: "assets-fr",
    6: "assets-en",
    7: "assets-de",
    8: "assets-es",
    9: "assets-it",
    10: "assets-nl",
}


class BzeError(Exception):
    """Raised when a file does not hold what the format calls for."""


# ---------------------------------------------------------------------------
# container
# ---------------------------------------------------------------------------


class Section:
    """One section of a BZE, as described by its header entry."""

    def __init__(self, index, ident, size, padded_size, offset):
        self.index = index
        # section ID; see SECTION_NAMES
        self.ident = ident
        # bytes of the section that are meaningful, i.e. its compressed size
        self.size = size
        # bytes it takes up in the file, as the header gives it
        self.padded_size = padded_size
        # where it starts in the file
        self.offset = offset

    @property
    def name(self):
        return SECTION_NAMES.get(self.ident, "unknown")

    @property
    def stored_size(self):
        """Bytes the section takes up in the file, as the game reads it.

        The game reads `size` bytes and then seeks on to the next sector
        boundary, so this is what it moves by, whatever the header says.
        """
        return round_up(self.size, SECTOR_SIZE)


class Bze:
    """A parsed BZE archive."""

    def __init__(self, data):
        self.data = data
        if len(data) < HEADER_SIZE:
            raise BzeError(
                "file is %d bytes, too short to hold a %d-byte header"
                % (len(data), HEADER_SIZE)
            )

        self.version, count = struct.unpack_from("<II", data, 0)
        self.checksum = struct.unpack_from("<i", data, CHECKSUM_OFFSET)[0]

        entries_end = 8 + count * 12
        if entries_end > CHECKSUM_OFFSET:
            raise BzeError(
                "header claims %d sections, which does not fit in it" % count
            )

        self.sections = []
        offset = HEADER_SIZE
        for i in range(count):
            ident, size, padded = struct.unpack_from("<III", data, 8 + i * 12)
            section = Section(i, ident, size, padded, offset)
            self.sections.append(section)
            offset += section.stored_size

    def computed_checksum(self):
        """The checksum the header should hold.

        A sum of the bytes before it, taken as signed. The game builds it the
        same way, over 2044 bytes starting at 0.
        """
        total = 0
        for byte in self.data[:CHECKSUM_OFFSET]:
            total += byte - 256 if byte > 127 else byte
        return total

    def check(self):
        """Returns a list of everything about the file that does not add up."""

        problems = []
        if self.computed_checksum() != self.checksum:
            problems.append(
                "header checksum is 0x%08x, expected 0x%08x"
                % (self.checksum & 0xFFFFFFFF,
                   self.computed_checksum() & 0xFFFFFFFF)
            )
        for section in self.sections:
            if section.padded_size != section.stored_size:
                problems.append(
                    "section %d gives a size of %d padded to %d, but the game "
                    "reads it as %d"
                    % (section.index, section.size, section.padded_size,
                       section.stored_size)
                )
            end = section.offset + section.size
            if end > len(self.data):
                problems.append(
                    "section %d runs to 0x%x, past the end of the file at 0x%x"
                    % (section.index, end, len(self.data))
                )
        return problems

    def raw(self, section):
        """Returns a section's bytes, still compressed."""

        blob = self.data[section.offset:section.offset + section.size]
        if len(blob) != section.size:
            raise BzeError(
                "section %d is cut short: wanted %d bytes, file holds %d"
                % (section.index, section.size, len(blob))
            )
        return blob


def round_up(value, to):
    return (value + to - 1) // to * to


# ---------------------------------------------------------------------------
# section 1
# ---------------------------------------------------------------------------


class Chunk:
    """One chunk of a section 1 stream, or a standalone command."""

    def __init__(self, offset, kind, tags=None):
        self.offset = offset
        # chunk type, or the command byte for a standalone command
        self.kind = kind
        # [(tag, payload)], empty for a command
        self.tags = tags or []


def parse_chunks(data):
    """Walks a decompressed section 1.

    Every tag has a fixed length, so the stream can only be walked by knowing
    all of them. That makes this a strict check on the decompression as much as
    a reader: get a byte wrong anywhere and the walk desynchronizes at once.

    Returns ([chunks], commands seen, whether it ended where it should).
    """

    chunks = []
    pos = 0

    # a stream may open with a chunk that has no type byte, whose only tag is
    # 0x45; each one makes the game skip a section of the level
    if data[:2] == bytes([CHUNK_START, 0x45]):
        pos = 1
        chunk = Chunk(0, None)
        while pos < len(data) and data[pos] != CHUNK_END:
            if data[pos] != 0x45:
                raise BzeError(
                    "pseudo-chunk holds tag 0x%02x at 0x%x, only 0x45 is valid"
                    % (data[pos], pos)
                )
            chunk.tags.append((0x45, data[pos + 1:pos + 2]))
            pos += 2
        chunks.append(chunk)
        pos += 1

    while pos < len(data):
        start = pos
        byte = data[pos]

        if byte == SECTION_END:
            return chunks, pos + 1 == len(data)
        if byte in COMMANDS:
            chunks.append(Chunk(start, byte))
            pos += 1
            continue
        if byte != CHUNK_START:
            raise BzeError(
                "expected a chunk at 0x%x, found 0x%02x" % (pos, byte)
            )

        kind = data[pos + 1]
        pos += 2
        if kind not in CHUNK_TAGS:
            raise BzeError("unknown chunk type 0x%02x at 0x%x" % (kind, start))

        tags = CHUNK_TAGS[kind]
        chunk = Chunk(start, kind)
        while pos < len(data) and data[pos] != CHUNK_END:
            tag = data[pos]
            if tag not in tags:
                raise BzeError(
                    "chunk type 0x%02x holds unknown tag 0x%02x at 0x%x"
                    % (kind, tag, pos)
                )
            size = tags[tag]
            chunk.tags.append((tag, data[pos + 1:pos + 1 + size]))
            pos += 1 + size
        chunks.append(chunk)
        pos += 1

    # ran off the end without a terminator
    return chunks, False


# ---------------------------------------------------------------------------
# decompression
# ---------------------------------------------------------------------------


def parse_compression_header(data):
    """Reads the four-byte header a compressed section starts with.

    Returns (offset_size, length_size, lut, item_count), where `item_count` is
    how many items the body actually holds -- the header stores one less.
    """

    if len(data) < 4:
        raise BzeError("compressed section is too short to hold a header")

    flags = data[0]
    # bits 2-0 size the offset field, and by extension the length field
    osize = flags & 7
    if osize == 7:
        raise BzeError(
            "compression header leaves no room for a length field (osize 7)"
        )
    # bits 4-3 are how coarsely lengths past the threshold are quantized
    step = (flags >> 3) & 3

    offset_size = 9 + osize
    length_size = 7 - osize
    lut = build_length_lut(length_size, step)

    # a 24-bit big-endian count, stored one short of the real one
    count = (data[1] << 16) | (data[2] << 8) | data[3]
    return offset_size, length_size, lut, count + 1


def build_length_lut(length_size, step):
    """Builds the table that maps an encoded length to a real one.

    Lengths start at the point a match becomes worth encoding and climb by one
    until a threshold, past which they climb by `1 << step` instead -- long
    matches are rarer, so they are quantized more coarsely.
    """

    size = 1 << length_size
    # the game compares against the largest index rather than the size
    threshold = 19 if size - 1 >= 0x1F else (size - 1) >> 1

    lut = []
    for i in range(size):
        if i > threshold:
            length = threshold + ((i - threshold) << step)
        else:
            length = i
        # the game stores lengths 3 short and copies one more byte than the
        # counter says; both are folded in here
        lut.append(length + 3)
    return lut


def decompress(data):
    """Decompresses a section."""

    return decompress_verbose(data)[0]


def decompress_verbose(data):
    """Decompresses a section, reporting how it went.

    Items come in groups of eight, each group prefixed by a byte saying what
    its items are: a set bit means a literal byte, a clear one a back
    reference. The item count runs out mid-group as often as not, which ends
    the whole thing.

    The stored item count is usually one short of the real one, but for some
    sections it is exact, and nothing in the header says which. The game does
    not care: it decompresses out of a buffer larger than the section, so the
    item too many reads a couple of bytes of whatever follows and appends a
    short run of rubbish past the end of the real output, which no caller looks
    at. Running out of input is therefore the end of the section, not an error.

    Returns (data, items done, items the header called for, input left over).
    """

    _offset_size, length_size, lut, total = parse_compression_header(data)
    length_mask = (1 << length_size) - 1

    out = bytearray()
    pos = 4
    done = 0
    while done < total and pos < len(data):
        flags = data[pos]
        pos += 1

        for i in range(8):
            literal = flags & (1 << i)
            # stop rather than run off the end; see above
            if pos + (0 if literal else 1) >= len(data):
                return bytes(out), done, total, len(data) - pos

            if literal:
                out.append(data[pos])
                pos += 1
            else:
                packed = (data[pos] << 8) | data[pos + 1]
                pos += 2

                offset = packed >> length_size
                length = lut[packed & length_mask]
                if offset == 0:
                    # no back reference reaches zero bytes back, so this is the
                    # item too many reading padding; drop it
                    return bytes(out), done, total, len(data) - pos
                if offset > len(out):
                    raise BzeError(
                        "back reference reaches %d bytes back, past the %d "
                        "decompressed so far" % (offset, len(out))
                    )
                # the run may be longer than the offset, repeating itself; copy
                # a byte at a time so it does
                start = len(out) - offset
                for k in range(length):
                    out.append(out[start + k])

            done += 1
            if done == total:
                break

    return bytes(out), done, total, len(data) - pos


# ---------------------------------------------------------------------------
# command line
# ---------------------------------------------------------------------------


def cmd_list(args):
    bze = Bze(read_file(args.file))

    print("version/flags: 0x%08x" % bze.version)
    print("sections:      %d" % len(bze.sections))
    print()
    print("  # |  ID | name              |   offset |  size (packed) |   unpacked")
    print("----|-----|-------------------|----------|----------------|-----------")
    short = False
    for section in bze.sections:
        unpacked = "-"
        if not args.raw:
            try:
                blob, done, total, _left = decompress_verbose(bze.raw(section))
                unpacked = "%d" % len(blob)
                if done != total:
                    unpacked += " (-%d)" % (total - done)
                    short = True
            except BzeError as err:
                unpacked = "failed: %s" % err
        print(
            "%3d | %3d | %-17s | 0x%06x | %14d | %10s"
            % (section.index, section.ident, section.name, section.offset,
               section.size, unpacked)
        )

    if short:
        print()
        print("(-N) marks sections whose stored item count was one too many; "
              "see doc/bze.md.")

    report_problems(bze, args)
    return 0


def cmd_extract(args):
    bze = Bze(read_file(args.file))
    report_problems(bze, args)

    os.makedirs(args.outdir, exist_ok=True)
    stem = os.path.splitext(os.path.basename(args.file))[0]

    for section in bze.sections:
        blob = bze.raw(section)
        suffix = "bin"
        if not args.raw:
            try:
                blob = decompress(blob)
            except BzeError as err:
                print(
                    "section %d (ID %d) did not decompress (%s); writing it as "
                    "it is" % (section.index, section.ident, err),
                    file=sys.stderr,
                )
                suffix = "packed"

        path = os.path.join(
            args.outdir,
            "%s_%02d_id%02d_%s.%s"
            % (stem, section.index, section.ident, section.name, suffix),
        )
        with open(path, "wb") as fp:
            fp.write(blob)
        print("%s (%d bytes)" % (path, len(blob)))

    return 0


def cmd_chunks(args):
    bze = Bze(read_file(args.file))
    report_problems(bze, args)

    wanted = [s for s in bze.sections if s.ident == 1]
    if not wanted:
        print("no section 1 in this file", file=sys.stderr)
        return 1

    for section in wanted:
        data = decompress(bze.raw(section))
        chunks, terminated = parse_chunks(data)

        print("section %d: %d bytes, %d chunks%s"
              % (section.index, len(data), len(chunks),
                 "" if terminated else ", NOT properly terminated"))
        if args.summary:
            counts = {}
            for chunk in chunks:
                key = ("command 0x%02x" % chunk.kind if chunk.kind in COMMANDS
                       else "pseudo-chunk" if chunk.kind is None
                       else "type 0x%02x" % chunk.kind)
                counts[key] = counts.get(key, 0) + 1
            for key in sorted(counts):
                print("  %-14s %4d" % (key, counts[key]))
            continue

        for chunk in chunks:
            if chunk.kind is None:
                print("  0x%06x  pseudo-chunk (%d tags)"
                      % (chunk.offset, len(chunk.tags)))
            elif chunk.kind in COMMANDS:
                print("  0x%06x  command 0x%02x" % (chunk.offset, chunk.kind))
            else:
                print("  0x%06x  chunk type 0x%02x" % (chunk.offset, chunk.kind))
                for tag, payload in chunk.tags:
                    print("              tag 0x%02x  %s"
                          % (tag, payload.hex(" ")))
        if not terminated:
            return 1
    return 0


def cmd_textures(args):
    bze = Bze(read_file(args.file))
    report_problems(bze, args)

    stem = os.path.splitext(os.path.basename(args.file))[0]
    if args.func is cmd_textures and not args.list:
        os.makedirs(args.outdir, exist_ok=True)

    total = 0
    for section in bze.sections:
        data = decompress(bze.raw(section))
        # a section's images sit end to end, but text and sound tables may come
        # first, so fall back to searching when the run does not start at zero
        images = list(tim.iter_tims(data))
        if not images:
            images = tim.find_tims(data)
        if not images:
            continue

        covered = sum(image.end - image.offset for image in images)
        print("section %d (ID %d): %d image%s, %d of %d bytes"
              % (section.index, section.ident, len(images),
                 "" if len(images) == 1 else "s", covered, len(data)))
        total += len(images)

        for i, image in enumerate(images):
            if args.list:
                print("  " + tim.describe(image))
                continue
            path = os.path.join(
                args.outdir, "%s_s%02d_%04d.png" % (stem, section.index, i)
            )
            try:
                tim.save(image, path)
            except tim.TimError as err:
                print("  %s: %s" % (os.path.basename(path), err),
                      file=sys.stderr)

    if not total:
        print("no TIM images found", file=sys.stderr)
        return 1
    if not args.list:
        print("wrote %d image%s to %s"
              % (total, "" if total == 1 else "s", args.outdir))
    return 0


# chunk tags whose payload is an (offset, size) pair naming a model record
MODEL_TAGS = ((0x20, 0x24), (0x22, 0x24), (0x22, 0x40))


def find_models(bze):
    """Locates the model records a level's load instructions point at.

    Section 1 says where each model lives, as an offset into the section the
    models were loaded from, so the two have to be read together.
    """

    ident, data, groups = find_assets(bze)
    return ident, data, [(o, s, m) for o, s, m, _anims in groups]


def find_assets(bze):
    """Locates the models and pairs each with its animations.

    A model's animations follow it: the chunk that loads a model is followed
    by the chunks that load its animation records, until the next model. The
    animations are TOD files; see `tools/tod.py`.

    Returns (section ident, section data,
             [(offset, size, model, [(offset, size, tod)])]).
    """

    sections = {s.ident: s for s in bze.sections}
    if 1 not in sections:
        raise BzeError("no section 1, so nothing says where the models are")

    chunks, _terminated = parse_chunks(decompress(bze.raw(sections[1])))
    ident = max(sections)
    data = decompress(bze.raw(sections[ident]))

    groups = []
    seen = set()
    for chunk in chunks:
        for tag, payload in chunk.tags:
            if len(payload) < 8:
                continue
            offset, size = struct.unpack_from("<II", payload, 0)
            if offset + size > len(data) or (offset, size) in seen:
                continue
            if (chunk.kind, tag) in MODEL_TAGS:
                if not tmd.looks_like_tmd(data, offset):
                    continue
                seen.add((offset, size))
                groups.append((offset, size, tmd.parse(data, offset), []))
            elif (chunk.kind, tag) == (0x22, 0x25) and groups:
                try:
                    anim = tod.parse(data, offset, size)
                except tod.TodError:
                    continue
                seen.add((offset, size))
                groups[-1][3].append((offset, size, anim))
    # keep the long-standing numbering: records sort by offset
    groups.sort(key=lambda g: g[0])
    return ident, data, groups


def skeleton_of(anims):
    """Merges the skeleton every animation of a model carries.

    Only the single-frame setup TOD holds it in practice, but nothing says the
    others may not, so all of them are consulted.
    """

    parents = {}
    objects = {}
    for _offset, _size, anim in anims:
        got_parents, got_objects = anim.skeleton()
        parents.update(got_parents)
        objects.update(got_objects)
    return parents, objects


def bind_transforms(model, anims):
    """Builds each object's world transform from a model's animations.

    The skeleton (parents, and one-based model object IDs) comes from
    whichever animation carries it -- the single-frame setup TOD -- and the
    bind pose is frame 0 of whichever animation poses the most nodes.

    Returns {object table index: (matrix, translation)}, empty when the model
    has no skeleton to pose it.
    """

    parents, objects = skeleton_of(anims)
    pose = {}
    for _offset, _size, anim in anims:
        candidate = anim.pose(0)
        if len(candidate) > len(pose):
            pose = candidate

    if not objects or not pose:
        return {}
    world = tod.world_transforms(parents, pose)
    return {
        obj_index: world[node]
        for node, obj_index in objects.items()
        if node in world and 0 <= obj_index < len(model.objects)
    }


def cmd_models(args):
    bze = Bze(read_file(args.file))
    report_problems(bze, args)

    ident, data, groups = find_assets(bze)
    if not groups:
        print("no model records found", file=sys.stderr)
        return 1
    models = [(o, s, m) for o, s, m, _anims in groups]

    print("section %d: %d model record%s"
          % (ident, len(models), "" if len(models) == 1 else "s"))

    if not args.list:
        os.makedirs(args.outdir, exist_ok=True)
    stem = os.path.splitext(os.path.basename(args.file))[0]

    for i, (offset, size, model) in enumerate(models):
        transforms = None
        if getattr(args, "pose", False):
            transforms = bind_transforms(model, groups[i][3]) or None
        verts = sum(o.n_vert for o in model.objects)
        prims = sum(o.n_prim for o in model.objects)
        if args.list:
            print("  0x%06x  %6d bytes  %3d objects  %6d vertices  %6d "
                  "primitives" % (offset, size, len(model.objects), verts,
                                  prims))
            for problem in tmd.check(model, size):
                print("      warning: %s" % problem, file=sys.stderr)
            continue

        name = "%s_%04d" % (stem, i)
        if args.raw:
            path = os.path.join(args.outdir, name + ".tmd")
            with open(path, "wb") as fp:
                fp.write(data[offset:offset + size])
            print("%s (%d objects, %d vertices)"
                  % (path, len(model.objects), verts))
        elif getattr(args, "gltf", False):
            parents, node_objects = skeleton_of(groups[i][3])
            if not node_objects:
                print("%s: no skeleton, skipping" % name, file=sys.stderr)
                continue
            path = os.path.join(args.outdir, name + ".glb")
            labels = [("anim_%06x" % o, a) for o, _s, a in groups[i][3]]
            gltf.write_glb(path, model, size, parents, node_objects, labels,
                           name)
            n_anim = sum(1 for _l, a in labels if any(
                p.ptype == tod.PACKET_COORDINATE
                for f in a.frames for p in f.packets))
            print("%s (%d objects, %d animation%s)"
                  % (path, len(model.objects), n_anim,
                     "" if n_anim == 1 else "s"))
        elif args.split:
            for k, obj in enumerate(model.objects):
                part = "%s_obj%02d" % (name, k)
                path = os.path.join(args.outdir, part + ".obj")
                nv, nf = tmd.write_object_obj(path, model, obj, size, part,
                                              transforms)
                print("%s (%d vertices, %d faces)" % (path, nv, nf))
        else:
            path = os.path.join(args.outdir, name + ".obj")
            nv, nf = tmd.write_obj(path, model, size, name, transforms)
            posed = " posed" if transforms else ""
            print("%s (%d objects, %d vertices, %d faces%s)"
                  % (path, len(model.objects), nv, nf, posed))
    return 0


def cmd_anims(args):
    bze = Bze(read_file(args.file))
    report_problems(bze, args)

    _ident, _data, groups = find_assets(bze)
    shown = 0
    for offset, _size, model, anims in groups:
        if not anims:
            continue
        shown += 1
        print("model 0x%06x (%d objects):" % (offset, len(model.objects)))
        for aoffset, _asize, anim in anims:
            parents, objects = anim.skeleton()
            posed = len(anim.pose(0))
            note = []
            if parents:
                note.append("skeleton (%d nodes)" % len(parents))
            if posed:
                note.append("%d posed nodes" % posed)
            print("  0x%06x  %4d frame%s  res %d%s"
                  % (aoffset, len(anim.frames),
                     "" if len(anim.frames) == 1 else "s", anim.resolution,
                     ("  " + ", ".join(note)) if note else ""))
    if not shown:
        print("no animated models found", file=sys.stderr)
        return 1
    return 0


def report_problems(bze, args):
    problems = bze.check()
    if not problems:
        return
    for problem in problems:
        print("warning: %s" % problem, file=sys.stderr)
    if not args.force:
        print(
            "note: the game would refuse this file; pass --force to go on "
            "anyway" if any("checksum" in p for p in problems)
            else "note: pass --force to go on anyway",
            file=sys.stderr,
        )
        sys.exit(1)


def read_file(path):
    with open(path, "rb") as fp:
        return fp.read()


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.strip().split("\n")[0])
    sub = parser.add_subparsers(dest="command", required=True)

    # flags both commands take, so they can be given after the command
    common = argparse.ArgumentParser(add_help=False)
    common.add_argument("file")
    common.add_argument("--force", action="store_true",
                        help="carry on even if the file does not check out")
    common.add_argument("--raw", action="store_true",
                        help="leave sections compressed")

    p_list = sub.add_parser("list", parents=[common],
                            help="show what a BZE holds")
    p_list.set_defaults(func=cmd_list)

    p_extract = sub.add_parser("extract", parents=[common],
                               help="write each section to a file")
    p_extract.add_argument("-o", "--outdir", default=".",
                           help="where to write the sections (default: .)")
    p_extract.set_defaults(func=cmd_extract)

    p_chunks = sub.add_parser("chunks", parents=[common],
                              help="walk the load instructions in section 1")
    p_chunks.add_argument("-s", "--summary", action="store_true",
                          help="count chunks by type instead of listing them")
    p_chunks.set_defaults(func=cmd_chunks)

    p_tex = sub.add_parser("textures", parents=[common],
                           help="write the TIM textures out as PNGs")
    p_tex.add_argument("-o", "--outdir", default=".")
    p_tex.add_argument("-l", "--list", action="store_true",
                       help="show the images instead of writing them")
    p_tex.set_defaults(func=cmd_textures)

    p_mod = sub.add_parser("models", parents=[common],
                           help="find the model records and write them out")
    p_mod.add_argument("-o", "--outdir", default=".")
    p_mod.add_argument("-l", "--list", action="store_true",
                       help="describe the models instead of writing them")
    p_mod.add_argument("--split", action="store_true",
                       help="write one OBJ per object of each model, so a bad "
                            "object can be told from a good one")
    p_mod.add_argument("--gltf", action="store_true",
                       help="write a glTF 2.0 binary (.glb) per model, with "
                            "its skeleton and animations")
    p_mod.add_argument("--pose", action="store_true",
                       help="place each model's objects using its skeleton and "
                            "bind pose from the TOD animations")

    p_anim = sub.add_parser("anims", parents=[common],
                            help="list each model's TOD animations")
    p_anim.set_defaults(func=cmd_anims)
    p_mod.set_defaults(func=cmd_models)

    args = parser.parse_args(argv)
    try:
        return args.func(args)
    except BzeError as err:
        print("error: %s" % err, file=sys.stderr)
        return 1


if __name__ == "__main__":
    sys.exit(main())
