#!/usr/bin/env python3

"""
Source reconstruction for BBLiT (PC v1.0).

Takes the raw Hex-Rays pseudocode export in `Decomp/bugs_pseudocode.c` and the
knowledge already recorded in this repository (`doc/src/funcs.csv`) and produces
an organized, symbol-resolved C source tree under `recon/`.

The following passes are applied:

1. The export is split into per-function records keyed by virtual address.
2. Addresses are matched against the "PC v1.0 addr" column of `funcs.csv`, so
   known functions get their documented names; every call site is rewritten too.
3. Functions are assigned to modules (i.e. reconstructed translation units)
   using the documented subgroups plus address contiguity; see `assign_modules`.
4. Data symbols (`dword_...`, `flt_...`, string literals, ...) are collected and
   emitted as address macros, in the same style as the hand-decompiled code in
   `BugsDecomp/`. String symbol addresses, which IDA does not encode in the
   symbol name, are recovered from `bugs.exe` itself; see `resolve_strings`.
5. Hex-Rays-isms that are not valid C (named argument annotations, `nullptr`,
   register annotations) are normalized.

Run from anywhere; paths are resolved relative to the repository root.
"""

import collections
import csv
import os
import re
import struct
import sys


ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PSEUDOCODE = os.path.join(ROOT, "Decomp", "bugs_pseudocode.c")
EXE = os.path.join(ROOT, "Decomp", "bugs.exe")
FUNCS_CSV = os.path.join(ROOT, "doc", "src", "funcs.csv")
OUTDIR = os.path.join(ROOT, "recon")

# column of funcs.csv holding the addresses this export was taken from
ADDR_COLUMN = "PC v1.0 addr"

# IDA symbols that are import stubs rather than game code
IMPORT_THUNKS = frozenset(
    ["DirectSoundCreate", "DirectDrawCreate", "DirectDrawEnumerateA"]
)

# IDA symbols that are game code despite looking like library code
GAME_SYMBOLS = {"_WinMain@16": "WinMain"}


# ---------------------------------------------------------------------------
# pseudocode export
# ---------------------------------------------------------------------------


class Func:
    """A single function from the pseudocode export."""

    def __init__(self, addr, ida_name, body):
        self.addr = addr
        self.ida_name = ida_name
        # body starts with a blank line, then the signature, then the block
        self.body = body.strip("\n")
        self.names = []  # documented names, if any
        self.group = None  # documented group (game/port/sdk/misc/crt)
        self.subgroup = None  # documented subgroup (track/pad/gte/...)
        self.folded = False  # address shared by several documented functions
        self.module = None  # module assigned by `assign_modules`

    @property
    def name(self):
        """Name to emit for this function."""
        if self.names:
            return self.names[0]
        if self.ida_name in GAME_SYMBOLS:
            return GAME_SYMBOLS[self.ida_name]
        return sanitize_ident(self.ida_name)

    @property
    def signature(self):
        return self.body.split("\n", 1)[0]


FUNC_SPLIT_RE = re.compile(
    r"/\* =+\n   Address: (0x[0-9A-Fa-f]+)\n   Function: (\S+)\n   =+ \*/\n"
)


def parse_pseudocode(path):
    """Splits a Hex-Rays export into `Func` records, ordered by address."""

    with open(path, encoding="utf-8") as fp:
        text = fp.read()

    parts = FUNC_SPLIT_RE.split(text)
    # parts[0] is the export header; the rest are (addr, name, body) triples
    if (len(parts) - 1) % 3:
        raise ValueError("unexpected export layout")

    funcs = []
    for i in range(1, len(parts), 3):
        addr, ida_name, body = parts[i], parts[i + 1], parts[i + 2]
        funcs.append(Func(int(addr, 16), ida_name, body))

    funcs.sort(key=lambda f: f.addr)
    return funcs


def sanitize_ident(name):
    """Turns an IDA symbol into a valid C identifier."""

    ident = re.sub(r"[^A-Za-z0-9_]", "_", name)
    if ident[:1].isdigit():
        ident = "_" + ident
    return ident


# ---------------------------------------------------------------------------
# documented functions
# ---------------------------------------------------------------------------


