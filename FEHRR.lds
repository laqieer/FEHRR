OUTPUT_ARCH(arm)
ENTRY(_start)

INCLUDE ../ldscript/decomp/output/fe6.lds
INCLUDE ../ldscript/fe6.lds

SECTIONS
{
    . = 0x203D3E0;
	.bss : { *(.bss.*) *(.bss) }
    __end__ = .;
	. = 0x8000000;
	.baserom : { KEEP (*(.baserom)) }
    INCLUDE ../ldscript/hack.lds
    . = 0x87FF0A4;
	.text : { *(.text.*) *(.text) }
	. = ALIGN(4);
    .rodata : { *(.rodata.*) *(.rodata) }
	. = ALIGN(4);
    .data : { *(.data.*) *(.data) }
    INCLUDE ../ldscript/debug.lds
    /DISCARD/ : { *(*) }
}
