#include "voice.h"

#include "unit.h"
#include "face.h"
#include "faceNew.h"
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
#define VOICE_NUM (VOICE_STATUS_NUM + VOICE_MAP_NUM + VOICE_ATTACK_NUM + VOICE_DAMAGE_NUM)

int GetVoiceId(int hero_id, int voice_type)
{
    const struct Voice * hero_voice = &hero_voices[hero_id];
    int voice_id = hero_voice->status[voice_type];

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
    DisplayBackground(BACKGROUND_0);
}

void VoiceDebug_OnInit(struct GenericProc * proc)
{
    int hero_id = 1;
    int voice_type = 0;

    proc->x = hero_id;
    proc->y = voice_type;

    DebugScreenInit();
    DebugPutStr(gBg2Tm + TM_OFFSET(4, 0), GetFaceName(GetPInfo(hero_id)->fid));
    DebugPutStr(gBg2Tm + TM_OFFSET(4, 2), GetVoiceName(GetVoiceId(hero_id, voice_type)));

    StartVoice(GetVoiceId(hero_id, voice_type));
    StartFace(0, GetPInfo(hero_id)->fid, DISPLAY_WIDTH / 2, DISPLAY_HEIGHT - NEW_FULL_FACE_HEIGHT, 0);
    PutFaceChibi(GetPInfo(hero_id)->fid, gBg2Tm + TM_OFFSET(0, 0), 0x270, 2, 0);
}

void VoiceDebug_OnIdle(struct GenericProc * proc)
{
    int hero_id = proc->x;
    int voice_type = proc->y;

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

    hero_id = max(1, min(hero_id, HERO_NUM));

    if (voice_type < 0)
        voice_type = VOICE_NUM - 1;

    if (voice_type >= VOICE_NUM)
        voice_type = 0;

    if (hero_id != proc->x)
    {
        EndFaceById(0);
        StartFace(0, GetPInfo(hero_id)->fid, DISPLAY_WIDTH / 2, DISPLAY_HEIGHT - NEW_FULL_FACE_HEIGHT, 0);
        PutFaceChibi(GetPInfo(hero_id)->fid, gBg2Tm + TM_OFFSET(0, 0), 0x270, 2, 0);
    }

    if (hero_id != proc->x || voice_type != proc->y)
    {
        proc->x = hero_id;
        proc->y = voice_type;

        DebugScreenInit();
        DebugPutStr(gBg2Tm + TM_OFFSET(4, 0), GetFaceName(GetPInfo(hero_id)->fid));
        DebugPutStr(gBg2Tm + TM_OFFSET(4, 2), GetVoiceName(GetVoiceId(hero_id, voice_type)));

        StartVoice(GetVoiceId(hero_id, voice_type));
        PutFaceChibi(GetPInfo(hero_id)->fid, gBg2Tm + TM_OFFSET(0, 0), 0x270, 2, 0);
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
