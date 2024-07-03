#include "prelude.h"

#include "event.h"
#include "unit.h"
#include "item.h"
#include "bm.h"
#include "bmNew.h"
#include "faction.h"
#include "map.h"
#include "chapter.h"
#include "chapterinfo.h"
#include "unitsprite.h"
#include "constants/chapters.h"

struct HardModeBonusLevelsOverrideEnt
{
    /* 00 */ u8 pid;
    /* 04 */ int bonus_levels;
};

extern struct HardModeBonusLevelsOverrideEnt const gHardModeBonusLevelsOverrideList[];

extern u8 gUnk_0203D3D9; // ending id

bool IsFaeBlue(void);

int GetHardModeBonusLevelsByPidNew(u8 pid)
{
    struct HardModeBonusLevelsOverrideEnt const * it = gHardModeBonusLevelsOverrideList;

    while (it->pid != 0)
    {
        if (it->pid == pid)
            return it->bonus_levels;

        ++it;
    }

    return GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->hard_bonus_levels;
}

int GetHardModeBonusLevelsByPidOld(u8 pid)
{
    return GetHardModeBonusLevelsByPidNew(pid);
}

void func_fe6_0806D9F4New(int chapter, int x, int y)
{
    InitUnits();

    SetChapterInPlaySt(&gPlayStNew, chapter);

    func_fe6_08029084();

    gPlaySt.vision = GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->fog;

    gBmSt.camera.x = GetCameraCenteredX(x * 16 + 8);
    gBmSt.camera.y = GetCameraCenteredY(y * 16 + 8);

    RefreshEntityMaps();
    RenderMap();
    RefreshUnitSprites();
}

void func_fe6_0806D9F4Old(int chapter, int x, int y)
{
    func_fe6_0806D9F4New(chapter, x, y);
}

void UpdateEndingIdNew(void)
{
    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_FINAL)
    {
        if (CheckFlag(FLAG_123) && IsFaeBlue())
        {
            gUnk_0203D3D9 = 0;
        }
        else
        {
            gUnk_0203D3D9 = 1;
        }
    }
    else
    {
        gUnk_0203D3D9 = 2;
    }
}

void UpdateEndingIdOld(void)
{
    UpdateEndingIdNew();
}
