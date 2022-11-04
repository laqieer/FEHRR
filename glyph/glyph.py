#!/usr/bin/env python3
# Path: glyph/glyph.py

import re
from pathlib import Path
from enum import Enum

class GlyphType(Enum):
    GLYPH_TYPE_SYSTEM = 0
    GLYPH_TYPE_TALK = 1

def read_glyphs_from_file(filename):
    glyphs = {}
    with open(filename, 'r') as f:
        for line in f:
            match = re.search(r'^([0-9a-fA-F]{2}) ([0-9a-fA-F]{2}): width = ([0-9]+), bitmap = 0x([0-9a-fA-F]{7})$', line)
            if match:
                character = bytes([int(match.group(1), 16), int(match.group(2), 16)]).decode('cp932')
                glyphs[character] = {
                    "width": int(match.group(3), 10),
                    "bitmap": match.group(4),
                }
    return glyphs

def make_linker_script_file(glyphs, filename):
    with open(filename, 'w', encoding='utf-8') as f:
        for character, glyph in glyphs.items():
            f.write(f'{Path(filename).stem}_{"".join("{:02x}".format(x) for x in character.encode("utf-8"))}_bitmap = 0x{glyph["bitmap"]}; /* {character} */\n')

def make_C_header_file(glyphs, filename):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write('#pragma once\n\n')
        for character in glyphs.keys():
            f.write(f'extern const u32 {Path(filename).stem}_{"".join("{:02x}".format(x) for x in character.encode("utf-8"))}_bitmap[]; // {character}\n')

def make_C_source_file(glyphs, filename):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write('#include <stddef.h>\n')
        f.write('#include "textNew.h"\n')
        f.write(f'#include "{Path(filename).stem}.h"\n\n')
        g = {}
        for character, glyph in glyphs.items():
            b = [x for x in character.encode("utf-8")]
            b += [0] * (4 - len(b))
            f.write(f'const struct GlyphNew {Path(filename).stem}_{"".join("{:02x}".format(x) for x in character.encode("utf-8"))} = {{ // {character}\n')
            if b[0] in g:
                f.write(f'    .next = &{Path(filename).stem}_{"".join("{:02x}".format(x) for x in g[b[0]].encode("utf-8"))},\n')
            else:
                f.write(f'    .next = NULL,\n')
            g[b[0]] = character
            f.write(f'    .width = {glyph["width"]},\n')
            f.write(f'    .utf_byte_2 = 0x{b[1]:02x},\n')
            f.write(f'    .utf_byte_3 = 0x{b[2]:02x},\n')
            f.write(f'    .utf_byte_4 = 0x{b[3]:02x},\n')
            f.write(f'    .bitmap = {Path(filename).stem}_{"".join("{:02x}".format(x) for x in character.encode("utf-8"))}_bitmap,\n')
            f.write('};\n\n')
        f.write(f'struct GlyphNew const * const {Path(filename).stem}New[0x100 - 0x20] = {{\n')
        for byte1, character in g.items():
            f.write(f'    [0x{byte1:02x} - 0x20] = &{Path(filename).stem}_{"".join("{:02x}".format(x) for x in character.encode("utf-8"))},\n')
        f.write('};\n')

def main():
    glyphs = read_glyphs_from_file("glyph/TextGlyphs_System.txt")
    make_linker_script_file(glyphs, "ldscript/TextGlyphs_System.lds")
    make_C_header_file(glyphs, "include/TextGlyphs_System.h")
    make_C_source_file(glyphs, "source/TextGlyphs_System.c")
    glyphs = read_glyphs_from_file("glyph/TextGlyphs_Talk.txt")
    make_linker_script_file(glyphs, "ldscript/TextGlyphs_Talk.lds")
    make_C_header_file(glyphs, "include/TextGlyphs_Talk.h")
    make_C_source_file(glyphs, "source/TextGlyphs_Talk.c")

if __name__ == "__main__":
    main()
