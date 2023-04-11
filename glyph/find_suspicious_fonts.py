#!/usr/bin/env python3

import os
import sys
from pathlib import Path

def check(dirname):
    print('checking' + dirname)
    if not os.path.isdir(Path(dirname)/'suspicious'):
        os.mkdir(Path(dirname)/'suspicious')
    with open(Path(dirname)/'font.fontall.txt', 'r', encoding='utf-8') as f:
        for line in f:
            l = line.strip()
            if len(l) == 0 or l.startswith('//'):
                continue
            _, type, width, filename = l.split()
            if type == 'item' and (int(width) < 7 or int(width) > 9):
                if os.path.isfile(Path(dirname)/filename):
                    os.rename(Path(dirname)/filename, Path(dirname)/'suspicious'/filename)
                print(l)

def main():
    for dir in sys.argv[1:]:
        check(dir)

if __name__ == '__main__':
    main()
