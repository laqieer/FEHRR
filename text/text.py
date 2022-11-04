#!/usr/bin/env python3
# Path: text/text.py

import re
from enum import Enum

class Language(Enum):
    LANGUAGE_JAPANESE = 0
    LANGUAGE_ENGLISH = 1
    LANGUAGE_CHINESE = 2

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
        for index in sorted(texts[0].keys()):
            if index < 0x8000000:
                f.write(f'    [{index}] = {{\n')
                for language in Language:
                    f.write(f'        [{language.name}] = "{texts[language.value][index]}",\n')
                f.write('    },\n\n')
        f.write('};\n')

def main():
    texts = [
        read_texts_from_file("text/fe6jp.txt"),
        read_texts_from_file("text/fe6en.txt"),
        read_texts_from_file("text/fe6cn.txt"),
    ]
    make_C_source_file(texts, "source/texts.c")

if __name__ == "__main__":
    main()