def load_known_funcs(path):
    """Reads funcs.csv into {addr: [(name, group, subgroup, folded)]}."""

    known = collections.defaultdict(list)
    with open(path, encoding="utf-8") as fp:
        for row in csv.DictReader(fp):
            addr = row[ADDR_COLUMN].strip()
            # a trailing '*' marks an address shared by several documented
            # functions, i.e. identical code the linker folded together
            folded = addr.endswith("*")
            addr = addr.rstrip("*")
            if not addr.startswith("0x"):
                # unknown address, or the function only exists as a macro
                continue
            known[int(addr, 16)].append(
                (row["name"].strip(), row["group"].strip(),
                 row["subgroup"].strip(), folded)
            )
    return known


def apply_known_names(funcs, known):
    """Attaches documented names/groups to the matching functions."""

    by_addr = {f.addr: f for f in funcs}
    missing = []
    for addr, entries in known.items():
        func = by_addr.get(addr)
        if func is None:
            missing.append((addr, entries[0][0]))
            continue
        func.names = [e[0] for e in entries]
        func.group = entries[0][1]
        func.subgroup = entries[0][2]
        func.folded = any(e[3] for e in entries)
    return missing


def is_runtime(func):
    """Whether a function is MSVC runtime or import stub code, not game code.

    The runtime is not one contiguous block: the linker interleaves runtime
    object files with the game's own, so this goes by symbol rather than by
    address. IDA recognizes the runtime routines by signature and gives them
    their real, decorated names, which is what is matched here.
    """

    if func.names:
        # documented in funcs.csv, which says outright whether it is runtime
        return func.group == "crt"
    name = func.ida_name
    if name in GAME_SYMBOLS:
        return False
    if name in IMPORT_THUNKS:
        return True
    if name.startswith("?"):
        # a mangled C++ symbol; the game itself is C
        return True
    if re.fullmatch(r"_[A-Z]\w*@\d+", name):
        # a __stdcall function of the game's own, not a runtime routine
        return False
    return name.startswith("_") or name.startswith("unknown_libname")


def classify_runtime(funcs):
    """Marks MSVC runtime functions with the `crt` subgroup."""

    for func in funcs:
        if func.subgroup:
            continue
        if is_runtime(func):
            func.group = "crt"
            func.subgroup = "crt"


# ---------------------------------------------------------------------------
# module assignment
# ---------------------------------------------------------------------------

# The game embeds two of its own source file names in assert-style strings. A
# function quoting one of them was compiled from that file, which is direct
# evidence of where a translation unit lies, so those functions are tagged the
# same way documented ones are. `Pcrogl.c` is the file the repository already
# calls `rogl`.
EVIDENCE_MODULES = {
    "aDProjetsBugsSr": ("rogl", "D:\\Projets\\Bugs\\src\\Pcrogl.c"),
    "aDProjetsBugsSr_0": ("pcrsoft8", "D:\\Projets\\Bugs\\src\\pcrsoft8.c"),
}


def apply_evidence_tags(funcs):
    """Tags functions that name the source file they were compiled from."""

    for func in funcs:
        if func.subgroup:
            continue
        for sym, (tag, _path) in EVIDENCE_MODULES.items():
            if re.search(r"\b%s\b" % sym, func.body):
                func.subgroup = tag
                break


def assign_modules(funcs):
    """Assigns every function to a module (a reconstructed translation unit).

    Functions belonging to the same original source file end up contiguous in
    the text section, so documented subgroups can be extended across the
    undocumented functions that sit between them: an undocumented run whose
    neighbours on both sides belong to the same subgroup belongs to it too.

    Runtime code is pulled out first and gathered into a single module. It is
    interleaved with the game's own object files, and letting it split the runs
    would fragment game modules along boundaries that say nothing about the
    game's own source layout.

    Returns the list of modules as (name, [funcs]) in address order.
    """

    runtime = [f for f in funcs if f.subgroup == "crt"]
    funcs = [f for f in funcs if f.subgroup != "crt"]

    tags = [f.subgroup for f in funcs]

    # a folded function is shared by several translation units, so it must not
    # break up the run it sits in
    for i, func in enumerate(funcs):
        if func.folded and 0 < i < len(funcs) - 1:
            if tags[i - 1] == tags[i + 1] and tags[i - 1] is not None:
                tags[i] = tags[i - 1]

    # extend documented subgroups across undocumented runs
    filled = list(tags)
    i = 0
    while i < len(tags):
        if tags[i] is not None:
            i += 1
            continue
        j = i
        while j < len(tags) and tags[j] is None:
            j += 1
        before = tags[i - 1] if i > 0 else None
        after = tags[j] if j < len(tags) else None
        if before is not None and before == after:
            for k in range(i, j):
                filled[k] = before
        i = j
    tags = filled

    # split into maximal runs of equal tag
    runs = []
    for i, tag in enumerate(tags):
        if runs and runs[-1][0] == tag:
            runs[-1][1].append(funcs[i])
        else:
            runs.append((tag, [funcs[i]]))

    # name each run
    tag_counts = collections.Counter(tag for tag, _ in runs)
    used = set()
    modules = []
    for tag, run in runs:
        if tag is None:
            name = name_unknown_run(run)
        elif tag_counts[tag] > 1:
            name = "%s_%06x" % (tag, run[0].addr)
        else:
            name = tag
        if name in used:
            # never let two regions collapse into one file; they are separated
            # by other code and so cannot be the same translation unit
            name = "%s_%06x" % (name, run[0].addr)
        used.add(name)
        for func in run:
            func.module = name
        modules.append((name, run))

    if runtime:
        for func in runtime:
            func.module = "crt"
        modules.append(("crt", runtime))
    return modules


