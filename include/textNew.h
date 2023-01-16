#pragma once

#include <gba_types.h>

enum
{
    LANGUAGE_JAPANESE,
    LANGUAGE_ENGLISH,
    LANGUAGE_CHINESE,
    LANGUAGE_NUM,
};

struct GlyphNew
{
    struct GlyphNew const * next;

    u8 utf_byte_2;
    u8 width;
    u8 utf_byte_3;
    u8 utf_byte_4;
    const unsigned int * bitmap;
};

extern const int textId_max;

int GetLangNew(void);
void SetLang(int lang);
void ChangeLang(void);

void PrintSystemGlyphs();
void PrintTalkGlyphs();

#define TEXT_CMD_END "\0"
#define TEXT_CMD_NEWLINE "\1"
#define TEXT_CMD_WAIT "\3"
#define TEXT_CMD_LEFT "\xe"
#define TEXT_CMD_RIGHT "\xf"
#define TEXT_CMD_FACE "\x10"
#define TEXT_CMD_CLEAR "\x11"

extern const char FaceTestText[];
