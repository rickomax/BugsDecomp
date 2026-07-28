#!/usr/bin/env python3

"""
Reads PSX TIM images, the format BBLiT stores its textures in.

A TIM is a header, an optional CLUT (palette) block, and a pixel block, each
block giving the rectangle of PSX video memory it was meant to be loaded into.
Nothing here is specific to BBLiT; the levels just happen to hold a run of them
back to back, which `iter_tims` walks.

Usage:

    tim.py list <file>
    tim.py extract <file> [-o outdir]
"""

import argparse
import os
import struct
import sys
import zlib


TIM_ID = 0x10

# how the pixel block is laid out, and how many pixels one 16-bit unit holds
PMODE_4BPP = 0
PMODE_8BPP = 1
PMODE_16BPP = 2
PMODE_24BPP = 3
PMODE_MIXED = 4

PMODE_NAMES = {
    PMODE_4BPP: "4bpp",
    PMODE_8BPP: "8bpp",
    PMODE_16BPP: "16bpp",
    PMODE_24BPP: "24bpp",
    PMODE_MIXED: "mixed",
}
# pixels per 16-bit unit of the block's width
PMODE_PACKING = {
    PMODE_4BPP: 4,
    PMODE_8BPP: 2,
    PMODE_16BPP: 1,
}

FLAG_HAS_CLUT = 8

BLOCK_HEADER_SIZE = 12


class TimError(Exception):
    """Raised when data is not a TIM."""


class Block:
    """A CLUT or pixel block: a rectangle of PSX video memory, and its data."""

    def __init__(self, x, y, width, height, data):
        # where in video memory the block was meant to land
        self.x = x
        self.y = y
        # in 16-bit units, not pixels
        self.width = width
        self.height = height
        self.data = data


class Tim:
    """A parsed TIM image."""

    def __init__(self, offset, end, pmode, clut, pixels):
        self.offset = offset
        self.end = end
        self.pmode = pmode
        # None when the image carries its colours directly
        self.clut = clut
        self.pixels = pixels

    @property
    def mode_name(self):
        return PMODE_NAMES.get(self.pmode, "?")

    @property
    def width(self):
        packing = PMODE_PACKING.get(self.pmode)
        if packing:
            return self.pixels.width * packing
        if self.pmode == PMODE_24BPP:
            return self.pixels.width * 2 // 3
        return self.pixels.width

    @property
    def height(self):
        return self.pixels.height

    @property
    def palette_count(self):
        return self.clut.height if self.clut else 0

    def __repr__(self):
        return "<TIM 0x%06x %s %dx%d>" % (
            self.offset, self.mode_name, self.width, self.height
        )


def _read_block(data, pos):
    """Reads one block, returning (block, position after it)."""

    if pos + BLOCK_HEADER_SIZE > len(data):
        raise TimError("block header runs past the end of the data")
    size, x, y, width, height = struct.unpack_from("<IHHHH", data, pos)
    # the size counts the header, and must match the rectangle exactly; this is
    # what makes it safe to tell a TIM from arbitrary bytes
    if size != BLOCK_HEADER_SIZE + width * height * 2:
        raise TimError(
            "block says %d bytes, but %dx%d units need %d"
            % (size, width, height, BLOCK_HEADER_SIZE + width * height * 2)
        )
    if pos + size > len(data):
        raise TimError("block runs past the end of the data")
    body = data[pos + BLOCK_HEADER_SIZE:pos + size]
    return Block(x, y, width, height, body), pos + size


def parse(data, offset=0):
    """Parses the TIM at `offset`, raising TimError if there is not one."""

    if offset + 8 > len(data):
        raise TimError("not enough data for a header")
    ident, flags = struct.unpack_from("<II", data, offset)
    if ident != TIM_ID:
        raise TimError("id is 0x%x, expected 0x%x" % (ident, TIM_ID))
    if flags & ~0xF:
        raise TimError("flags 0x%x has bits set that are not defined" % flags)

    pmode = flags & 7
    if pmode not in PMODE_NAMES:
        raise TimError("pixel mode %d is not valid" % pmode)

    pos = offset + 8
    clut = None
    if flags & FLAG_HAS_CLUT:
        clut, pos = _read_block(data, pos)
    pixels, pos = _read_block(data, pos)
    return Tim(offset, pos, pmode, clut, pixels)


def looks_like_tim(data, offset):
    try:
        parse(data, offset)
        return True
    except TimError:
        return False


def iter_tims(data, offset=0):
    """Walks a run of TIMs laid end to end, stopping at the first non-TIM."""

    while offset < len(data):
        try:
            image = parse(data, offset)
        except TimError:
            return
        yield image
        offset = image.end


def find_tims(data, step=4):
    """Finds every TIM in a blob, for data that is not one clean run."""

    found = []
    offset = 0
    while offset < len(data) - 8:
        try:
            image = parse(data, offset)
        except TimError:
            offset += step
            continue
        found.append(image)
        offset = image.end
    return found


# ---------------------------------------------------------------------------
# decoding
# ---------------------------------------------------------------------------


def bgr555_to_rgba(colour):
    """Turns one 16-bit PSX colour into RGBA.

    Black with the semi-transparency bit clear is the transparent colour, which
    is how the hardware treats it.
    """

    if colour == 0:
        return (0, 0, 0, 0)
    red = (colour & 0x1F) << 3
    green = ((colour >> 5) & 0x1F) << 3
    blue = ((colour >> 10) & 0x1F) << 3
    # spread the top bits down so full-scale stays full-scale
    return (red | red >> 5, green | green >> 5, blue | blue >> 5, 255)


