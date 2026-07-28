#!/usr/bin/env python3

"""
Checks `bze.py` against the game's own decompressor.

No level is checked into this repository, so this works on generated data:

- a transcription of the game's decompression loop, kept as close to the
  pseudocode as Python allows -- down to the 16-bit counters that wrap. It is
  unreadable on purpose; the point is that it was copied rather than
  understood, so if `bze.py` misreads the format the two disagree.
- streams built item by item, over every combination of the options the format
  allows, including runs that overlap themselves and the two ways a section can
  end early.

The reader has separately been run over the 10 known levels, where every header
checksum matched and every section 1 walked cleanly to its terminator. That is
the check that says the format is right; this one says the code stays that way.
"""

import os
import random
import struct
import sys
import tempfile

import bze
import tim
import tmd
import tod
import gltf


# ---------------------------------------------------------------------------
# transcription of sub_431160 (v1.0 0x431160)
# ---------------------------------------------------------------------------


def decompress_transcribed(src):
    def u16(x):
        return x & 0xFFFF

    v2 = 0x7F >> (src[0] & 7)
    v22 = 1
    v3 = 19
    v23 = src[0] & 7
    if u16(v2) < 0x1F:
        v3 = u16(v2) >> 1
    v26 = 7 - v23
    v4 = 0
    v5 = (src[0] >> 3) & 3
    v27 = [0] * 128
    while True:
        v6 = v4
        if u16(v4) > u16(v3):
            v6 = v3 + ((v4 - v3) << v5)
        v7 = u16(v4)
        v4 = u16(v4 + 1)
        v27[v7] = u16(v6 + 2)
        v8 = v2
        v2 = u16(v2 + 0xFFFF)
        if v8 == 0:
            break

    v10 = src[3] + (src[2] << 8) + (src[1] << 16)
    v11 = 4
    v25 = v10
    v12 = 127 >> v23
    a2 = bytearray()
    while True:
        v13 = src[v11] | 0x100
        v11 += 1
        v24 = v13
        if v13 != 0:
            while True:
                v14 = v24 & 1
                v24 >>= 1
                if v24 == 0:
                    break
                if v14 != 0:
                    a2.append(src[v11])
                    v11 += 1
                else:
                    v16 = (src[v11] << 8) + src[v11 + 1]
                    v11 += 2
                    v17 = len(a2) - (v16 >> v26)
                    v18 = v27[v12 & v16]
                    while True:
                        a2.append(a2[v17])
                        v17 += 1
                        v20 = u16(v18)
                        v18 = u16(v18 + 0xFFFF)
                        if v20 == 0:
                            break
                    v10 = v25
                if v10 == 0:
                    v22 = 0
                    break
                v10 -= 1
                v25 = v10
        if v22 == 0:
            break
    return bytes(a2)


# ---------------------------------------------------------------------------
# stream construction
# ---------------------------------------------------------------------------


def make_stream(rng, osize, step, n_items, match_odds=0.4):
    """Builds a compressed stream and the bytes it should decompress to."""

    length_size = 7 - osize
    max_offset = (1 << (9 + osize)) - 1
    lut = bze.build_length_lut(length_size, step)

    out = bytearray()
    items = []
    for _ in range(n_items):
        if out and rng.random() < match_odds:
            index = rng.randrange(len(lut))
            offset = rng.randint(1, min(len(out), max_offset))
            start = len(out) - offset
            # copied a byte at a time, so a run may repeat itself
            for k in range(lut[index]):
                out.append(out[start + k])
            items.append((False, (offset, index)))
        else:
            byte = rng.randrange(256)
            out.append(byte)
            items.append((True, byte))

    body = bytearray()
    for group_start in range(0, len(items), 8):
        group = items[group_start:group_start + 8]
        flags = 0
        payload = bytearray()
        for i, (is_literal, value) in enumerate(group):
            if is_literal:
                flags |= 1 << i
                payload.append(value)
            else:
                offset, index = value
                packed = (offset << length_size) | index
                payload += bytes([packed >> 8, packed & 0xFF])
        body.append(flags)
        body += payload

    stored = len(items) - 1
    header = bytes([
        (step << 3) | osize,
        (stored >> 16) & 0xFF,
        (stored >> 8) & 0xFF,
        stored & 0xFF,
    ])
    return header + bytes(body), bytes(out)


def make_bze(sections, version=1):
    """Builds an archive out of already-compressed sections."""

    header = bytearray(bze.HEADER_SIZE)
    struct.pack_into("<II", header, 0, version, len(sections))
    body = bytearray()
    for i, blob in enumerate(sections):
        padded = bze.round_up(len(blob), bze.SECTOR_SIZE)
        struct.pack_into("<III", header, 8 + i * 12, i + 1, len(blob), padded)
        body += blob + bytes(padded - len(blob))

    checksum = sum(b - 256 if b > 127 else b
                   for b in header[:bze.CHECKSUM_OFFSET])
    struct.pack_into("<i", header, bze.CHECKSUM_OFFSET, checksum)
    return bytes(header) + bytes(body)


