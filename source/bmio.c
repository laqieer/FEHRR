
#include "bmio.h"

#include "random.h"
#include "ramfunc.h"
#include "hardware.h"
#include "oam.h"
#include "proc.h"
#include "sprite.h"
#include "util.h"
#include "bm.h"
#include "bmNew.h"
#include "map.h"
#include "unitsprite.h"
#include "chapterinfo.h"

#include "constants/videoalloc_global.h"

struct TsImgAnim
{
    /* 00 */ u16 time;
    /* 02 */ u16 size;
    /* 04 */ void const * data;
};

struct TsPalAnim
{
    /* 00 */ void const * data;
    /* 04 */ u8 time;
    /* 05 */ u8 colorCount;
    /* 06 */ u8 colorStart;
};

struct WeatherParticle
{
    /* 00 */ short x;
    /* 02 */ short y;

    /* 04 */ short xSpeed;
    /* 06 */ short ySpeed;

    /* 08 */ u8 chr;
    /* 09 */ u8 kind;
};

union WeatherEffect
{
    /**
     * Array of weather particles
     */
    struct WeatherParticle particles[0x40];

    /**
     * Buffer for cloud graphics
     */
    u32 imgCloud[0xC0];
};

union WeatherGradient
{
    /**
     * Buffer holding colors for vertical gradient.
     */
    u16 lines[320];

    /**
     * Buffer holding 8 different variations of the tileset palette
     * Variations have increasing amounts of red; used for flames weather effect
     */
    u16 fireGradient[8][0x40];
};

struct BmVSyncProc
{
    PROC_HEADER;

    /* 2C */ struct TsImgAnim const * imgAnimStart;
    /* 30 */ struct TsImgAnim const * imgAnimCurrent;

    /* 34 */ short imgAnimClock;
    /* 36 */ short palAnimClock;

    /* 38 */ struct TsPalAnim const * palAnimStart;
    /* 3C */ struct TsPalAnim const * palAnimCurrent;
};

void BmVSync_AnimInitNew(struct BmVSyncProc * proc)
{
    proc->imgAnimClock = 0;
    proc->palAnimClock = 0;

    proc->imgAnimStart = proc->imgAnimCurrent =
        ChapterAssets[GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->asset_img_anims];

    proc->palAnimStart = proc->palAnimCurrent =
        ChapterAssets[GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->asset_pal_anims];
}

void BmVSync_AnimInitOld(struct BmVSyncProc * proc)
{
    BmVSync_AnimInitNew(proc);
}

void EnableTilesetPalAnimNew(void)
{
    struct BmVSyncProc * proc = FindProc(ProcScr_BmVSync);

    if (proc)
    {
        proc->palAnimStart = proc->palAnimCurrent =
            ChapterAssets[GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->asset_pal_anims];
    }
}

void EnableTilesetPalAnimOld(void)
{
    EnableTilesetPalAnimNew();
}
