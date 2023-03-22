. = ProcScr_GameController;
.rodata.ProcScr_GameControllerNew : {*(.rodata.ProcScr_GameControllerNew)}
. = GC_InitTutorial - 1;
.text.GC_InitTutorialOld : {*(.text.GC_InitTutorialOld)}
. = GC_InitNextChapter - 1;
.text.GC_InitNextChapterOld : {*(.text.GC_InitNextChapterOld)}
. = StartGame - 1;
.text.StartGameOld : {*(.text.StartGameOld)}
. = SetNextChapter - 1;
.text.SetNextChapterOld : {*(.text.SetNextChapterOld)}
. = HasNextChapter - 1;
.text.HasNextChapterOld : {*(.text.HasNextChapterOld)}
. = GetFurthestSaveChapter - 1;
.text.GetFurthestSaveChapterOld : {*(.text.GetFurthestSaveChapterOld)}