# ---------------------------------------------------------------------------
# checks
# ---------------------------------------------------------------------------

FAILURES = []


def check(condition, what):
    if not condition:
        FAILURES.append(what)


def test_against_transcription():
    """Every option combination, checked both ways."""

    rng = random.Random(20000)
    for osize in range(7):
        for step in range(4):
            for n_items in (1, 7, 8, 9, 64, 257):
                stream, expected = make_stream(rng, osize, step, n_items)
                got = bze.decompress(stream)
                check(
                    got == expected,
                    "osize=%d step=%d items=%d: decompressed %d bytes, "
                    "expected %d" % (osize, step, n_items, len(got),
                                     len(expected)),
                )
                check(
                    got == decompress_transcribed(stream),
                    "osize=%d step=%d items=%d: disagrees with the game's loop"
                    % (osize, step, n_items),
                )


def test_overlapping_runs():
    """A run longer than its offset repeats itself, and must keep doing so."""

    rng = random.Random(1)
    stream, expected = make_stream(rng, 0, 0, 400, match_odds=0.9)
    check(bze.decompress(stream) == expected, "overlapping runs came out wrong")

    # the case doc/bze.md gives: offset 3, length 8, over "de ad be ef"
    lut = bze.build_length_lut(7, 0)
    check(8 in lut, "length 8 is not encodable with osize=0 step=0")
    stream = bytes([0, 0, 0, 4])
    stream += bytes([0x0F])  # four literals, then a back reference
    stream += b"\xde\xad\xbe\xef"
    packed = (3 << 7) | lut.index(8)
    stream += bytes([packed >> 8, packed & 0xFF])
    got = bze.decompress(stream)
    check(
        got == b"\xde\xad\xbe\xef\xad\xbe\xef\xad\xbe\xef\xad\xbe",
        "the documented offset 3 / length 8 example gave %r" % got,
    )


def test_length_lut():
    """The table should start at the break-even length and rise."""

    for length_size in range(1, 8):
        for step in range(4):
            lut = bze.build_length_lut(length_size, step)
            check(len(lut) == 1 << length_size,
                  "lut for length_size=%d is %d long" % (length_size, len(lut)))
            check(lut[0] == 3,
                  "lut for length_size=%d starts at %d" % (length_size, lut[0]))
            check(all(b > a for a, b in zip(lut, lut[1:])),
                  "lut for length_size=%d step=%d does not rise"
                  % (length_size, step))


def test_container():
    """A built archive should read back the way it was put together."""

    rng = random.Random(7)
    payloads = []
    streams = []
    for i in range(3):
        stream, expected = make_stream(rng, i, i, 100)
        streams.append(stream)
        payloads.append(expected)

    archive = bze.Bze(make_bze(streams))
    check(archive.check() == [], "a well-formed archive was rejected: %s"
          % archive.check())
    check(len(archive.sections) == 3,
          "read %d sections, expected 3" % len(archive.sections))
    for i, section in enumerate(archive.sections):
        check(section.ident == i + 1,
              "section %d has ID %d" % (i, section.ident))
        check(archive.raw(section) == streams[i],
              "section %d did not come back as it went in" % i)
        check(bze.decompress(archive.raw(section)) == payloads[i],
              "section %d did not decompress to what it held" % i)


def test_stored_count_one_too_many():
    """A section whose stored count is exact, not one short.

    The compressor emitted both, mixed together, so a reader has to cope with
    the item too many. There is nothing left for it to read, so it stops.
    """

    rng = random.Random(11)
    stream, expected = make_stream(rng, 3, 1, 200)
    # rewrite the header so the stored count is the real one; the decompressor
    # will then reach for a 201st item that was never written
    stored = 200
    overrun = bytes([stream[0], (stored >> 16) & 0xFF, (stored >> 8) & 0xFF,
                     stored & 0xFF]) + stream[4:]

    out, done, total, _left = bze.decompress_verbose(overrun)
    check(out == expected,
          "an exact stored count gave %d bytes, expected %d"
          % (len(out), len(expected)))
    check(done == 200 and total == 201,
          "expected to stop after 200 of 201 items, stopped after %d of %d"
          % (done, total))


def test_zero_displacement_ends_it():
    """A back reference reaching zero bytes back is padding, not data."""

    rng = random.Random(12)
    stream, expected = make_stream(rng, 3, 1, 200)
    # give the item too many something to read: a group flagging a back
    # reference, whose packed value is zero
    stored = 200
    overrun = bytes([stream[0], (stored >> 16) & 0xFF, (stored >> 8) & 0xFF,
                     stored & 0xFF]) + stream[4:] + bytes([0x00, 0x00, 0x00])

    out, done, _total, _left = bze.decompress_verbose(overrun)
    check(out == expected,
          "a zero displacement gave %d bytes, expected %d"
          % (len(out), len(expected)))
    check(done == 200, "stopped after %d items, expected 200" % done)


