#!/usr/bin/env python3

"""
Writes BBLiT models and their animations out as glTF 2.0 binary (.glb).

The game's arrangement maps onto glTF almost one for one. A TOD is a tree of
nodes carrying translation, rotation and scale; a model's objects are rigid
parts, each parented to one node. glTF nodes hold exactly that, and animating
a node's TRS is exactly what the coordinate packets describe -- so nothing
needs skinning, and no data has to be baked.

Two conversions are worth knowing about:

- the game's rotations are three Q12 Euler angles applied Z, then Y, then X
  (`RotMatrix`, v1.0 0x407a70). glTF wants a quaternion, so each one is turned
  into a matrix the way the game builds it and then into a quaternion.
- a part's faces index the record-wide vertex space, but each part is a mesh
  of its own here, so indices are resolved against that object's own vertices
  and renumbered. Seam vertices are stored once per part, each copy in its own
  part's space, so this is also what keeps a seam in the right place.

Everything lands in one .glb per model, with each of the model's animations as
a separate glTF animation.
"""

import json
import struct

import tmd
import tod


# glTF component types
FLOAT = 5126
UNSIGNED_SHORT = 5123
UNSIGNED_INT = 5125
# glTF primitive mode
TRIANGLES = 4
# glTF buffer view targets
ARRAY_BUFFER = 34962
ELEMENT_ARRAY_BUFFER = 34963

# the game runs its animations at this many frames a second, so a TOD's
# resolution (in 60ths) converts to seconds against it
FRAMES_PER_SECOND = 60.0


class Builder:
    """Accumulates glTF structures and the binary blob they point into."""

    def __init__(self):
        self.json = {
            "asset": {"version": "2.0", "generator": "BugsDecomp tools/gltf.py"},
            "scenes": [{"nodes": []}],
            "scene": 0,
            "nodes": [],
            "meshes": [],
            "accessors": [],
            "bufferViews": [],
            "animations": [],
        }
        self.blob = bytearray()

    def _view(self, data, target=None):
        # bufferView offsets must sit on a four-byte boundary
        while len(self.blob) % 4:
            self.blob.append(0)
        view = {"buffer": 0, "byteOffset": len(self.blob), "byteLength": len(data)}
        if target is not None:
            view["target"] = target
        self.blob += data
        self.json["bufferViews"].append(view)
        return len(self.json["bufferViews"]) - 1

    def accessor(self, values, kind, component, target=None):
        """Adds an accessor over `values`, a list of numbers or tuples."""

        counts = {"SCALAR": 1, "VEC3": 3, "VEC4": 4}
        width = counts[kind]
        flat = []
        for value in values:
            if width == 1:
                flat.append(value)
            else:
                flat.extend(value)

        fmt = {FLOAT: "<%df", UNSIGNED_SHORT: "<%dH", UNSIGNED_INT: "<%dI"}
        data = struct.pack(fmt[component] % len(flat), *flat)

        accessor = {
            "bufferView": self._view(data, target),
            "componentType": component,
            "count": len(values),
            "type": kind,
        }
        # POSITION accessors are required to carry bounds, and they are cheap
        # enough to give everything
        if values and component == FLOAT:
            if width == 1:
                accessor["min"] = [min(values)]
                accessor["max"] = [max(values)]
            else:
                accessor["min"] = [min(v[i] for v in values)
                                   for i in range(width)]
                accessor["max"] = [max(v[i] for v in values)
                                   for i in range(width)]
        self.json["accessors"].append(accessor)
        return len(self.json["accessors"]) - 1

    def to_glb(self):
        """Serializes everything into a .glb image."""

        self.json["buffers"] = [{"byteLength": len(self.blob)}]
        for key in ("meshes", "animations", "accessors", "bufferViews"):
            if not self.json[key]:
                del self.json[key]

        text = json.dumps(self.json, separators=(",", ":")).encode("utf-8")
        text += b" " * (-len(text) % 4)
        blob = bytes(self.blob) + b"\0" * (-len(self.blob) % 4)

        out = bytearray()
        out += struct.pack("<III", 0x46546C67, 2, 12 + 8 + len(text)
                           + (8 + len(blob) if blob else 0))
        out += struct.pack("<II", len(text), 0x4E4F534A) + text
        if blob:
            out += struct.pack("<II", len(blob), 0x004E4942) + blob
        return bytes(out)


