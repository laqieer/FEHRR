#!/usr/bin/env python3
# Path: glyph/glyph.py

import os
import re
import shutil
import warnings
from pathlib import Path
from enum import Enum

class GlyphType(Enum):
    GlyS = 0 # System
    GlyT = 1 # Talk

class Language(Enum):
    EN = 0
    JA = 1
    ZH = 2

FontType = {
    GlyphType.GlyS: 'item',
    GlyphType.GlyT: 'text',
}

TextLanguage = {
    'ENGLISH': Language.EN,
    'JAPANESE': Language.JA,
    'CHINESE': Language.ZH,
}

freqs = {
    Language.EN: {},
    Language.JA: {},
    Language.ZH: {},
}

def is_ascii(c):
    return ord(c) < 128

def count_glyph_frequency(filename):
    with open(filename, 'r', encoding='utf-8') as f:
        for line in f:
            match = re.search(r'^\s*\[LANGUAGE_([A-Z]+)\] = (.*)$', line)
            if match:
                language = TextLanguage[match.group(1)]
                for character in match.group(2):
                    if is_ascii(character):
                        continue
                    # if language == Language.EN:
                    #     warnings.warn(f'Non-ASCII character {character} found in English text: {match.group(2)}')
                    if character not in freqs[language]:
                        freqs[language][character] = 0
                    freqs[language][character] += 1

def read_vanilla_glyphs(filename):
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

def set_space_width(glyphs, width):
    glyphs[' ']['width'] = width

def read_narrow_glyphs(glyphs, filename):
    with open(filename, 'r', encoding='utf-8') as f:
        for match in re.findall(fr'^(.+)glyph_([a-z]):\n.+\n.+\nBYTE 0x([0-9a-fA-F]+) //character width\n.+\n.+\n#incbin "(.+).img.bin"$', f.read(), re.MULTILINE):
            isCapital = False
            if match[0].startswith('Up'):
                isCapital = True
            type = GlyphType.GlyS
            if match[0].endswith('S'):
                type = GlyphType.GlyT
            else:
                assert(match[0].endswith('M'))
            character = match[1]
            if isCapital:
                character = character.upper()
            if character not in glyphs:
                glyphs[character] = {
                    "width": int(match[2], 16),
                }
                shutil.copyfile(Path(filename).parent/f'{match[3]}.png', Path(f'gfx/glyph/{Language.EN.name}')/f'{type.name}{Language.EN.name}_{"".join("{:02X}".format(x) for x in character.encode("utf-8"))}.png')

def read_more_glyphs(glyphs, dirname, type, language):
    with open(Path(dirname)/'font.fontall.txt', 'r', encoding='utf-8') as f:
        for line in f:
            match = re.search(fr'^(.)\t{FontType[type]}\t([0-9]+)\tFont{FontType[type].capitalize()}(.+).png$', line)
            if match:
                character = match.group(1)
                if not is_ascii(character) and character not in freqs[language]:
                    continue
                if character not in glyphs:
                    freqs[language][character] = -1
                    glyphs[character] = {
                        "width": int(match.group(2), 10),
                    }
                    shutil.copyfile(Path(dirname)/f'Font{FontType[type].capitalize()}{match.group(3)}.png', Path(f'gfx/glyph/{language.name}')/f'{type.name}{language.name}_{"".join("{:02X}".format(x) for x in character.encode("utf-8"))}.png')

def make_linker_script_file(glyphs, filename):
    with open(filename, 'w', encoding='utf-8') as f:
        for character, glyph in glyphs.items():
            f.write(f'{Path(filename).stem}_{"".join("{:02X}".format(x) for x in character.encode("utf-8"))}Tiles = 0x{glyph["bitmap"]}; /* {character} */\n')

def make_C_header_file(glyphs, filename):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write('#pragma once\n\n')
        for character in glyphs.keys():
            f.write(f'extern const unsigned int {Path(filename).stem}_{"".join("{:02X}".format(x) for x in character.encode("utf-8"))}Tiles[]; /* {character} */\n')

