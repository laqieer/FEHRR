
#include "common.h"

#include "ramfunc.h"

#include "log.h"

#include "text.h"
#include "textNew.h"

extern const char * const gMsgTable[];
extern const char * const gMsgTableNew[][LANGUAGE_NUM];

extern char sMsgString[0x1000];
extern int sActiveMsg;

char const * GetMsg(int id)
{
    return (id < 0 || id > 0x1000000) ? (char const *)id : gMsgTableNew[id][GetLang()];
}

char * DecodeMsgNew(int id)
{
    if (id == sActiveMsg)
        return sMsgString;

    // DecodeStringRam(gMsgTable[id], sMsgString);
    strcpy(sMsgString, GetMsg(id));
    sActiveMsg = id;

    Infof("Decoded message %d: %s", id, sMsgString);

    return sMsgString;
}

char * DecodeMsgOld(int id)
{
    return DecodeMsgNew(id);
}
