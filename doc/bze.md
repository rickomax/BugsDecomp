
The BZE file format is used for all BBLiT levels. It consists of several
sections, some of which are compressed using a custom LZ-like algorithm.

# Header

| offset | type | usage           |
|--------|------|-----------------|
| 0x000  | int  | version?        |
| 0x004  | int  | section count   |
| 0x008  | *    | sections        |
| 0x7fc  | int  | header checksum |

`sections` refers to an array of section header entries; `section count` gives
the number of entries.

The checksum is simply the 32-bit sum of bytes 0x000-0x7fb, treated as signed
8-bit integers.

Each entry has the following structure:

| offset | type | usage       |
|--------|------|-------------|
| 0x0    | int  | section ID  |
| 0x4    | int  | actual size |
| 0x8    | int  | file size   |

Sections are stored consectively in the BZE in the order given by the header.
Each section occupies `file size` bytes in the BZE, of which `actual size` bytes
are valid (the rest are padding). Note that `actual size` is usually rounded up
to the next multiple of 4.

Known section IDs:

| ID | usage                               |
|----|-------------------------------------|
| 1  | load "instructions"                 |
| 2  | unknown/ignored                     |
| 3  | textures, SFX, text (all languages) |
| 4  | models                              |
| 5  | French assets                       |
| 6  | English assets                      |
| 7  | German assets                       |
| 8  | Spanish assets                      |
| 9  | Italian assets                      |
| 10 | Dutch assets                        |

NOTE: Despite each section having an ID, the game makes some assumptions about
section order: 1, 2, 3, 6, (5-10 except 6) in any order, then 4.

# Compression Algorithm

BBLiT uses a custom LZSS implementation for compression; repeated runs of bytes
are converted to small offset/length pairs, and lengths are further compressed
using a simple lookup table.

## Compression Header

The first four bytes form a small header that encode compression options and the
number of compression "items". The first byte encodes the offset size for
offset/length pairs as well as the step size for the length lookup table (LUT):

    |7 5|4  3|2   0|
    |---|step|osize|

    offset_size = 9 + osize;
    length_size = 7 - osize;

Note that an `osize` of 7 is not valid (since no lengths could be encoded).

In practice every section of every known level uses `0b`, i.e. 12-bit offsets
with 4-bit lengths and a step of 1. The other combinations are implemented by
the game but appear to go unused.

The remaining 3 bytes form a 24-bit big-endian integer that represents the
number of compression "items"; the stored value is one less than the actual
value (so there is always at least one "item").

NOTE: for some sections, the stored number of items is the actual number, i.e.
it's not one less. There is no pattern to it, and nothing in the header says
which kind a section is; the two are mixed within a single file. Of the 39
sections across the 10 known levels, 7 store the exact count.

This is a bug in whichever compressor built the data, not something the game
handles: its decompressor (v1.0 0x431160) checks the counter only after
processing an item, so it always processes one item more than the stored value,
with no path that does otherwise. It gets away with it because it decompresses
out of a buffer larger than the section, so the item too many reads whatever
follows in memory and appends a short run of rubbish past the end of the real
output, which no caller looks at.

A reader cannot do that, so it should stop at whichever comes first:

* the stored item count plus one, as the game does
* the end of the compressed data -- note sections are padded to a 4-byte
boundary, so up to 3 bytes of padding may follow the last real item
* an offset/length pair whose offset is 0, which is never a real back reference

The same bug, and the same three rules, are described in nocash's notes on the
BZZ archives of Behaviour's other titles.

## Length Encoding

Length values are further compressed via a LUT that can be pre-calculated from
the first header byte. The entries start at 3[^lut] (the "break-even" point) and
increment by 1 until they hit a threshold, at which point they increment by a
larger step.

The size of the LUT is given by the size of the length field; this is then used
to calculate the threshold:

    lut_size = 1 << length_size;
    if (lut_size >= 32)
        lut_thres = 19;
    else
        lut_thres = lut_size / 2 - 1;

Entry `i` in the LUT is then computed as follows:

    if (i > lut_thres)
        lut[i] = 3 + ((i - lut_thres) << step) + lut_thres;
    else
        lut[i] = 3 + i;

[^lut]: The game actually builds the LUT with entries starting at 2, but uses
them to represent 0-based counts; the given description/code is equivalent.

## Compression Body

The remainder of the compressed section is a sequence of compression "items".
Items are grouped by 8 and prefixed with a byte that encodes their types; bit 0
(lsb) corresponds to the first item. If the number of items is not divisible by
8, the unused bits in the last group prefix byte are 0.

Item type 0 represents an offset/length pair. The next two bytes form a 16-bit
big-endian integer which encode the offset and compressed length according to
the bit sizes calculated from the header; the offset field resides in the upper
bits of the 16-bit integer. The compressed length field is used as an index into
the LUT to get the actual length.