def test_chunk_walk():
    """The section 1 walker should agree with what it was handed."""

    stream = bytes([bze.CHUNK_START, 0x20])
    stream += bytes([0x21]) + bytes(4)
    stream += bytes([0x10]) + bytes(12)
    stream += bytes([bze.CHUNK_END])
    stream += bytes([0x2C])
    stream += bytes([bze.CHUNK_START, 0x29]) + bytes([0x2A]) + bytes(8)
    stream += bytes([bze.CHUNK_END, bze.SECTION_END])

    chunks, terminated = bze.parse_chunks(stream)
    check(terminated, "a terminated stream was not seen as terminated")
    check([c.kind for c in chunks] == [0x20, 0x2C, 0x29],
          "walked %r" % [c.kind for c in chunks])
    check([t for t, _ in chunks[0].tags] == [0x21, 0x10],
          "chunk 0x20 gave tags %r" % [t for t, _ in chunks[0].tags])

    # a stream opening `2d 45` has no type byte
    pseudo = bytes([bze.CHUNK_START, 0x45, 0x00, 0x45, 0x00, bze.CHUNK_END,
                    bze.SECTION_END])
    chunks, terminated = bze.parse_chunks(pseudo)
    check(terminated and len(chunks) == 1 and chunks[0].kind is None,
          "the pseudo-chunk was not recognized")
    check(len(chunks[0].tags) == 2,
          "pseudo-chunk gave %d tags, expected 2" % len(chunks[0].tags))

    for bad, what in (
        (bytes([bze.CHUNK_START, 0xFE, bze.CHUNK_END]), "an unknown type"),
        (bytes([bze.CHUNK_START, 0x29, 0x99, bze.CHUNK_END]), "an unknown tag"),
        (bytes([0x99]), "a stray byte where a chunk should be"),
    ):
        try:
            bze.parse_chunks(bad)
        except bze.BzeError:
            continue
        FAILURES.append("%s was accepted" % what)


def make_tim_4bpp(width_units=2, height=2, palette=None):
    """Builds a 4bpp TIM with a 16-colour palette."""

    colours = palette or [(i * 0x0421) & 0x7FFF for i in range(16)]
    clut = struct.pack("<IHHHH", 12 + 16 * 2, 0, 0, 16, 1)
    clut += struct.pack("<16H", *colours)
    # each 16-bit unit holds 4 pixels, low nibble first
    pixels = bytes(range(width_units * 2)) * height
    block = struct.pack("<IHHHH", 12 + len(pixels), 0, 0, width_units, height)
    return struct.pack("<II", tim.TIM_ID, tim.FLAG_HAS_CLUT | tim.PMODE_4BPP) \
        + clut + block + pixels


def test_tim():
    """Parsing, the low-nibble-first order, and rejecting things that are not."""

    data = make_tim_4bpp()
    image = tim.parse(data)
    check(image.pmode == tim.PMODE_4BPP, "pixel mode came out wrong")
    check(image.width == 8 and image.height == 2,
          "4bpp 2 units wide gave %dx%d, expected 8x2"
          % (image.width, image.height))
    check(image.end == len(data), "parsing did not consume the whole image")

    # first byte is 0x00, so pixels 0 and 1 are both index 0; second is 0x01,
    # so pixel 2 is index 1 and pixel 3 is index 0
    colours = tim.palette(image)
    rgba = tim.to_rgba(image)
    check(rgba[0] == colours[0], "pixel 0 did not come from palette entry 0")
    check(rgba[2] == colours[1],
          "the low nibble is not the first pixel: got %r, expected %r"
          % (rgba[2], colours[1]))
    check(rgba[3] == colours[0], "the high nibble is not the second pixel")
    check(len(rgba) == 16, "decoded %d pixels, expected 16" % len(rgba))

    # a run of images should walk end to end, and stop at the first non-image
    run = data + data + b"\x00\x00\x00\x00"
    check(len(list(tim.iter_tims(run))) == 2,
          "walking a run of two images did not find two")

    for bad, what in (
        (b"\x11\x00\x00\x00" + b"\x00" * 32, "a bad id"),
        (struct.pack("<II", tim.TIM_ID, 0xFF) + b"\x00" * 32, "bad flags"),
        # a block whose size does not match its rectangle
        (struct.pack("<II", tim.TIM_ID, tim.PMODE_16BPP)
         + struct.pack("<IHHHH", 999, 0, 0, 2, 2), "a bad block size"),
    ):
        try:
            tim.parse(bad)
        except tim.TimError:
            continue
        FAILURES.append("%s was accepted as a TIM" % what)

    # transparent black is the one colour that is not opaque
    check(tim.bgr555_to_rgba(0) == (0, 0, 0, 0),
          "black should decode as transparent")
    check(tim.bgr555_to_rgba(0x7FFF) == (255, 255, 255, 255),
          "full white did not decode to opaque white")


