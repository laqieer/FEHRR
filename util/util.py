#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# Path: util/util.py

import re

class Pointer:
    def __init__(self, value):
        self.value = value
        if self.value < 0x2000000:
            self.value += 0x8000000

    def __str__(self):
        return hex(self.value)

    def __repr__(self):
        return f'Pointer(0x{self.value:x})'

    def __eq__(self, other):
        return self.value == other.value

    def __ne__(self, other):
        return self.value != other.value

    def __hash__(self):
        return hash(self.value)

    def to_address(self):
        return self.value

    def to_offset(self):
        return self.value & 0xFFFFFF

    def to_bytes(self):
        return self.value.to_bytes(4, byteorder='little')


class ROM:
    def __init__(self, path):
        self.path = path

    def read(self, offset, size):
        with open(self.path, 'rb') as f:
            f.seek(offset)
            return f.read(size)

    def read_u8(self, offset):
        return self.read(offset, 1)[0]

    def read_u16(self, offset):
        return int.from_bytes(self.read(offset, 2), 'little')

    def read_u32(self, offset):
        return int.from_bytes(self.read(offset, 4), 'little')

    def read_pointer(self, offset):
        return Pointer(self.read_u32(offset))

    def find_pointer(self, pointer):
        with open(self.path, 'rb') as f:
            return [Pointer(m.start()) for m in re.finditer(re.escape(pointer.to_bytes()), f.read())]

    def read_string(self, offset):
        with open(self.path, 'rb') as f:
            f.seek(offset)
            return f.read(0x1000).split(b'\0')[0].decode('shift-jis', errors="ignore")

    def find_string(self, string):
        with open(self.path, 'rb') as f:
            return [Pointer(m.start()) for m in re.finditer(re.escape(string.encode('shift-jis')), f.read())]


def main():
    rom = ROM('baserom.gba')
    for p in [Pointer(x) for x in [0x8105710, 0x810571c, 0x8105728, 0x8105734, 0x8105740, 0x810574c, 0x8105758, 0x8105764, 0x8105770, 0x810577c]]:
        string = rom.read_string(p.to_offset())
        print(f'{p}: {string}')
        pointers = rom.find_string(string)
        for pointer in pointers:
            if(string == rom.read_string(pointer.to_offset())):
                results = rom.find_pointer(pointer)
                if len(results) > 0:
                    print(f'{pointer}: {results}')
                    for result in results:
                        assert(pointer == rom.read_pointer(result.to_offset()))

if __name__ == '__main__':
    main()
