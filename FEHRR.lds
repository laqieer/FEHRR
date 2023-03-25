OUTPUT_ARCH(arm)
ENTRY(_start)

INCLUDE ../ldscript/decomp/output/fe6.lds
INCLUDE ../ldscript/fe6.lds

SECTIONS
{
    . = FreeIRamSpace;
    .iwram : { m4a_hq_mixer.*(.bss) }
    . = FreeERamSpace;
	.bss : { *(.bss.*) *(.bss) }
    __end__ = .;
	. = BaseRomSpace;
	.baserom : { KEEP (*(.baserom)) }
    INCLUDE ../ldscript/hack.lds
    . = FreeRomSpace;
	.text : { *(.text.*) *(.text) }
	. = ALIGN(4);
    .rodata : { *(.rodata.*) *(.rodata) }
	. = ALIGN(4);
    .data : { *(.data.*) *(.data) }
    INCLUDE ../ldscript/debug.lds
    /DISCARD/ : { *(*) }
}
