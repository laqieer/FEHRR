#include "prelude.h"
#include "proc.h"
#include "oam.h"
#include "move.h"
#include "util.h"
#include "map.h"
#include "unit.h"
#include "hardware.h"
#include "constants/jids.h"

#include "banim_sprite.h"
#include "banim.h"
#include "banim_ekrbattle.h"
#include "banim_ekrdragon.h"

#include "bmNew.h"

/**
 * Manakete
 */

void EkrManakete_ReloadBgNew(struct ProcEkrDragon * proc)
{
    if (proc->timer == 0)
    {
        ApplyChapterMapGraphics(GetChapterInPlaySt(&gPlayStNew));
        RenderMap();
    }

    EfxChapterMapFadeOUT(Interpolate(INTERPOLATE_RSQUARE, 0x10, 4, proc->timer, 8));

    if (++proc->timer == 0x9)
    {
        proc->timer = 0;
        Proc_Break(proc);
    }
}

const struct ProcScr ProcScr_EkrManaketeNew[] =
{
    PROC_19,
    PROC_REPEAT(EkrManakete_BgFadeIn),
    PROC_REPEAT(func_fe6_08059144),
    PROC_REPEAT(EkrManakete_PauseOnStart),
    PROC_REPEAT(func_fe6_080591CC),
    PROC_REPEAT(func_fe6_080592D0),
    PROC_REPEAT(EkrManakete_UpdateBanimfx),
    PROC_REPEAT(EkrManakete_BlockingInBattle),
    PROC_REPEAT(EkrManakete_EndDeamon),
    PROC_REPEAT(EkrManakete_StartExit),
    PROC_REPEAT(func_fe6_0805946C),
    PROC_REPEAT(func_fe6_080594CC),
    PROC_REPEAT(func_fe6_08059578),
    PROC_REPEAT(func_fe6_080595EC),
    PROC_REPEAT(EkrManakete_ReloadBgNew),
    PROC_REPEAT(EkrManakete_TriggerEnding),
    PROC_END,
};

void NewEkrManaketeNew(struct BaSprite * anim)
{
    struct ProcEkrDragon * proc;

    EkrDragonProcs[GetAnimPosition(anim)] = proc = SpawnProc(ProcScr_EkrManaketeNew, PROC_TREE_3);
    gEkrDragonState[GetAnimPosition(anim)] = DRAGON_STATE_1;

    proc->anim = anim;
    proc->timer = 0;
}

void NewEkrManaketeOld(struct BaSprite * anim)
{
    NewEkrManaketeNew(anim);
}

void EkrManaketeEnter1New(struct ProcEkrManaketefx * proc)
{
    struct BaSprite * animfx = proc->animfx;
    const void * src;
    void * buf, * dst;

    animfx->script = AnimScr_ManaketeEnter1;
    animfx->scrCur = AnimScr_ManaketeEnter1;
    animfx->timer = 0;

    src = Img_ManaketeObjfx1;
    dst = OBJ_VRAM0 + 0x4000 + (GetAnimPosition(proc->anim) == POS_R ? 0x2000 : 0);
    buf = gBuf_Banim;

    LZ77UnCompWram(src, buf);
    RegisterDataMove(buf, dst, 0x2000);
    Proc_Break(proc);
}

void EkrManaketeEnter2New(struct ProcEkrManaketefx * proc)
{
    struct BaSprite * animfx = proc->animfx;
    const void * src;
    void * buf, * dst;

    animfx->script = AnimScr_ManaketeEnter2;
    animfx->scrCur = AnimScr_ManaketeEnter2;
    animfx->timer = 0;

    src = Img_ManaketeObjfx2;
    dst = OBJ_VRAM0 + 0x4000 + (GetAnimPosition(proc->anim) == POS_R ? 0x2000 : 0);
    buf = gBuf_Banim;

    LZ77UnCompWram(src, buf);
    RegisterDataMove(buf, dst, 0x2000);
    Proc_Break(proc);
}