def make_C_source_file(glyphs, filename, language):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write('#include <stddef.h>\n')
        f.write('#include "textNew.h"\n')
        f.write(f'#include "gfx_glyph_{language.name}.h"\n')
        # f.write(f'#include "{Path(filename).stem}.h"\n')
        f.write('\n')
        g = {}
        for character, glyph in glyphs.items():
            b = [x for x in character.encode("utf-8")]
            b += [0] * (4 - len(b))
            f.write(f'const struct GlyphNew {Path(filename).stem}_{"".join("{:02X}".format(x) for x in character.encode("utf-8"))} = {{ /* {character} */\n')
            if b[0] in g:
                f.write(f'    .next = &{Path(filename).stem}_{"".join("{:02X}".format(x) for x in g[b[0]].encode("utf-8"))},\n')
            else:
                f.write(f'    .next = NULL,\n')
            g[b[0]] = character
            f.write(f'    .width = {glyph["width"]},\n')
            f.write(f'    .utf_byte_2 = 0x{b[1]:02x},\n')
            f.write(f'    .utf_byte_3 = 0x{b[2]:02x},\n')
            f.write(f'    .utf_byte_4 = 0x{b[3]:02x},\n')
            f.write(f'    .bitmap = {Path(filename).stem}_{"".join("{:02X}".format(x) for x in character.encode("utf-8"))}Tiles,\n')
            f.write('};\n\n')
        f.write(f'struct GlyphNew const * const {Path(filename).stem}New[0x100 - 0x20] = {{\n')
        for byte1, character in g.items():
            f.write(f'    [0x{byte1:02x} - 0x20] = &{Path(filename).stem}_{"".join("{:02X}".format(x) for x in character.encode("utf-8"))},\n')
        f.write('};\n')

def clear_glyphs(dirname, language):
    dirname = Path(dirname)/language.name
    for filename in os.listdir(dirname):
        if filename.endswith('.png'):
            os.remove(Path(dirname)/filename)

