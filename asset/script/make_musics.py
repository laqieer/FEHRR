#!/usr/bin/env python3

# Music list:
# https://feheroes.fandom.com/wiki/Background_Music
# https://feheroes.fandom.com/wiki/Background_Music/Appearances
# https://fireemblem.fandom.com/wiki/List_of_Music_in_Fire_Emblem_Heroes

import os
import re
import json
import shutil
import warnings
import common
import urllib.request
from enum import Enum

class MusicType(Enum):
    MAP = 0
    BATTLE = 1
    SCENARIO = 2

musics = {}
music_titles = {}
music_titleJPJAs = {}
music_filenames = {}

def read_music_titles():
    for filename in os.listdir("asset/json/files/assets/USEN/Message/Data/"):
        if filename.endswith(".json"):
            with open("asset/json/files/assets/USEN/Message/Data/" + filename, "r", encoding="utf-8") as file:
                messages = json.load(file)
                for message in messages:
                    if message["key"].startswith("MID_MUSIC_NAME_"):
                        music_titles[message["key"]] = message["value"].replace("\n", " ")
    for filename in os.listdir("asset/json/files/assets/JPJA/Message/Data/"):
        if filename.endswith(".json"):
            with open("asset/json/files/assets/JPJA/Message/Data/" + filename, "r", encoding="utf-8") as file:
                messages = json.load(file)
                for message in messages:
                    if message["key"].startswith("MID_MUSIC_NAME_"):
                        music_titleJPJAs[message["key"]] = message["value"].replace("\n", "　")
    assert music_titles.keys() == music_titleJPJAs.keys()

def read_musics():
    with open("music/Background_Music.txt", "r", encoding="utf-8") as file:
        lines = file.readlines()
        for line in lines:
            if line.startswith("{{BGMTableRow|"):
                line = line[14:][:-3]
                args = line.split("|")
                music = {}
                for i, arg in enumerate(args):
                    if '=' in arg:
                        key, value = arg.split("=")
                        key = key.strip()
                        if key == "unofficial":
                            key = "title"
                        if key == "notes" and i < len(args) - 1:
                            value += "|" + "|".join(args[i+1:])
                        elif key == "titleJPJA":
                            value = value.replace("{{\\n}}", "　").replace("<br>", "　")
                        elif key == "title":
                            value = value.replace("{{\\n}}", " ").replace("<br>", " ")
                        elif key == "filename":
                            value = value[0].lower() + value[1:]
                        value = value.strip()
                        music[key] = value
                musics[music["filename"]] = music

def read_music_filenames():
    global music_filenames
    with open("music/music_filenames.json", "r", encoding="utf-8") as file:
        music_filenames = json.load(file)
        for titleId, filename in music_filenames.items():
            musics[filename]["titleId"] = titleId
            if titleId in music_titles:
                musics[filename]["title"] = music_titles[titleId]
            if titleId in music_titleJPJAs:
                musics[filename]["titleJPJA"] = music_titleJPJAs[titleId]
    for filename, music in musics.items():
        if "titleId" not in music:
            titleId = "MID_MUSIC_NAME_" + filename.upper()
            if titleId in music_titles or titleId in music_titleJPJAs:
                music["titleId"] = titleId
            else:
                for key, value in music_titles.items():
                    if value == music["title"] or music_titleJPJAs.get(key) == music["titleJPJA"]:
                        music["titleId"] = key
                        break
            if "titleId" in music:
                music_filenames[music["titleId"]] = filename

def read_map_musics():
    for filename in os.listdir("map/wiki_conf/"):
        if filename.endswith(".txt"):
            with open("map/wiki_conf/" + filename, "r", encoding="utf-8") as file:
                lines = file.readlines()
                hasBGM = False
                for line in lines:
                    if line.startswith("|BGM"):
                        hasBGM = True
                        line = line[1:][:-1]
                        key, value = line.split("=")
                        key = key.strip()
                        apperance = filename[:-4] + '_' + key
                        value = value.strip()
                        if value == "":
                            continue
                        value = value.split("<!--")[0]
                        value = value[0].lower() + value[1:]
                        if value not in musics:
                            warnings.warn(f"Map BGM not found: {value}, apperance: {apperance}")
                            musics[value] = {"filename": value}
                        if "appearances" not in musics[value]:
                            musics[value]["appearances"] = []
                        musics[value]["appearances"].append(apperance)
                assert hasBGM

