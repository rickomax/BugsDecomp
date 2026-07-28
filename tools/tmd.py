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


# Where the rest of a primitive's payload sits, as byte offsets into the
# packet. `uv` is one (u, v) pair per corner, `colours` one RGB triple per
# corner (or a single one for a flat mode), and `clut`/`tpage` the 16-bit
# texture fields. None of this is in the game's code either; it was read off
# the data, and two measurements pin it down:
#
# - which slots vary within one object. `tpage` holds still (1-4% of objects
#   vary) while the UV pairs move on almost every face (84-96%), which is what
#   separates the texture fields from the coordinates.
# - the untextured modes are exactly 8 bytes shorter than their textured
#   counterparts and carry no such block, which is the room the UVs take up.
#
# Colours read as PSX vertex colours: 0x80 is neutral, and they are grey for
# 100% of flat faces and most gouraud ones, tinted for the rest.
PRIMITIVE_LAYOUT = {
    0x38: {"uv": [(4, 5), (8, 9), (12, 13)], "clut": 6, "tpage": 10,
           "colours": [16]},
    0x3C: {"uv": [(4, 5), (8, 9), (12, 13)], "clut": 6, "tpage": 10,
           "colours": [16, 20, 24]},
    0x40: {"uv": [(4, 5), (8, 9), (12, 13), (14, 15)], "clut": 6, "tpage": 10,
           "colours": [16, 20, 24, 28]},
    0x4A: {"uv": None, "clut": None, "tpage": None, "colours": [8, 12, 16]},
    0x4E: {"uv": None, "clut": None, "tpage": None,
           "colours": [8, 12, 16, 20]},
}

# A texture page is this many texels across, so a stored coordinate divided by
# it lands in the 0..1 the usual formats want.
TEXTURE_PAGE_SIZE = 256.0

# The stored winding faces inward: taking each face's corners in the order
# they are stored, 74% of the known levels' faces have their normal pointing
# at the model's middle rather than away from it. Both writers reverse it.
REVERSE_WINDING = True


