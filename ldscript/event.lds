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
