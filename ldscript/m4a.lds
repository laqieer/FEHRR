. = m4aSoundInit - 1;
.text.m4aSoundInitOld : {*(.text.m4aSoundInitOld)}
. = SoundMainRam_load - 1 - 16;
.rodata.pSoundMainRAM : {*(.rodata.pSoundMainRAM)}
. = m4aSongNumStart - 1;
.text.m4aSongNumStartOld : {*(.text.m4aSongNumStartOld)}
. = m4aSongNumStartOrChange - 1;
.text.m4aSongNumStartOrChangeOld : {*(.text.m4aSongNumStartOrChangeOld)}
. = m4aSongNumStartOrContinue - 1;
.text.m4aSongNumStartOrContinueOld : {*(.text.m4aSongNumStartOrContinueOld)}
. = m4aSongNumStop - 1;
.text.m4aSongNumStopOld : {*(.text.m4aSongNumStopOld)}
. = m4aSongNumContinue - 1;
.text.m4aSongNumContinueOld : {*(.text.m4aSongNumContinueOld)}
. = gMusicPlayerTable + 8;
.rodata.gMusicPlayer_FightBgm_NumTracks : {*(.rodata.gMusicPlayer_FightBgm_NumTracks)}
. = gMusicPlayerTable + 12;
.rodata.gMusicPlayer_MainBgm_Ent : {*(.rodata.gMusicPlayer_MainBgm_Ent)}