void EkrManaketeEnter3New(struct ProcEkrManaketefx * proc)
{
    struct BaSprite * animfx = proc->animfx;
    const void * src;
    void * buf, * dst;

    animfx->script = AnimScr_ManaketeEnter3;
    animfx->scrCur = AnimScr_ManaketeEnter3;
    animfx->timer = 0;

    src = Img_ManaketeObjfx3;
    dst = OBJ_VRAM0 + 0x4000 + (GetAnimPosition(proc->anim) == POS_R ? 0x2000 : 0);
    buf = gBuf_Banim;

    LZ77UnCompWram(src, buf);
    RegisterDataMove(buf, dst, 0x2000);
    Proc_Break(proc);
}

const struct ProcScr ProcScr_EkrManaketeEnterfxNew[] =
{
    PROC_19,
    PROC_ONEND(EkrManakete_OnEnd),
    PROC_REPEAT(EkrManaketeEnter1New),
    PROC_SLEEP(20),
    PROC_REPEAT(EkrManaketeEnter2New),
    PROC_SLEEP(26),
    PROC_REPEAT(EkrManaketeEnter3New),
    PROC_SLEEP(9),
    PROC_END,
};

void EkrManaketeExit3New(struct ProcEkrManaketefx * proc)
{
    struct BaSprite * animfx = proc->animfx;
    const void * src;
    void * buf, * dst;

    animfx->script = AnimScr_ManaketeExit3;
    animfx->scrCur = AnimScr_ManaketeExit3;
    animfx->timer = 0;

    src = Img_ManaketeObjfx1;
    dst = OBJ_VRAM0 + 0x4000 + (GetAnimPosition(proc->anim) == POS_R ? 0x2000 : 0);
    buf = gBuf_Banim;

    LZ77UnCompWram(src, buf);
    RegisterDataMove(buf, dst, 0x2000);
    Proc_Break(proc);
}

void EkrManaketeExit2New(struct ProcEkrManaketefx * proc)
{
    struct BaSprite * animfx = proc->animfx;
    const void * src;
    void * buf, * dst;

    animfx->script = AnimScr_ManaketeExit2;
    animfx->scrCur = AnimScr_ManaketeExit2;
    animfx->timer = 0;

    src = Img_ManaketeObjfx2;
    dst = OBJ_VRAM0 + 0x4000 + (GetAnimPosition(proc->anim) == POS_R ? 0x2000 : 0);
    buf = gBuf_Banim;

    LZ77UnCompWram(src, buf);
    RegisterDataMove(buf, dst, 0x2000);
    Proc_Break(proc);
}

void EkrManaketeExit1New(struct ProcEkrManaketefx * proc)
{
    struct BaSprite * animfx = proc->animfx;
    const void * src;
    void * buf, * dst;

    animfx->script = AnimScr_ManaketeExit1;
    animfx->scrCur = AnimScr_ManaketeExit1;
    animfx->timer = 0;

    src = Img_ManaketeObjfx3;
    dst = OBJ_VRAM0 + 0x4000 + (GetAnimPosition(proc->anim) == POS_R ? 0x2000 : 0);
    buf = gBuf_Banim;

    LZ77UnCompWram(src, buf);
    RegisterDataMove(buf, dst, 0x2000);
    Proc_Break(proc);
}

const struct ProcScr ProcScr_EkrManaketeExitfxNew[] =
{
    PROC_19,
    PROC_ONEND(EkrManakete_OnEnd),
    PROC_REPEAT(EkrManaketeExit1New),
    PROC_SLEEP(9),
    PROC_REPEAT(EkrManaketeExit2New),
    PROC_SLEEP(26),
    PROC_REPEAT(EkrManaketeExit3New),
    PROC_SLEEP(20),
    PROC_END,
};

