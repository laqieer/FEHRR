. = StartTalkOpen - 1;
.text.StartTalkOpenOld : {*(.text.StartTalkOpenOld)}
. = TalkInterpret - 1;
.text.TalkInterpretOld : {*(.text.TalkInterpretOld)}
. = TalkInterpretNewFace - 1;
.text.TalkInterpretNewFaceOld : {*(.text.TalkInterpretNewFaceOld)}
. = PutTalkBubble - 1;
.text.PutTalkBubbleOld : {*(.text.PutTalkBubbleOld)}
. = ProcScr_TalkDebug;
.rodata.ProcScr_TalkDebugNew : {*(.rodata.ProcScr_TalkDebugNew)}
. = gBattleDefeatTalkList;
.rodata.gBattleDefeatTalkListNew : {*(.rodata.gBattleDefeatTalkListNew)}
