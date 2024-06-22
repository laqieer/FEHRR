#!/usr/bin/env python3

# Path: asset/script/make_texts.py

import os
import re
import json
import opencc
import warnings
import unicodedata
from enum import Enum

class Language(Enum):
    LANGUAGE_JAPANESE = 0
    LANGUAGE_ENGLISH = 1
    LANGUAGE_CHINESE = 2

class TextType(Enum):
    SCENARIO = 0
    DATA = 1
    CHARACTER = 2
    UNIT = 3
    SKILL = 4
    STAGE = 5
    MUSIC = 6

my_names = {
    Language.LANGUAGE_JAPANESE: 'エクラ',
    Language.LANGUAGE_ENGLISH: 'Kiran',
    Language.LANGUAGE_CHINESE: '艾克拉',
}

exceptions = (
    "PID_ザカリア影",
)

texts = {}
text_keys = []
units = []
skills = []
unit_infos = {}
unit_counts = {}
skill_counts = {}

converter = opencc.OpenCC('t2s.json')

def load_hero_ids(header_file):
    with open(header_file, 'r', encoding='utf-8') as f:
        lines = f.readlines()
        for line in lines:
            result = re.findall(r'([PE]ID_\w+) (\d+)', line)
            if result:
                unit_counts[result[0][0]] = int(result[0][1])

def read_unit_infos(folder):
    for root, dirs, files in os.walk(folder):
        for file in files:
            path = os.path.join(root, file)
            with open(path, 'r', encoding='utf-8') as f:
                units = json.load(f)
                for unit in units:
                    unit_infos[unit['id_tag']] = unit

def count_units_and_skills(folder):
    for unit in ('PID_アルフォンス', 'PID_シャロン', 'PID_アンナ'):
        unit_counts[unit] = 9999
        for skills in unit_infos[unit]['skills']:
            for skill in skills:
                if skill is not None:
                    if skill not in skill_counts:
                        skill_counts[skill] = 0
                    skill_counts[skill] += 1
    for root, dirs, files in os.walk(folder):
        for file in files:
            if re.match(r'S\d{4}C\.json$', file):
                path = os.path.join(root, file)
                with open(path, 'r', encoding='utf-8') as f:
                    units =json.load(f)['units']
                    for unit in units:
                        if unit['id_tag'] not in unit_counts:
                            unit_counts[unit['id_tag']] = 0
                            if 'skills' in unit_infos[unit['id_tag']]:
                                for skills in unit_infos[unit['id_tag']]['skills']:
                                    for skill in skills:
                                        if skill is not None:
                                            if skill not in skill_counts:
                                                skill_counts[skill] = 0
                                            skill_counts[skill] += 1
                        unit_counts[unit['id_tag']] += 1
                        for skill in unit['skills']:
                            if skill is not None:
                                if skill not in skill_counts:
                                    skill_counts[skill] = 0
                                skill_counts[skill] += 1

def sort_units_and_skills():
    global units
    global skills
    units = sorted(unit_counts.keys(), key=lambda x: (unit_counts[x], x), reverse=True)
    skills = sorted(skill_counts.keys(), key=lambda x: (skill_counts[x], x), reverse=True)

def show_unit_face(matched):
    unit = matched.group(1)
    if unit == 'PID_フロージ':
        unit = 'EID_フロージ'
    if unit not in unit_infos:
        if unit not in exceptions:
            warnings.warn('Unit face not found: ' + unit)
        return ' TEXT_CMD_LEFT TEXT_CMD_CLEAR '
    return ' TEXT_CMD_LEFT TEXT_CMD_CLEAR TEXT_CMD_FACE %s ' % unit_infos[unit]['face_name']

