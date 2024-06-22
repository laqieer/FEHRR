#!/usr/bin/env python3
# Path: text/text.py

import re
import sys
sys.path.append('.')
import warnings
from enum import Enum
from util import util

class Language(Enum):
    LANGUAGE_JAPANESE = 0
    LANGUAGE_ENGLISH = 1
    LANGUAGE_CHINESE = 2
    LANGUAGE_ENGLISH2 = 3

rom = util.ROM('baserom.gba')

def read_texts_from_file(filename):
    texts = {}
    index = 0
    text = ""
    with open(filename, 'r', encoding='utf-8') as f:
        for line in f:
            indexStrs = re.findall(r'^\[([0-9a-fA-F]+)\]$', line)
            if indexStrs:
                if text:
                    texts[index] = text.replace('""""', '')
                index = int(indexStrs[0], 16)
                text = ""
                continue
            text += re.sub(r'@([0-9a-fA-F]{2})([0-9a-fA-F]{2})', r'""\\x\2\\x\1""', line.replace('\n', '@0001').replace('"', '\\"')).replace('\\x00', '')
    for index, text in list(texts.items()):
        if index >= 0x1000000:
            s = rom.read_string(rom.read_pointer(util.Pointer(index).to_offset()).to_offset())
            if len(s) > 0:
                strings = rom.find_string(s)
                for string in strings:
                    if 0 == rom.read_u8(string.to_offset() - 1):
                        pointers = rom.find_pointer(string)
                        if len(pointers) > 0:
                            existed = False
                            for pointer in pointers:
                                if pointer.to_address() in texts:
                                    existed = True
                                    break
                            if not existed:
                                texts[pointers[0].to_address()] = text
                                print(f'0x{string.to_address():x}: {s} → {text}')
    return texts

def make_C_source_file(texts, filename):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write('#include "textNew.h"\n\n')
        f.write('const char * const gMsgTableNew[][LANGUAGE_NUM] = {\n')
        id = 0
        ids = {}
        history = []
        for index in sorted(texts[0].keys()):
            if index < 0x1000000:
                id = index
            else:
                idi = [p.to_address() for p in rom.find_pointer(rom.read_pointer(util.Pointer(index).to_offset())) if p.to_address() not in history]
                if len(idi) == 0:
                    continue
                id += 1
                if len(idi) > 1:
                    print(f'{id}: 0x{index:x} → {[hex(x) for x in idi]}')
                ids[id] = idi
                history += idi
            f.write(f'    [{id}] = {{\n')
            for language in Language:
                if language == Language.LANGUAGE_ENGLISH2:
                    continue
                if index not in texts[language.value]:
                    if language == Language.LANGUAGE_ENGLISH and index in texts[Language.LANGUAGE_ENGLISH2.value]:
                        f.write(f'        [{language.name}] = "{texts[Language.LANGUAGE_ENGLISH2.value][index]}",\n')
                    else:
                        f.write(f'        [{language.name}] = "", // TODO: Translate it\n')
                else:
                    f.write(f'        [{language.name}] = "{texts[language.value][index]}",\n')
            f.write('    },\n\n')
        f.write('};\n\n')
        for id in ids.keys():
            for i in range(len(ids[id])):
                f.write(f'const int textId_{id}_{i} = {id};\n')
        return ids

def make_linker_script_file(ids, filename):
    with open(filename, 'w', encoding='utf-8') as f:
        for id, pointers in ids.items():
            for i, pointer in enumerate(pointers):
                f.write(f'. = 0x{pointer:x};\n')
                f.write(f'.rodata.textId_{id}_{i} : {{*(.rodata.textId_{id}_{i})}}\n')

def main():
    texts = [
        read_texts_from_file("text/fe6jp.txt"),
        read_texts_from_file("text/fe6en.txt"),
        read_texts_from_file("text/fe6cn.txt"),
        read_texts_from_file("text/fe6en2.txt"),
    ]
    make_linker_script_file(make_C_source_file(texts, "source/texts.c"), "ldscript/texts.lds")

if __name__ == "__main__":
    main()