def run_evidence(run):
    """Returns the original source file names a run refers to."""

    found = []
    for func in run:
        for sym, (name, path) in EVIDENCE_MODULES.items():
            if (name, path) not in found and re.search(r"\b%s\b" % sym, func.body):
                found.append((name, path))
    return found


def name_unknown_run(run):
    """Names an undocumented run, using binary evidence where available."""

    for func in run:
        if func.ida_name in GAME_SYMBOLS:
            return "winmain"
    return "unk_%06x" % run[0].addr


# ---------------------------------------------------------------------------
# data symbols
# ---------------------------------------------------------------------------

# IDA data symbol prefixes that encode the address, and the type to give them
ADDR_SYMBOL_TYPES = {
    "byte": "unsigned char",
    "word": "unsigned short",
    "dword": "int",
    "qword": "long long",
    "flt": "float",
    "dbl": "double",
    "off": "void *",
}
# ...and the ones that stand for an object of unknown layout
ADDR_BLOB_PREFIXES = ("unk", "asc", "stru", "xmmword", "jpt", "loc")

ADDR_SYMBOL_RE = re.compile(
    r"\b(%s)_([0-9A-F]{4,8})\b"
    % "|".join(list(ADDR_SYMBOL_TYPES) + list(ADDR_BLOB_PREFIXES))
)
STRING_SYMBOL_RE = re.compile(r"\ba[A-Z0-9]\w*\b")


SUB_REF_RE = re.compile(r"\bsub_([0-9A-F]{4,8})\b")


def collect_data_symbols(funcs):
    """Returns (address symbols, string symbols) referenced by the code."""

    addr_syms = {}
    str_syms = set()
    for func in funcs:
        for prefix, hexaddr in ADDR_SYMBOL_RE.findall(func.body):
            addr_syms["%s_%s" % (prefix, hexaddr)] = (prefix, int(hexaddr, 16))
        for sym in STRING_SYMBOL_RE.findall(func.body):
            # a1, a2, ... are Hex-Rays parameter names, not symbols
            if not re.fullmatch(r"a\d+", sym):
                str_syms.add(sym)
    return addr_syms, str_syms


def collect_dangling_calls(funcs):
    """Returns the addresses called as functions that the export does not hold.

    A function may be entered part way in, past its own prologue; IDA calls
    such an entry point `sub_...` too, but it is not a function of its own and
    so never appears in the export.
    """

    defined = {f.addr for f in funcs}
    dangling = {}
    for func in funcs:
        for hexaddr in SUB_REF_RE.findall(func.body):
            addr = int(hexaddr, 16)
            if addr not in defined:
                dangling["sub_%s" % hexaddr] = addr
    return dangling


# ---------------------------------------------------------------------------
# string symbol recovery
# ---------------------------------------------------------------------------


def read_sections(path):
    """Returns [(name, va, raw_off, raw_size)] for a PE image."""

    with open(path, "rb") as fp:
        data = fp.read()

    pe = struct.unpack_from("<I", data, 0x3C)[0]
    if data[pe:pe + 4] != b"PE\0\0":
        raise ValueError("not a PE image")
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    imgbase = struct.unpack_from("<I", data, pe + 24 + 28)[0]

    sections = []
    off = pe + 24 + optsz
    for _ in range(nsec):
        name = data[off:off + 8].rstrip(b"\0").decode()
        _vsize, va, rsize, raw = struct.unpack_from("<IIII", data, off + 8)
        sections.append((name, imgbase + va, raw, rsize))
        off += 40
    return data, sections


