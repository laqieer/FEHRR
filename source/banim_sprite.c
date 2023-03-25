#include "banim_sprite.h"

#include "hardware.h"
#include "oam.h"

#include "bas.h"
#include "battleNew.h"
#include "voice.h"

struct BaSpriteData
{
    /* 00 */ u32 header;

    union
    {

    struct
    {
        /* 04 */ u16 pa;
        /* 06 */ u16 pb;
        /* 08 */ u16 pc;
        /* 0A */ u16 pd;
    } affine;

    struct
    {
        /* 04 */ u16 oam2;
        /* 06 */ short x;
        /* 08 */ short y;
    } object;

    } as;
};

enum
{
    // For use with BaSprite::flags

    BAS_BIT_ENABLED = (1 << 0),
    BAS_BIT_HIDDEN  = (1 << 1),
    BAS_BIT_2       = (1 << 2),
    BAS_BIT_FROZEN  = (1 << 3),
};

enum
{
    BAS_MAX_COUNT = 50,
};

enum
{
    BAS_INS_KIND_STOP    = 0,
    BAS_INS_KIND_END     = 1,
    BAS_INS_KIND_LOOP    = 2,
    BAS_INS_KIND_MOVE    = 3,
    BAS_INS_KIND_WAIT    = 4,
    BAS_INS_KIND_COMMAND = 5,
    BAS_INS_KIND_FRAME   = 6,
};

int BasRunScript(struct BaSprite * BaSprite);
void BasInsert(struct BaSprite * BaSprite);
void PutBas(struct BaSprite * BaSprite);

typedef void (* BasFunc)(struct BaSprite * bas);

extern struct BaSprite EWRAM_DATA sBasPool[BAS_MAX_COUNT];
extern struct BaSprite * EWRAM_DATA sFirstBas;

int BasRunScriptNew(struct BaSprite * bas)
{
    u32 ins;

    int boolNeedsResort = FALSE;

    ins = *bas->scrCur++;

    if (ins & 0x80000000)
    {
        if (ins & 0x40000000)
        {
            switch ((ins >> 28) & 0x3)
            {

            case 0: // function call
                ((BasFunc) (ins &~ 0xF0000000))(bas);
                break;

            case 1: // set new frame data
                bas->scrCur = bas->script = (u32 const *) (ins &~ 0xF0000000);
                bas->timer = 1;

                break;

            }
        }
        else
        {
            switch (0x3F & (ins >> 24))
            {

            case BAS_INS_KIND_STOP:
                bas->scrCur--;
                bas->timer = 1;

                bas->flags2 = (bas->flags2 & 0xFFF) | 0x4000;

                break;

            case BAS_INS_KIND_END:
                bas->flags = 0;
                bas->timer = 1;

                boolNeedsResort = TRUE;

                break;

            case BAS_INS_KIND_LOOP:
                bas->scrCur = bas->script;
                bas->timer = 1;

                break;

            case BAS_INS_KIND_WAIT:
                bas->timer = (ins) & 0xFFFF;
                break;

            case BAS_INS_KIND_MOVE:
                bas->xPosition += (i8) (ins);
                bas->yPosition += (i8) (ins >> 8);

                bas->timer = (ins >> 16) & 0xFF;

                break;

            case BAS_INS_KIND_COMMAND:
                bas->flags2 = (bas->flags2 & 0xFFF) | 0x1000;

                if (bas->cqSize > 7) {}

                bas->cq[bas->cqSize] = ins & 0xFF;
                bas->cqSize++;

                bas->timer = 1;

                switch (ins & 0xFF)
                {

                case BAS_CMD_WAIT_03:
                    StartHeroVoice(gBattleUnitPids[GetBasSubjectId(bas)], VOICE_TYPE_ATTACK);

                case BAS_CMD_WAIT_01:
                case BAS_CMD_WAIT_02:
                case BAS_CMD_WAIT_04:
                case BAS_CMD_WAIT_05:
                case BAS_CMD_WAIT_13:
                case BAS_CMD_WAIT_18:
                case BAS_CMD_WAIT_39:
                    bas->scrCur--;
                    break;

                }

                break;

            case BAS_INS_KIND_FRAME:
                bas->timer = ins & 0xFFFF;
                bas->unk13 = (ins >> 16) & 0xFF;

                bas->imgSheet = (void const *) *bas->scrCur++;

                // weird but ok
                bas->sprData = (void const *) *bas->scrCur++;
                bas->sprData += (int) bas->sprDataPool;

                bas->flags2 = (bas->flags2 & 0xFFF) | 0x2000;

                break;

            }
        }
    }
    else
    {
        bas->sprData = (u8 const *) (ins &~ 0xF0000003);
        bas->timer   = ((ins >> 26) & 0x1C) + (ins & 3);
    }

    return boolNeedsResort;
}

int BasRunScriptOld(struct BaSprite * bas)
{
    return BasRunScriptNew(bas);
}
