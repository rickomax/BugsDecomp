#!/usr/bin/env python3

"""
Reads the animation records BBLiT stores in its BZE archives.

These are PSX TOD files (id 0x50), the SDK's hierarchy-and-motion format,
carried over to the PC with one conversion: a coordinate packet's rotation is
three shorts and a pad rather than three longs. Everything else is the PSX
layout, verified across every record of the known levels -- frames chain to
the byte, and all 225k coordinate packets agree with the flag/length rule.

A character is a tree of nodes. The single-frame `resolution=1` TOD that
accompanies each model is its *setup*: type-2 packets map each node to a model
object (the stored ID is one-based), and type-3 packets name each node's
parent. The bind pose is not in the setup; it is the full set of coordinate
packets in frame 0 of a gameplay animation. A node's coordinates are local to
its parent, so placing a model means composing them down the tree -- which is
exactly what the game's `GsCOORDINATE2` hierarchy does at runtime.

The evidence the whole chain is right is the model's own seams: vertices
flagged as seam duplicates sit in different objects, and under the composed
bind pose each lands on its twin (median error ~2 units on a model spanning
thousands), where unposed they sit tens of units apart.

Usage:

    tod.py list <file>
    tod.py dump <file> [-f N]
"""

import argparse
import math
import struct
import sys


TOD_ID = 0x50

# packet types, PSX names where the SDK defines them
PACKET_ATTRIBUTE = 0
PACKET_COORDINATE = 1
PACKET_TMD_ID = 2
PACKET_PARENT = 3
PACKET_MATRIX = 4
PACKET_TMD_BODY = 5
PACKET_LIGHT = 6
PACKET_CAMERA = 7
PACKET_CONTROL = 8
# 9 and 10 are not in the SDK's list; both appear in the game's data, 9 on
# node 0 of most frames (its body looks like a pair of world positions,
# perhaps root motion or bounds) and 10 rarely. Neither is decoded.

# coordinate packet flag bits
FLAG_MATRIX_TYPE = 1
FLAG_ROTATION = 2
FLAG_SCALING = 4
FLAG_TRANSLATION = 8


class TodError(Exception):
    """Raised when data is not a TOD record."""


class Packet:
    """One packet of a frame."""

    def __init__(self, node, ptype, flag, body):
        self.node = node
        self.ptype = ptype
        self.flag = flag
        self.body = body

    @property
    def coordinate(self):
        """Decodes a coordinate packet into (rotation, scale, translation).

        Rotation is three Q12 angles (0x1000 is a full turn), scale three Q12
        factors, translation three world-unit longs. Components the packet
        does not carry come back as the identity.
        """

        if self.ptype != PACKET_COORDINATE:
            raise TodError("not a coordinate packet")
        pos = 0
        rot, scale, trans = (0, 0, 0), (0x1000, 0x1000, 0x1000), (0, 0, 0)
        if self.flag & FLAG_ROTATION:
            # the PC conversion: three shorts and a pad, not three longs
            rot = struct.unpack_from("<3h", self.body, pos)
            pos += 8
        if self.flag & FLAG_SCALING:
            scale = struct.unpack_from("<3h", self.body, pos)
            pos += 8
        if self.flag & FLAG_TRANSLATION:
            trans = struct.unpack_from("<3i", self.body, pos)
        return rot, scale, trans

    @property
    def value(self):
        """The ID a TMD-mapping or parent packet carries."""

        if self.ptype not in (PACKET_TMD_ID, PACKET_PARENT):
            raise TodError("packet carries no ID")
        return struct.unpack_from("<H", self.body, 0)[0]


class Frame:
    """One frame: its number and its packets."""

    def __init__(self, number, packets):
        self.number = number
        self.packets = packets


class Tod:
    """A parsed animation record."""

    def __init__(self, version, resolution, frames):
        self.version = version
        # frame time, in 60ths of a second
        self.resolution = resolution
        self.frames = frames

    def skeleton(self):
        """Returns ({node: parent node}, {node: model object index}).

        Packets are searched across all frames, though in practice both kinds
        sit in frame 0 of the setup TOD. The stored model IDs are one-based;
        they come back zero-based here, ready to index the model's objects.
        """

        parents = {}
        objects = {}
        for frame in self.frames:
            for packet in frame.packets:
                if packet.ptype == PACKET_PARENT:
                    parents.setdefault(packet.node, packet.value)
                elif packet.ptype == PACKET_TMD_ID:
                    objects.setdefault(packet.node, packet.value - 1)
        return parents, objects

    def pose(self, index=0):
        """Returns {node: (rotation, scale, translation)} for one frame."""

        out = {}
        for packet in self.frames[index].packets:
            if packet.ptype == PACKET_COORDINATE:
                out[packet.node] = packet.coordinate
        return out


def parse(data, offset=0, size=None):
    """Parses the TOD at `offset`, spanning `size` bytes if given."""

    end = len(data) if size is None else offset + size
    if offset + 8 > end:
        raise TodError("not enough data for a header")
    ident, version = data[offset], data[offset + 1]
    if ident != TOD_ID:
        raise TodError("id is 0x%x, expected 0x%x" % (ident, TOD_ID))
    resolution, = struct.unpack_from("<H", data, offset + 2)
    n_frames, = struct.unpack_from("<I", data, offset + 4)

    frames = []
    pos = offset + 8
    for _ in range(n_frames):
        if pos + 8 > end:
            raise TodError("a frame header runs past the end of the data")
        frame_size, n_packets, number = struct.unpack_from("<HHI", data, pos)
        stop = pos + frame_size * 4
        if stop > end:
            raise TodError("a frame runs past the end of the data")
        packets = []
        cursor = pos + 8
        for _ in range(n_packets):
            if cursor + 4 > stop:
                raise TodError("a packet runs past its frame")
            node, kind, length = struct.unpack_from("<HBB", data, cursor)
            if length < 1 or cursor + length * 4 > stop:
                raise TodError("a packet length runs past its frame")
            packets.append(Packet(node, kind & 0xF, kind >> 4,
                                  data[cursor + 4:cursor + length * 4]))
            cursor += length * 4
        frames.append(Frame(number, packets))
        pos = stop

    if size is not None and pos != end:
        raise TodError("frames filled %d of %d bytes" % (pos - offset,
                                                         end - offset))
    return Tod(version, resolution, frames)


