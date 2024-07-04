. = ApplyHelpBoxContentSize - 1;
.text.ApplyHelpBoxContentSizeOld : {*(.text.ApplyHelpBoxContentSizeOld)}
. = ApplyHelpBoxPosition - 1;
.text.ApplyHelpBoxPositionOld : {*(.text.ApplyHelpBoxPositionOld)}
. = ProcScr_HelpBox;
.rodata.ClearNewFaceWhenOpenHelpBox : {*(.rodata.ClearNewFaceWhenOpenHelpBox)}