def ida_string_name(text):
    """Reproduces the symbol name IDA derives from a string literal."""

    words = [w for w in re.split(r"[^A-Za-z0-9]+", text) if w]
    name = "a" + "".join(w[:1].upper() + w[1:].lower() for w in words)
    return name[:15]


# character classes to try when scanning for strings, most permissive first
_SCAN_CLASSES = (
    rb"[\x09-\x0d\x20-\x7e]{2,}\x00",
    rb"[\x20-\x7e]{2,}\x00",
)


def resolve_strings(path, symbols):
    """Recovers the address and content of IDA string symbols.

    IDA does not encode the address in a string symbol's name, so the strings
    are located in the image instead: each candidate string is run through the
    same naming rules IDA uses, and a symbol is only resolved when the number
    of candidates matches the number of symbols sharing that base name exactly
    (IDA suffixes collisions `_0`, `_1`, ... in address order). Anything less
    certain than that is reported as unresolved rather than guessed at.

    Returns ({symbol: (addr, text)}, {unresolved symbol: [candidate text]}).
    """

    data, sections = read_sections(path)
    by_name = {sec[0]: sec for sec in sections}

    # values that look like a pointer into the image; only strings that are
    # actually referenced get a symbol, and this filter removes the huge number
    # of incidental byte sequences that scan as strings
    referenced = set()
    for sec in (".text", ".rdata", ".data"):
        if sec not in by_name:
            continue
        _n, _va, raw, rsize = by_name[sec]
        blob = data[raw:raw + rsize]
        for i in range(len(blob) - 3):
            referenced.add(int.from_bytes(blob[i:i + 4], "little"))

    def scan(charclass, filtered):
        found = {}
        for sec in (".rdata", ".data"):
            if sec not in by_name:
                continue
            _n, va, raw, rsize = by_name[sec]
            blob = data[raw:raw + rsize]
            for match in re.finditer(charclass, blob):
                addr = va + match.start()
                if filtered and addr not in referenced:
                    continue
                found[addr] = match.group()[:-1].decode("latin-1")
        return found

    strategies = []
    for charclass in _SCAN_CLASSES:
        for filtered in (True, False):
            found = scan(charclass, filtered)
            index = collections.defaultdict(list)
            for addr in sorted(found):
                index[ida_string_name(found[addr]).lower()].append(addr)
            strategies.append((index, found))

    # group symbols by base name, recovering the collision index from the
    # `_N` suffix IDA appends
    groups = collections.defaultdict(dict)
    for sym in symbols:
        match = re.fullmatch(r"(.+?)(?:_(\d+))?", sym)
        base, suffix = match.group(1), match.group(2)
        groups[base][int(suffix) + 1 if suffix else 0] = sym

    resolved = {}
    unresolved = {}
    for base, members in sorted(groups.items()):
        want = max(members) + 1
        for index, found in strategies:
            candidates = index.get(base.lower(), [])
            if len(candidates) != want:
                continue
            for i, sym in members.items():
                resolved[sym] = (candidates[i], found[candidates[i]])
            break
        else:
            # record what the symbol could have been, to give whoever fills it
            # in by hand something to go on; the tightest scan is the useful one
            index, found = strategies[1]
            texts = sorted({found[a] for a in index.get(base.lower(), [])})
            for sym in members.values():
                unresolved[sym] = texts
    return resolved, unresolved


# ---------------------------------------------------------------------------
# body normalization
# ---------------------------------------------------------------------------

# Hex-Rays annotates call arguments with the callee's parameter name, in a
# `name: value` form that is not C
NAMED_ARG_RE = re.compile(r"(?<=[(,])(\s*)([A-Za-z_]\w*): (?!:)")
# ...and annotates the registers of `__usercall` functions the same way
REG_ANNOT_RE = re.compile(r"@<([A-Za-z0-9:]+)>")
# ...and the registers such a function clobbers
SPOILS_RE = re.compile(r"__spoils<([^>]*)> ")
# an access to an address with no symbol on it
MEMORY_RE = re.compile(r"\bMEMORY\[(0x[0-9A-Fa-f]+)\]")


