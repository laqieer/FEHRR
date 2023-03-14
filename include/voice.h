#pragma once

#include <gba_types.h>

#include "m4a.h"

#define VOICE_ATTACK_NUM 2
#define VOICE_DAMAGE_NUM 2
#define VOICE_MAP_NUM 3
#define VOICE_STATUS_NUM 1

struct Voice {
    u16 attack[VOICE_ATTACK_NUM];
    u16 damage[VOICE_DAMAGE_NUM];
    u16 map[VOICE_MAP_NUM];
    u16 status[VOICE_STATUS_NUM];
};

extern const struct Song * const voices[];
extern const struct Voice hero_voices[];
extern const char * const voice_names[];

int GetVoiceId(int hero_id, int voice_type);
const char * GetVoiceName(int voice_id);
void StartVoice(int voice_id);
void StopVoice(void);

void StartVoiceDebug(void);
