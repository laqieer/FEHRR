. = PInfoTable;
.rodata.heroes : {*(.rodata.heroes)}
. = UnitBeginAction - 1;
.text.UnitBeginActionOld : {*(.text.UnitBeginActionOld)}
. = UnitInitStats - 1;
.text.UnitInitStatsOld : {*(.text.UnitInitStatsOld)}
. = UnitAutolevelPlayer - 1;
.text.UnitAutolevelPlayerOld : {*(.text.UnitAutolevelPlayerOld)}
. = UnitAutolevel - 1;
.text.UnitAutolevelOld : {*(.text.UnitAutolevelOld)}
. = GetJInfo - 1;
.text.GetJInfoOld : {*(.text.GetJInfoOld)}
. = UnitInitFromInfo - 1;
.text.UnitInitFromInfoOld : {*(.text.UnitInitFromInfoOld)}
