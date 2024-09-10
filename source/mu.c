#include "mu.h"
#include "jobs.h"
#include "log.h"

#include "gfx_misc.h"

int getMuId(int jid)
{
    Assertf(jid < JID_COUNT, "jid=%d, JID_COUNT=%d", jid, JID_COUNT);
    switch (jid)
    {
        case JID_HALBERDIER:
            return JID_SOLDIER;
        case JID_RIGHTEOUS_THIEF:
            return JID_THIEF;
        case JID_RIGHTEOUS_THIEF_F:
            return JID_THIEF_F;
        case JID_MERCENARY_F:
            return JID_MERCENARY;
        case JID_CAVALIER_F:
            return JID_CAVALIER;
        case JID_PALADIN_F:
            return JID_PALADIN;
        default:
            return jid;
    }
}

u8 const * GetMuImgNew(struct MuProc * mu)
{
    if (mu->jid == JID_MERCENARY_F)
        return Unit_Sprite_Mercenary_F_Axe_WalkTiles;

    return MuInfoTable[getMuId(mu->jid) - 1].img;
}

u8 const * GetMuImgOld(struct MuProc * mu)
{
    return GetMuImgNew(mu);
}

u16 const * GetMuAnimForJidNew(u16 jid)
{
    return MuInfoTable[getMuId(jid) - 1].anim;
}

u16 const * GetMuAnimForJidOld(u16 jid)
{
    return GetMuAnimForJidNew(jid);
}
