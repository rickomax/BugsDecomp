#!/usr/bin/env python3

"""
Reads the model records BBLiT stores in its BZE archives.

These are PSX TMDs carried over to the PC: the id, the object table and the
relative-offset scheme are the PSX format, and `GsMapModelingData` (v1.0
0x40cdc0) still relocates them the same way. The contents of each area were
converted for the PC, though, so a stock PSX TMD reader will not read them:

- vertices are 16 bytes, not the PSX's 8-byte packed SVECTOR. Each holds three
  IEEE floats and its index in the space the primitives use: the low 15 bits
  place it, and the high bit marks a seam duplicate sharing its index with
  another vertex. The world models leave the field zero and are numbered by
  position instead.
- primitive packets are variable length and do not use the PSX's
  olen/ilen/flag/mode header. Byte 3 is a mode that fixes the length; the
  table comes from the game itself (v1.0 0x423f30). Where the vertex indices
  sit inside a packet is not in the game's code and was recovered from the
  levels instead, so only some modes yield faces.
- vertex indices are numbered across the whole record, not per object, with
  the objects counted in the order their vertex areas appear.

Usage:

    tmd.py list <file>
    tmd.py obj <file> [-o outdir] [--split]
"""

import argparse
import os
import struct
import sys


TMD_ID = 0x41

HEADER_SIZE = 12
OBJECT_SIZE = 28
# three floats, then the vertex's index and seam flag
VERTEX_SIZE = 16

# Bytes one primitive takes up, keyed by the mode byte at offset 3. Taken
# straight out of the game: v1.0 0x423f30 walks every object's primitives with
# this exact switch, so the table is complete and authoritative, covering modes
# that never turn up in the levels shipped with the game.
#
# Note a packet's first 16-bit field is a count of the primitives left in the
# run, which each following primitive repeats one lower. That makes every
# primitive self-describing, so a walk needs only the mode byte.
PRIMITIVE_SIZES = {
    0x00: 16, 0x04: 16, 0x08: 56, 0x0C: 56, 0x10: 20, 0x1C: 24, 0x20: 28,
    0x2C: 32, 0x30: 36, 0x34: 24, 0x38: 28, 0x3C: 32, 0x40: 40, 0x4A: 28,
    0x4E: 32, 0x64: 16,
}

# The other family: one header covering a whole run, followed by that many
# primitives of a fixed stride, with nothing repeated in between. The mode
# names (stride, tail) -- the tail is extra bytes the run carries at the end.
# The game consumes the whole run from the primitive count in one step, so a
# reader has to as well, or it loses its place.
PRIMITIVE_RUNS = {
    0x14: (16, 0), 0x18: (20, 0), 0x24: (20, 0), 0x28: (24, 0),
    0x44: (12, 4), 0x48: (24, 0), 0x4C: (28, 0),
}

# Which 16-bit slots of a packet hold its vertex indices. Unlike the sizes,
# these are not in the game's code -- 0x423f30 only registers texture pages --
# so they were recovered from the levels, and only the modes below are settled.
# A mode that is not here is still walked correctly, it just yields no face.
PRIMITIVE_SLOTS = {
    # triangles
    0x3C: (7, 14, 15),
    0x4A: (10, 11, 12),
    # same packet size as 0x4a and the same slots fit, but only 8 of these
    # exist in the known levels, too few to tell a triangle from a quad; the
    # triangle is the safe reading, since a wrong fourth corner is visible
    # rubbish while a missing one only costs a face
    0x38: (10, 11, 12),
    # quads, where the fourth corner sits as close to the other three as they
    # do to each other, which is what says it is really part of the face
    0x40: (16, 17, 18, 19),
    0x4E: (12, 13, 14, 15),
}


class TmdError(Exception):
    """Raised when data is not a model record."""


class Object:
    """One object of a model: its vertices, normals and primitives.

    The three offsets are relative to the end of the header, which is where the
    object table starts, exactly as `GsMapModelingData` relocates them.
    """

    def __init__(self, vert_top, n_vert, normal_top, n_normal,
                 prim_top, n_prim, scale):
        self.vert_top = vert_top
        self.n_vert = n_vert
        self.normal_top = normal_top
        self.n_normal = n_normal
        self.prim_top = prim_top
        self.n_prim = n_prim
        self.scale = scale