def normalize_body(body, renames):
    """Rewrites a function body into valid, symbol-resolved C."""

    # rename functions; done first so the rest operates on final names. Plain
    # word boundaries are no good here: some IDA symbols are mangled C++ names
    # and start or end with punctuation.
    if renames:
        body = re.sub(
            r"(?<![\w$])(%s)(?!\w)" % "|".join(
                sorted(map(re.escape, renames), key=len, reverse=True)
            ),
            lambda m: renames[m.group(1)],
            body,
        )

    # `foo(Buffer: p, MaxCount: 80)` -> `foo(/*Buffer*/ p, /*MaxCount*/ 80)`;
    # the placeholder names Hex-Rays invents carry nothing, so they just go
    def fix_named_arg(match):
        space, name = match.group(1), match.group(2)
        if re.fullmatch(r"a\d+", name):
            return space
        return "%s/*%s*/ " % (space, name)

    body = NAMED_ARG_RE.sub(fix_named_arg, body)

    # register annotations on `__usercall` signatures
    body = REG_ANNOT_RE.sub(r"/*@<\1>*/", body)
    body = SPOILS_RE.sub(r"/*__spoils<\1>*/ ", body)

    # `MEMORY[0x46774C]` is just the dword at that address
    body = MEMORY_RE.sub(lambda m: "(*(int *)%s)" % m.group(1), body)

    body = re.sub(r"\bnullptr\b", "NULL", body)
    return body


def build_renames(funcs):
    """Builds the IDA-name -> emitted-name map used to rewrite bodies."""

    return {f.ida_name: f.name for f in funcs if f.ida_name != f.name}


# ---------------------------------------------------------------------------
# emission
# ---------------------------------------------------------------------------

BANNER = """\
// %s
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
"""


def write(path, text):
    with open(path, "w", encoding="utf-8", newline="\n") as fp:
        fp.write(text)


def emit_module(path, name, run, renames):
    out = [BANNER % ("Module `%s`." % name)]
    out.append(
        "//\n// Address range: 0x%06x - 0x%06x (%d function%s).\n"
        % (run[0].addr, run[-1].addr, len(run), "" if len(run) == 1 else "s")
    )
    evidence = run_evidence(run)
    if evidence:
        out.append(
            "//\n// Code here refers to the original source file name%s %s.\n"
            % (
                "" if len(evidence) == 1 else "s",
                ", ".join('"%s"' % path for _n, path in evidence),
            )
        )
    out.append('\n#include "bugs.h"\n\n')
    for func in run:
        out.append("\n" + func_comment(func))
        out.append(normalize_body(func.body, renames) + "\n")
    write(path, "".join(out))


def func_comment(func):
    lines = ["// 0x%06x  %s" % (func.addr, func.name)]
    if func.ida_name != func.name:
        lines.append("// IDA symbol: %s" % func.ida_name)
    if len(func.names) > 1:
        lines.append(
            "// Shared implementation, also known as: %s"
            % ", ".join(func.names[1:])
        )
    if func.group and func.subgroup:
        lines.append("// Documented as %s/%s in doc/functions.md."
                     % (func.group, func.subgroup))
    return "\n".join(lines) + "\n"


def emit_defs(path):
    write(path, DEFS_H)


def emit_data_header(path, addr_syms, strings, unresolved):
    out = [BANNER % ("Data symbols referenced by the reconstructed code.")]
    out.append(
        """//
// Every symbol is a macro naming a fixed address in the game's image, the same
// way the hand-decompiled code in `BugsDecomp/` refers to game memory. That
// keeps the reconstruction referring to the one live copy of each variable.

#pragma once

#include "defs.h"


// -- scalar and blob symbols -------------------------------------------------

"""
    )
    for sym in sorted(addr_syms, key=lambda s: addr_syms[s][1]):
        prefix, addr = addr_syms[sym]
        ctype = ADDR_SYMBOL_TYPES.get(prefix)
        if ctype:
            out.append("#define %-18s (*(%s *)0x%06X)\n" % (sym, ctype, addr))
        else:
            # unknown layout; an incomplete array keeps both `x` and `&x` usable
            out.append("#define %-18s (*(_UNKNOWN (*)[])0x%06X)\n" % (sym, addr))

    out.append(
        """

// -- string literals ---------------------------------------------------------
//
// IDA does not record a string's address in its symbol name, so these were
// recovered from bugs.exe; the literal each one holds is given alongside.

"""
    )
    for sym in sorted(strings, key=lambda s: strings[s][0]):
        addr, text = strings[sym]
        out.append(
            "#define %-18s ((char *)0x%06X) // %s\n"
            % (sym, addr, c_string_comment(text))
        )

    if unresolved:
        out.append(
            """

// -- unresolved string literals ----------------------------------------------
//
// More than one string in the image fits these symbols and nothing in the
// export distinguishes them, so their addresses are left to be filled in by
// hand rather than guessed at. The strings each one could be are listed.

"""
        )
        for sym in sorted(unresolved):
            out.append(
                "extern char %s[]; // one of: %s\n"
                % (sym, ", ".join(c_string_comment(t) for t in unresolved[sym]))
            )

    write(path, "".join(out))


