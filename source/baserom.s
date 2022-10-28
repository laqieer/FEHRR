    .section .baserom,"x"
    .global _start
_start:
    .incbin "../baserom.gba", 0, 0x7FF0A4
