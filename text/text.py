#!/usr/bin/env python3
# Path: text/text.py

import re
from enum import Enum

class Language(Enum):
    LANGUAGE_JAPANESE = 0
    LANGUAGE_ENGLISH = 1
    LANGUAGE_CHINESE = 2
    LANGUAGE_ENGLISH2 = 3

def read_texts_from_file(filename):
    texts = {}
    index = 0
    text = ""
    with open(filename, 'r') as f:
        for line in f:
            indexStrs = re.findall(r'^\[([0-9a-fA-F]+)\]$', line)
            if indexStrs:
                if text:
                    texts[index] = text.replace('""""', '')
                index = int(indexStrs[0], 16)
                text = ""
                continue
            text += re.sub(r'@([0-9a-fA-F]{2})([0-9a-fA-F]{2})', r'""\\x\2\\x\1""', line.replace('\n', '@0001').replace('"', '\\"')).replace('\\x00', '')
    return texts

def make_C_source_file(texts, filename):
    with open(filename, 'w') as f:
        f.write('#include "textNew.h"\n\n')
        f.write('const char * const gMsgTableNew[][LANGUAGE_NUM] = {\n')
        id = 0
        ids = {}
        for index in sorted(texts[0].keys()):
            if index < 0x1000000:
                id = index
            else:
                id += 1
                ids[id] = index
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
            f.write(f'const int textId_{id} = {id};\n')
        return ids

def make_linker_script_file(ids, filename):
    with open(filename, 'w') as f:
        for id, index in ids.items():
            f.write(f'. = 0x{index:x};\n')
            f.write(f'.rodata.textId_{id} : {{*(.rodata.textId_{id})}}\n')

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