def main():
    clear_glyphs('gfx/glyph', Language.EN)
    clear_glyphs('gfx/glyph', Language.JA)
    clear_glyphs('gfx/glyph', Language.ZH)
    count_glyph_frequency('source/texts.c')
    count_glyph_frequency('include/scenarioTexts.h')
    count_glyph_frequency('include/unitTexts.h')
    count_glyph_frequency('include/skillTexts.h')
    count_glyph_frequency('include/stageTexts.h')
    count_glyph_frequency('include/musicTexts.h')
    glyphs = {}
    read_narrow_glyphs(glyphs, "glyph/NarrowFont/MenuLowercase/LowercaseMenu.txt")
    read_narrow_glyphs(glyphs, "glyph/NarrowFont/MenuUppercase/UppercaseMenu.txt")
    read_more_glyphs(glyphs, "glyph/fe7u", GlyphType.GlyS, Language.EN)
    read_more_glyphs(glyphs, "glyph/fe8u", GlyphType.GlyS, Language.EN)
    read_more_glyphs(glyphs, "glyph/fe6j", GlyphType.GlyS, Language.EN)
    read_more_glyphs(glyphs, "glyph/Microsoft Sans Serif/缺字增补", GlyphType.GlyS, Language.EN)
    set_space_width(glyphs, 2) # short space
    make_C_source_file(glyphs, "source/GlySEN.c", Language.EN)
    glyphs = {}
    read_more_glyphs(glyphs, "glyph/fe6j", GlyphType.GlyS, Language.JA)
    read_more_glyphs(glyphs, "glyph/fe7j", GlyphType.GlyS, Language.JA)
    read_more_glyphs(glyphs, "glyph/fe8j", GlyphType.GlyS, Language.JA)
    read_more_glyphs(glyphs, "glyph/Microsoft Sans Serif/常用日语汉字", GlyphType.GlyS, Language.JA)
    read_more_glyphs(glyphs, "glyph/fe8u", GlyphType.GlyS, Language.JA)
    read_more_glyphs(glyphs, "glyph/Microsoft Sans Serif/缺字增补", GlyphType.GlyS, Language.JA)
    make_C_source_file(glyphs, "source/GlySJA.c", Language.JA)
    glyphs = {}
    read_more_glyphs(glyphs, "glyph/标点符号/道具标点", GlyphType.GlyS, Language.ZH)
    read_more_glyphs(glyphs, "glyph/fe6cn", GlyphType.GlyS, Language.ZH)
    read_more_glyphs(glyphs, "glyph/fe7cn", GlyphType.GlyS, Language.ZH)
    read_more_glyphs(glyphs, "glyph/fe8cn", GlyphType.GlyS, Language.ZH)
    read_more_glyphs(glyphs, "glyph/GBA火纹中文字库/道具标点", GlyphType.GlyS, Language.ZH)
    read_more_glyphs(glyphs, "glyph/GBA火纹中文字库/一级道具字体", GlyphType.GlyS, Language.ZH)
    read_more_glyphs(glyphs, "glyph/GBA火纹中文字库/二级道具字体", GlyphType.GlyS, Language.ZH)
    read_more_glyphs(glyphs, "glyph/fe8j", GlyphType.GlyS, Language.ZH)
    read_more_glyphs(glyphs, "glyph/fe8u", GlyphType.GlyS, Language.ZH)
    read_more_glyphs(glyphs, "glyph/Microsoft Sans Serif/缺字增补", GlyphType.GlyS, Language.ZH)
    make_C_source_file(glyphs, "source/GlySZH.c", Language.ZH)
    glyphs = {}
    read_narrow_glyphs(glyphs, "glyph/NarrowFont/SerifLowercase/LowercaseSerif.txt")
    read_narrow_glyphs(glyphs, "glyph/NarrowFont/SerifUppercase/UppercaseSerif.txt")
    read_more_glyphs(glyphs, "glyph/fe7u", GlyphType.GlyT, Language.EN)
    read_more_glyphs(glyphs, "glyph/fe8u", GlyphType.GlyT, Language.EN)
    read_more_glyphs(glyphs, "glyph/fe6j", GlyphType.GlyT, Language.EN)
    read_more_glyphs(glyphs, "glyph/Microsoft Sans Serif/缺字增补", GlyphType.GlyT, Language.EN)
    set_space_width(glyphs, 2) # short space
    make_C_source_file(glyphs, "source/GlyTEN.c", Language.EN)
    glyphs = {}
    read_more_glyphs(glyphs, "glyph/fe6j", GlyphType.GlyT, Language.JA)
    read_more_glyphs(glyphs, "glyph/fe7j", GlyphType.GlyT, Language.JA)
    read_more_glyphs(glyphs, "glyph/fe8j", GlyphType.GlyT, Language.JA)
    read_more_glyphs(glyphs, "glyph/Microsoft Sans Serif/常用日语汉字", GlyphType.GlyT, Language.JA)
    read_more_glyphs(glyphs, "glyph/fe8u", GlyphType.GlyT, Language.JA)
    read_more_glyphs(glyphs, "glyph/Microsoft Sans Serif/缺字增补", GlyphType.GlyT, Language.JA)
    make_C_source_file(glyphs, "source/GlyTJA.c", Language.JA)
    glyphs = {}
    read_more_glyphs(glyphs, "glyph/标点符号/对话标点", GlyphType.GlyT, Language.ZH)
    read_more_glyphs(glyphs, "glyph/GBA火纹中文字库/对话标点", GlyphType.GlyT, Language.ZH)
    read_more_glyphs(glyphs, "glyph/GBA火纹中文字库/一级对话字体", GlyphType.GlyT, Language.ZH)
    read_more_glyphs(glyphs, "glyph/GBA火纹中文字库/二级对话字体", GlyphType.GlyT, Language.ZH)
    read_more_glyphs(glyphs, "glyph/fe6cn", GlyphType.GlyT, Language.ZH)
    read_more_glyphs(glyphs, "glyph/fe7cn", GlyphType.GlyT, Language.ZH)
    read_more_glyphs(glyphs, "glyph/fe8cn", GlyphType.GlyT, Language.ZH)
    read_more_glyphs(glyphs, "glyph/fe8j", GlyphType.GlyT, Language.ZH)
    read_more_glyphs(glyphs, "glyph/fe8u", GlyphType.GlyT, Language.ZH)
    read_more_glyphs(glyphs, "glyph/Microsoft Sans Serif/缺字增补", GlyphType.GlyT, Language.ZH)
    make_C_source_file(glyphs, "source/GlyTZH.c", Language.ZH)
    for language in Language:
        glyphs = {k: v for k, v in freqs[language].items() if v != -1}
        if len(glyphs) > 0:
            warnings.warn(f'Missing glyphs ({language.name}): {"".join(glyphs.keys())}')

if __name__ == "__main__":
    main()
