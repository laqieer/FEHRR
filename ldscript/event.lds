. = DisplayBackground - 1;
.text.DisplayBackgroundOld : {*(.text.DisplayBackgroundOld)}
. = DisplayBackgroundNoClear - 1;
.text.DisplayBackgroundNoClearOld : {*(.text.DisplayBackgroundNoClearOld)}
. = LoadUnitWrapper - 1;
.text.LoadUnitWrapperOld : {*(.text.LoadUnitWrapperOld)}
. = EventLoadUnitsAsParty - 1;
.text.EventLoadUnitsAsPartyOld : {*(.text.EventLoadUnitsAsPartyOld)}
. = EvtCmd_SetMap - 1;
.text.EvtCmd_SetMapOld : {*(.text.EvtCmd_SetMapOld)}
. = EvtCmd_Talk - 1;
.text.EvtCmd_TalkOld : {*(.text.EvtCmd_TalkOld)}
. = EvtCmd_TalkAuto - 1;
.text.EvtCmd_TalkAutoOld : {*(.text.EvtCmd_TalkAutoOld)}
. = EvtCmd_GiveMoney - 1;
.text.EvtCmd_GiveMoneyOld : {*(.text.EvtCmd_GiveMoneyOld)}
