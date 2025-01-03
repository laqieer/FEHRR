
#include "prelude.h"

#include "armfunc.h"

#include "log.h"

#include "msg.h"
#include "msgNew.h"
#include "text.h"
#include "textNew.h"
#include "textTest.h"
#include "enemies.h"
#include "bmNew.h"
#include "constants/chapters.h"
#include "chapterNew.h"

#define ERROR_MSG_NOT_FOUND 3806

extern const char * const gMsgTable[];
extern const char * const gMsgTableNew[][LANGUAGE_NUM];
extern const char * const text_keys[];

extern char sMsgString[0x1000];

char const * GetMsg(int id)
{
    if (id < 0 || (id > textId_max && id < 0x2000000)) {
        Fatalf("Invalid message id: %d", id);
    }
    if (id >= 0x2000000) {
        Debugf("Get raw message at 0x%x: %s", id, (char const *)id);
    }
    if (id >= MEID_ENEMY_HERO_1 && id <= MEID_H_ENEMY_HERO_7)
    {
        int chapter = GetChapterInPlaySt(&gPlayStNew);
        Assert(IsChapterNew(chapter));
        id = ChapterEnemyHeroNames[chapter - CHAPTER_CH_NEW][id - MEID_ENEMY_HERO_1];
    }
    if (id >= 0x2000000) {
        return (char const *)id;
    }
    if (gMsgTableNew[id][GetLangNew()]) {
        return gMsgTableNew[id][GetLangNew()];
    }
    Errorf("Message not found: %d", id);
    return gMsgTableNew[ERROR_MSG_NOT_FOUND][GetLangNew()];
}

#define MSG_MAX_WIDTH 0xE0

char * DecodeMsgNew(int id)
{
    if (id == sActiveMsg)
        return sMsgString;

    // DecodeStringRam(gMsgTable[id], sMsgString);

    char const *pSrc = GetMsg(id);
    char *pDst = sMsgString;
    int w = 0;
    int h = 0;
    GetStringTextBox(pSrc, &w, &h);
    if (w <= MSG_MAX_WIDTH)
        strcpy(sMsgString, pSrc);
    else
    {
        i32 cw = 0;
        i32 lw = 0;
        while (*pSrc)
        {
            if (*pSrc > 0 && *pSrc < 0x20)
            {
                lw = 0;
                *pDst++ = *pSrc++;
            }
            else
            {
                char const *pNext = GetCharTextLen(pSrc, &cw);
                lw += cw;
                if (lw > MSG_MAX_WIDTH)
                {
                    *pDst++ = MSG_CHAR_NEWLINE;
                    lw = cw;
                }
                while (*pSrc != MSG_CHAR_END && pSrc < pNext)
                    *pDst++ = *pSrc++;
            }
        }
        *pDst = MSG_CHAR_END;
    }

    sActiveMsg = id;

    Infof("Decoded message %d %s: %s", id, GetMsgKey(id), sMsgString);

    return sMsgString;
}

char * DecodeMsgOld(int id)
{
    return DecodeMsgNew(id);
}

const char * GetMsgKey(int id)
{
    return id > TEXT_ID_TEST ? text_keys[id - TEXT_ID_TEST] : "";
}

int GetMsgLines(int id)
{
    if (id == TEXT_ID_TEST)
        return 1;

    if (id > TEXT_ID_TEST)
        return 3;

    return 2;
}
