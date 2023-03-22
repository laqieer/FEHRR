. = SetFogVision - 1;
.text.SetFogVisionOld : {*(.text.SetFogVisionOld)}
. = ProcScr_ChapterIntro;
.rodata.ProcScr_ChapterIntroNew : {*(.rodata.ProcScr_ChapterIntroNew)}
. = ChapterIntro_BeginFadeToMap - 1;
.text.ChapterIntro_BeginFadeToMapOld : {*(.text.ChapterIntro_BeginFadeToMapOld)}
. = ChapterIntro_LoopFadeToMap - 1;
.text.ChapterIntro_LoopFadeToMapOld : {*(.text.ChapterIntro_LoopFadeToMapOld)}
. = ChapterIntro_BeginFastFadeToMap - 1;
.text.ChapterIntro_BeginFastFadeToMapOld : {*(.text.ChapterIntro_BeginFastFadeToMapOld)}
. = ChapterIntro_LoopFastFadeToMap - 1;
.text.ChapterIntro_LoopFastFadeToMapOld : {*(.text.ChapterIntro_LoopFastFadeToMapOld)}