class Face:
    """One face: its corners, and whatever the mode carries alongside them."""

    def __init__(self, mode, indices, uvs=None, colours=None,
                 tpage=None, clut=None):
        self.mode = mode
        # vertex indices, in the order the packet stores them
        self.indices = indices
        # one (u, v) per corner, in texels, or None for an untextured mode
        self.uvs = uvs
        # one (r, g, b) per corner; a flat mode gives the same one to each
        self.colours = colours
        self.tpage = tpage
        self.clut = clut

    # a face stands in for its corners, so callers that only want those can
    # treat it as the tuple it used to be
    def __iter__(self):
        return iter(self.indices)

    def __len__(self):
        return len(self.indices)

    def __getitem__(self, index):
        return self.indices[index]


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

    def object_vertex_map(self, obj, world=None):
        """Returns {index: (x, y, z)} for one object, in its own local space.

        Faces index the record-wide space, but a seam vertex is stored once
        per object that draws it, each copy in that object's own space. So a
        part's geometry has to resolve its indices against its own vertices,
        not against the record's canonical ones -- otherwise a seam vertex
        arrives in a sibling's coordinate frame. An object's own vertices
        cover every index its faces name, in all 672 objects of the known
        levels.

        `world` is an optional (matrix, translation) pair to take the vertices
        through, which is how an animation's pose places the object.
        """

        out = {}
        start = self.base + obj.vert_top
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
            out.setdefault(field & 0x7FFF, (x, y, z))
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
        """Walks one object's primitives, returning its faces.

        Each face is a `Face`; iterating one gives its vertex indices, so
        anything that only wants the corners can treat it as a tuple.
        """

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
                    at = base + pos
                    values = struct.unpack_from(
                        "<%dH" % (packet_size // 2), self._data, at)
                    indices = tuple(values[s] for s in slots)
                    layout = PRIMITIVE_LAYOUT.get(mode, {})
                    uvs = None
                    if layout.get("uv"):
                        uvs = [(self._data[at + u], self._data[at + v])
                               for u, v in layout["uv"]]
                    colours = None
                    if layout.get("colours"):
                        colours = [tuple(self._data[at + c + k]
                                         for k in range(3))
                                   for c in layout["colours"]]
                        # a flat mode gives one colour to every corner
                        while len(colours) < len(indices):
                            colours.append(colours[0])
                    fields = {}
                    for key in ("tpage", "clut"):
                        if layout.get(key) is not None:
                            fields[key] = struct.unpack_from(
                                "<H", self._data, at + layout[key])[0]
                    out.append(Face(mode, indices, uvs, colours, **fields))
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


def to_y_up(vertices):
    """Turns the game's axes into the Y-up ones OBJ and glTF expect.

    The PSX has Y pointing down and Z into the screen, so the conversion is a
    half turn about X. It has to be a rotation rather than a flip of Y on its
    own: a flip is a reflection, which would mirror the model and reverse the
    winding of every face.
    """

    return [(x, -y, -z) for x, y, z in vertices]


def face_loop(count):
    """The order to walk a face's corners in, as positions within the face.

    A quad is stored the PSX way, as two triangles sharing an edge (0,1,2 and
    1,2,3), so its corners have to be walked 0,1,3,2 to come out as a loop
    rather than a bowtie. The loop is then reversed, because the stored
    winding faces inward; see `REVERSE_WINDING`.
    """

    order = (0, 1, 3, 2) if count == 4 else tuple(range(count))
    return order[::-1] if REVERSE_WINDING else order


def _face_loop(face):
    """As `face_loop`, but returning the vertex indices themselves."""

    return tuple(face[i] for i in face_loop(len(face)))


def object_geometry(model, obj, size, transforms=None, y_up=True):
    """Returns (positions, uvs, colours, loops, textures) for one object.

    A UV and a colour belong to a corner of a face rather than to a vertex, so
    two faces meeting at a vertex rarely agree about either. The only way to
    carry them is to give every corner a vertex of its own, which is what this
    does: `positions`, `uvs` and `colours` are all the same length, and each
    entry of `loops` is one face as a list of positions into them.

    `colours` is always filled in, with white where a primitive carries none.
    `uvs` is empty unless something in the object is textured, since a UV
    means nothing without a texture to look it up in. `textures` gives each
    loop's texture index -- the packet field the PSX would call a CLUT, which
    this port reads as an index into the level's texture registrations -- or
    None where a face has no texture.
    """

    try:
        faces = model.object_faces(obj, size)
    except TmdError:
        return [], [], [], [], []
    if not faces:
        return [], [], [], [], []

    world = None
    if transforms:
        index = next((i for i, o in enumerate(model.objects) if o is obj), None)
        world = transforms.get(index)
    lookup = model.object_vertex_map(obj, world)
    positions, uvs, colours, loops, textures = [], [], [], [], []
    textured = any(face.uvs for face in faces)

    for face in faces:
        order = face_loop(len(face))
        if any(face.indices[i] not in lookup for i in order):
            continue
        loop = []
        for corner in order:
            loop.append(len(positions))
            positions.append(lookup[face.indices[corner]])
            if textured:
                if face.uvs:
                    u, v = face.uvs[corner]
                    # the game measures V up from the bottom of the texture,
                    # so it is flipped into the top-left origin that images,
                    # and with them glTF, use
                    uvs.append((u / TEXTURE_PAGE_SIZE,
                                1.0 - v / TEXTURE_PAGE_SIZE))
                else:
                    uvs.append((0.0, 0.0))
            if face.colours:
                r, g, b = face.colours[corner]
                colours.append((r / 255.0, g / 255.0, b / 255.0, 1.0))
            else:
                colours.append((1.0, 1.0, 1.0, 1.0))
        loops.append(loop)
        textures.append(face.clut if face.uvs else None)

    if y_up:
        positions = to_y_up(positions)
    return positions, uvs, colours, loops, textures


def material_name(texture):
    """The OBJ material name for a texture index; None means untextured."""

    return "flat" if texture is None else "tex_%03d" % texture


def _write_obj_part(fp, positions, uvs, colours, loops, base, textures=None,
                    use_materials=False, flip_v=True):
    """Writes one object's geometry, with `base` vertices already written."""

    for (x, y, z), colour in zip(positions, colours):
        # the colours are an extension: a `v` line may carry r g b after xyz
        fp.write("v %g %g %g %g %g %g\n"
                 % (x, y, z, colour[0], colour[1], colour[2]))
    for u, v in uvs:
        # OBJ measures V up from the bottom, the other way from the top-left
        # origin object_geometry hands out
        fp.write("vt %g %g\n" % (u, 1.0 - v if flip_v else v))
    current = object()  # so the first face always names its material
    for which, loop in enumerate(loops):
        if use_materials and textures:
            texture = textures[which]
            if texture != current:
                fp.write("usemtl %s\n" % material_name(texture))
                current = texture
        corners = []
        for i in loop:
            n = base + i + 1  # OBJ counts from 1
            corners.append("%d/%d" % (n, n) if uvs else str(n))
        fp.write("f %s\n" % " ".join(corners))


def write_obj(path, model, size, name="model", transforms=None, y_up=True,
              mtllib=None):
    """Writes a model out as a Wavefront OBJ.

    Each object becomes its own group, so a viewer can show them apart.
    `transforms` poses the model; see `Tmd.all_vertices`. Vertices are not
    shared between faces, for the reason given in `object_geometry`.
    `mtllib` names a material library to reference; with one, each face run
    gets a `usemtl` for its texture (see `material_name`).
    """

    total_verts = total_faces = 0

    with open(path, "w", encoding="utf-8", newline="\n") as fp:
        fp.write("# %s, from a BBLiT model record\n" % name)
        if mtllib:
            fp.write("mtllib %s\n" % mtllib)
        fp.write("o %s\n" % name)
        for i, obj in enumerate(model.objects):
            try:
                model.object_faces(obj, size)
            except TmdError as err:
                # keep the objects that do walk
                fp.write("# object %d: %s\n" % (i, err))
                continue
            positions, uvs, colours, loops, textures = object_geometry(
                model, obj, size, transforms, y_up)
            if not loops:
                continue
            fp.write("g %s_obj%02d\n" % (name, i))
            _write_obj_part(fp, positions, uvs, colours, loops, total_verts,
                            textures, use_materials=bool(mtllib))
            total_verts += len(positions)
            total_faces += len(loops)
    return total_verts, total_faces


def write_object_obj(path, model, obj, size, name="object", transforms=None,
                     y_up=True, mtllib=None):
    """Writes one object of a record as an OBJ of its own.

    Each file is self-contained, which is what makes it useful for telling a
    good object from a bad one. An object with no faces still gets its own
    vertices written, so that a record which will not walk shows something.
    """

    positions, uvs, colours, loops, textures = object_geometry(
        model, obj, size, transforms, y_up)

    if not loops:
        # nothing walked, so fall back to the object's own vertices
        verts = model.all_vertices(transforms)
        if y_up:
            verts = to_y_up(verts)
        start = 0
        for other in sorted(model.objects, key=lambda o: o.vert_top):
            if other is obj:
                break
            start += other.n_vert
        positions = [verts[v] for v in range(start, start + obj.n_vert)
                     if v < len(verts)]
        uvs, colours = [], [(1.0, 1.0, 1.0, 1.0)] * len(positions)

    with open(path, "w", encoding="utf-8", newline="\n") as fp:
        fp.write("# %s, one object of a BBLiT model record\n" % name)
        if mtllib:
            fp.write("mtllib %s\n" % mtllib)
        fp.write("o %s\n" % name)
        _write_obj_part(fp, positions, uvs, colours, loops, 0, textures,
                        use_materials=bool(mtllib))
    return len(positions), len(loops)


def write_mtl(path, textures, image_of):
    """Writes the material library the OBJ writers reference.

    `textures` is the texture indices to cover and `image_of` maps an index to
    its image's file name, relative to the OBJ; an index it does not cover
    still gets a material, just one without a map. The `flat` material for
    untextured faces is always included.
    """

    with open(path, "w", encoding="utf-8", newline="\n") as fp:
        fp.write("# materials for the BBLiT models alongside this file\n")
        fp.write("newmtl %s\n" % material_name(None))
        fp.write("Kd 1 1 1\n")
        for texture in sorted(textures):
            fp.write("newmtl %s\n" % material_name(texture))
            fp.write("Kd 1 1 1\n")
            if texture in image_of:
                fp.write("map_Kd %s\n" % image_of[texture])


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
    p_obj.add_argument("--psx-axes", action="store_true",
                       help="keep the game's Y-down axes instead of "
                            "converting to Y-up")
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
            nverts, nfaces = write_object_obj(part, model, obj, len(data), name,
                                              None, not args.psx_axes)
            print("%s (%d vertices, %d faces)" % (part, nverts, nfaces))
        return 0

    nverts, nfaces = write_obj(path, model, len(data), stem, None,
                               not args.psx_axes)
    print("%s (%d objects, %d vertices, %d faces)"
          % (path, len(model.objects), nverts, nfaces))
    return 0


if __name__ == "__main__":
    sys.exit(main())