# FEH text format: https://feunites.fandom.com/wiki/Module:ScenarioArchiveToWiki
def convert_text(language, text):
    if language == Language.LANGUAGE_CHINESE:
        text = converter.convert(text) # convert to simplified Chinese
    text = unicodedata.normalize('NFKC', text)
    text = text.replace('\\"', '"') # unescape double quotes
    text = text.replace('"', '\\"') # escape double quotes
    text = '"' + text + '"' # wrap with double quotes
    text = text.replace('\n\n', '" TEXT_CMD_NEWLINE "') # new line
    text = text.replace('\n', '" TEXT_CMD_NEWLINE "') # new line
    text = re.sub(r'\$WmM\S+?,ch90_\w+?,\w+\|', r'" TEXT_CMD_LEFT TEXT_CMD_CLEAR "', text) # generic face
    text = re.sub(r'\$WmM\S+?,(\w+?),\w+\|', r'" TEXT_CMD_LEFT TEXT_CMD_CLEAR TEXT_CMD_FACE \1 "', text) # face
    text = text.replace('$k', '" TEXT_CMD_WAIT "') # wait key to be pressed
    text = text.replace('$p', '" TEXT_CMD_NEWLINE "') # scroll up text
    text = re.sub(r'\$nM(\S+?)\|', show_unit_face, text) # speaker name
    text = text.replace('$Nu', my_names[language]) # summoner name
    text = text.replace('$Nf', my_names[language]) # friend name
    text = re.sub(r'\$E\w+?\|', '', text) # face expression
    text = re.sub(r'\$b\w+?\|', '', text) # background
    text = re.sub(r'\$c\d+?,\d+?,\d+?,\d+?\|', '', text) # text color
    text = re.sub(r'\$Sbp\w+?,\d+?\|', '', text) # play BGM
    text = re.sub(r'\$Sbs\d+?\|', '', text) # stop BGM
    text = re.sub(r'\$Sbv\d+?,\d+?\|', '', text) # BGM volume
    text = re.sub(r'\$Ssp\w+?\|', '', text) # play SE
    text = re.sub(r'\$Fo\d+?,\d+?,\d+?,\d+?,\d+?\|', '', text) # fade out
    text = re.sub(r'\$Fi\d+?\|', '', text) # fade in
    text = re.sub(r'\$w\w+?\|', '', text) # unknown
    text = re.sub(r'\$Im\d+?\|', '', text)
    text = re.sub(r'\$Iw\d+?\|', '', text)
    text = text.replace('$a', '') # some skill descriptions start with it
    text = re.sub(r'^""', '', text) # remove empty strings at the beginning
    text = re.sub(r'""$', '', text) # remove empty strings at the end
    text = re.sub(r'\\$', '\\""', text) # edge case: \""$
    text = text.strip() # remove leading and trailing spaces
    if 'TEXT_CMD_FACE' in text:
        text += ' TEXT_CMD_CLEAR'
    if '$' in text:
        warnings.warn('$ remains in text: ' + text)
    return text

def should_read_file(type, file):
    if type == TextType.SCENARIO:
        return re.match(r'S\d{4}\.json$', file)
    return True

def should_read_key(type, key):
    if type == TextType.SCENARIO:
        return key in ('MID_SCENARIO_OPENING', 'MID_SCENARIO_ENDING', 'MID_SCENARIO_MAP_BEGIN', 'MID_SCENARIO_MAP_END')
    return True

def read_texts(type, language, folder):
    if type not in texts:
        texts[type] = {}
    for root, dirs, files in os.walk(folder):
        for file in files:
            if should_read_file(type, file):
                path = os.path.join(root, file)
                with open(path, 'r', encoding='utf-8') as f:
                    kvs = json.load(f)
                    for kv in kvs:
                        key = kv['key']
                        key = key.replace('…', '')
                        if should_read_key(type, key):
                            if type == TextType.SCENARIO:
                                key += '_' + os.path.splitext(file)[0]
                            if key not in texts[type]:
                                texts[type][key] = {}
                            text = kv['value']
                            if text is None:
                                text = '""'
                            else:
                                text = convert_text(language, text)
                            texts[type][key][language] = text