def read_scenario_musics():
    for filename in os.listdir("asset/json/files/assets/JPJA/Message/Scenario/"):
        if re.match(r"^S\d{4}\.json$", filename):
            with open("asset/json/files/assets/JPJA/Message/Scenario/" + filename, "r", encoding="utf-8") as file:
                messages = json.load(file)
                for message in messages:
                    if "_BGM" in message["key"]:
                        apperance = filename[:-5] + '_' + message["key"]
                        titleId = "MID_MUSIC_NAME_" + message["value"]
                        music = music_filenames[titleId]
                        if music not in musics:
                            warnings.warn(f"Scenario BGM not found: {music}, apperance: {apperance}")
                            musics[music] = {"filename": music}
                        if "appearances" not in musics[music]:
                            musics[music]["appearances"] = []
                        musics[music]["appearances"].append(apperance)

def list_appeared_musics():
    count = 0
    for music in musics.values():
        if len(music.get("appearances", [])) > 0:
            count += 1
            print(music['filename'])
            print(music.get('titleId', ''))
            print(f"({music.get('title', '')} / {music.get('titleJPJA', '')})")
            print(f"appears {len(music['appearances'])} times:")
            for appearance in music["appearances"]:
                print(f"  {appearance}")
    print(f"Total {count} musics")

def save_appeared_musics():
    for filename, music in musics.items():
        if filename in existed_musics:
            music["source"] = existed_musics[filename]
        elif filename in new_musics:
            music["source"] = new_musics[filename]
    with open("music/appeared_musics.json", "w", encoding="utf-8") as file:
        json.dump(sorted([x | {"source": x["source"][0] if len(x["source"]) > 0 else None} for x in musics.values() if len(x.get("appearances", [])) > 0], key=lambda x: len(x["appearances"]), reverse=True), file, indent=4, ensure_ascii=False)

existed_musics = {}

def read_existed_musics():
    global existed_musics
    with open("music/existed_musics.json", "r", encoding="utf-8") as file:
        existed_musics = json.load(file)

def save_existed_musics():
    for filename in sorted(musics.keys()):
        if "_FE06_" in filename and filename not in existed_musics:
            existed_musics[filename] = ""
    with open("music/existed_musics.json", "w", encoding="utf-8") as file:
        json.dump(existed_musics, file, indent=4)

new_musics = {}

def read_new_musics():
    global new_musics
    with open("music/new_musics.json", "r", encoding="utf-8") as file:
        new_musics = json.load(file)

def save_new_musics():
    for filename in sorted(musics.keys()):
        if filename not in existed_musics and filename not in new_musics and len(musics[filename].get("appearances", [])) > 0:
            new_musics[filename] = ""
    for k, v in new_musics.items():
        if type(v) == str:
            if v == "":
                new_musics[k] = []
            else:
                new_musics[k] = [v]
    with open("music/new_musics.json", "w", encoding="utf-8") as file:
        json.dump(new_musics, file, indent=4)

def make_new_musics():
    for filename, source in new_musics.items():
        if len(source) > 0 and len(musics[filename].get("appearances", [])) > 0:
            source = source[0]
            ext = os.path.splitext(source)[1].lower()[1:]
            if ext in ("mid", "midi"):
                if re.match(r"^fe\d+/", source):
                    source = "music/" + source
                else:
                    source = common.find_file_in_path(source, "../FE-Midi-Repo/")
                if source is not None:
                    shutil.copy(source, "music/midi/" + filename.replace(".ogg", ".mid"))
                else:
                    warnings.warn(f"Source not found for music: {filename}")
            elif ext == "s":
                if re.match(r"^fe[78]/", source):
                    source = "music/" + source
                else:
                    source = common.find_file_in_path(source, "music/public/")
                if source is not None:
                    with open(source, "r", encoding="utf-8") as f_src, open("source/music/" + filename.replace(".ogg", ".s"), "w", encoding="utf-8") as f_dst:
                        text = f_src.read()
                        song_name = re.search(r"\s*\.global\s+([^\s]+)\s*", text).groups()[0]
                        text = text.replace(song_name, filename[:-4])
                        f_dst.write(text)
                else:
                    warnings.warn(f"Source not found for music: {filename}")
            else:
                warnings.warn(f"Unknown source type: {source}")

