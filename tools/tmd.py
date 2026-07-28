#!/usr/bin/env python3

"""
Reads the model records BBLiT stores in its BZE archives.

These are PSX TMDs carried over to the PC: the id, the object table and the
relative-offset scheme are the PSX format, and `GsMapModelingData` (v1.0
0x40cdc0) still relocates them the same way. The contents of each area were
converted for the PC, though, so a stock PSX TMD reader will not read them:

- vertices are 16 bytes, not the PSX's 8-byte packed SVECTOR. Each holds three
  IEEE floats and a fourth field of unclear purpose -- it is a running index in
  some records and zero throughout in others, so nothing here relies on it.
  What is verified is the stride: every vertex area across the known levels is
  exactly `count * 16` bytes.
- primitive packets are variable length and do not use the PSX's
  olen/ilen/flag/mode header. Byte 3 of a packet is a mode that fixes its
  length, and the vertex indices sit at fixed slots within it; both were
  recovered from the data, and `PRIMITIVES` records what came out.
- vertex indices are numbered across the whole record, not per object, which
  is also what each vertex's own index field counts.

Usage:

    tmd.py list <file>
    tmd.py obj <file> [-o outdir]
"""

import argparse
import os
import struct
import sys


TMD_ID = 0x41

HEADER_SIZE = 12
OBJECT_SIZE = 28
# three floats and the vertex's index
VERTEX_SIZE = 16

# Primitive packets, keyed by the mode byte at offset 3. `size` is the whole
# packet; `slots` are the 16-bit slots within it holding the vertex indices, in
# winding order.
#
# Both were recovered from the levels rather than from any documentation, and
# both are pinned down hard: the sizes are the only ones that let every
# primitive area partition exactly into its object's primitive count, and for
# each mode the slots are the only choice valid across every packet -- for the
# triangle they are the unique such choice out of all 560 possibilities.
PRIMITIVES = {
    0x38: (28, (10, 11, 12, 13)),
    0x3C: (32, (7, 14, 15)),
    0x40: (40, (16, 17, 18, 19)),
    0x4A: (28, (10, 11, 12, 13)),
    0x4E: (32, (12, 13, 14, 15)),
    # 16 bytes, and only ever seen in objects that have no vertices at all, so
    # what it draws is unknown; it carries no vertex indices
    0x64: (16, ()),
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

    def all_vertices(self):
        """Returns the record's vertices, in the order primitives index them.

        Primitives index vertices across the whole record rather than per
        object, and the numbering follows the order the vertex areas sit in,
        so the objects are concatenated in that order.
        """

        out = []
        for obj in sorted(self.objects, key=lambda o: o.vert_top):
            out.extend(self.vertices(obj))
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

    def faces(self, size):
        """Returns the record's faces, as tuples of vertex indices.

        Raises TmdError if the packets do not partition an object's primitive
        area exactly, which is what says the mode table read them correctly.
        """

        out = []
        for obj in self.objects:
            if not obj.n_prim:
                continue
            base, span = self.primitive_area(obj, size)
            pos = 0
            for i in range(obj.n_prim):
                if pos + 4 > span:
                    raise TmdError("primitive %d runs past its area" % i)
                mode = self._data[base + pos + 3]
                if mode not in PRIMITIVES:
                    raise TmdError("unknown primitive mode 0x%02x" % mode)
                packet_size, slots = PRIMITIVES[mode]
                if pos + packet_size > span:
                    raise TmdError("primitive %d runs past its area" % i)
                if slots:
                    values = struct.unpack_from(
                        "<%dH" % (packet_size // 2), self._data, base + pos)
                    out.append(tuple(values[s] for s in slots))
                pos += packet_size
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


def write_obj(path, model, size, name="model"):
    """Writes a model out as a Wavefront OBJ.

    Vertex indices run across the whole record, so the vertices go out as one
    list and the faces index into it.
    """

    verts = model.all_vertices()
    try:
        faces = model.faces(size)
    except TmdError:
        # the geometry is still worth writing out without them
        faces = []

    with open(path, "w", encoding="utf-8", newline="\n") as fp:
        fp.write("# %s, from a BBLiT model record\n" % name)
        fp.write("o %s\n" % name)
        for x, y, z in verts:
            fp.write("v %g %g %g\n" % (x, y, z))
        for face in faces:
            # a quad is stored the PSX way, as two triangles sharing an edge
            # (0,1,2 and 1,2,3), so its corners have to be walked 0,1,3,2 to
            # come out as a loop rather than a bowtie
            if len(face) == 4:
                face = (face[0], face[1], face[3], face[2])
            # OBJ counts vertices from 1
            fp.write("f %s\n" % " ".join(str(i + 1) for i in face))
    return len(verts), len(faces)


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.strip().split("\n")[0])
    sub = parser.add_subparsers(dest="command", required=True)

    common = argparse.ArgumentParser(add_help=False)
    common.add_argument("file")

    p_list = sub.add_parser("list", parents=[common], help="describe the model")
    p_list.set_defaults(func="list")

    p_obj = sub.add_parser("obj", parents=[common],
                           help="write the vertices out as a Wavefront OBJ")
    p_obj.add_argument("-o", "--outdir", default=".")
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
    nverts, nfaces = write_obj(path, model, len(data), stem)
    print("%s (%d objects, %d vertices, %d faces)"
          % (path, len(model.objects), nverts, nfaces))
    return 0


if __name__ == "__main__":
    sys.exit(main())
