. = InitTalk - 1;
.text.InitTalkOld : {*(.text.InitTalkOld)}
. = StartTalkOpen - 1;
.text.StartTalkOpenOld : {*(.text.StartTalkOpenOld)}
. = TalkInterpret - 1;
.text.TalkInterpretOld : {*(.text.TalkInterpretOld)}
. = TalkInterpretNewFace - 1;
.text.TalkInterpretNewFaceOld : {*(.text.TalkInterpretNewFaceOld)}
. = PutTalkBubble - 1;
.text.PutTalkBubbleOld : {*(.text.PutTalkBubbleOld)}
. = TalkDebug_OnIdle - 1;
.text.TalkDebug_OnIdleOld : {*(.text.TalkDebug_OnIdleOld)}