def palette(image, index=0):
    """Returns one of the image's palettes as a list of RGBA tuples."""

    if not image.clut:
        return []
    if index >= image.clut.height:
        raise TimError(
            "palette %d asked for, image has %d" % (index, image.clut.height)
        )
    entries = image.clut.width
    start = index * entries * 2
    raw = image.clut.data[start:start + entries * 2]
    return [bgr555_to_rgba(c) for c in struct.unpack("<%dH" % entries, raw)]


def to_rgba(image, palette_index=0):
    """Decodes an image to a row-major list of RGBA tuples."""

    data = image.pixels.data
    width, height = image.width, image.height

    if image.pmode in (PMODE_4BPP, PMODE_8BPP):
        colours = palette(image, palette_index)
        if not colours:
            raise TimError("an indexed image has no palette")
        out = []
        # a row is padded out to whole 16-bit units, so step by the stored width
        stride = image.pixels.width * 2
        for row in range(height):
            base = row * stride
            line = []
            if image.pmode == PMODE_4BPP:
                for i in range(width):
                    byte = data[base + (i >> 1)]
                    line.append(byte & 0xF if i % 2 == 0 else byte >> 4)
            else:
                line = list(data[base:base + width])
            out.extend(colours[i] if i < len(colours) else (0, 0, 0, 0)
                       for i in line)
        return out

    if image.pmode == PMODE_16BPP:
        return [bgr555_to_rgba(c)
                for c in struct.unpack("<%dH" % (width * height), data)]

    if image.pmode == PMODE_24BPP:
        return [(data[i], data[i + 1], data[i + 2], 255)
                for i in range(0, width * height * 3, 3)]

    raise TimError("cannot decode a %s image" % image.mode_name)


# ---------------------------------------------------------------------------
# PNG output
# ---------------------------------------------------------------------------


def encode_png(width, height, rgba):
    """Returns RGBA pixels encoded as a PNG."""

    raw = bytearray()
    for row in range(height):
        # each scanline is prefixed with its filter type; 0 is "none"
        raw.append(0)
        for pixel in rgba[row * width:(row + 1) * width]:
            raw.extend(pixel)

    def chunk(kind, body):
        out = struct.pack(">I", len(body)) + kind + body
        return out + struct.pack(">I", zlib.crc32(kind + body) & 0xFFFFFFFF)

    header = struct.pack(">IIBBBBB", width, height, 8, 6, 0, 0, 0)
    return (b"\x89PNG\r\n\x1a\n"
            + chunk(b"IHDR", header)
            + chunk(b"IDAT", zlib.compress(bytes(raw), 9))
            + chunk(b"IEND", b""))


def write_png(path, width, height, rgba):
    """Writes RGBA pixels out as a PNG."""

    with open(path, "wb") as fp:
        fp.write(encode_png(width, height, rgba))


def png_bytes(image, palette_index=0):
    """Decodes an image and returns it as a PNG."""

    return encode_png(image.width, image.height, to_rgba(image, palette_index))


def save(image, path, palette_index=0):
    """Decodes an image and writes it to `path` as a PNG."""

    write_png(path, image.width, image.height, to_rgba(image, palette_index))


# ---------------------------------------------------------------------------
# command line
# ---------------------------------------------------------------------------


def describe(image):
    text = "0x%06x  %-5s %4dx%-4d  vram(%d,%d)" % (
        image.offset, image.mode_name, image.width, image.height,
        image.pixels.x, image.pixels.y,
    )
    if image.clut:
        text += "  %d colour%s" % (image.clut.width,
                                   "" if image.clut.width == 1 else "s")
        if image.clut.height > 1:
            text += " x%d palettes" % image.clut.height
    return text


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.strip().split("\n")[0])
    sub = parser.add_subparsers(dest="command", required=True)

    common = argparse.ArgumentParser(add_help=False)
    common.add_argument("file")
    common.add_argument("--scan", action="store_true",
                        help="search the whole file rather than walking a run")

    p_list = sub.add_parser("list", parents=[common], help="show the images")
    p_list.set_defaults(func="list")

    p_extract = sub.add_parser("extract", parents=[common],
                               help="write each image out as a PNG")
    p_extract.add_argument("-o", "--outdir", default=".")
    p_extract.add_argument("--all-palettes", action="store_true",
                           help="write one PNG per palette, not just the first")
    p_extract.set_defaults(func="extract")

    args = parser.parse_args(argv)
    with open(args.file, "rb") as fp:
        data = fp.read()

    images = find_tims(data) if args.scan else list(iter_tims(data))
    if not images:
        print("no TIM images found", file=sys.stderr)
        return 1

    if args.func == "list":
        for image in images:
            print(describe(image))
        print("%d image%s" % (len(images), "" if len(images) == 1 else "s"))
        return 0

    os.makedirs(args.outdir, exist_ok=True)
    stem = os.path.splitext(os.path.basename(args.file))[0]
    for i, image in enumerate(images):
        count = image.palette_count if args.all_palettes else 1
        for p in range(max(1, count)):
            name = "%s_%04d" % (stem, i)
            if count > 1:
                name += "_pal%02d" % p
            path = os.path.join(args.outdir, name + ".png")
            try:
                save(image, path, p)
            except TimError as err:
                print("%s: %s" % (name, err), file=sys.stderr)
                continue
            print("%s (%dx%d %s)" % (path, image.width, image.height,
                                     image.mode_name))
    return 0


if __name__ == "__main__":
    sys.exit(main())
