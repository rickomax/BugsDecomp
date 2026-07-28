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

Note the same container turns up in other Behaviour titles (Jersey Devil uses
8-byte entries with no ID and stores its sections uncompressed; Monsters Inc.
uses a 12-byte header), so a reader written against this one will not
necessarily read those.
"""

import argparse
import os
import struct
import sys


# size of the header, and of the sector each section is padded out to
HEADER_SIZE = 0x800
SECTOR_SIZE = 0x800
# the header checksum covers everything before it
CHECKSUM_OFFSET = 0x7FC

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
    """Decompresses a section.

    Items come in groups of eight, each group prefixed by a byte saying what
    its items are: a set bit means a literal byte, a clear one a back
    reference. The item count runs out mid-group as often as not, which ends
    the whole thing.
    """

    offset_size, length_size, lut, remaining = parse_compression_header(data)
    length_mask = (1 << length_size) - 1

    out = bytearray()
    pos = 4
    while remaining > 0:
        if pos >= len(data):
            raise BzeError("ran out of input with %d items to go" % remaining)
        flags = data[pos]
        pos += 1

        for i in range(8):
            if pos >= len(data):
                raise BzeError("ran out of input part way through a group")

            if flags & (1 << i):
                out.append(data[pos])
                pos += 1
            else:
                if pos + 1 >= len(data):
                    raise BzeError("back reference is cut short")
                packed = (data[pos] << 8) | data[pos + 1]
                pos += 2

                offset = packed >> length_size
                length = lut[packed & length_mask]
                if offset == 0 or offset > len(out):
                    raise BzeError(
                        "back reference reaches %d bytes back, past the %d "
                        "decompressed so far" % (offset, len(out))
                    )
                # the run may be longer than the offset, repeating itself; copy
                # a byte at a time so it does
                start = len(out) - offset
                for k in range(length):
                    out.append(out[start + k])

            remaining -= 1
            if remaining == 0:
                break

    return bytes(out)


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
    for section in bze.sections:
        unpacked = "-"
        if not args.raw:
            try:
                unpacked = "%d" % len(decompress(bze.raw(section)))
            except BzeError as err:
                unpacked = "failed: %s" % err
        print(
            "%3d | %3d | %-17s | 0x%06x | %14d | %10s"
            % (section.index, section.ident, section.name, section.offset,
               section.size, unpacked)
        )

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

    args = parser.parse_args(argv)
    try:
        return args.func(args)
    except BzeError as err:
        print("error: %s" % err, file=sys.stderr)
        return 1


if __name__ == "__main__":
    sys.exit(main())
