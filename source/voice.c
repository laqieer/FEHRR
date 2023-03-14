#include "voice.h"

#include "proc.h"
#include "bm.h"
#include "hardware.h"
#include "event.h"
#include "debugtext.h"

#include "utilNew.h"
#include "heroes.h"
#include "backgrounds.h"

#include "log.h"

#define VOICE_PRIORITY 8
#define VOICE_NUM (VOICE_ATTACK_NUM + VOICE_DAMAGE_NUM + VOICE_MAP_NUM + VOICE_STATUS_NUM)

int GetVoiceId(int hero_id, int voice_type)
{
    const struct Voice * hero_voice = &hero_voices[hero_id];
    int voice_id = hero_voice->attack[voice_type];

    return voice_id;
}

const char * GetVoiceName(int voice_id)
{
    return voice_names[voice_id];
}

void StartVoice(int voice_id)
{
    struct MusicPlayerEnt const * music_player_table = gMusicPlayerTable;
    struct MusicPlayerEnt const * music_player_ent = music_player_table + VOICE_PRIORITY;

    if (voice_id)
        m4aMPlayStart(music_player_ent->music_player, (struct Song *)voices[voice_id]);
}

void StopVoice(void)
{
    struct MusicPlayerEnt const * music_player_table = gMusicPlayerTable;
    struct MusicPlayerEnt const * music_player_ent = music_player_table + VOICE_PRIORITY;

    m4aMPlayStop(music_player_ent->music_player);
}

void VoiceDebug_SetBackground(struct GenericProc * proc)
{
    DisplayBackground(BACKGROUND_NEW);
}

void VoiceDebug_OnInit(struct GenericProc * proc)
{
    proc->x = 0; // hero_id
    proc->y = 0; // voice_type
}

void VoiceDebug_OnIdle(struct GenericProc * proc)
{
    int hero_id = proc->x;
    int voice_type = proc->y;

    DebugPutObjStr(0, 0, GetVoiceName(GetVoiceId(hero_id, voice_type)));

    if (gKeySt->pressed & KEY_BUTTON_SELECT)
    {
        Proc_Break(proc);
        return;
    }

    if (gKeySt->repeated & KEY_DPAD_UP)
        hero_id++;

    if (gKeySt->repeated & KEY_DPAD_DOWN)
        hero_id--;

    if (gKeySt->repeated & KEY_DPAD_RIGHT)
        voice_type++;

    if (gKeySt->repeated & KEY_DPAD_LEFT)
        voice_type--;

    hero_id = max(0, min(hero_id, HERO_NUM - 1));

    voice_type = max(0, min(voice_type, VOICE_NUM - 1));

    if (hero_id != proc->x || voice_type != proc->y)
    {
        proc->x = hero_id;
        proc->y = voice_type;
        StartVoice(GetVoiceId(hero_id, voice_type));
        return;
    }

    if (gKeySt->pressed & KEY_BUTTON_A)
    {
        StartVoice(GetVoiceId(hero_id, voice_type));
        return;
    }

    if (gKeySt->pressed & KEY_BUTTON_B)
    {
        StopVoice();
        return;
    }
}

struct ProcScr const ProcScr_VoiceDebug[] =
{
    PROC_CALL(LockGame),
    PROC_SLEEP(1),

    PROC_CALL(VoiceDebug_SetBackground),
    PROC_SLEEP(1),

    PROC_CALL(VoiceDebug_OnInit),
    PROC_REPEAT(VoiceDebug_OnIdle),

    PROC_CALL(UnlockGame),
    PROC_END,
};

void StartVoiceDebug(void)
{
    SpawnProc(ProcScr_VoiceDebug, PROC_TREE_3);
}