The resulting offset/length pair means "copy 'length' bytes starting 'offset'
bytes backward from the end of the current decompressed buffer". In some cases,
the length may be greater than the offset, meaning that some/all of the bytes
are copied multiple times. For example, given an offset/length pair of 3/8, and
assuming the last 4 decompressed bytes are `de ad be ef`, then the additional
decompressed bytes would be `ad be ef ad be ef ad be`.

Example C code (`src` points to current item; `dst` points to destination):

    tmp = (src[0] << 8) | src[1];
    src += 2;
    offset = (tmp >> length_size) & ((1 << offset_size) - 1);
    length_enc = tmp & ((1 << length_size) - 1);
    length = lut[length_enc];
    const BYTE *dst_hist = dst - offset;
    for (i = 0; i < length; i++)
        *dst++ = *dst_hist++;

Item type 1 represents a literal byte, which is simply copied from input to
output.

# Section 1

This section consists of a sequence of tags/"instructions" that tell the game
how to load assets and build up the world and entities inside it.

The section is made up of a handful of top-level "command" bytes:

| cmd  | usage               |
|------|---------------------|
| 0x2c | multiple; see below |
| 0x2d | chunk               |
| 0x2f | end of section      |
| 0x4b | multiple; see below |

## Command 0x2c

This command does multiple things, including:

* Initializes a bunch of linked-list node pools
* Loads section 4 and makes it the active section for model data

## Command 0x4b

This command does multiple things, including:

* Loads the language-specific section and makes it the active section for model
data

## Pseudo-Chunk

If the first two bytes of the section are `2d 45`, the game reads a chunk, but
without a type byte (hence the term "pseudo-chunk"). The only valid tag is `45`,
which has a single extra byte. Each instance of the `45` tag (including the one
in the initial `2d 45` sequence) causes the game to read (and ignore/discard) a
section of the level; the extra byte is ignored.

NOTE: the game incorrectly uses the section's actual size instead of its file
size when skipping the section; however the relevant file read function rounds
the read size up to the next multiple of 2048 (aka the PS1 CD sector size),
which is how the section's file size is computed.

Once the pseudo-chunk has been processed (if it exists), the next section in the
file (usually section 3) is loaded and made the active section for asset data.

# Chunk Details

Each chunk starts with a `2d` byte, a "type" byte, zero or more "attribute" or
"modifier" tags, and a terminating `2e` byte. Each tag is an identifier byte
followed by a fixed number of bytes, depending on the identifier. The following
sub-sections list known details about chunks, valid tags, and the number of
extra bytes for each tag.

Some notes about data types:
* position/scale coordinates are signed fixed-point longs (20.12)
* angles are signed fixed-point shorts (4.12), where 0x1000 means 360 degrees

## Type 0x00

| tag  | length |
|------|--------|
| 0x01 | 8      |
| 0x02 | 8      |
| 0x04 | 8      |
| 0x44 | 12     |
| 0x4c | 48     |
| 0x4d | 48     |

## Type 0x05

| tag  | length |
|------|--------|
| 0x06 | 3      |

## Type 0x07/0x08/0x0a

This chunk seems to indicate an entity/object.

| tag  | length |
|------|--------|
| 0x0b | 4      |
| 0x0c | 4      |
| 0x0f | 2      |
| 0x10 | 12     |
| 0x11 | 6      |
| 0x12 | 12     |
| 0x13 | 1      |
| 0x15 | 1      |
| 0x16 | 8      |
| 0x17 | 36     |
| 0x18 | 16     |
| 0x19 | 4      |
| 0x1a | 4      |
| 0x1b | 6      |
| 0x1c | 8      |
| 0x1d | 4      |
| 0x1e | 2      |
| 0x1f | 1      |
| 0x27 | 4      |
| 0x30 | 32     |
| 0x31 | 32     |
| 0x32 | 12     |
| 0x34 | 24     |
| 0x35 | 40     |
| 0x38 | 2      |
| 0x39 | 2      |
| 0x3a | 4      |
| 0x41 | 20     |
| 0x42 | 6      |
| 0x46 | 2      |

### Tag 0x10

Initial entity position.

| offset | type | usage |
|--------|------|-------|
| 0      | long | X     |
| 4      | long | Y     |
| 8      | long | Z     |

### Tag 0x11

Initial entity rotation.

| offset | type  | usage |
|--------|-------|-------|
| 0      | short | angle |
| 2      | short | angle |
| 4      | short | angle |

### Tag 0x12

Initial entity scale.

| offset | type | usage |
|--------|------|-------|
| 0      | long | X     |
| 4      | long | Y     |
| 8      | long | Z     |

### Tag 0x13

