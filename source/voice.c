#include "voice.h"

#include "unit.h"
#include "face.h"
#include "constants/faces.h"
#include "faceNew.h"
#include "proc.h"
#include "bm.h"
#include "hardware.h"
#include "event.h"
#include "debugtext.h"
#include "debugtextNew.h"

#include "utilNew.h"
#include "hero.h"
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

void PrintCharacterDebugInfo(int hero_id, int voice_type, int level)
{
    DebugScreenInit();

    int chibi_fid = GetPInfo(hero_id)->fid;
    if (!hasChibiFace(chibi_fid))
        chibi_fid = FID_FACTION_CHIBI + GetPInfo(hero_id)->chibi_id;

    PutFaceChibi(chibi_fid, gBg2Tm + TM_OFFSET(0, 4), 0x270, 2, 0);

    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 0), "PID: %d", hero_id);
    DebugPutStr(gBg2Tm + TM_OFFSET(0, 1), GetFaceName(GetPInfo(hero_id)->fid));
    DebugPutStr(gBg2Tm + TM_OFFSET(0, 2), GetVoiceName(GetVoiceId(hero_id, voice_type)));

    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 9), "LV %d", level);
    int hp = GetPInfo(hero_id)->base_hp + GetPInfo(hero_id)->growth_hp * (level - 1) / 100;
    int pow = GetPInfo(hero_id)->base_pow + GetPInfo(hero_id)->growth_pow * (level - 1) / 100;
    int spd = GetPInfo(hero_id)->base_spd + GetPInfo(hero_id)->growth_spd * (level - 1) / 100;
    int def = GetPInfo(hero_id)->base_def + GetPInfo(hero_id)->growth_def * (level - 1) / 100;
    int res = GetPInfo(hero_id)->base_res + GetPInfo(hero_id)->growth_res * (level - 1) / 100;
    int total = hp + pow + spd + def + res;
    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 11), "HP  %d", hp);
    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 12), "POW %d", pow);
    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 13), "SPD %d", spd);
    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 14), "DEF %d", def);
    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 15), "RES %d", res);
    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 17), "TOTAL %d", total);
}

void VoiceDebug_OnInit(struct GenericProc * proc)
{
    int hero_id = 1;
    int voice_type = 0;
    int level = 1;

    proc->x = hero_id;
    proc->y = voice_type;
    proc->unk34 = level;

    Infof("hero_id: %d, id_tag: %s", hero_id, GetHeroName(hero_id));
    PrintCharacterDebugInfo(hero_id, voice_type, level);

    StartVoice(GetVoiceId(hero_id, voice_type));
    StartFace(0, GetPInfo(hero_id)->fid, DISPLAY_WIDTH - NEW_FULL_FACE_WIDTH / 2, DISPLAY_HEIGHT - NEW_FULL_FACE_HEIGHT, 0);
}

void VoiceDebug_OnIdle(struct GenericProc * proc)
{
    int hero_id = proc->x;
    int voice_type = proc->y;
    int level = proc->unk34;

    if (gKeySt->pressed & KEY_BUTTON_SELECT)
    {
        Proc_Break(proc);
        return;
    }

    if (gKeySt->repeated & KEY_DPAD_RIGHT)
        hero_id++;

    if (gKeySt->repeated & KEY_DPAD_LEFT)
        hero_id--;

    if (gKeySt->repeated & KEY_BUTTON_R)
        voice_type++;

    if (gKeySt->repeated & KEY_BUTTON_L)
        voice_type--;

    if (gKeySt->repeated & KEY_DPAD_UP)
        level++;

    if (gKeySt->repeated & KEY_DPAD_DOWN)
        level--;

    hero_id = max(1, min(hero_id, HERO_NUM));

    if (voice_type < 0)
        voice_type = VOICE_NUM - 1;

    if (voice_type >= VOICE_NUM)
        voice_type = 0;

    level = max(1, min(level, UNIT_LEVEL_MAX * 2));

    if (hero_id != proc->x)
    {
        Infof("hero_id: %d, id_tag: %s", hero_id, GetHeroName(hero_id));

        proc->x = hero_id;

        EndFaceById(0);
        StartFace(0, GetPInfo(hero_id)->fid, DISPLAY_WIDTH - NEW_FULL_FACE_WIDTH / 2, DISPLAY_HEIGHT - NEW_FULL_FACE_HEIGHT, 0);

        PrintCharacterDebugInfo(hero_id, voice_type, level);
        StartVoice(GetVoiceId(hero_id, voice_type));
        return;
    }

    if (level != proc->unk34)
    {
        proc->unk34 = level;

        PrintCharacterDebugInfo(hero_id, voice_type, level);
    }

    if (voice_type != proc->y)
    {
        proc->y = voice_type;

        PrintCharacterDebugInfo(hero_id, voice_type, level);
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
