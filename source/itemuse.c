#include "itemuse.h"

#include "hardware.h"
#include "oam.h"
#include "sound.h"
#include "face.h"
#include "spriteanim.h"
#include "msg.h"
#include "item.h"
#include "unit.h"
#include "map.h"
#include "playerphase.h"
#include "bmfx.h"
#include "targetlist.h"
#include "battle.h"
#include "action.h"
#include "mapselect.h"
#include "unitpanel.h"
#include "subtitlehelp.h"
#include "menuinfo.h"
#include "ui.h"
#include "eventinfo.h"
#include "gamedata.h"

#include "constants/iids.h"
#include "constants/jids.h"
#include "constants/terrains.h"
#include "constants/songs.h"
#include "constants/msg.h"

#include "jobs.h"

const u8 JList_HeroCrestPromotesNew[] = {
    JID_ROY,
    JID_MERCENARY,
    JID_MERCENARY_F,
    JID_MYRMIDON,
    JID_MYRMIDON_F,
    JID_SOLDIER,
    JID_FIGHTER,
    JID_BRIGAND,
    JID_PIRATE,
    JID_THIEF,
    JID_THIEF_F,
    JID_NONE,
};

bool CanUnitUsePromotionItemNew(struct Unit * unit, int item)
{
    u8 const * jlist = NULL;

    if (unit->level < 10)
        return FALSE;

    switch (GetItemIid(item))
    {

    case IID_HEROCREST:
        // jlist = JList_HeroCrestPromotes;
        jlist = JList_HeroCrestPromotesNew;
        break;

    case IID_KNIGHTCREST:
        jlist = JList_KnightCrestPromotes;
        break;

    case IID_ORIONSBOLT:
        jlist = JList_OrionBoltPromotes;
        break;

    case IID_ELYSIANWHIP:
        jlist = JList_ElysianWhipPromotes;
        break;

    case IID_GUIDINGRING:
        jlist = JList_GuidingRingPromotes;
        break;

    }

    while (*jlist)
    {
        if (unit->jinfo->id == *jlist)
            return TRUE;

        jlist++;
    }

    return FALSE;
}

bool CanUnitUsePromotionItemOld(struct Unit * unit, int item)
{
    return CanUnitUsePromotionItemNew(unit, item);
}
