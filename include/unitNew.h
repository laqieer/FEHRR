#pragma once

#define UNIT_LEVEL_MAX_NEW 30

#define PLAYER_UNIT_GRWOTH_FACTOR_SKL 2
#define PLAYER_UNIT_GRWOTH_FACTOR_LCK 2

struct Unit * GetUnitToSelectAuto();
struct PInfo const * GetHeroPInfo(int pid);
struct Unit * GetBlueUnitByPid(int pid);
