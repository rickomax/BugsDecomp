#!/usr/bin/env python3

"""
Checks the reconstructed sources in `recon/` against the pseudocode export.

The reconstruction is a mechanical rewrite of the export, so it must not lose,
duplicate or reshape any code. This verifies that:

- every function in the export is emitted exactly once, at the same address;
- each emitted body has the same delimiter structure and statement count as the
  one it came from, i.e. the rewrites did not eat or add code;
- no Hex-Rays construct that is not C survived the rewrite;
- every function and data symbol the code refers to is actually declared.

Exits non-zero and prints what failed if any check does not hold.
"""

import os
import re
import sys

import recon


FUNC_HEADER_RE = re.compile(
    r"^// 0x([0-9a-f]{6})  (\S+)$", re.M
)
COMMENT_RE = re.compile(r"/\*.*?\*/|//[^\n]*", re.S)
IDENT_RE = re.compile(r"\b[A-Za-z_]\w*\b")


def strip_comments(text):
    return COMMENT_RE.sub(" ", text)


def strip_annotations(text):
    """Removes the Hex-Rays annotations the reconstruction turns into comments."""

    text = re.sub(r"__spoils<[^>]*> ", "", text)
    text = re.sub(r"@<[A-Za-z0-9:]+>", "", text)
    return re.sub(r"(?<=[(,])(\s*)[A-Za-z_]\w*: (?!:)", r"\1", text)


def unfold_memory(text):
    """Turns an absolute access back into the `MEMORY[...]` it was made from."""

    return re.sub(r"\(\*\(int \*\)(0x[0-9A-Fa-f]+)\)", r"MEMORY[\1]", text)


def load_emitted():
    """Returns {addr: (name, body)} for the functions in `recon/*.c`."""

    emitted = {}
    for entry in sorted(os.listdir(recon.OUTDIR)):
        if not entry.endswith(".c"):
            continue
        with open(os.path.join(recon.OUTDIR, entry), encoding="utf-8") as fp:
            text = fp.read()
        marks = list(FUNC_HEADER_RE.finditer(text))
        for i, mark in enumerate(marks):
            end = marks[i + 1].start() if i + 1 < len(marks) else len(text)
            addr = int(mark.group(1), 16)
            if addr in emitted:
                error("0x%06x emitted more than once" % addr)
            emitted[addr] = (mark.group(2), text[mark.end():end], entry)
    return emitted


ERRORS = []


def error(msg):
    ERRORS.append(msg)


def check_bodies(funcs, emitted):
    """Compares each emitted body against the one it was made from."""

    for func in funcs:
        if func.addr not in emitted:
            error("0x%06x (%s) was not emitted" % (func.addr, func.name))
            continue
        name, body, module = emitted[func.addr]
        if name != func.name:
            error(
                "0x%06x emitted as %s, expected %s" % (func.addr, name, func.name)
            )

        # The rewrites either turn a Hex-Rays annotation into a comment or
        # spell an absolute access out in C. Undo both, independently of how
        # recon.py does it, and nothing else about the code may have moved.
        src = strip_comments(strip_annotations(func.body))
        dst = unfold_memory(strip_comments(body))
        for token in "{}();,":
            if src.count(token) != dst.count(token):
                error(
                    "0x%06x (%s in %s): %d '%s' in the export, %d emitted"
                    % (func.addr, name, module, src.count(token), token,
                       dst.count(token))
                )

    for addr in emitted:
        if not any(f.addr == addr for f in funcs):
            error("0x%06x was emitted but is not in the export" % addr)


def check_no_hexrays_isms(emitted):
    """Nothing that only Hex-Rays understands may survive."""

    banned = {
        "nullptr": re.compile(r"\bnullptr\b"),
        "named argument": re.compile(r"[(,]\s*[A-Za-z_]\w*: (?!:)"),
        "register annotation": re.compile(r"(?<!/\*)@<"),
        "MEMORY[...]": re.compile(r"\bMEMORY\["),
        "__spoils<>": re.compile(r"(?<!/\*)__spoils<"),
    }
    for addr, (name, body, module) in sorted(emitted.items()):
        for what, pattern in banned.items():
            if pattern.search(body):
                error("0x%06x (%s in %s): %s left in" % (addr, name, module, what))


def check_symbols_declared(funcs, emitted, addr_syms, strings, unresolved):
    """Every game symbol the code refers to must be declared somewhere."""

    declared = set(addr_syms) | set(strings) | set(unresolved)
    declared |= {name for name, _body, _module in emitted.values()}
    declared |= set(recon.collect_dangling_calls(funcs))

    unknown = set()
    for _name, body, _module in emitted.values():
        text = strip_comments(body)
        for ident in IDENT_RE.findall(text):
            if ident in declared:
                continue
            if recon.ADDR_SYMBOL_RE.fullmatch(ident):
                unknown.add(ident)
            elif ident.startswith("sub_") or ident.startswith("nullsub_"):
                unknown.add(ident)
    for ident in sorted(unknown):
        error("%s is referred to but never declared" % ident)


def main():
    funcs = recon.parse_pseudocode(recon.PSEUDOCODE)
    known = recon.load_known_funcs(recon.FUNCS_CSV)
    recon.apply_known_names(funcs, known)
    recon.classify_runtime(funcs)
    recon.apply_evidence_tags(funcs)
    recon.assign_modules(funcs)
    addr_syms, str_syms = recon.collect_data_symbols(funcs)
    strings, unresolved = recon.resolve_strings(recon.EXE, str_syms)

    emitted = load_emitted()

    check_bodies(funcs, emitted)
    check_no_hexrays_isms(emitted)
    check_symbols_declared(funcs, emitted, addr_syms, strings, unresolved)

    if ERRORS:
        for msg in ERRORS[:40]:
            print("FAIL: %s" % msg)
        if len(ERRORS) > 40:
            print("... and %d more" % (len(ERRORS) - 40))
        return 1

    print("OK: %d functions, %d data symbols, %d strings"
          % (len(emitted), len(addr_syms), len(strings)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
