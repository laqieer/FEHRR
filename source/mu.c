#include "mu.h"
#include "jobs.h"
#include "log.h"

int getMuId(int jid)
{
    Assert(jid < JID_COUNT);
    switch (jid)
    {
        case JID_HALBERDIER:
            return JID_SOLDIER;
        case JID_THIEF_LEADER:
            return JID_THIEF;
        case JID_THIEF_LEADER_F:
            return JID_THIEF_F;
        default:
            return jid;
    }
}

u8 const * GetMuImgNew(struct MuProc * mu)
{
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
