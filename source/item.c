#include "item.h"

#include "msgNew.h"

char const * GetItemRangeStringNew(int item)
{
    char const * const strings[] =
    {
        // "１～魔力", // 1 - mag
        "　　　１", // 1
        "　１～２", // 1 - 2
        "　１～３", // 1 - 3
        "　　　２", // 2
        "　２～３", // 2 - 3
        "　３～５", // 3 - 5
        "３～１０", // 3 - 10
        "３～１５", // 3 - 15
        // "　　全体", // all
        // "　　ーー", // none
    };

    switch (GetItemEncodedRange(item))
    {

    case 0x10: // 1-mag
        return GetMsg(3423);

    case 0x11: // 1-1
        return strings[0];

    case 0x12: // 1-2
        return strings[1];

    case 0x13: // 1-3
        return strings[2];

    case 0x22: // 2-2
        return strings[3];

    case 0x23: // 2-3
        return strings[4];

    case 0x35: // 3-5
        return strings[5];

    case 0x3A: // 3-10
        return strings[6];

    case 0x3F: // 3-15
        return strings[7];

    case 0xFF: // all
        return GetMsg(3733);

    default: // bad
        return GetMsg(3734);

    }
}

char const * GetItemRangeStringOld(int item)
{
    return GetItemRangeStringNew(item);
}
