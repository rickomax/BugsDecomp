#!/usr/bin/env python3

"""
Checks `bze.py` against the game's own decompressor.

There is no BZE in this repository to test against, so this leans on two things
instead:

- a transcription of the game's decompression loop, kept as close to the
  pseudocode as Python allows -- down to the 16-bit counters that wrap. It is
  unreadable on purpose; the point is that it was copied rather than
  understood, so if `bze.py` misreads the format the two disagree.
- streams built item by item, over every combination of the options the format
  allows, including runs that overlap themselves.

This says nothing about whether the format documentation matches real files.
Only a real level can settle that.
"""

import random
import struct
import sys

import bze


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
