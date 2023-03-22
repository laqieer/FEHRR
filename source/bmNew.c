#include "bmNew.h"

u16 GetChapterInPlaySt(struct PlayStNew *playSt)
{
    return playSt->chapter_lobyte + (playSt->chapter_hibyte << 8);
}

void SetChapterInPlaySt(struct PlayStNew *playSt, u16 chapter)
{
    playSt->chapter_lobyte = chapter & 0xFF;
    playSt->chapter_hibyte = chapter >> 8;
}