This tag consists of a single byte. All that's known is that if this byte is
`01`, the chunk corresponds to the player.

### Tag 0x27

This tag includes the entity ID.

| offset | type  | usage     |
|--------|-------|-----------|
| 0      | short | entity ID |
| 2      | short |           |

### Tag 0x31

This tag is related to BZE logic. Condition/action codes and args are detailed
in the "Level Logic" section.

| offset | type  | usage           |
|--------|-------|-----------------|
| 12     | byte  | condition code  |
| 13     | byte  | condition arg 1 |
| 14     | byte  | condition arg 2 |
| 15     | byte  | action code     |
| 16     | short | action arg 1    |
| 18     | short | action arg 2    |

## Type 0x09

| tag  | length |
|------|--------|
| 0x10 | 12     |
| 0x11 | 6      |
| 0x16 | 8      |
| 0x1c | 8      |
| 0x1f | 1      |
| 0x33 | 32     |

## Type 0x20

This chunk is used to load models for static world geometry.

| tag  | length |
|------|--------|
| 0x10 | 12     |
| 0x11 | 6      |
| 0x12 | 12     |
| 0x21 | 4      |
| 0x24 | 8      |
| 0x39 | 2      |
| 0x43 | 1      |

### Tag 0x10

Sets the position for the model.

| offset | type | usage |
|--------|------|-------|
| 0      | long | X     |
| 4      | long | Y     |
| 8      | long | Z     |

### Tag 0x11

Sets the rotation for the model.

| offset | type  | usage |
|--------|-------|-------|
| 0      | short | angle |
| 2      | short | angle |
| 4      | short | angle |

### Tag 0x12

Sets the scale for the model.

| offset | type | usage |
|--------|------|-------|
| 0      | long | X     |
| 4      | long | Y     |
| 8      | long | Z     |

### Tag 0x21

This tag includes an ID. Not to be confused with normal asset IDs.

| offset | type  | usage |
|--------|-------|-------|
| 0      | short | ID    |

### Tag 0x24

Loads a model from the active model section. This tag is detailed below in chunk
type `22`.

## Type 0x22

This chunk is used to load an asset for entities. The asset is added to a global
asset list.

| tag  | length |
|------|--------|
| 0x0d | 12     |
| 0x24 | 8      |
| 0x25 | 8      |
| 0x26 | 4      |
| 0x27 | 4      |
| 0x28 | 3      |
| 0x3f | 12     |
| 0x40 | 8      |

### Tag 0x24/0x40

Both tags are used to load a model from the active model section. The tag data
specifies the offset/size of the entire model data. The difference between the
two tags is currently unknown.

| offset | type | usage  |
|--------|------|--------|
| 0      | int  | offset |
| 4      | int  | size   |

### Tag 0x25

| offset | type | usage  |
|--------|------|--------|
| 0      | int  | offset |
| 4      | int  | size   |

### Tag 0x26

| offset | type  | usage   |
|--------|-------|---------|
| 0      | short | unknown |

### Tag 0x27

This tag includes the asset ID, which is how entities reference them.

| offset | type  | usage    |
|--------|-------|----------|
| 0      | short | unknown  |
| 2      | short | asset ID |

### Tag 0x28

| offset | type | usage   |
|--------|------|---------|
| 0      | byte | unknown |
| 1      | byte | unknown |
| 2      | byte | unknown |

### Tag 0x3f

| offset | type  | usage   |
|--------|-------|---------|
| 0      | short | unknown |
| 4      | int   | offset  |
| 8      | int   | size    |

## Type 0x29

This chunk registers the level's textures; see "Texture Indices" below.

| tag  | length |
|------|--------|
| 0x2a | 8      |

### Tag 0x2a

Loads one TIM from the active asset section and registers it under an index
(`sub_422a20`). The indices are one-based and mostly dense, and they are what
a model's textured faces refer to.

| offset | type  | usage                                    |
|--------|-------|------------------------------------------|
| 0      | int   | offset of the TIM in the asset section   |
| 4      | int   | index the texture is known by from then on |

## Type 0x36

| tag  | length |
|------|--------|
| 0x37 | 8      |

## Type 0x3b

| tag  | length |
|------|--------|
| 0x2b | 12     |
| 0x3c | 4      |
| 0x3d | 6      |
| 0x3e | 28     |

### Tag 0x2b

This seems to set the initial camera position.

| offset | type | usage |
|--------|------|-------|
| 0      | long | X     |
| 4      | long | Y     |
| 8      | long | Z     |

## Type 0x47

| tag  | length |
|------|--------|
| 0x48 | 8      |

## Type 0x49

| tag  | length |
|------|--------|
| 0x4a | 48     |

# Level Logic

