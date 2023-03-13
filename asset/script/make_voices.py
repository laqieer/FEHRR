#!/usr/bin/env python3

# Path: asset/script/make_voices.py

import common

import os
import re
import json
import warnings
import shutil
import subprocess

src_folders = (
    common.local_configs["FEH"] + '/assets/TWZH/Sound/',
    common.local_configs["FEH"] + '/assets/JPJA/Sound/',
    # common.local_configs["FEH"] + '/collection/Voices [Japanese]/',
)

dst_folder = 'voice/'

hero_romans = {
    "PID_神階エイル": "EIR",
    "PID_ユルグ": "YURG",
    "PID_神階ルピナス": "LUPINE",
    "PID_フリーズ": "FREEZE",
}

hero_romans2 = {
    "EID_ファフニール": "FAFNIR_NEWYEAR05",
    "EID_リーヴ": "LIF2",
    "EID_ヘル": "HELL_GOD01",
    "EID_グスタフ": "GUSTAF_VALENTINE04",
    "EID_エルム": "ELM_NEWYEAR01",
    "EID_フロージ": "FRODA_SUMMER10",
    "EID_スラシル": "SRASIR_GOD01",
}

specials = {
    "PID_ブルーノ皇子": "EID_ブルーノ",
    "PID_ヘンリエッテ": "PID_愛の祭ヘンリエッテ",
}

exceptions = (
    "PID_スリーズ声",
    "PID_ザカリア影",
    "EID_エンブラ兵",
    "PID_ニョルズ",
    "PID_ヘイズ",
    "PID_ロキアンナ",
    "EID_アスク兵",
    "EID_ニザヴェリル兵",
    "PID_アルフォンス0",
    "PID_スルト名前",
)

heroes = []
voices = []
hero_counts = {}

def get_real_name(hero):
    if hero in hero_romans:
        return hero
    if hero in specials:
        return specials[hero]
    if hero.replace('PID_', 'EID_') in hero_romans:
        return hero.replace('PID_', 'EID_')
    if hero.replace('PID_', 'PID_神階') in hero_romans:
        return hero.replace('PID_', 'PID_神階')
    if hero + '味方' in hero_romans:
        return hero + '味方'
    warnings.warn('hero without roman: %s' % hero)
    exit(1)

def is_important_hero(hero):
    return hero_counts[hero] > 4

def load_hero_romans(folder):
    for root, dirs, files in os.walk(folder):
        for file in files:
            path = os.path.join(root, file)
            with open(path, 'r') as f:
                heros = json.load(f)
                for hero in heros:
                    if hero['id_tag'] not in hero_romans:
                        hero_romans[hero['id_tag']] = hero['roman']

def load_heroes_in_scenarios(folder):
    for root, dirs, files in os.walk(folder):
        for file in files:
            if re.match(r'S\d{4}\.json$', file):
                path = os.path.join(root, file)
                with open(path, 'r') as f:
                    scenarios = json.load(f)
                    for scenario in scenarios:
                        if scenario['key'] in ('MID_SCENARIO_OPENING', 'MID_SCENARIO_ENDING', 'MID_SCENARIO_MAP_BEGIN', 'MID_SCENARIO_MAP_END'):
                            heros = re.findall(r'\$WmM(\S+?),\w+?,', scenario['value'])
                            for hero in heros:
                                    if hero in exceptions:
                                        continue
                                    hero = get_real_name(hero)
                                    if hero not in hero_counts:
                                        hero_counts[hero] = 0
                                    hero_counts[hero] += 1

def sort_heroes_by_count():
    global heroes
    heroes = sorted(hero_counts.keys(), key=lambda x: hero_counts[x], reverse=True)
    heroes = list(filter(is_important_hero, heroes))

def find_voice(filename):
    for src_folder in src_folders:
        # filepath = common.find_file_in_path(filename, src_folder)
        filepath = common.find_file_in_path(filename, src_folder, recursive=False)
        if filepath is not None:
            return filepath
    return None