def make_tmd(objects, vertex_counts, fields=None):
    """Builds a model record with the given per-object vertex counts.

    Vertex index fields are numbered across the record, the way the game
    numbers them; pass `fields` to control them directly.
    """

    table = b""
    body = b""
    # areas are laid out after the object table, offsets relative to it
    cursor = objects * tmd.OBJECT_SIZE
    base = 0
    for count in vertex_counts:
        table_entry_start = cursor
        verts = b"".join(
            struct.pack(
                "<3fI", float(base + i), float((base + i) * 2),
                float((base + i) * 3),
                fields[base + i] if fields else base + i,
            )
            for i in range(count)
        )
        body += verts
        cursor += len(verts)
        base += count
        table += struct.pack("<iIiIiIi", table_entry_start, count,
                             cursor, 0, objects * tmd.OBJECT_SIZE, 0, 0)
    return struct.pack("<III", tmd.TMD_ID, 0, objects) + table + body


def test_tmd():
    """The record layout, and the 16-byte vertices the PC port uses."""

    data = make_tmd(2, [3, 4])
    model = tmd.parse(data)
    check(len(model.objects) == 2, "parsed %d objects, expected 2"
          % len(model.objects))
    check(tmd.check(model, len(data)) == [],
          "a well-formed record was rejected: %s" % tmd.check(model, len(data)))

    verts = model.vertices(model.objects[1])
    check(len(verts) == 4, "read %d vertices, expected 4" % len(verts))
    check(len(model.all_vertices()) == 7,
          "the record should hold 7 vertices across its objects")

    # the index space: a permuted numbering must reorder the vertices, and a
    # high bit marks a duplicate that must lose to the unflagged holder
    permuted = make_tmd(1, [4], fields=[2, 0, 3, 1])
    got = tmd.parse(permuted).all_vertices()
    check([v[0] for v in got] == [1.0, 3.0, 0.0, 2.0],
          "a permuted index field did not reorder the vertices: %r" % (got,))
    seam = make_tmd(1, [4], fields=[0, 1, 2, 1 | 0x8000])
    got = tmd.parse(seam).all_vertices()
    check(len(got) == 3 and got[1][0] == 1.0,
          "a flagged duplicate displaced its canonical vertex: %r" % (got,))
    # all-zero fields mean positional numbering, as the world models use
    zeroed = make_tmd(1, [4], fields=[0, 0, 0, 0])
    check(len(tmd.parse(zeroed).all_vertices()) == 4,
          "zeroed index fields should fall back to positional order")
    check(verts[2] == (5.0, 10.0, 15.0),
          "vertex 2 came out as %r, expected (5.0, 10.0, 15.0)" % (verts[2],))

    # a record whose vertex area is the PSX's 8-byte stride should be caught
    bad = bytearray(data)
    struct.pack_into("<I", bad, tmd.HEADER_SIZE + 4, 99)
    check(tmd.check(tmd.parse(bytes(bad)), len(bad)) != [],
          "a wrong vertex count passed the check")

    for bad, what in (
        (b"\x42\x00\x00\x00" + b"\x00" * 16, "a bad id"),
        (struct.pack("<III", tmd.TMD_ID, 0, 9999), "an impossible object table"),
    ):
        try:
            tmd.parse(bad)
        except tmd.TmdError:
            continue
        FAILURES.append("%s was accepted as a model" % what)