def looks_like_tod(data, offset=0, size=None):
    try:
        parse(data, offset, size)
        return True
    except TodError:
        return False


# ---------------------------------------------------------------------------
# posing
# ---------------------------------------------------------------------------


def rotation_matrix(rx, ry, rz):
    """Builds the game's rotation from three Q12 angles.

    Matches `RotMatrix` (XYZ order: Z first, then Y and X applied on top),
    with float trigonometry standing in for the game's Q12 tables.
    """

    def angle(a):
        return a * (2.0 * math.pi) / 4096.0

    cx, sx = math.cos(angle(rx)), math.sin(angle(rx))
    cy, sy = math.cos(angle(ry)), math.sin(angle(ry))
    cz, sz = math.cos(angle(rz)), math.sin(angle(rz))
    rot_z = [[cz, -sz, 0.0], [sz, cz, 0.0], [0.0, 0.0, 1.0]]
    rot_y = [[cy, 0.0, sy], [0.0, 1.0, 0.0], [-sy, 0.0, cy]]
    rot_x = [[1.0, 0.0, 0.0], [0.0, cx, -sx], [0.0, sx, cx]]

    def mul(a, b):
        return [[sum(a[i][k] * b[k][j] for k in range(3)) for j in range(3)]
                for i in range(3)]

    return mul(rot_x, mul(rot_y, rot_z))


def local_transform(coordinate):
    """Turns one node's (rotation, scale, translation) into (matrix, vector)."""

    rot, scale, trans = coordinate
    matrix = rotation_matrix(*rot)
    return ([[matrix[i][j] * scale[j] / 4096.0 for j in range(3)]
             for i in range(3)], list(trans))


def world_transforms(parents, pose):
    """Composes each node's local coordinates down the parent chain.

    Returns {node: (matrix, translation)} in world space, the way the game's
    coordinate hierarchy resolves them.
    """

    identity = ([[1.0, 0.0, 0.0], [0.0, 1.0, 0.0], [0.0, 0.0, 1.0]],
                [0.0, 0.0, 0.0])
    world = {}

    def resolve(node, depth=0):
        if node in world:
            return world[node]
        if depth > 100:
            raise TodError("the parent chain loops")
        local = local_transform(pose[node]) if node in pose else identity
        parent = parents.get(node)
        if parent is None or parent == node:
            world[node] = local
            return local
        pm, pt = resolve(parent, depth + 1)
        lm, lt = local
        matrix = [[sum(pm[i][k] * lm[k][j] for k in range(3))
                   for j in range(3)] for i in range(3)]
        trans = [sum(pm[i][k] * lt[k] for k in range(3)) + pt[i]
                 for i in range(3)]
        world[node] = (matrix, trans)
        return world[node]

    for node in set(parents) | set(pose):
        resolve(node)
    return world


# ---------------------------------------------------------------------------
# command line
# ---------------------------------------------------------------------------


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.strip().split("\n")[0])
    sub = parser.add_subparsers(dest="command", required=True)

    common = argparse.ArgumentParser(add_help=False)
    common.add_argument("file")

    p_list = sub.add_parser("list", parents=[common],
                            help="describe the animation")
    p_list.set_defaults(func="list")

    p_dump = sub.add_parser("dump", parents=[common],
                            help="show a frame's packets")
    p_dump.add_argument("-f", "--frame", type=int, default=0)
    p_dump.set_defaults(func="dump")

    args = parser.parse_args(argv)
    with open(args.file, "rb") as fp:
        data = fp.read()

    try:
        tod = parse(data, 0, len(data))
    except TodError as err:
        print("error: %s" % err, file=sys.stderr)
        return 1

    if args.func == "list":
        parents, objects = tod.skeleton()
        print("version %d, resolution %d, %d frame%s"
              % (tod.version, tod.resolution, len(tod.frames),
                 "" if len(tod.frames) == 1 else "s"))
        if parents or objects:
            print("skeleton: %d parent link%s, %d model mapping%s"
                  % (len(parents), "" if len(parents) == 1 else "s",
                     len(objects), "" if len(objects) == 1 else "s"))
        return 0

    frame = tod.frames[args.frame]
    print("frame %d: %d packets" % (frame.number, len(frame.packets)))
    for packet in frame.packets:
        text = "  node %3d  type %d flag 0x%x" % (packet.node, packet.ptype,
                                                  packet.flag)
        if packet.ptype == PACKET_COORDINATE:
            rot, scale, trans = packet.coordinate
            text += "  rot %s scale %s trans %s" % (rot, scale, trans)
        elif packet.ptype == PACKET_PARENT:
            text += "  parent %d" % packet.value
        elif packet.ptype == PACKET_TMD_ID:
            text += "  model object %d" % (packet.value - 1)
        elif packet.body:
            text += "  " + packet.body.hex(" ")
        print(text)
    return 0


if __name__ == "__main__":
    sys.exit(main())
