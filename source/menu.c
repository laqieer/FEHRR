// Headers from: menuinfo.c

#include "menuinfo.h"

#include "bmfx.h"
#include "itemuse.h"
#include "prepphase.h"
#include "battlepreview.h"
#include "debugmenu.h"
#include "mapmenu.h"
#include "ui.h"

#include "constants/msg.h"

// Headers from: debugmenu.c

#include "debugmenu.h"

#include "random.h"
#include "hardware.h"
#include "debugtext.h"
#include "text.h"
#include "face.h"
#include "gamecontroller.h"
#include "bm.h"
#include "unit.h"
#include "map.h"
#include "bmfx.h"
#include "bmio.h"
#include "chapter.h"
#include "chapterinfo.h"
#include "menuinfo.h"
#include "ui.h"
#include "menu.h"

#include "constants/videoalloc_global.h"
#include "constants/chapters.h"
#include "constants/faces.h"

// New headers

#include "textNew.h"
#include "log.h"

void Menu_Redraw(struct MenuProc * proc)
{
    int i;

    if (proc->flags & MENU_FLAG_HIDDEN)
        return;

    for (i = 0; i < proc->entry_count; i++)
    {
        struct MenuEntProc * ent_proc = proc->entries[i];

        ClearText(&ent_proc->text);

        if (ent_proc->info->display != NULL)
        {
            ent_proc->info->display(proc, ent_proc);
            continue;
        }

        if (ent_proc->info->text_color)
            Text_SetColor(&ent_proc->text, ent_proc->info->text_color);

        if (ent_proc->availability == MENU_ENTRY_DISABLED)
            Text_SetColor(&ent_proc->text, TEXT_COLOR_SYSTEM_GRAY);

        Text_DrawString(&ent_proc->text, ent_proc->info->label);

        PutText(&ent_proc->text, gBg0Tm + TM_OFFSET(ent_proc->x, ent_proc->y));
    }

    // PutMenuEntryHover(proc, proc->active_entry, TRUE);

    EnableBgSync(BG0_SYNC_BIT | BG1_SYNC_BIT);
}

fu8 ChangeLanguage(struct MenuProc * menu, struct MenuEntProc * ent)
{
    ChangeLang();
    Menu_Redraw(menu);

    return MENU_ACTION_NOCURSOR | MENU_ACTION_SE_6A;
}

struct MenuEntInfo const MenuEntInfo_Debug_StartUp[] =
{
    {
        .label = (const char *)3726, // 表示言語切替
        .available = MenuEntryEnabled,
        .on_select = ChangeLanguage,
    },

    {
        .label = (const char *)3498, // リリースエントリ
        .available = MenuEntryEnabled,
        .on_select = func_fe6_0801AEBC,
    },

    {
        .label = (const char *)3499, // どこでも再開
        .available = func_fe6_0801ADB4,
        .on_select = func_fe6_0801ADCC,
    },

    {
        .label = (const char *)3500, // 手再開
        .available = func_fe6_0801AD6C,
        .on_select = func_fe6_0801AD84,
    },

    { 0 }, // end
};

struct MenuInfo const MenuInfo_Debug_StartUp =
{
    .rect = { 9, 4, 12, 0 },
    .entries = MenuEntInfo_Debug_StartUp,
    .on_init = func_fe6_0801AB64,
    .on_end = func_fe6_0801ABE8,
};

void StartMenu_Debug_StartUp(void)
{
    SetMainFunc(OnMain);
    SetOnVBlank(OnVBlank);

    InitBmDisplay();

    DebugInitBg(2, 0);

    Assert(IsSramWorking());

    StartMuralBackground(StartMenu(&MenuInfo_Debug_StartUp), (u8 *) BG_VRAM + CHR_SIZE * 0x580, -1);
}