Game logic in each level is built out of logic "items", each of which consists
of a condition and an action; each condition/action has up to two arguments,
8/16 bits each, respectively. More details about condition/action codes can be
found in the decompiled source in `logic_prv.h`.

The following table summarizes known condition codes (codes in *italics* are
specific to the PC port):

| code | mnemonic | meaning                                       |
|------|----------|-----------------------------------------------|
| 0x00 | true     | always true                                   |
| 0x01 | ciseq    | compare immed/scratch[^scratch] equal         |
| 0x02 | cigeq    | compare immed/global[^global] equal           |
| 0x03 | cisltu   | compare immed/scratch less than, unsigned     |
| 0x04 | cigltu   | compare immed/global less than, unsigned      |
| 0x05 | cisleu   | compare immed/scratch less/equal, unsigned    |
| 0x06 | cigleu   | compare immed/global less/equal, unsigned     |
| 0x07 | cisgtu   | compare immed/scratch greater than, unsigned  |
| 0x08 | ciggtu   | compare immed/global greater than, unsigned   |
| 0x09 | cisgeu   | compare immed/scratch greater/equal, unsigned |
| 0x0a | ciggeu   | compare immed/global greater/equal, unsigned  |
| 0x0f | csseq    | compare two scratches equal                   |
| 0x10 | cggeq    | compare two globals equal                     |
| 0x1e | tismnz   | test immed/scratch masked non-zero            |
| 0x1f | tigmnz   | test immed/global masked non-zero             |
| 0x22 | tismz    | test immed/scratch masked zero                |
| 0x23 | tigmz    | test immed/global masked zero                 |
| 0x25 | cisne    | compare immed/scratch not equal               |
| 0x26 | cigne    | compare immed/global not equal                |
| 0x27 | tisaz    | test immed/scratch bitwise-and zero           |
| 0x28 | tigaz    | test immed/global bitwise-and zero            |
| 0x2e | tisxz    | test immed/scratch bitwise-xor zero           |
| 0x2f | tigxz    | test immed/global bitwise-xor zero            |
| 0x31 | tbdact   | test button down: action                      |
| 0x33 | tpnmv    | test player not moving                        |
| 0x35 | tpmov    | test player moving                            |
| 0x3d | cseq     | compare scratches equal                       |
| 0x3e | cgeq     | compare globals equal                         |
| 0x3f | csne     | compare scratches not equal                   |
| 0x40 | cgne     | compare globals not equal                     |
| 0x41 | csltu    | compare scratches less than, unsigned         |
| 0x42 | cgltu    | compare globals less than, unsigned           |
| 0x43 | csgtu    | compare scratches greater than, unsigned      |
| 0x44 | cggtu    | compare globals greater than, unsigned        |
| 0x46 | cislt    | compare immed/scratch less than, signed       |
| 0x47 | cisgt    | compare immed/scratch greater than, signed    |
| 0x48 | cslt     | compare scratches less than, signed           |
| 0x49 | csgt     | compare scratches greater than, signed        |
| 0x51 | tbuact   | test button up: action                        |
| 0x58 | ciglt    | compare immed/global less than, signed        |
| 0x59 | ciggt    | compare immed/global greater than, signed     |
| 0x60 | *tkdesc* | test key down: escape                         |

The following table summarizes known action codes:

| code | mnemonic | meaning                   |
|------|----------|---------------------------|
| 0x00 | nop      | no operation              |
| 0x03 | incs     | increment scratch         |
| 0x04 | incg     | increment global[^gmod]   |
| 0x05 | decs     | decrement scratch         |
| 0x06 | decg     | decrement global          |
| 0x07 | clrs     | clear scratch             |
| 0x08 | clrg     | clear global              |
| 0x09 | negs     | negate scratch            |
| 0x0a | negg     | negate global             |
| 0x0b | orsi     | or scratch with immed     |
| 0x0c | orgi     | or global with immed      |
| 0x0d | andsi    | and scratch with immed    |
| 0x0e | andgi    | and global with immed     |
| 0x0f | rnds     | randomize scratch         |
| 0x10 | rndg     | randomize global          |
| 0x12 | movsi    | move scratch from immed   |
| 0x13 | movgi    | move global from immed    |
| 0x14 | movss    | move scratch from scratch |
| 0x15 | movgg    | move global from global   |
| 0x16 | incss    | increment 2 scratches     |
| 0x17 | incgg    | increment 2 globals       |
| 0x1b | movgs    | move global from scratch  |
| 0x1c | movsg    | move scratch from global  |
| 0x24 | addsi    | add scratch with immed    |
| 0x25 | addgi    | add global with immed     |
| 0x27 | subsi    | sub scratch with immed    |
| 0x28 | subgi    | sub global with immed     |
| 0x30 | gvcrt    | give carrot               |