def get_converted_wavefile(voice_path):
    wavefile = voice_path + '.wav'
    if os.path.exists(wavefile):
        return wavefile
    wavefile = voice_path + '_' + os.path.basename(voice_path) + '_extracted.wav'
    if os.path.exists(wavefile):
        return wavefile
    for f in os.listdir(os.path.dirname(voice_path)):
        if f.startswith(os.path.basename(voice_path)) and f.endswith('.wav'):
            wavefile = os.path.join(os.path.dirname(voice_path), f)
            return wavefile
    return None

def handle_voice(voice):
    filepath = find_voice(voice + '.ckb')
    if filepath is None:
        warnings.warn('voice not found: %s' % voice)
        return 'VOICE_NULL'
    voices.append(voice)
    subprocess.run(common.local_configs["CKB2WAV"] + ' ' +  filepath.replace('/mnt/c/', 'c:/'), shell=True, check=True)
    wavefile = get_converted_wavefile(os.path.splitext(filepath)[0])
    if wavefile is None:
        warnings.warn('CKB2WAV conversion failed: %s' % filepath)
        exit(1)
    subprocess.run(["sox", wavefile, "-r %d" % common.local_configs["voice"]["freq"], "-b 8", "-c 1", os.path.join(dst_folder, voice + '.wav')], check=True)
    os.remove(wavefile)
    return voice

def make_voices(filename):
    shutil.rmtree(dst_folder, ignore_errors=True)
    os.makedirs(dst_folder)
    with open(filename, 'w') as f:
        f.write('#include "heroes.h"\n')
        f.write('#include "voice.h"\n')
        f.write('#include "voices.h"\n')
        f.write('\n')
        f.write('const struct Voice voices[] = {\n')
        for hero in heroes:
            roman = hero_romans[hero]
            roman2 = hero_romans2.get(hero, roman)
            f.write('    [%s] = {\n' % hero)
            f.write('        .attack = {\n')
            f.write('            %s,\n' % handle_voice('VOICE_%s_ATTACK_1' % roman))
            f.write('            %s,\n' % handle_voice('VOICE_%s_ATTACK_2' % roman))
            f.write('        },\n')
            f.write('        .damage = {\n')
            f.write('            %s,\n' % handle_voice('VOICE_%s_DAMAGE_1' % roman))
            f.write('            %s,\n' % handle_voice('VOICE_%s_DAMAGE_2' % roman))
            f.write('        },\n')
            f.write('        .map = {\n')
            f.write('            %s,\n' % handle_voice('VOICE_%s_MAP_1' % roman2))
            f.write('            %s,\n' % handle_voice('VOICE_%s_MAP_2' % roman2))
            f.write('            %s,\n' % handle_voice('VOICE_%s_MAP_3' % roman2))
            f.write('        },\n')
            f.write('        .status = {\n')
            f.write('            %s,\n' % handle_voice('VOICE_%s_STATUS_1' % roman2))
            f.write('        },\n')
            f.write('    },\n')
            f.write('\n')
        f.write('};\n')

def make_hero_header(filename):
    with open(filename, 'w') as f:
        f.write('#pragma once\n')
        f.write('\n')
        for i, hero in enumerate(heroes):
            f.write('#define %s %d\n' % (hero, i + 1))

def make_voice_header(filename):
    with open(filename, 'w') as f:
        f.write('#pragma once\n')
        f.write('\n')
        f.write('enum {\n')
        f.write('    VOICE_NULL = 0,\n')
        for voice in voices:
            f.write('    %s,\n' % voice)
        f.write('};\n')

def show_hero_counts():
    print('%d heroes:' % len(heroes))
    for hero in heroes:
        print('%s: %d' % (hero, hero_counts[hero]))

def main():
    load_hero_romans('asset/json/files/assets/Common/SRPG/Person/')
    load_hero_romans('asset/json/files/assets/Common/SRPG/Enemy/')
    # print(hero_romans)
    load_heroes_in_scenarios('asset/json/files/assets/JPJA/Message/Scenario/')
    # print(hero_counts)
    sort_heroes_by_count()
    # print(heroes)
    show_hero_counts()
    make_hero_header('include/heroes.h')
    make_voices('source/voices.c')
    # print(voices)
    make_voice_header('include/voices.h')

if __name__ == '__main__':
    main()