def get_text_keys(type):
    keys = []
    if type == TextType.UNIT:
        type = TextType.DATA
        for unit in units:
            key = 'M' + unit
            if key not in texts[type]:
                warnings.warn('No text for key: ' + key)
            else:
                keys.append(key)
            key = key[:5] + 'H_' + key[5:]
            if key not in texts[type]:
                warnings.warn('No text for key: ' + key)
            else:
                keys.append(key)
            key = key.replace('_H_', '_HONOR_')
            if key in texts[type]:
                keys.append(key)
        return keys
    if type == TextType.SKILL:
        type = TextType.DATA
        for skill in skills:
            key = 'M' + skill
            if key not in texts[type]:
                warnings.warn('No text for key: ' + key)
            else:
                keys.append(key)
            key = key[:5] + 'H_' + key[5:]
            if key not in texts[type]:
                warnings.warn('No text for key: ' + key)
            else:
                keys.append(key)
        return keys
    if type == TextType.STAGE:
        type = TextType.DATA
        for key in texts[type]:
            if re.match(r'^MID_STAGE_S\d{4}$', key):
                keys.append(key)
        return keys
    if type == TextType.MUSIC:
        type = TextType.DATA
        for key in texts[type]:
            if key.startswith('MID_MUSIC_NAME_'):
                keys.append(key)
        return keys
    keys = [k for k in texts[type]]
    return keys

def validate_text_key(key):
    return key.replace('、', '').replace('＋', 'P').replace('―', '_')

def write_texts(type, filename):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write('// This file is generated by make_texts.py\n')
        f.write('// Text type: %s\n' % type)
        for key in sorted(get_text_keys(type)):
            text_keys.append(key)
            f.write('\n[' + validate_text_key(key) + '] = {\n')
            for language in Language:
                if type in (TextType.UNIT, TextType.SKILL, TextType.STAGE, TextType.MUSIC):
                    type = TextType.DATA
                if language in texts[type][key]:
                    f.write('    [%s] = %s,\n' % (language.name, texts[type][key][language]))
                else:
                    warnings.warn('No text for key: ' + key + ', language: ' + language.name)
                    f.write('    [%s] = "",\n' % (language.name))
            f.write('},\n')

def write_header(filename):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write('// This file is generated by make_texts.py\n')
        f.write('\n')
        f.write('#pragma once\n')
        f.write('\n')
        f.write('#include "textTest.h"\n')
        f.write('\n')
        text_id = 1
        for key in text_keys:
            f.write('#define %s TEXT_ID_TEST + %d\n' % (validate_text_key(key), text_id))
            text_id += 1

def write_names(filename):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write('#include "texts.h"\n')
        f.write('\n')
        f.write('const char * const text_keys[] = {\n')
        for key in text_keys:
            f.write('    [%s - TEXT_ID_TEST] = "%s",\n' % (validate_text_key(key), key))
        f.write('};\n')

def main():
    load_hero_ids('include/heroes.h')
    read_unit_infos('asset/json/files/assets/Common/SRPG/Person/')
    read_unit_infos('asset/json/files/assets/Common/SRPG/Enemy/')
    # print(unit_infos)
    count_units_and_skills('asset/json/files/assets/Common/SRPGMap/')
    sort_units_and_skills()
    # print('Total units: %d' % len(units))
    # print(units)
    # print('Total skills: %d' % len(skills))
    # print(skills)
    read_texts(TextType.SCENARIO, Language.LANGUAGE_JAPANESE, 'asset/json/files/assets/JPJA/Message/Scenario')
    read_texts(TextType.SCENARIO, Language.LANGUAGE_ENGLISH, 'asset/json/files/assets/USEN/Message/Scenario')
    read_texts(TextType.SCENARIO, Language.LANGUAGE_CHINESE, 'asset/json/files/assets/TWZH/Message/Scenario')
    read_texts(TextType.DATA, Language.LANGUAGE_JAPANESE, 'asset/json/files/assets/JPJA/Message/Data')
    read_texts(TextType.DATA, Language.LANGUAGE_ENGLISH, 'asset/json/files/assets/USEN/Message/Data')
    read_texts(TextType.DATA, Language.LANGUAGE_CHINESE, 'asset/json/files/assets/TWZH/Message/Data')
    write_texts(TextType.SCENARIO, 'include/scenarioTexts.h')
    write_texts(TextType.UNIT, 'include/unitTexts.h')
    write_texts(TextType.SKILL, 'include/skillTexts.h')
    write_texts(TextType.STAGE, 'include/stageTexts.h')
    write_texts(TextType.MUSIC, 'include/musicTexts.h')
    write_header('include/texts.h')
    write_names('source/textKeys.c')

if __name__ == '__main__':
    main()