def download_music_files():
    with open("music/Background Music - Fire Emblem Heroes Wiki.html", "r", encoding="utf-8") as file:
        text = file.read()
        matches = re.findall(r"<td><div data-audio=\"https&#58;//([^\"]+)\"></div><a href=\"/wiki/File:([^\"]+)\.ogg\"", text)
        for url, filename in matches:
            url = "https://" + url
            filename = filename[0].lower() + filename[1:] + ".ogg"
            if len(new_musics.get(filename, filename)) == 0 and len(musics[filename].get('appearances', [])) > 0 and not os.path.exists("music/original/" + filename):
                print(f"Downloading {filename}...")
                urllib.request.urlretrieve(url, "music/original/" + filename)

def print_music_progress():
    print("Music progress:")
    print(f"Appeared {len([x for x in musics.values() if len(x.get('appearances', [])) > 0])} musics")
    print(f"Existed {len([x for x in musics.values() if len(x.get('appearances', [])) > 0 and x['filename'] in existed_musics])} musics")
    print(f"Added {len([x for x in new_musics if len(musics[x].get('appearances', [])) > 0 and len(new_musics[x]) > 0])} musics")
    print(f"TODO: {len([x for x in new_musics if len(musics[x].get('appearances', [])) > 0 and len(new_musics[x]) == 0])} musics")
    print(sorted([x for x in new_musics if len(musics[x].get('appearances', [])) > 0 and len(new_musics[x]) == 0]))

def get_music_id_from_filename(filename):
    return f"SONG_{filename[:-4].upper()}"

def make_header_file():
    with open("include/songsNew.h", "w", encoding="utf-8") as file:
        file.write("#pragma once\n\n")
        file.write("enum {\n")
        file.write("    SONG_NEW = 621,\n")
        for filename in sorted([x for x in new_musics if len(musics[x].get('appearances', [])) > 0]):
            file.write(f"    {get_music_id_from_filename(filename)},\n")
        file.write("    SONG_MAX\n")
        file.write("};\n\n")
        for filename, original_song in sorted(existed_musics.items()):
            if original_song != "":
                file.write(f"#define {get_music_id_from_filename(filename)} {original_song}\n")
        file.write("\n")
        for filename, music in musics.items():
            for appearance in music.get("appearances", []):
                file.write(f"#define {appearance} {get_music_id_from_filename(filename)}\n")

def make_source_file():
    with open("source/songs.c", "w", encoding="utf-8") as file:
        file.write("#include \"m4a.h\"\n")
        file.write("#include \"constants/songs.h\"\n")
        file.write("#include \"songsNew.h\"\n")
        file.write("#include \"source_music.h\"\n")
        file.write("#include \"music_midi.h\"\n")
        file.write("#include \"music_trans_best_matches.h\"\n\n")
        file.write("const struct SongEnt newSongs[] = {\n")
        for filename in sorted([x for x in new_musics if len(musics[x].get('appearances', [])) > 0]):
            priority = 0
            for appearance in musics[filename].get("appearances", []):
                if "MID_SCENARIO" not in appearance:
                    priority = 1
                    break
            file.write(f"    [{get_music_id_from_filename(filename)} - SONG_NEW] = {{&{filename[:-4]}, {priority}, {priority}}},\n")
        file.write("};\n\n")
        file.write("const char * const song_names[] = {\n")
        for filename in sorted([x for x in new_musics if len(musics[x].get('appearances', [])) > 0]):
            file.write(f"    [{get_music_id_from_filename(filename)} - SONG_NEW] = \"{filename[:-4]}\",\n")
        file.write("};\n\n")

if __name__ == "__main__":
    read_music_titles()
    read_musics()
    read_map_musics()
    read_music_filenames()
    read_scenario_musics()
    # list_appeared_musics()
    read_existed_musics()
    # save_existed_musics()
    read_new_musics()
    # save_new_musics()
    # save_appeared_musics()
    # make_new_musics()
    # download_music_files()
    # print_music_progress()
    make_header_file()
    make_source_file()
