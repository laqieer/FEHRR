#include "m4a.h"
#include "constants/songs.h"
#include "songsNew.h"
#include "log.h"

extern const struct SongEnt newSongs[];
extern const char * const song_names[];

const char * getSongName(int song) {
    Assert(song >= 0 && song < SONG_MAX);
    if (song >= SONG_NEW && song_names[song - SONG_NEW] != NULL) {
        return song_names[song - SONG_NEW];
    }
    return "";
}

const struct SongEnt * getSong(int song) {
    Assert(song >= 0 && song < SONG_MAX);
    Infof("Get song %d: %s", song, getSongName(song));
    return song < SONG_NEW ? &gSongTable[song] : &newSongs[song - SONG_NEW];
}

void PlaySongCoreNew(int song, struct MusicPlayer * music_player)
{
    if (music_player)
        m4aMPlayStart(music_player, getSong(song)->song);
    else
        m4aSongNumStart(song);
}

void PlaySongCoreOld(int song, struct MusicPlayer * music_player)
{
    PlaySongCoreNew(song, music_player);
}
