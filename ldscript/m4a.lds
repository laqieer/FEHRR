. = m4aSoundInit - 1;
.text.m4aSoundInitOld : {*(.text.m4aSoundInitOld)}
. = SoundMainRam_load - 1 - 16;
.rodata.pSoundMainRAM : {*(.rodata.pSoundMainRAM)}
. = gMusicPlayerTable + 8;
.rodata.gMusicPlayer_FightBgm_NumTracks : {*(.rodata.gMusicPlayer_FightBgm_NumTracks)}
. = gMusicPlayerTable + 12;
.rodata.gMusicPlayer_MainBgm_Ent : {*(.rodata.gMusicPlayer_MainBgm_Ent)}