[^scratch]: `scratch` refers to a 256-byte array of temporary data
[^global]: `global` refers to the 256-byte array at the end of GamesaveN.dat
[^gmod]: most operations that modify globals have code to handle the total
golden carrot count, which is split across two bytes

# Section 3: Textures, Text and Sounds

Section 3 holds a run of PSX **TIM** images laid end to end, in the format the
PSX SDK defines: a header, an optional CLUT block, and a pixel block, each
block giving the rectangle of video memory it was meant to load into. The
rectangles are all recorded as (0,0), so they are assigned at load time.

Across the 10 known levels this accounts for 1561 images -- 1444 of them 4bpp,
116 8bpp and one 16bpp. Sizes are the usual powers of two, mostly 32x32, 64x64
and 16x16. In six of the levels the run starts at offset 0 and covers the whole
section byte for byte, which is what confirms the parse.

In the other four, one or two tables come first and the images follow:

* a **text** table: an array of `short` offsets, then null-terminated strings.
The strings carry markup for the subtitle system, e.g. `>CC0 >CY-66 >CP1` for
colour and vertical position.
* a **sound** table: a count followed by that many `int` offsets, each to one
sound. Loaded by v1.0 0x41e160, which hands each one to DirectSound.

Nothing in the section says where one table ends and the images begin, so a
reader has to search for the first image rather than walk from zero.

Note the game's own `.bmp` handling is unrelated to any of this: the only
bitmap it reads is `..\data\default.bmp`, a palette loaded from disk by v1.0
0x41a590. No BZE section holds a BMP.

# Section 4: Models

Section 4 holds **TMD** model records, the PSX format, which is why
`GsMapModelingData` exists in the game at all. Section 1 says where each one
lives; the tags that name them are `0x24` and `0x40` of chunk type `0x22`, and
`0x24` of chunk type `0x20`, each an (offset, size) pair.

The outer structure is the PSX's:

| offset | type | usage                          |
|--------|------|--------------------------------|
| 0x0    | int  | ID, always 0x41                |
| 0x4    | int  | flags                          |
| 0x8    | int  | object count                   |
| 0xc    | *    | object table, 28 bytes each    |

Each object entry gives, as three offset/count pairs, its vertices, normals and
primitives, then a scale. Those offsets are relative to the start of the object
table, i.e. to record + 0xc -- `GsMapModelingData` relocates them by exactly
that. In every record of every known level the furthest offset lands exactly at
the end of the record, which is what confirms the layout.

The contents of each area were converted for the PC, though, so a PSX TMD
reader will not read them.

### Vertices

Vertices are **16 bytes**, not the PSX's packed 8-byte `SVECTOR`:

| offset | type  | usage                                    |
|--------|-------|------------------------------------------|
| 0x0    | float | X                                        |
| 0x4    | float | Y                                        |
| 0x8    | float | Z                                        |
| 0xc    | int   | index into the primitive index space     |

Every vertex area across the known levels is exactly `count * 16` bytes, which
is what confirms the stride.

The last field is how primitives find their vertices. Its low 15 bits are the
vertex's index in the space the face indices use, and bit 15 marks a **seam
duplicate**: a vertex sharing its index with another, of which the unflagged
one is canonical. Several stored vertices can therefore stand behind one index,
so the index space is smaller than the vertex array -- in the multi-object
character records, considerably so (one 445-vertex record has a 313-entry index
space, with exactly its 132 flagged vertices accounting for the difference).
Ignoring the field and numbering vertices by storage order decodes the
single-object world models correctly and scrambles every character, because the
world models leave the field zero throughout and are numbered by position.

Across the known levels, 92 of the 101 records carry a complete 0..N-1 index
space in this field; the other 9 are the zeroed world models. In all 92, every
face index falls inside that space.

### Primitives

Primitive packets are variable length, and byte 3 is a mode that fixes the
length. The game's own walker, v1.0 0x423f30, switches on exactly that byte, so
the sizes below are taken from it rather than guessed, and cover modes that no
shipped level uses.

There are two families. Most modes repeat a header on every primitive, so each
one is self-describing:

| mode | bytes | mode | bytes | mode | bytes | mode | bytes |
|------|-------|------|-------|------|-------|------|-------|
| 0x00 | 16    | 0x10 | 20    | 0x30 | 36    | 0x40 | 40    |
| 0x04 | 16    | 0x1c | 24    | 0x34 | 24    | 0x4a | 28    |
| 0x08 | 56    | 0x20 | 28    | 0x38 | 28    | 0x4e | 32    |
| 0x0c | 56    | 0x2c | 32    | 0x3c | 32    | 0x64 | 16    |

The rest carry one header for a whole run of primitives, with nothing repeated
in between. The count sits in the first `short`, and the run takes
`stride * count + tail` bytes and consumes `count` of the object's primitives at
once, so a reader that treats it as a single primitive loses its place:

