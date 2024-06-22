
#include "ai.h"

#include "item.h"
#include "unit.h"
#include "map.h"
#include "mapwork.h"
#include "faction.h"
#include "ai_decide.h"
#include "ai_utility.h"
#include "ai_script.h"
#include "ai_data.h"

#include "constants/iids.h"
#include "constants/terrains.h"
#include "constants/chapters.h"

#include "bmNew.h"

struct Unk_0810DB34
{
    u16 iid;
    void (* func)(int slot, bool (* is_enemy)(struct Unit * unit));
};

struct Unk_0810DB9C
{
    u16 iid;
    void (* func)(int slot);
};

struct Unk_085C98D0
{
    int x, y;
};

struct AiEscapePt const * AiGetNearestEscapePoint(void);

void AiFillDangerMap(void);

void func_fe6_08033D5C(int slot, bool (* is_enemy)(struct Unit * unit));
void func_fe6_08033ECC(int slot, bool (* is_enemy)(struct Unit * unit));
void func_fe6_08034094(int slot, bool (* is_enemy)(struct Unit * unit));
void func_fe6_08034178(int slot, bool (* is_enemy)(struct Unit * unit));
void func_fe6_080342C4(int slot, bool (* is_enemy)(struct Unit * unit));
void func_fe6_080344AC(int slot, bool (* is_enemy)(struct Unit * unit));
void func_fe6_0803462C(int slot, bool (* is_enemy)(struct Unit * unit));
void func_fe6_080347A4(int slot, bool (* is_enemy)(struct Unit * unit));

void func_fe6_08034B58(int slot);
void func_fe6_08034BF0(int slot);
void func_fe6_08034CC0(int slot);

extern u8 gUnk_Pid_02039694;

struct AiEscapePt const * AiGetNearestEscapePointNew(void)
{
    struct AiEscapePt const * list = NULL;
    struct AiEscapePt const * result = NULL;

    int chapter = GetChapterInPlaySt(&gPlayStNew);

    //TODO: support more chapters
    if (chapter > CHAPTER_COUNT)
        return NULL;

    u8 resultMove = UINT8_MAX;

    switch (gPlaySt.faction)
    {

    case FACTION_BLUE:
        return NULL;

    case FACTION_RED:
        list = gAiRedEscapePoints[chapter];
        break;

    case FACTION_GREEN:
        list = gAiGreenEscapePoints[chapter];
        break;

    }

    for (int i = 0; list[i].x != UINT8_MAX; ++i)
    {
        if (gMapMovement[list[i].y][list[i].x] > MAP_MOVEMENT_MAX)
            continue;

        if (resultMove > gMapMovementSigned[list[i].y][list[i].x])
        {
            resultMove = gMapMovementSigned[list[i].y][list[i].x];
            result = list+i;
        }
    }

    return result;
}

struct AiEscapePt const * AiGetNearestEscapePointOld(void)
{
    return AiGetNearestEscapePointNew();
}