# ---------------------------------------------------------------------------
# conversion
# ---------------------------------------------------------------------------


def quaternion(rotation):
    """Turns three Q12 Euler angles into a glTF quaternion (x, y, z, w)."""

    m = tod.rotation_matrix(*rotation)
    trace = m[0][0] + m[1][1] + m[2][2]
    if trace > 0.0:
        s = (trace + 1.0) ** 0.5 * 2.0
        w = 0.25 * s
        x = (m[2][1] - m[1][2]) / s
        y = (m[0][2] - m[2][0]) / s
        z = (m[1][0] - m[0][1]) / s
    elif m[0][0] > m[1][1] and m[0][0] > m[2][2]:
        s = (1.0 + m[0][0] - m[1][1] - m[2][2]) ** 0.5 * 2.0
        w = (m[2][1] - m[1][2]) / s
        x = 0.25 * s
        y = (m[0][1] + m[1][0]) / s
        z = (m[0][2] + m[2][0]) / s
    elif m[1][1] > m[2][2]:
        s = (1.0 + m[1][1] - m[0][0] - m[2][2]) ** 0.5 * 2.0
        w = (m[0][2] - m[2][0]) / s
        x = (m[0][1] + m[1][0]) / s
        y = 0.25 * s
        z = (m[1][2] + m[2][1]) / s
    else:
        s = (1.0 + m[2][2] - m[0][0] - m[1][1]) ** 0.5 * 2.0
        w = (m[1][0] - m[0][1]) / s
        x = (m[0][2] + m[2][0]) / s
        y = (m[1][2] + m[2][1]) / s
        z = 0.25 * s
    return (x, y, z, w)


def part_geometry(model, obj, size):
    """Returns (positions, triangle indices) for one object, in its own space.

    Quads are split into two triangles across the corner order the game
    stores, the same walk the OBJ writer uses.
    """

    try:
        faces = model.object_faces(obj, size)
    except tmd.TmdError:
        return [], []
    if not faces:
        return [], []

    lookup = model.object_vertex_map(obj)
    used = sorted({v for face in faces for v in face if v in lookup})
    renumber = {v: i for i, v in enumerate(used)}
    positions = [lookup[v] for v in used]

    indices = []
    for face in faces:
        loop = tmd._face_loop(face)
        if any(v not in renumber for v in loop):
            continue
        # fan the loop, which for a triangle is just the triangle
        for i in range(1, len(loop) - 1):
            indices += [renumber[loop[0]], renumber[loop[i]],
                        renumber[loop[i + 1]]]
    return positions, indices


# ---------------------------------------------------------------------------
# export
# ---------------------------------------------------------------------------