| mode | stride | tail | mode | stride | tail |
|------|--------|------|------|--------|------|
| 0x14 | 16     | 0    | 0x44 | 12     | 4    |
| 0x18 | 20     | 0    | 0x48 | 24     | 0    |
| 0x24 | 20     | 0    | 0x4c | 28     | 0    |
| 0x28 | 24     | 0    |      |        |      |

In the self-describing family, the first `short` of a packet counts the
primitives left in the run, and each following primitive repeats it one lower.

Where the vertex indices sit inside a packet is *not* in the game's code --
0x423f30 only registers texture pages -- so those were recovered from the levels:

| mode | shape    | index slots (16-bit) |
|------|----------|----------------------|
| 0x38 | triangle | 10,11,12             |
| 0x3c | triangle | 7,14,15              |
| 0x40 | quad     | 16,17,18,19          |
| 0x4a | triangle | 10,11,12             |
| 0x4e | quad     | 12,13,14,15          |

Only these are settled; any other mode is still walked correctly but yields no
face. Telling a triangle from a quad takes more than checking the indices are in
range, because a fourth slot that is not a corner is usually in range anyway.
What separates them is distance: for 0x40 and 0x4e the fourth corner sits as far
from the other three as they sit from each other, while for 0x4a it sits about
twice as far, which is what makes 0x4a a triangle. 0x38 has the same packet size
as 0x4a and only 8 instances in the known levels, too few to tell, so it is read
as a triangle -- a wrong fourth corner is visible rubbish, a missing one only
costs a face.

`0x4a` is the most common mode in character models and `0x64`, which is not
geometry, dominates static world geometry. Reading 0x4a as a quad therefore
leaves world geometry looking correct while scrambling every character.

A quad's four corners are stored the PSX way, as two triangles sharing an edge
(0,1,2 and 1,2,3), so they have to be walked 0,1,3,2 to give a loop rather than
a bowtie.

That loop then has to be reversed, because the stored winding faces inward. The
test is a face's normal against its object's centroid: with the stored order,
9112 of 12298 faces point in and only 3186 point out. Reversed, four in five
point out, which is what a closed mesh should do. It is worth stating plainly
that this is the one part of the model format decided by a measurement rather
than by the data saying so -- the PSX draws both sides, so nothing in the file
has to be consistent about it.

### UVs, Colours And Texture Indices

The rest of a packet is a UV and a colour per corner, plus a texture index and
draw flags for the whole face. The two shorts sit where the PSX TMD format
puts the CLUT and the texture page, but the PC port keeps no VRAM, so what
they hold is not what a PSX would put there:

| mode | UV bytes (u,v)              | texture | flags | colour bytes  |
|------|-----------------------------|---------|-------|---------------|
| 0x38 | 4,5 8,9 12,13               | 6       | 10    | 16            |
| 0x3c | 4,5 8,9 12,13               | 6       | 10    | 16 20 24      |
| 0x40 | 4,5 8,9 12,13 14,15         | 6       | 10    | 16 20 24 28   |
| 0x4a | --                          | --      | --    | 8 12 16       |
| 0x4e | --                          | --      | --    | 8 12 16 20    |

A colour is three bytes, RGB, followed by a zero pad byte. `0x38` gives one
colour to the whole face and the rest give one per corner, which matches flat
against gouraud shading; the untextured modes drop the UV, texture and flag
bytes and keep the colours.

A primitive never carries both a face colour and per-corner colours -- it is
one or the other -- so an exporter has nothing to combine. The flat modes are
written out by giving every corner of the face the same colour, which is what
makes a single `COLOR_0` attribute enough for glTF.

The colours are used as they are, not as the PSX modulation where 0x80 means
"leave the texture alone". They spread evenly over the whole 0-255 range with
no clustering at 128 -- 0.2-0.5% of channels sit exactly there, about what
chance gives -- so the exporters divide by 255.