def c_string_comment(text):
    """Renders a string literal for a single-line comment."""

    out = text.replace("\\", "\\\\").replace('"', '\\"')
    out = out.replace("\n", "\\n").replace("\r", "\\r").replace("\t", "\\t")
    out = re.sub(r"[\x00-\x1f]", "?", out)
    return '"%s"' % out[:60]


def emit_funcs_header(path, modules, dangling):
    out = [BANNER % "Declarations for every reconstructed function."]
    out.append('\n#pragma once\n\n#include "defs.h"\n')
    if dangling:
        out.append(
            """

// -- alternate entry points --------------------------------------------------
//
// Addresses the code calls that are not functions of their own: they sit part
// way into another function, past its prologue. There is nothing to declare
// them as, so they are named by address, as the game's code is elsewhere.

"""
        )
        for sym in sorted(dangling, key=lambda s: dangling[s]):
            out.append(
                "#define %-14s ((int (*)())0x%06X)\n" % (sym, dangling[sym])
            )
    for name, run in modules:
        out.append("\n\n// -- %s %s\n\n" % (name, "-" * max(0, 70 - len(name))))
        for func in run:
            sig = normalize_body(func.signature, {func.ida_name: func.name})
            out.append("// 0x%06x\n%s;\n" % (func.addr, sig))
    write(path, "".join(out))


def emit_master_header(path):
    write(
        path,
        BANNER % "Umbrella header for the reconstructed sources."
        + """
#pragma once

#include <windows.h>
#include <mmsystem.h>
#include <dsound.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "defs.h"
#include "gamedata.h"
#include "gamefuncs.h"
""",
    )


def emit_coverage(path, funcs, modules, strings, unresolved, missing):
    named = [f for f in funcs if f.names]
    game = [f for f in funcs if f.subgroup != "crt"]
    out = [
        "This file is generated by `tools/recon.py`.\n\n",
        "# Reconstruction Coverage\n\n",
        "Source: `Decomp/bugs_pseudocode.c` (Bugs.exe, PC v1.0)\n\n",
        "| metric | count |\n|--------|-------|\n",
        "| functions in export | %d |\n" % len(funcs),
        "| game functions | %d |\n" % len(game),
        "| runtime functions | %d |\n" % (len(funcs) - len(game)),
        "| named from `doc/src/funcs.csv` | %d |\n" % len(named),
        "| still named `sub_...` | %d |\n"
        % len([f for f in game if not f.names]),
        "| modules emitted | %d |\n" % len(modules),
        "| string symbols resolved | %d |\n" % len(strings),
        "| string symbols unresolved | %d |\n" % len(unresolved),
    ]
    if missing:
        out.append(
            "\nAddresses in `funcs.csv` with no function in the export: %s\n"
            % ", ".join("0x%06x (%s)" % m for m in missing)
        )
    out.append("\n# Modules\n\n")
    out.append("| module | address range | functions | named |\n")
    out.append("|--------|---------------|-----------|-------|\n")
    for name, run in modules:
        out.append(
            "| `%s.c` | 0x%06x - 0x%06x | %d | %d |\n"
            % (
                name,
                run[0].addr,
                run[-1].addr,
                len(run),
                len([f for f in run if f.names]),
            )
        )
    if unresolved:
        out.append(
            "\n# Unresolved String Symbols\n\n"
            "These could not be pinned to a single address in `bugs.exe`; the\n"
            "strings each one could be are listed alongside.\n\n"
        )
        for sym in sorted(unresolved):
            out.append(
                "- `%s` - %s\n"
                % (sym, ", ".join("`%s`" % t for t in unresolved[sym]))
            )
    write(path, "".join(out))


