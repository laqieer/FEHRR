. = ProcScr_Face;
.rodata.ProcScr_FaceNew : {*(.rodata.ProcScr_FaceNew)}
. = StartFace - 1;
.text.StartFaceOld : {*(.text.StartFaceOld)}
. = PutFaceChibi - 1;
.text.PutFaceChibiOld : {*(.text.PutFaceChibiOld)}
. = UnpackFaceChibiSprGraphics - 1;
.text.UnpackFaceChibiSprGraphicsOld : {*(.text.UnpackFaceChibiSprGraphicsOld)}
. = PutFace80x72 - 1;
.text.PutFace80x72Old : {*(.text.PutFace80x72Old)}