void StartManaketeTransferAnimNew(struct BaSprite * anim, int type)
{
    struct BaSprite * animfx;
    struct ProcEkrManaketefx * proc;

    gEfxBgSemaphore++;

    if (type == 0)
        proc = SpawnProc(ProcScr_EkrManaketeEnterfxNew, PROC_TREE_3);
    else
        proc = SpawnProc(ProcScr_EkrManaketeExitfxNew, PROC_TREE_3);

    proc->anim = anim;
    proc->animfx = animfx = EfxCreateFrontAnim(anim, AnimScr_ManaketeFlame, AnimScr_ManaketeFlame, AnimScr_ManaketeFlame, AnimScr_ManaketeFlame);
    animfx->oam2 = OAM2_CHR(0x200 + (GetAnimPosition(proc->anim) == POS_R ? 0x100 : 0)) + OAM2_LAYER(1) + OAM2_PAL(2);
    animfx->oam01 |= OAM1_AFFINE_ID(2);
    animfx->yPosition += 8;

    proc->timer = 0;
    SpellFx_SetSomeColorEffect();

    // SetBlendTargetA(0, 0, 0, 0, 0);
    gDispIo.blend_ct.target1_enable_bg0 = (0);
    gDispIo.blend_ct.target1_enable_bg1 = (0);
    gDispIo.blend_ct.target1_enable_bg2 = (0);
    gDispIo.blend_ct.target1_enable_bg3 = (0);
    gDispIo.blend_ct.target1_enable_obj = (0);

    // SetBlendTargetB(0, 1, 1, 1, 0);
    gDispIo.blend_ct.target1_enable_bg0 = (0);
    gDispIo.blend_ct.target1_enable_bg1 = (1);
    gDispIo.blend_ct.target1_enable_bg2 = (1);
    gDispIo.blend_ct.target1_enable_bg3 = (1);
    gDispIo.blend_ct.target1_enable_obj = (0);

    SpellFx_RegisterObjPal(Pal_ManaketeBodyStd, 0x20);
    anim->flags |= BAS_BIT_FROZEN;
}

void StartManaketeTransferAnimOld(struct BaSprite * anim, int type)
{
    StartManaketeTransferAnimNew(anim, type);
}

void EkrManaketeDeamon_LoopNew(struct ProcEkrDragonDeamon * proc)
{
    i16 ret;

    if (GetUnitEfxDebuff(proc->anim) != UNIT_STATUS_NONE)
        return;

    switch (proc->fxtype) {
    case 0:
        proc->timer = 0;
        proc->frame = 0;
        proc->conf = FrameLut_EkrManaketefxNormalAttack;
        proc->pal = Pal_EkrManaketefx;
        proc->fxtype = 2;
        break;

    /* critial attack */
    case 1:
        proc->timer = 0;
        proc->frame = 0;
        proc->conf = FrameLut_EkrManaketefxCriticalAttack;
        proc->pal = Pal_EkrManaketefx;
        proc->fxtype = 2;
        break;

    default:
        break;
    }

    ret = EfxAdvanceFrameLut((void *)&proc->timer, (void *)&proc->frame, (const i16 *)proc->conf);
    if (ret >= 0)
    {
        const u16 * pal = proc->pal;
        CpuFastCopy(pal + PAL_OFFSET(ret), gPal + PAL_OFFSET(6 + (GetAnimPosition(proc->anim) == POS_R ? 1 : 0)), 0x20);
        EnablePalSync();
    }
    else if (ret == -1)
    {
        proc->fxtype = 0;
    }

    if (proc->anim->currentRoundType != proc->round_cur)
    {
        int rtype = proc->anim->currentRoundType;

        /* Config round switch */
        switch (rtype) {
        case ANIM_ROUND_CRIT_CLOSE:
        case ANIM_ROUND_CRIT_FAR:
            proc->fxtype = 1;
            break;

        default:
            break;
        }
    }
    proc->round_cur = proc->anim->currentRoundType;
}

const struct ProcScr ProcScr_EkrManaketefxNew[] =
{
    PROC_19,
    PROC_REPEAT(EkrManaketeDeamon_LoopNew),
    PROC_END,
};

void NewEkrManaketeDeamonNew(struct BaSprite * anim)
{
    struct ProcEkrDragonDeamon * proc;

    gEkrDragonDeamonProcs[GetAnimPosition(anim)] = proc = SpawnProc(ProcScr_EkrManaketefxNew, PROC_TREE_4);
    proc->fxtype = 0;
    proc->anim = anim;
    proc->round_cur = anim->currentRoundType;
}

void NewEkrManaketeDeamonOld(struct BaSprite * anim)
{
    NewEkrManaketeDeamonNew(anim);
}