DEFS_H = """\
// Types and helpers used by the reconstructed sources.
//
// Hex-Rays output leans on a small vocabulary of its own; this header supplies
// it so the reconstruction reads as ordinary C.

#pragma once


#include <windows.h>


// sized types
typedef unsigned char _BYTE;
typedef unsigned short _WORD;
typedef unsigned int _DWORD;
typedef unsigned long long _QWORD;
// an object whose layout is not known
typedef unsigned char _UNKNOWN;

#ifndef _MSC_VER
// `__intN` is a keyword under MSVC, which is what the game was built with
#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long
#endif

// sub-word accessors
#define LOBYTE(x) (*((_BYTE *)&(x) + 0))
#define BYTE1(x) (*((_BYTE *)&(x) + 1))
#define BYTE2(x) (*((_BYTE *)&(x) + 2))
#define HIBYTE(x) (*((_BYTE *)&(x) + 3))
#define LOWORD(x) (*((_WORD *)&(x) + 0))
#define HIWORD(x) (*((_WORD *)&(x) + 1))
#define LODWORD(x) (*((_DWORD *)&(x) + 0))
#define HIDWORD(x) (*((_DWORD *)&(x) + 1))
#define SLOBYTE(x) (*((char *)&(x) + 0))
#define SHIWORD(x) (*((short *)&(x) + 1))
#define SLODWORD(x) (*((int *)&(x) + 0))
#define SHIDWORD(x) (*((int *)&(x) + 1))

// a copy whose size is a compile-time constant
#define qmemcpy memcpy

// a 64-bit value built from two 32-bit halves
#define __PAIR64__(hi, lo) \\
    (((unsigned long long)(unsigned int)(hi) << 32) | (unsigned int)(lo))
#define COERCE_UNSIGNED_INT64(x) (*(unsigned long long *)&(x))
#define COERCE_FLOAT(x) (*(float *)&(x))
#define COERCE_DOUBLE(x) (*(double *)&(x))

// NOTE: approximations. Hex-Rays uses these for functions with a calling
// convention it could not match to a standard one; the register assignments
// they carry are preserved as `/*@<reg>*/` comments on the declaration, so the
// real convention is not lost even though it cannot be spelled in C.
#define __usercall __cdecl
#define __userpurge __cdecl
#define __noreturn __declspec(noreturn)
"""


# ---------------------------------------------------------------------------


def main():
    funcs = parse_pseudocode(PSEUDOCODE)
    known = load_known_funcs(FUNCS_CSV)
    missing = apply_known_names(funcs, known)
    classify_runtime(funcs)
    apply_evidence_tags(funcs)
    modules = assign_modules(funcs)

    addr_syms, str_syms = collect_data_symbols(funcs)
    dangling = collect_dangling_calls(funcs)
    strings, unresolved = resolve_strings(EXE, str_syms)
    renames = build_renames(funcs)

    os.makedirs(OUTDIR, exist_ok=True)
    for stale in os.listdir(OUTDIR):
        if stale.endswith(".c") or stale.endswith(".h"):
            os.remove(os.path.join(OUTDIR, stale))

    for name, run in modules:
        emit_module(os.path.join(OUTDIR, name + ".c"), name, run, renames)
    emit_defs(os.path.join(OUTDIR, "defs.h"))
    emit_data_header(
        os.path.join(OUTDIR, "gamedata.h"), addr_syms, strings, unresolved
    )
    emit_funcs_header(os.path.join(OUTDIR, "gamefuncs.h"), modules, dangling)
    emit_master_header(os.path.join(OUTDIR, "bugs.h"))
    emit_coverage(
        os.path.join(OUTDIR, "COVERAGE.md"),
        funcs, modules, strings, unresolved, missing,
    )

    print("%d functions -> %d modules" % (len(funcs), len(modules)))
    print("%d named, %d string symbols resolved (%d unresolved)"
          % (len([f for f in funcs if f.names]), len(strings), len(unresolved)))
    if missing:
        print("WARNING: %d funcs.csv addresses not in the export" % len(missing),
              file=sys.stderr)
    return 0


if __name__ == "__main__":
    sys.exit(main())
