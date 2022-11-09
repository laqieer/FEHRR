#include "common.h"

#include <stdlib.h>

#include "armfunc.h"
#include "hardware.h"
#include "oam.h"
#include "sound.h"
#include "proc.h"
#include "icon.h"
#include "sprite.h"
#include "text.h"
#include "msg.h"
#include "util.h"
#include "item.h"
#include "unit.h"
#include "bm.h"
#include "battle.h"
#include "support.h"
#include "mu.h"
#include "helpbox.h"

#include "constants/videoalloc_global.h"
#include "constants/songs.h"

struct StatScreenTextInfo
{
    /* 00 */ struct Text * text;
    /* 04 */ u16 * tm;
    /* 08 */ u8 color;
    /* 09 */ u8 x_offset;
    /* 0C */ char const * const * str_list;
};

void func_fe6_0806EB00New(struct StatScreenTextInfo const * list)
{
    while (list->text != NULL)
    {
        if (list->str_list != NULL)
        {
            // PutDrawText(list->text, list->tm, list->color, list->x_offset, 0, list->str_list[GetLang()]);
            PutDrawText(list->text, list->tm, list->color, list->x_offset, 0, list->str_list[0]);
        }
        else
        {
            PutText(list->text, list->tm);
        }

        list++;
    }
}

void func_fe6_0806EB00Old(struct StatScreenTextInfo const * list)
{
    func_fe6_0806EB00New(list);
}