def make_tod(frames, resolution=1):
    """Builds an animation from [(frame number, [packets])]."""

    out = struct.pack("<BBH I", tod.TOD_ID, 0, resolution, len(frames))[:8]
    out = struct.pack("<BBHI", tod.TOD_ID, 0, resolution, len(frames))
    for number, packets in frames:
        body = b""
        for node, ptype, flag, payload in packets:
            length = 1 + len(payload) // 4
            body += struct.pack("<HBB", node, (flag << 4) | ptype, length)
            body += payload
        out += struct.pack("<HHI", len(body) // 4 + 2, len(packets), number)
        out += body
    return out


def test_tod():
    """Header, frames, the coordinate layout, and the skeleton."""

    rot = struct.pack("<4h", 1024, 0, 0, 0)          # a quarter turn about X
    scale = struct.pack("<4h", 0x1000, 0x1000, 0x1000, 0)
    trans = struct.pack("<3i", 100, 200, 300)
    setup = make_tod([(0, [
        (1, tod.PACKET_TMD_ID, 0, struct.pack("<HH", 1, 0)),
        (2, tod.PACKET_TMD_ID, 0, struct.pack("<HH", 2, 0)),
        (2, tod.PACKET_PARENT, 0, struct.pack("<HH", 1, 0)),
    ])])
    anim = make_tod([(0, [
        (1, tod.PACKET_COORDINATE, 0xE, rot + scale + trans),
        (2, tod.PACKET_COORDINATE, 0x8, trans),
    ])], resolution=2)

    parsed = tod.parse(setup, 0, len(setup))
    parents, objects = parsed.skeleton()
    check(parents == {2: 1}, "parents came out as %r" % parents)
    check(objects == {1: 0, 2: 1},
          "one-based model IDs were not shifted down: %r" % objects)

    parsed = tod.parse(anim, 0, len(anim))
    pose = parsed.pose(0)
    check(pose[1][0] == (1024, 0, 0) and pose[1][2] == (100, 200, 300),
          "the coordinate packet decoded as %r" % (pose[1],))
    check(pose[2][0] == (0, 0, 0),
          "a translation-only packet should rotate by nothing")

    # node 2 hangs off node 1: a quarter turn about X takes its +Y translation
    # to +Z, on top of the parent's own translation
    world = tod.world_transforms(parents, pose)
    _m, t = world[2]
    check([round(c) for c in t] == [200, -100, 500],
          "the child landed at %r, expected [200, -100, 500]" % (t,))

    for bad, what in (
        (b"\x51" + setup[1:], "a bad id"),
        (setup[:-4], "a truncated frame"),
    ):
        try:
            tod.parse(bad, 0, len(bad))
        except tod.TodError:
            continue
        FAILURES.append("%s was accepted as a TOD" % what)


def make_tmd_with_quad():
    """Builds a one-object record holding a single 0x4e quad."""

    # header, then a 28-byte object table, then the primitive, then vertices
    prim_top = tmd.OBJECT_SIZE
    vert_top = prim_top + 32
    normal_top = vert_top + 4 * tmd.VERTEX_SIZE
    table = struct.pack("<iIiIiIi", vert_top, 4, normal_top, 0, prim_top, 1, 0)

    packet = bytearray(32)
    struct.pack_into("<H", packet, 0, 1)      # one primitive left in the run
    packet[3] = 0x4E                          # the mode, which fixes the size
    for slot, vertex in zip(tmd.PRIMITIVE_SLOTS[0x4E], (0, 1, 2, 3)):
        struct.pack_into("<H", packet, slot * 2, vertex)

    verts = b"".join(
        struct.pack("<3fI", float(i), float(i * 2), 0.0, i) for i in range(4)
    )
    return (struct.pack("<III", tmd.TMD_ID, 0, 1) + table + bytes(packet)
            + verts)


def make_tmd_with_textured_quad():
    """Builds a one-object record holding a single 0x40 quad.

    Mode 0x40 is the fullest of the textured primitives: a UV, a colour, a
    texture page and a CLUT, with the colour given per corner.
    """

    prim_top = tmd.OBJECT_SIZE
    size = tmd.PRIMITIVE_SIZES[0x40]
    vert_top = prim_top + size
    normal_top = vert_top + 4 * tmd.VERTEX_SIZE
    table = struct.pack("<iIiIiIi", vert_top, 4, normal_top, 0, prim_top, 1, 0)

    packet = bytearray(size)
    struct.pack_into("<H", packet, 0, 1)
    packet[3] = 0x40
    layout = tmd.PRIMITIVE_LAYOUT[0x40]
    for corner, (u, v) in enumerate(layout["uv"]):
        packet[u] = 8 * corner            # 0, 8, 16, 24
        packet[v] = 128 + 8 * corner      # 128, 136, 144, 152
    struct.pack_into("<H", packet, layout["tpage"], 0x1234)
    struct.pack_into("<H", packet, layout["clut"], 0x5678)
    for corner, at in enumerate(layout["colours"]):
        packet[at:at + 3] = bytes((corner, 2 * corner, 4 * corner))
    for slot, vertex in zip(tmd.PRIMITIVE_SLOTS[0x40], (0, 1, 2, 3)):
        struct.pack_into("<H", packet, slot * 2, vertex)

    verts = b"".join(
        struct.pack("<3fI", float(i), float(i * 2), 0.0, i) for i in range(4)
    )
    return (struct.pack("<III", tmd.TMD_ID, 0, 1) + table + bytes(packet)
            + verts)


def test_surface():
    """UVs, vertex colours and the winding a face comes out with."""

    record = make_tmd_with_textured_quad()
    model = tmd.parse(record)
    faces = model.object_faces(model.objects[0], len(record))
    check(len(faces) == 1, "expected one face, got %d" % len(faces))
    face = faces[0]
    check(tuple(face) == (0, 1, 2, 3),
          "the vertex indices came out as %r" % (tuple(face),))
    check(face.uvs == [(0, 128), (8, 136), (16, 144), (24, 152)],
          "the UVs came out as %r" % (face.uvs,))
    check(face.colours == [(0, 0, 0), (1, 2, 4), (2, 4, 8), (3, 6, 12)],
          "the colours came out as %r" % (face.colours,))
    check(face.tpage == 0x1234 and face.clut == 0x5678,
          "tpage/clut came out as %r/%r" % (face.tpage, face.clut))

    # a quad is stored as two triangles sharing an edge, so its corners walk
    # 0,1,3,2 to make a loop; reversed, because the stored winding faces in
    check(tmd.face_loop(4) == (2, 3, 1, 0),
          "a quad's loop is %r" % (tmd.face_loop(4),))
    check(tmd.face_loop(3) == (2, 1, 0),
          "a triangle's loop is %r" % (tmd.face_loop(3),))

    # every corner gets a vertex of its own, since neither a UV nor a colour
    # is shared between the faces that meet at one
    positions, uvs, colours, loops, textures = tmd.object_geometry(
        model, model.objects[0], len(record), y_up=False)
    check(loops == [[0, 1, 2, 3]], "the loop came out as %r" % (loops,))
    check(textures == [0x5678],
          "a textured face should carry its texture index: %r" % (textures,))
    check(len(positions) == 4 and len(uvs) == 4 and len(colours) == 4,
          "the per-corner arrays are %d/%d/%d long"
          % (len(positions), len(uvs), len(colours)))
    check(positions[0] == (2.0, 4.0, 0.0),
          "the first corner is %r, expected vertex 2" % (positions[0],))
    # the game measures V up from the bottom, so it comes out flipped into
    # the top-left origin images use
    check(uvs[0] == (16 / tmd.TEXTURE_PAGE_SIZE,
                     1.0 - 144 / tmd.TEXTURE_PAGE_SIZE),
          "the first UV is %r" % (uvs[0],))
    # colours are PSX modulation factors, neutral at 0x80, so /128
    check(colours[0] == (2 / 128.0, 4 / 128.0, 8 / 128.0, 1.0),
          "the first colour is %r" % (colours[0],))

    # an untextured primitive still gets colours, but no UVs to go with them
    plain = tmd.parse(make_tmd_with_quad())
    _p, plain_uvs, plain_colours, _l, plain_tex = tmd.object_geometry(
        plain, plain.objects[0], len(make_tmd_with_quad()), y_up=False)
    check(plain_uvs == [], "an untextured face produced UVs: %r" % (plain_uvs,))
    check(plain_tex == [None],
          "a swatch face's texture is baked, so its index must be None: %r"
          % (plain_tex,))

    # a face without UVs shades a solid swatch: neutral 0x80 shade times a
    # red swatch has to come out pure red, and the swatch face must not be
    # reported as textured
    swatch_record = bytearray(make_tmd_with_quad())
    at = tmd.HEADER_SIZE + tmd.OBJECT_SIZE
    layout = tmd.PRIMITIVE_LAYOUT[0x4E]
    struct.pack_into("<H", swatch_record, at + layout["clut"], 9)
    for c in layout["colours"]:
        swatch_record[at + c:at + c + 3] = bytes((0x80, 0x80, 0x80))
    swatched = tmd.parse(bytes(swatch_record))
    _p, _u, sw_cols, _l, sw_tex = tmd.object_geometry(
        swatched, swatched.objects[0], len(swatch_record), y_up=False,
        swatches={9: (255, 0, 0)})
    check(sw_tex == [None],
          "a swatch face leaked its texture index: %r" % (sw_tex,))
    check(all(c == (1.0, 0.0, 0.0, 1.0) for c in sw_cols),
          "a neutral shade on a red swatch gave %r" % (sw_cols[:1],))
    # without the swatch mapping it falls back to the bare grey shade
    _p, _u, bare_cols, _l, _t = tmd.object_geometry(
        swatched, swatched.objects[0], len(swatch_record), y_up=False)
    check(all(c == (1.0, 1.0, 1.0, 1.0) for c in bare_cols),
          "the bare neutral shade should be white: %r" % (bare_cols[:1],))
    check(len(plain_colours) == 4,
          "expected 4 colours, got %d" % len(plain_colours))

    # the OBJ writer carries both: colours ride on the `v` lines, and a face
    # names a texture coordinate per corner
    path = os.path.join(tempfile.mkdtemp(), "quad.obj")
    n_verts, n_faces = tmd.write_object_obj(
        path, model, model.objects[0], len(record), "quad", y_up=False)
    check((n_verts, n_faces) == (4, 1),
          "the writer reported %d vertices and %d faces" % (n_verts, n_faces))
    lines = open(path, encoding="utf-8").read().splitlines()
    v_lines = [l for l in lines if l.startswith("v ")]
    check(len(v_lines[0].split()) == 7,
          "a `v` line should carry three colour channels: %r" % v_lines[0])
    check(v_lines[0].split()[4:] == ["0.015625", "0.03125", "0.0625"],
          "the colour on the first `v` line is %r" % (v_lines[0],))
    vt_lines = [l for l in lines if l.startswith("vt ")]
    check(len(vt_lines) == 4, "expected 4 `vt` lines, got %d" % len(vt_lines))
    # OBJ measures V up from the bottom, the same way the game does, so it
    # comes back to the stored byte
    check(vt_lines[0].split()[2] == "%g" % (144 / tmd.TEXTURE_PAGE_SIZE),
          "the first V is %r" % (vt_lines[0],))
    f_lines = [l for l in lines if l.startswith("f ")]
    check(f_lines == ["f 1/1 2/2 3/3 4/4"],
          "the face line is %r" % (f_lines,))

    # the same geometry through the whole-model writer, which groups objects
    path = os.path.join(os.path.dirname(path), "whole.obj")
    tmd.write_obj(path, model, len(record), "quad", y_up=False)
    body = open(path, encoding="utf-8").read()
    check("g quad_obj00" in body, "the whole-model writer wrote no group")
    check("f 1/1 2/2 3/3 4/4" in body,
          "the whole-model writer did not number from 1")
    check("usemtl" not in body,
          "materials should only be written when an mtllib is given")

    # with a material library, a face run names its texture's material
    tmd.write_obj(path, model, len(record), "quad", y_up=False,
                  mtllib="quad.mtl")
    body = open(path, encoding="utf-8").read()
    check("mtllib quad.mtl" in body, "the OBJ does not reference its mtl")
    check("usemtl tex_%03d" % 0x5678 in body,
          "the face run does not name its texture's material")
    mtl_path = os.path.join(os.path.dirname(path), "quad.mtl")
    tmd.write_mtl(mtl_path, [7], {7: "tex_007.png"})
    mtl = open(mtl_path, encoding="utf-8").read()
    check("newmtl flat" in mtl, "the mtl lacks the untextured material")
    check("newmtl tex_007" in mtl and "map_Kd tex_007.png" in mtl,
          "the mtl does not map texture 7 to its image")

    # glTF: the texture becomes an embedded image and a material on the mesh
    fake_png = tim.encode_png(2, 2, [(255, 0, 0, 255)] * 4)
    image = gltf.build(model, len(record), {}, {0: 0}, [],
                       "test", textures={0x5678: fake_png})
    import json as json_mod
    pos = 12
    doc = None
    while pos < len(image):
        length, kind = struct.unpack_from("<II", image, pos)
        pos += 8
        if kind == 0x4E4F534A:
            doc = json_mod.loads(image[pos:pos + length])
        pos += length
    check(len(doc.get("images", [])) == 1,
          "expected one embedded image, got %r" % doc.get("images"))
    check(doc["materials"][0]["name"] == "tex_%03d" % 0x5678,
          "the material is %r" % doc["materials"][0])
    prim = doc["meshes"][0]["primitives"][0]
    check(prim.get("material") == 0,
          "the primitive does not use the material: %r" % prim)
    check(fake_png in image, "the PNG bytes are not embedded in the blob")

    # every primitive must carry a material, textured or not: glTF's default
    # is metallicFactor 1.0, which renders dark grey and hides COLOR_0
    plain_record = make_tmd_with_quad()
    plain = tmd.parse(plain_record)
    bare = gltf.build(plain, len(plain_record), {}, {0: 0}, [], "test")
    pos, doc = 12, None
    while pos < len(bare):
        length, kind = struct.unpack_from("<II", bare, pos)
        pos += 8
        if kind == 0x4E4F534A:
            doc = json_mod.loads(bare[pos:pos + length])
        pos += length
    prims = [p for m in doc["meshes"] for p in m["primitives"]]
    check(prims and all("material" in p for p in prims),
          "an untextured primitive was left without a material")
    for mat in doc["materials"]:
        shading = mat["pbrMetallicRoughness"]
        check(shading["metallicFactor"] == 0.0,
              "material %r is metallic: %r" % (mat["name"], shading))
        check(shading.get("baseColorFactor") == [1.0, 1.0, 1.0, 1.0],
              "material %r tints COLOR_0: %r" % (mat["name"], shading))


def test_gltf():
    """A built glb must be well formed and place its meshes correctly."""

    import json

    record = make_tmd_with_quad()
    model = tmd.parse(record)
    # a node tree: node 2 hangs off node 1, which carries the model's object 0
    parents = {2: 1}
    node_objects = {1: 0}
    rot = struct.pack("<4h", 1024, 0, 0, 0)
    scale = struct.pack("<4h", 0x1000, 0x1000, 0x1000, 0)
    trans = struct.pack("<3i", 10, 20, 30)
    anim = tod.parse(*(lambda blob: (blob, 0, len(blob)))(make_tod([
        (0, [(1, tod.PACKET_COORDINATE, 0xE, rot + scale + trans),
             (2, tod.PACKET_COORDINATE, 0xE, rot + scale + trans)]),
        (1, [(1, tod.PACKET_COORDINATE, 0xE, rot + scale + trans)]),
    ], resolution=2)))

    check(len(model.faces(len(record))) == 1,
          "the built record should hold exactly one face")
    image = gltf.build(model, len(record), parents, node_objects,
                       [("walk", anim)], "test")
    check(image[:4] == b"glTF", "the image does not start with the glTF magic")
    total, = struct.unpack_from("<I", image, 8)
    check(total == len(image),
          "the header length is %d but the image is %d" % (total, len(image)))

    pos = 12
    doc = None
    while pos < len(image):
        length, kind = struct.unpack_from("<II", image, pos)
        pos += 8
        if kind == 0x4E4F534A:
            doc = json.loads(image[pos:pos + length])
        pos += length
    check(doc is not None, "the image carries no JSON chunk")
    check(doc["asset"]["version"] == "2.0", "not a glTF 2.0 asset")

    # two TOD nodes, plus the one carrying the turn to Y-up
    check(len(doc["nodes"]) == 3, "expected 3 nodes, got %d" % len(doc["nodes"]))
    root = doc["scenes"][0]["nodes"]
    check(root == [2], "the scene roots came out as %r" % (root,))
    turn = doc["nodes"][2]
    check(turn["rotation"] == gltf.Y_UP_ROTATION,
          "the Y-up node holds %r" % turn["rotation"])
    check(turn["children"] == [0],
          "the Y-up node parents %r" % turn["children"])
    # node 1 owns node 2 as a child, under the turn
    check(doc["nodes"][0].get("children") == [1],
          "the child link is %r" % doc["nodes"][0].get("children"))
    check(doc["nodes"][0]["translation"] == [10.0, 20.0, 30.0],
          "the rest translation is %r" % doc["nodes"][0]["translation"])
    quat = doc["nodes"][0]["rotation"]
    check(abs(sum(c * c for c in quat) - 1.0) < 1e-6,
          "the rest rotation is not a unit quaternion: %r" % (quat,))

    # only node 1 moves over two frames, so only it gets channels
    anims = doc["animations"]
    check(len(anims) == 1, "expected one animation, got %d" % len(anims))
    targets = {c["target"]["node"] for c in anims[0]["channels"]}
    check(targets == {0}, "channels target %r, expected only node 0" % targets)
    paths = {c["target"]["path"] for c in anims[0]["channels"]}
    check(paths == {"translation", "rotation", "scale"},
          "channel paths came out as %r" % paths)

    # a mesh hangs off node 1, and its indices stay inside its own positions
    check("mesh" in doc["nodes"][0], "the object's node carries no mesh")
    prim = doc["meshes"][0]["primitives"][0]
    check(prim["mode"] == gltf.TRIANGLES, "primitives are not triangles")
    n_pos = doc["accessors"][prim["attributes"]["POSITION"]]["count"]
    check(n_pos == 4, "the mesh has %d positions, expected 4" % n_pos)
    n_idx = doc["accessors"][prim["indices"]]["count"]
    check(n_idx == 6, "a quad should fan into 6 indices, got %d" % n_idx)

    # the half turn about X is a rotation, so it must not mirror anything
    m = gltf.tod.rotation_matrix(0, 0, 0)
    q = gltf.Y_UP_ROTATION
    x, y, z, w = q
    turned = [[1 - 2 * (y * y + z * z), 2 * (x * y - z * w), 2 * (x * z + y * w)],
              [2 * (x * y + z * w), 1 - 2 * (x * x + z * z), 2 * (y * z - x * w)],
              [2 * (x * z - y * w), 2 * (y * z + x * w), 1 - 2 * (x * x + y * y)]]
    det = (turned[0][0] * (turned[1][1] * turned[2][2] - turned[1][2] * turned[2][1])
           - turned[0][1] * (turned[1][0] * turned[2][2] - turned[1][2] * turned[2][0])
           + turned[0][2] * (turned[1][0] * turned[2][1] - turned[1][1] * turned[2][0]))
    check(abs(det - 1.0) < 1e-6,
          "the Y-up turn has determinant %r, so it mirrors the model" % det)
    check([round(c) for c in (turned[0][1], turned[1][1], turned[2][1])]
          == [0, -1, 0], "the Y-up turn does not send +Y to -Y")

    # asking for the game's own axes must leave the tree alone
    raw = gltf.build(model, len(record), parents, node_objects,
                     [("walk", anim)], "test", y_up=False)
    pos = 12
    plain = None
    while pos < len(raw):
        length, kind = struct.unpack_from("<II", raw, pos)
        pos += 8
        if kind == 0x4E4F534A:
            plain = json.loads(raw[pos:pos + length])
        pos += length
    check(len(plain["nodes"]) == 2,
          "psx axes should give 2 nodes, got %d" % len(plain["nodes"]))
    check(plain["scenes"][0]["nodes"] == [0],
          "psx axes roots came out as %r" % plain["scenes"][0]["nodes"])

    # the OBJ writer turns the geometry the same way
    flipped = tmd.to_y_up([(1.0, 2.0, 3.0)])
    check(flipped == [(1.0, -2.0, -3.0)],
          "to_y_up gave %r" % flipped)


def test_bad_input():
    """Damaged files should be reported, not silently accepted."""

    archive = bytearray(make_bze([make_stream(random.Random(3), 0, 0, 20)[0]]))
    archive[16] ^= 0xFF  # corrupt a header entry, invalidating the checksum
    check(bze.Bze(bytes(archive)).check() != [],
          "a corrupted header passed its checks")

    for bad, what in (
        (bytes([7, 0, 0, 0]), "an osize of 7"),
        (bytes([0, 0]), "a truncated header"),
        (bytes([0, 0, 0, 0, 0x00, 0xFF, 0xFF]), "a reference past the start"),
    ):
        try:
            bze.decompress(bad)
        except bze.BzeError:
            continue
        FAILURES.append("%s was accepted" % what)


def main():
    for test in (
        test_length_lut,
        test_against_transcription,
        test_overlapping_runs,
        test_stored_count_one_too_many,
        test_zero_displacement_ends_it,
        test_chunk_walk,
        test_tim,
        test_tmd,
        test_tod,
        test_surface,
        test_gltf,
        test_container,
        test_bad_input,
    ):
        test()

    if FAILURES:
        for failure in FAILURES:
            print("FAIL: %s" % failure)
        return 1
    print("OK")
    return 0


if __name__ == "__main__":
    sys.exit(main())