The **texture** short is an index into the level's texture registrations, made
by chunk type 0x29 in section 1: each 0x2a tag loads one TIM from the asset
section and gives it a one-based index (`sub_422a20` stores that index in
front of the TIM's own bytes). At draw time the index picks a slot in a
48-byte-per-entry table at `0x52fd60` holding the texture's GL state
(`sub_41b2f0` binds it, and `sub_423f30` is the pass that walks a model's
packets exactly as above, ORing each face's blend mode into its texture's
entry). Every index the known levels' models carry resolves to a
registration, and the picks are coherent -- a character's head object and its
two ear objects pick three consecutively-registered 64x64 pages.

The **flags** short keeps only the bits of a PSX texture page that are not an
address: bits 7-8 are the colour depth and 5-6 the semi-transparency mode
(`0x0080`, `0x00a0`, `0x00e0` are the values that occur -- 8bpp with blend
mode 0, 1, 3). The page-address bits are always zero.

A UV is *normalized*: 0-255 spans the whole texture regardless of its size, so
the exporters divide by 256 and every texture's UVs run 0-1. That is measured,
not assumed -- every textured object's UVs run to 255 whether its texture is
16x16 or 64x128.

V is measured up from the bottom of the texture. That is the opposite of what
the software rasterizer's span loop suggests, where the texel address is
`base + (V >> 16 << shift) + (U >> 16)` and so V=0 would be the first stored
row; whatever flips it happens between the packet and that loop. It was
settled by looking at exported models in a viewer, not from the code. The
practical consequence: glTF, whose origin is the top-left, needs `1 - v`,
while OBJ measures V up from the bottom as the game does and takes it as it
comes.

How the fields were told apart before the code confirmed them: within an
object, the flags short changes between faces in only 1-4% of objects while
every UV slot changes in 84-96%, and those two figures do not overlap. The
colours back it up separately: `0x38` faces are grey (r=g=b) in every
instance, `0x4a` in two thirds, and the gouraud modes in about two fifths --
far more grey than arbitrary bytes would give, and the pattern shading data
has.

### Objects Are Material Groups

An object is not a body part. Every packet of an object carries the same draw
flags, nearly every one the same texture index, and different objects of one
record carry different ones, so the objects divide a model by material rather
than by shape. (A few objects do mix two or three textures, which is why the
exporters group faces by texture within an object rather than assuming one.) Their faces draw from
one vertex pool shared across the record, which is why an object's vertices
turn up in several separate stretches of it rather than one block, and why
faces of one object reach for vertices that another object also names.

What does hold per object is the count: an object's faces name exactly as many
distinct vertices as the object declares, in 651 of the 656 objects across the
known levels. That invariant is what confirms the index slots above are right.

Reading the objects as body parts is misleading -- a model looks wrong when its
objects are lined up as though each were a separate mesh. `tools/bze.py models
--split` writes each object out on its own for exactly that reason.

### How Good Is The Result

Models decode correctly. Faces never reference a vertex outside the record,
across 12548 of them, under 1% are degenerate, and their edges run about a
twentieth of the model's diagonal at the median against a fifth for random
vertex picks. Records checked in a viewer come out as the shapes they should
be.

Two gaps remain:

* 175 of the 185 model records walk their primitives exactly. The other 10 lose
their place part way through an object, all of them on the `0x44` run mode;
whatever decoded before that is kept.
* mode `0x64` yields no faces, so a record built only from it comes out empty.
It only ever appears in objects that have no vertices, so it is unlikely to be
geometry, but what it does draw is unknown.

## Animations (TOD)

Tag `0x25` of chunk type `0x22` names **TOD** files, the PSX SDK's hierarchy
and motion format (file id 0x50). As with the models, the shell is the PSX
layout and one field was converted for the PC: a coordinate packet's rotation
is three shorts and a pad rather than three longs. Frames chain to the byte in
every record of the known levels, and all 225k coordinate packets agree with
the flag/length rule, so the layout is certain.

A model's animations follow it: the chunk that loads a model is followed by the
chunks that load its TODs, until the next model chunk.

Header (8 bytes): file id 0x50, version byte, `short` resolution (frame time in
60ths of a second), `int` frame count. Each frame: `short` size in longs
(including this header), `short` packet count, `int` frame number. Each packet:
`short` node ID, a byte holding the packet type (low nibble) and flag (high
nibble), and a byte length in longs (including the header).

Packet types seen in the data:

| type | usage                | notes                                        |
|------|----------------------|----------------------------------------------|
| 1    | coordinate           | flag bits: 2 rotation, 4 scale, 8 translation |
| 2    | model object mapping | `short`, **one-based** index into the object table |
| 3    | parent node          | `short` node ID                              |
| 8    | object control       | flag 0xb; not decoded                        |
| 9    | non-standard         | node 0 of most frames; looks like a pair of world positions |
| 10   | non-standard         | rare; not decoded                            |

A coordinate packet carries, in order, whichever of these its flag names:
rotation as three Q12 shorts and a pad (0x1000 is a full turn), scale as three
Q12 shorts and a pad, translation as three `int`s in world units.

### Skeleton And Placement

TMD objects sit at the origin in their own local spaces; the TOD is what
places them, which is the usual PSX arrangement. The single-frame
`resolution=1` TOD accompanying each model is its *setup*: type-2 packets map
each node to a model object and type-3 packets name each node's parent. The
bind pose is the full set of coordinate packets in frame 0 of a gameplay
animation (typically flag 0xe, all three components). A node's coordinates
are local to its parent, so placing the model means composing them down the
tree -- the `GsCOORDINATE2` hierarchy the game builds at runtime.

The proof the chain is right is the model's own seams: seam-flagged duplicate
vertices sit in different objects, and under the composed bind pose each lands
on its twin (median error ~2 world units, against ~34 unposed).

Frames are absolute, never differential: bit 0 of a coordinate packet's flag
selects the two, and it is clear in all 225567 coordinate packets of the known
levels. Frame numbers always run 0..N-1, so a frame's time is simply its number
times the resolution over 60.

# Reading BZE Files

`tools/bze.py` implements this document: it lists an archive's sections,
extracts them, decompressing as it goes, and walks the load instructions in
section 1.

    python3 tools/bze.py list <file.bze>
    python3 tools/bze.py extract <file.bze> -o <outdir>
    python3 tools/bze.py chunks <file.bze> [-s]
    python3 tools/bze.py textures <file.bze> -o <outdir>
    python3 tools/bze.py models <file.bze> -o <outdir> [--raw] [--split] [--pose] [--gltf] [--psx-axes]
    python3 tools/bze.py anims <file.bze>

Pass `--raw` to write sections without decompressing them, and `--force` to go
on despite a bad checksum or inconsistent header.

`chunks` is the strictest check there is on all of the above. Every tag has a
fixed length, so walking the stream is only possible if the decompression was
byte-exact and every tag length in this document is right: one wrong byte and
the walk desynchronizes immediately. It runs clean over all 10 known levels,
each ending on its `2f` terminator with nothing left over.

`textures` writes each TIM out as a PNG, and `models` writes each model out as
a Wavefront OBJ with faces, or the record itself with `--raw`. A model's objects
become OBJ groups, and `--split` puts each object in a file of its own, taking
whichever vertices its faces name and renumbering them so the file stands alone
-- which is the way to tell an object that decoded well from one that did not.
`--pose` places each model's objects using its skeleton and bind pose from the
TOD animations, and `anims` lists them; the TOD format itself is readable on
its own through `tools/tod.py`.

Both writers carry the per-corner UVs and colours described above. Neither
format can hang them off a shared vertex -- two faces meeting at a vertex
rarely agree about either -- so each corner gets a vertex of its own. In OBJ a
colour rides on the `v` line as three extra numbers (`v x y z r g b`), which
Blender and MeshLab read, and which a reader that does not understand it will
ignore; texture coordinates go out as `vt` lines with `f v/vt` faces. In glTF
they are the `COLOR_0` and `TEXCOORD_0` attributes.

The textures come along as real materials, through the registration indices
described under "UVs, Colours And Texture Indices". The OBJ writers put one
`.mtl` and the referenced textures as PNGs (`<stem>_tex_NNN.png`) beside the
models, with a `usemtl` per face run; the glTF writer embeds the PNGs in the
`.glb` and splits an object that mixes textures into one primitive per
texture, sampled NEAREST with alpha-masking, since transparent black is the
TIM cut-out colour.

Every glTF primitive gets a material, including the untextured ones, which
get a plain white `flat`. This matters more than it sounds: glTF's default
material is `metallicFactor` 1.0, and a fully metallic surface with nothing
to reflect renders as dark grey in most viewers, which swallows `COLOR_0`
whole -- so leaving the flat-shaded faces without a material makes them all
come out grey no matter how good their colours are. Nothing in this game is
metal, and every material's `baseColorFactor` is white, so the vertex colours
and the texture reach the screen as they are.

`--gltf` writes a glTF 2.0 binary (`.glb`) per model instead, carrying the node
tree, one mesh per object, and every animation of that model. The mapping is
direct -- a TOD node is a glTF node and a coordinate packet is a TRS keyframe --
so nothing is baked and no skinning is involved. Two conversions happen on the
way: the game's Q12 Euler angles become quaternions, and each part's faces are
renumbered against that part's own vertices, which is also what keeps its copy
of a seam vertex in its own space. Over the known levels this writes 68 files
holding 732 nodes, 633 meshes and 107 animations.

Both writers convert the game's axes to the Y-up ones OBJ and glTF expect. The
PSX has Y pointing down and Z into the screen, so the conversion is a half turn
about X -- a rotation, not a flip of Y on its own, which would be a reflection
and would mirror the model and reverse the winding of every face. The glTF
export does it with one extra node above the scene, so the animations come
along untouched. Pass `--psx-axes` to keep the game's own orientation. The two
formats are also readable on their own, through `tools/tim.py` and
`tools/tmd.py`.

`tools/bze_test.py` checks the implementation against a transcription of the
game's own decompression loop, over every combination of the format's options,
and covers the TIM and model readers too. It uses generated data, since no
level is checked into this repository.
