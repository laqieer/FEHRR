#!/usr/bin/env python3

# Music list:
# https://feheroes.fandom.com/wiki/Background_Music
# https://feheroes.fandom.com/wiki/Background_Music/Appearances
# https://fireemblem.fandom.com/wiki/List_of_Music_in_Fire_Emblem_Heroes

import os
import re
import json
import warnings
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
        json.dump(sorted([x for x in musics.values() if len(x.get("appearances", [])) > 0], key=lambda x: len(x["appearances"]), reverse=True), file, indent=4, ensure_ascii=False)

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

if __name__ == "__main__":
    read_music_titles()
    read_musics()
    read_map_musics()
    read_music_filenames()
    read_scenario_musics()
    list_appeared_musics()
    read_existed_musics()
    save_existed_musics()
    read_new_musics()
    save_new_musics()
    save_appeared_musics()
