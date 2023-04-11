#!/usr/bin/env python3

import os
import sys
import fileinput
from pathlib import Path

def check(dirname):
    with fileinput.input(Path(dirname)/'font.fontall.txt', inplace=True, encoding='utf-8') as f:
        for line in f:
            l = line.strip()
            if len(l) > 0 and not l.startswith('//') and not os.path.isfile(Path(dirname)/l.split()[3]):
                line = ''
            print(line, end='')

def main():
    for dir in sys.argv[1:]:
        check(dir)

if __name__ == '__main__':
    main()