def build(model, size, parents, node_objects, anims, name="model"):
    """Builds a .glb image for one model and its animations.

    `parents` and `node_objects` come from a TOD's `skeleton`; `anims` is a
    list of (name, Tod). Animations without coordinate packets -- the setup
    file -- contribute the skeleton but no motion.
    """

    builder = Builder()

    # every node any of the data mentions
    nodes = set(parents) | set(parents.values()) | set(node_objects)
    for _label, anim in anims:
        for frame in anim.frames:
            for packet in frame.packets:
                if packet.ptype == tod.PACKET_COORDINATE:
                    nodes.add(packet.node)
    if not nodes:
        nodes = {0}
    order = sorted(nodes)
    index_of = {node: i for i, node in enumerate(order)}

    # the rest pose, so nodes start where the model is meant to sit
    rest = {}
    for _label, anim in anims:
        pose = anim.pose(0)
        if len(pose) > len(rest):
            rest = pose

    # one mesh per object that a node maps to
    mesh_of = {}
    for node, obj_index in sorted(node_objects.items()):
        if not 0 <= obj_index < len(model.objects):
            continue
        positions, indices = part_geometry(model, model.objects[obj_index],
                                           size)
        if not positions or not indices:
            continue
        component = (UNSIGNED_INT if len(positions) > 0xFFFF
                     else UNSIGNED_SHORT)
        builder.json["meshes"].append({
            "name": "%s_obj%02d" % (name, obj_index),
            "primitives": [{
                "attributes": {
                    "POSITION": builder.accessor(positions, "VEC3", FLOAT,
                                                 ARRAY_BUFFER),
                },
                "indices": builder.accessor(indices, "SCALAR", component,
                                            ELEMENT_ARRAY_BUFFER),
                "mode": TRIANGLES,
            }],
        })
        mesh_of[node] = len(builder.json["meshes"]) - 1

    for node in order:
        entry = {"name": "%s_node%02d" % (name, node)}
        if node in rest:
            rotation, scale, translation = rest[node]
            entry["translation"] = [float(v) for v in translation]
            entry["rotation"] = list(quaternion(rotation))
            entry["scale"] = [v / 4096.0 for v in scale]
        if node in mesh_of:
            entry["mesh"] = mesh_of[node]
        children = sorted(c for c, p in parents.items()
                          if p == node and c != node)
        if children:
            entry["children"] = [index_of[c] for c in children]
        builder.json["nodes"].append(entry)

    roots = [index_of[n] for n in order
             if parents.get(n, n) == n or parents[n] not in index_of]
    builder.json["scenes"][0]["nodes"] = roots or [0]

    for label, anim in anims:
        channels, samplers = animation_tracks(builder, anim, index_of)
        if channels:
            builder.json["animations"].append({
                "name": label,
                "channels": channels,
                "samplers": samplers,
            })

    return builder.to_glb()


def animation_tracks(builder, anim, index_of):
    """Turns one TOD's coordinate packets into glTF channels and samplers.

    A packet only carries the components its flag names, so each path gets a
    keyframe only where the data actually says something; glTF holds the last
    value between keyframes, which is what the game does too.
    """

    tracks = {}
    seconds = anim.resolution / FRAMES_PER_SECOND
    for frame in anim.frames:
        time = frame.number * seconds
        for packet in frame.packets:
            if packet.ptype != tod.PACKET_COORDINATE:
                continue
            if packet.node not in index_of:
                continue
            rotation, scale, translation = packet.coordinate
            node = packet.node
            if packet.flag & tod.FLAG_TRANSLATION:
                tracks.setdefault((node, "translation"), []).append(
                    (time, tuple(float(v) for v in translation)))
            if packet.flag & tod.FLAG_ROTATION:
                tracks.setdefault((node, "rotation"), []).append(
                    (time, quaternion(rotation)))
            if packet.flag & tod.FLAG_SCALING:
                tracks.setdefault((node, "scale"), []).append(
                    (time, tuple(v / 4096.0 for v in scale)))

    channels = []
    samplers = []
    for (node, path), keys in sorted(tracks.items()):
        if len(keys) < 2:
            # a single keyframe says nothing a node's rest pose does not
            continue
        kind = "VEC4" if path == "rotation" else "VEC3"
        samplers.append({
            "input": builder.accessor([t for t, _v in keys], "SCALAR", FLOAT),
            "output": builder.accessor([v for _t, v in keys], kind, FLOAT),
            "interpolation": "LINEAR",
        })
        channels.append({
            "sampler": len(samplers) - 1,
            "target": {"node": index_of[node], "path": path},
        })
    return channels, samplers


def write_glb(path, model, size, parents, node_objects, anims, name="model"):
    """Writes one model and its animations to `path`."""

    image = build(model, size, parents, node_objects, anims, name)
    with open(path, "wb") as fp:
        fp.write(image)
    return image
