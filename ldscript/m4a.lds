. = m4aSoundInit - 1;
.text.m4aSoundInitOld : {*(.text.m4aSoundInitOld)}
. = SoundMainRam_load - 1 - 16;
.rodata.pSoundMainRAM : {*(.rodata.pSoundMainRAM)}
