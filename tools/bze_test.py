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

import random
import struct
import sys

import bze
import tim
import tmd
import tod


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
