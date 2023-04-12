
#include "common.h"

#include "ramfunc.h"

#include "log.h"

#include "msg.h"
#include "msgNew.h"
#include "text.h"
#include "textNew.h"
#include "textTest.h"

extern const char * const gMsgTable[];
extern const char * const gMsgTableNew[][LANGUAGE_NUM];
extern const char * const text_keys[];

extern char sMsgString[0x1000];

char const * GetMsg(int id)
{
    if (id < 0 || id > 0x1000000) {
        Debugf("Get raw message at 0x%x: %s", id, (char const *)id);
    }
    return (id < 0 || id > 0x1000000) ? (char const *)id : gMsgTableNew[id][GetLangNew()];
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
        strcpy(sMsgString, GetMsg(id));
    else
    {
        int cw = 0;
        int lw = 0;
        while (*pSrc)
        {
            if (*pSrc > 0 && *pSrc < 0x20)
            {
                if (*pSrc == MSG_CHAR_NEWLINE)
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
