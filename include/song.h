#pragma once

#include "m4a.h"

extern const char * const song_names[];

const char * getSongName(int song);
const struct SongEnt * getSong(int song);