class Tmd:
    """A parsed model record."""

    def __init__(self, data, offset, flags, objects):
        self._data = data
        self.offset = offset
        self.flags = flags
        self.objects = objects

    @property
    def base(self):
        """Where the relative offsets are measured from."""
        return self.offset + HEADER_SIZE

    def vertices(self, obj):
        """Returns an object's vertices as (x, y, z) floats."""

        out = []
        start = self.base + obj.vert_top
        for i in range(obj.n_vert):
            at = start + i * VERTEX_SIZE
            if at + VERTEX_SIZE > len(self._data):
                raise TmdError("vertex %d runs past the end of the data" % i)
            x, y, z = struct.unpack_from("<3f", self._data, at)
            out.append((x, y, z))
        return out

    def all_vertices(self, transforms=None):
        """Returns the record's vertices, in the order primitives index them.

        Each vertex's fourth field says where it sits in the index space the
        primitives use: the low 15 bits are its index, and the high bit marks
        a duplicate -- a seam vertex sharing its index with another. Several
        vertices can share one index, so the index space is smaller than the
        vertex array; the unflagged vertex is the canonical one for its index.

        Some records leave the field zero throughout (the single-object world
        models). There the numbering is simply the order the vertices sit in,
        with the objects taken in vertex-area order.

        `transforms` maps an object's index in the object table to a world
        (matrix, translation) pair; each vertex is taken through its owning
        object's transform, which is how an animation's pose places the model.
        """

        verts = []
        fields = []
        order = sorted(range(len(self.objects)),
                       key=lambda i: self.objects[i].vert_top)
        for index in order:
            obj = self.objects[index]
            start = self.base + obj.vert_top
            world = transforms.get(index) if transforms else None
            for i in range(obj.n_vert):
                at = start + i * VERTEX_SIZE
                if at + VERTEX_SIZE > len(self._data):
                    raise TmdError("vertex area runs past the end of the data")
                x, y, z, field = struct.unpack_from("<3fI", self._data, at)
                if world:
                    m, t = world
                    x, y, z = (
                        m[0][0] * x + m[0][1] * y + m[0][2] * z + t[0],
                        m[1][0] * x + m[1][1] * y + m[1][2] * z + t[1],
                        m[2][0] * x + m[2][1] * y + m[2][2] * z + t[2],
                    )
                verts.append((x, y, z))
                fields.append(field)

        lows = [f & 0x7FFF for f in fields]
        space = set(lows)
        # only trust the field when it lays out a complete 0..N-1 space
        if len(verts) < 2 or space != set(range(len(space))) or len(space) < 2:
            return verts

        out = [None] * len(space)
        for low, field, vert in zip(lows, fields, verts):
            if out[low] is None or not field >> 15:
                out[low] = vert
        return out

    def primitive_area(self, obj, size):
        """Returns (start, length) of an object's primitive packets.

        Objects interleave their areas, so an area runs until whichever area
        starts next, not until the object's own next field.
        """

        starts = sorted({s for o in self.objects
                         for s in (o.prim_top, o.vert_top, o.normal_top)}
                        | {size - HEADER_SIZE})
        end = next((s for s in starts if s > obj.prim_top),
                   size - HEADER_SIZE)
        return self.base + obj.prim_top, end - obj.prim_top

    def faces(self, size, partial=False):
        """Returns the record's faces, as tuples of vertex indices.

        Raises TmdError if the packets do not partition an object's primitive
        area exactly, which is what says the mode table read them correctly.
        With `partial`, a walk that loses its place keeps whatever it decoded
        before that -- everything up to the failure is still sound -- and the
        objects after it are skipped.
        """

        if partial:
            out = []
            for obj in self.objects:
                try:
                    out.extend(self.object_faces(obj, size))
                except TmdError:
                    continue
            return out

        out = []
        for obj in self.objects:
            out.extend(self.object_faces(obj, size))
        return out

    def object_faces(self, obj, size):
        """Walks one object's primitives, returning its faces."""

        out = []
        if obj.n_prim:
            base, span = self.primitive_area(obj, size)
            pos = 0
            left = obj.n_prim
            while left > 0:
                if pos + 4 > span:
                    raise TmdError("a primitive runs past its area")
                mode = self._data[base + pos + 3]

                if mode in PRIMITIVE_RUNS:
                    # one header for the whole run; the count is in front of it
                    stride, tail = PRIMITIVE_RUNS[mode]
                    count = struct.unpack_from("<H", self._data, base + pos)[0]
                    pos += stride * count + tail
                    left -= count or 1
                    continue

                if mode not in PRIMITIVE_SIZES:
                    raise TmdError("unknown primitive mode 0x%02x" % mode)
                packet_size = PRIMITIVE_SIZES[mode]
                if pos + packet_size > span:
                    raise TmdError("a primitive runs past its area")
                slots = PRIMITIVE_SLOTS.get(mode)
                if slots:
                    values = struct.unpack_from(
                        "<%dH" % (packet_size // 2), self._data, base + pos)
                    out.append(tuple(values[s] for s in slots))
                pos += packet_size
                left -= 1

            if pos != span:
                raise TmdError(
                    "primitives filled %d of %d bytes" % (pos, span))
        return out


def parse(data, offset=0):
    """Parses the model record at `offset`."""

    if offset + HEADER_SIZE > len(data):
        raise TmdError("not enough data for a header")
    ident, flags, n_obj = struct.unpack_from("<III", data, offset)
    if ident != TMD_ID:
        raise TmdError("id is 0x%x, expected 0x%x" % (ident, TMD_ID))

    table = offset + HEADER_SIZE
    if table + n_obj * OBJECT_SIZE > len(data):
        raise TmdError("object table of %d runs past the end of the data"
                       % n_obj)

    objects = []
    for i in range(n_obj):
        objects.append(Object(*struct.unpack_from(
            "<iIiIiIi", data, table + i * OBJECT_SIZE)))
    return Tmd(data, offset, flags, objects)


def looks_like_tmd(data, offset):
    try:
        parse(data, offset)
        return True
    except TmdError:
        return False


def check(model, size):
    """Returns what does not add up about a record `size` bytes long.

    The relative offsets should stay inside the record, and the vertex areas
    should be a whole number of 16-byte vertices reaching the next area along.
    """

    problems = []
    limit = size - HEADER_SIZE

    areas = []
    for i, obj in enumerate(model.objects):
        areas += [(obj.prim_top, "object %d primitives" % i, obj.n_prim, 0),
                  (obj.vert_top, "object %d vertices" % i, obj.n_vert,
                   VERTEX_SIZE),
                  (obj.normal_top, "object %d normals" % i, obj.n_normal, 0)]
    areas = sorted(set(areas))

    for i, (start, what, count, stride) in enumerate(areas):
        if start < 0 or start > limit:
            problems.append("%s starts at %d, outside the record" % (what, start))
            continue
        if not count or not stride:
            continue
        nxt = next((a[0] for a in areas[i + 1:] if a[0] > start), limit)
        if start + count * stride != nxt:
            problems.append(
                "%s is %d bytes for %d entries, expected %d"
                % (what, nxt - start, count, count * stride)
            )
    return problems


def _face_loop(face):
    """Puts a face's corners in the order a polygon wants them.

    A quad is stored the PSX way, as two triangles sharing an edge (0,1,2 and
    1,2,3), so its corners have to be walked 0,1,3,2 to come out as a loop
    rather than a bowtie.
    """

    if len(face) == 4:
        return (face[0], face[1], face[3], face[2])
    return face


def write_obj(path, model, size, name="model", transforms=None):
    """Writes a model out as a Wavefront OBJ.

    Vertex indices run across the whole record, so the vertices go out as one
    list and the faces index into it. Each object becomes its own group, so a
    viewer can show them apart. `transforms` poses the model; see
    `Tmd.all_vertices`.
    """

    verts = model.all_vertices(transforms)
    total = 0

    with open(path, "w", encoding="utf-8", newline="\n") as fp:
        fp.write("# %s, from a BBLiT model record\n" % name)
        fp.write("o %s\n" % name)
        for x, y, z in verts:
            fp.write("v %g %g %g\n" % (x, y, z))
        for i, obj in enumerate(model.objects):
            try:
                faces = model.object_faces(obj, size)
            except TmdError as err:
                # keep the objects that do walk
                fp.write("# object %d: %s\n" % (i, err))
                continue
            if not faces:
                continue
            fp.write("g %s_obj%02d\n" % (name, i))
            for face in faces:
                # OBJ counts vertices from 1
                fp.write("f %s\n"
                         % " ".join(str(v + 1) for v in _face_loop(face)))
            total += len(faces)
    return len(verts), total


def write_object_obj(path, model, obj, size, name="object", transforms=None):
    """Writes one object of a record as an OBJ of its own.

    An object's faces may reach for vertices outside its own block, so this
    takes whichever vertices its faces actually name and renumbers them. That
    keeps each file self-contained and shows exactly what that one object
    draws, which is what makes it useful for telling a good object from a bad
    one.
    """

    verts = model.all_vertices(transforms)
    try:
        faces = model.object_faces(obj, size)
    except TmdError:
        faces = []

    if faces:
        used = sorted({v for face in faces for v in face})
    else:
        # nothing walked, so fall back to the object's own vertices
        start = 0
        for other in sorted(model.objects, key=lambda o: o.vert_top):
            if other is obj:
                break
            start += other.n_vert
        used = list(range(start, start + obj.n_vert))
    renumber = {v: i for i, v in enumerate(used)}

    with open(path, "w", encoding="utf-8", newline="\n") as fp:
        fp.write("# %s, one object of a BBLiT model record\n" % name)
        fp.write("o %s\n" % name)
        for v in used:
            if v < len(verts):
                fp.write("v %g %g %g\n" % verts[v])
            else:
                fp.write("v 0 0 0\n")
        for face in faces:
            fp.write("f %s\n"
                     % " ".join(str(renumber[v] + 1) for v in _face_loop(face)))
    return len(used), len(faces)


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.strip().split("\n")[0])
    sub = parser.add_subparsers(dest="command", required=True)

    common = argparse.ArgumentParser(add_help=False)
    common.add_argument("file")

    p_list = sub.add_parser("list", parents=[common], help="describe the model")
    p_list.set_defaults(func="list")

    p_obj = sub.add_parser("obj", parents=[common],
                           help="write the model out as a Wavefront OBJ")
    p_obj.add_argument("-o", "--outdir", default=".")
    p_obj.add_argument("--split", action="store_true",
                       help="write one OBJ per object instead of one for the "
                            "whole record")
    p_obj.set_defaults(func="obj")

    args = parser.parse_args(argv)
    with open(args.file, "rb") as fp:
        data = fp.read()

    try:
        model = parse(data)
    except TmdError as err:
        print("error: %s" % err, file=sys.stderr)
        return 1

    if args.func == "list":
        print("flags 0x%x, %d object%s"
              % (model.flags, len(model.objects),
                 "" if len(model.objects) == 1 else "s"))
        for i, obj in enumerate(model.objects):
            print("  %2d  %5d vertices @%-8d %5d normals @%-8d %5d primitives"
                  " @%d" % (i, obj.n_vert, obj.vert_top, obj.n_normal,
                            obj.normal_top, obj.n_prim, obj.prim_top))
        for problem in check(model, len(data)):
            print("warning: %s" % problem, file=sys.stderr)
        return 0

    os.makedirs(args.outdir, exist_ok=True)
    stem = os.path.splitext(os.path.basename(args.file))[0]
    path = os.path.join(args.outdir, stem + ".obj")
    if args.split:
        for i, obj in enumerate(model.objects):
            name = "%s_obj%02d" % (stem, i)
            part = os.path.join(args.outdir, name + ".obj")
            nverts, nfaces = write_object_obj(part, model, obj, len(data), name)
            print("%s (%d vertices, %d faces)" % (part, nverts, nfaces))
        return 0

    nverts, nfaces = write_obj(path, model, len(data), stem)
    print("%s (%d objects, %d vertices, %d faces)"
          % (path, len(model.objects), nverts, nfaces))
    return 0


if __name__ == "__main__":
    sys.exit(main())
