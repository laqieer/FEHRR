
#include "trap.h"
#include "prelude.h"

#include "sound.h"
#include "proc.h"
#include "msg.h"
#include "item.h"
#include "map.h"
#include "bmfx.h"
#include "faction.h"
#include "targetlist.h"
#include "unitsprite.h"
#include "action.h"
#include "chapterinfo.h"
#include "masseffect.h"
#include "mu.h"
#include "save.h"

#include "constants/iids.h"
#include "constants/terrains.h"
#include "constants/songs.h"
#include "constants/msg.h"

#include "bmNew.h"

extern struct Trap sTraps[TRAP_MAX_COUNT];

void InitMapTrapsNew(void)
{
    int ix, iy;

    for (iy = gMapSize.y - 1; iy >= 0; --iy)
    {
        for (ix = gMapSize.x - 1; ix >= 0; --ix)
        {
            switch (gMapTerrain[iy][ix])
            {

            case TERRAIN_BALLISTA:
                AddTrap(ix, iy, TRAP_BALLISTA, GetItemMaxUses(IID_BALLISTA));
                break;

            case TERRAIN_LONGBALLISTA:
                AddTrap(ix, iy, TRAP_LONGBALLISTA, GetItemMaxUses(IID_LONGBALLISTA));
                break;

            case TERRAIN_KILLERBALLISTA:
                AddTrap(ix, iy, TRAP_KILLERBALLISTA, GetItemMaxUses(IID_KILLERBALLISTA));
                break;

            case TERRAIN_WALL_BREAKABLE:
                if (gMapTerrain[iy-1][ix] == TERRAIN_WALL_BREAKABLE)
                    break; // walls are stacked, only the topmost tile gets a trap

                AddTrap(ix, iy, TRAP_OBSTACLE, GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->wall_hp);
                break;

            }
        }
    }
}

void InitMapTrapsOld(void)
{
    InitMapTrapsNew();
}

const struct MapChangeInfo * GetMapChangeNew(int id)
{
    struct MapChangeInfo const * info = GetChapterMapChanges(GetChapterInPlaySt(&gPlayStNew));

    if (info == NULL)
        return NULL;

    while (info->id >= 0)
    {
        if (id == info->id)
            return info;

        ++info;
    }

    return NULL;
}

const struct MapChangeInfo * GetMapChangeOld(int id)
{
    return GetMapChangeNew(id);
}

int GetMapChangeIdAtNew(int x, int y)
{
    int result = -1;

    struct MapChangeInfo const * info = GetChapterMapChanges(GetChapterInPlaySt(&gPlayStNew));

    if (info == NULL)
        return result;

    while (info->id >= 0)
    {
        if (x >= info->x)
            if (y >= info->y)
                if (info->x + info->width - 1 >= x)
                    if (info->y + info->height - 1 >= y)
                        result = info->id;

        ++info;
    }

    return result;
}

int GetMapChangeIdAtOld(int x, int y)
{
    return GetMapChangeIdAtNew(x, y);
}
