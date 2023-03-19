
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

char * DecodeMsgNew(int id)
{
    if (id == sActiveMsg)
        return sMsgString;

    // DecodeStringRam(gMsgTable[id], sMsgString);
    strcpy(sMsgString, GetMsg(id));
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
