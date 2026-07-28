# Extractor Options

Everything here is plain Python 3 with no dependencies. Run it from anywhere;
the paths below are relative to the repository root.

`doc/bze.md` explains the formats. This file only lists the switches.

## bze.py -- the level archives

    python3 tools/bze.py <command> [options] <file.bze>

Six commands. Every one of them takes `--force` and `--raw`:

| option    | what it does                                                   |
|-----------|----------------------------------------------------------------|
| `--force` | carry on despite a bad checksum or an inconsistent header       |
| `--raw`   | leave the sections compressed, so you get the file's own bytes  |

### list

Shows what the archive holds: the version, each section's id, its compressed
and stored sizes, and whether the header checksum matches. No options of its
own. Start here when a file behaves oddly.

### extract

Writes each section to a file of its own.

| option              | what it does                    |
|---------------------|---------------------------------|
| `-o`, `--outdir DIR`| where to write them (default `.`)|

### chunks

Walks the load instructions in section 1 and lists them. This is the strictest
check on the whole reader: every tag has a fixed length, so the walk only
survives if the decompression was byte-exact.

| option             | what it does                              |
|--------------------|-------------------------------------------|
| `-s`, `--summary`  | count chunks by type instead of listing them |

### textures

Writes the TIM textures out as PNGs.

| option              | what it does                          |
|---------------------|---------------------------------------|
| `-o`, `--outdir DIR`| where to write them                   |
| `-l`, `--list`      | describe the images instead of writing them |

### models

Writes the model records out. Wavefront OBJ by default, one file per record,
with each object of a record as an OBJ group.

| option              | what it does                                        |
|---------------------|-----------------------------------------------------|
| `-o`, `--outdir DIR`| where to write them                                 |
| `-l`, `--list`      | describe the models instead of writing them         |
| `--split`           | one OBJ per *object*, each self-contained           |
| `--gltf`            | write a glTF 2.0 binary (`.glb`) per model instead  |
| `--pose`            | place each object using the skeleton and bind pose  |
| `--psx-axes`        | keep the game's Y-down axes                         |

`--split` is the debugging switch: an object that decoded badly is obvious on
its own and easy to miss inside a whole model.

`--gltf` carries the node tree, one mesh per object, and every animation of
that model, so nothing is baked. `--pose` is the OBJ equivalent of the rest
pose; it does nothing under `--gltf`, which always carries the tree, and a
model with no skeleton is skipped rather than written unposed.

The output switches do not combine. `--raw` wins over everything and writes the
record's own bytes as `.tmd`; then `--gltf`, which ignores `--split` and
`--pose`; then `--split`; then the plain OBJ.

`--psx-axes` turns off the conversion to Y-up. Use it only if your tool already
expects the PSX's Y-down, Z-into-the-screen axes.

Both writers emit per-corner UVs and vertex colours. In OBJ the colour rides on
the `v` line as three extra numbers (`v x y z r g b`) -- Blender and MeshLab
read it, anything else ignores it -- and the texture coordinates go out as `vt`
with `f v/vt` faces. In glTF they are `COLOR_0` and `TEXCOORD_0`.

Textures come along too: each face carries an index into the level's texture
registrations, so the OBJ writers drop a `<stem>.mtl` plus the referenced
textures as `<stem>_tex_NNN.png` beside the models, and the glTF writer embeds
the PNGs in the `.glb` as materials. Nothing needs switching on.

Faces without UVs reference a texture as well -- normally a tiny solid-colour
swatch -- and shade it with their per-corner values. Since neither format can
multiply a texture into vertex colours per face, that product is baked into
the exported colour instead, which is where the flat-shaded geometry's skin
and cloth colours come from.

### anims

Lists each model's TOD animations, grouped under the model they belong to:
each one's offset, frame count, time resolution, and how many nodes it poses.
The single-frame `res 1` entry of each group is the setup TOD that carries the
skeleton. No options of its own.

## The single-format readers

Useful once you have extracted a section with `bze.py extract` and want to
poke at one record.

### tim.py -- PSX images

    python3 tools/tim.py list    [--scan] <file>
    python3 tools/tim.py extract [--scan] [-o DIR] [--all-palettes] <file>

| option           | what it does                                          |
|------------------|-------------------------------------------------------|
| `--scan`         | search the whole file rather than walking a run of images |
| `--all-palettes` | write one PNG per CLUT, not just the first            |

`--scan` finds images in a file that is not a clean run of them, at the cost of
occasional false positives.

### tmd.py -- model records

    python3 tools/tmd.py list <file>
    python3 tools/tmd.py obj [-o DIR] [--split] [--psx-axes] <file>

The same `--split` and `--psx-axes` as `bze.py models`, on a bare record.

### tod.py -- animation records

    python3 tools/tod.py list <file>
    python3 tools/tod.py dump [-f FRAME] <file>

`dump` shows one frame's packets decoded; `-f` picks the frame (default 0).

## Examples

    # what is in here, and does it check out
    python3 tools/bze.py list CC1A.bze

    # every texture as a PNG
    python3 tools/bze.py textures CC1A.bze -o out/tex

    # every model as a posed OBJ, with UVs and vertex colours
    python3 tools/bze.py models CC1A.bze -o out/obj --pose

    # one file per object, for finding a record that decoded badly
    python3 tools/bze.py models CC1A.bze -o out/parts --split

    # animated glTF, one .glb per model
    python3 tools/bze.py models CC1A.bze -o out/glb --gltf

## Checking the tools still work

    python3 tools/bze_test.py

Prints `OK`, or one line per failure. It works on generated data, since no
level file is checked into this repository.
