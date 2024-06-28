#!/usr/bin/env python3

import os
import re
import json
import requests
import warnings
import urllib.parse
from PIL import Image
from playwright.sync_api import sync_playwright

map_configs = {}

message_en_path = 'asset/json/files/assets/USEN/Message/Data/'
config_common_path = 'asset/json/files/assets/Common/'
field_path = os.path.join(config_common_path, 'SRPG/Field/')
map_config_path = os.path.join(config_common_path, 'SRPGMap/')
terrain_config_path = os.path.join(config_common_path, 'SRPG/Terrain.json')
map_asset_path = 'asset/file/collection/Maps/'
map_image_path = os.path.join(map_asset_path, 'Story/')
map_common_path = os.path.join(map_asset_path, 'Common/')
map_image_save_path = 'map/full_color/'
map_image_decreased_color_save_path = 'map/decreased_color/'
map_obj_img_save_path = 'gfx/map/'
map_tsa_save_path = 'data/map/'
FEBuiderGBA = '..\\FEBuilderGBA\\FEBuilderGBA\\bin\\Debug\\FEBuilderGBA.exe --rom=baserom.gba'
wiki_config_save_path = 'map/wiki_conf/'
wiki_config_url = 'https://feheroes.fandom.com/wiki/%s?action=edit'

map_names = {
    "S5125": "Book_V,_Chapter_12-5:_Family",
    "S1105": "Book_I,_Chapter_10:_Part_5:_Radiant_Hero",
    "S6023": "Book_VI,_Chapter_2:_Part_3:_Radiant_Hero",
}

terrain_names = [
    {
        "index": 0,
        "name": "Plain",
    },
    {
        "index": 1,
        "name": "Floor",
    },
    {
        "index": 2,
        "name": "Desert",
    },
    {
        "index": 3,
        "name": "Forest",
    },
    {
        "index": 4,
        "name": "Mountain",
    },
    {
        "index": 5,
        "name": "River",
    },
    {
        "index": 6,
        "name": "Sea",
    },
    {
        "index": 7,
        "name": "Lava",
    },
    {
        "index": 8,
        "name": "Wall",
    },
    {
        "index": 9,
        "name": "Wall (Plain) hp=1",
    },
    {
        "index": 10,
        "name": "Wall (Plain) hp=2",
    },
    {
        "index": 11,
        "name": "Wall (Floor) hp=1",
    },
    {
        "index": 12,
        "name": "Wall (Floor) hp=2",
    },
    {
        "index": 13,
        "name": "Wall (Desert) hp=1",
    },
    {
        "index": 14,
        "name": "Wall (Desert) hp=2",
    },
    {
        "index": 15,
        "name": "Bridge",
    },
    {
        "index": 16,
        "name": "Gate",
    },
    {
        "index": 17,
        "name": "Fortress",
    },
    {
        "index": 18,
        "name": "Throne",
    },
    {
        "index": 19,
        "name": "Pillar (Bridge) hp=1",
    },
    {
        "index": 20,
        "name": "Pillar (Bridge) hp=2",
    },
    {
        "index": 21,
        "name": "House",
    },
    # 22-25: trench, not used in story maps, doc: https://feheroes.fandom.com/wiki/Trenches
    {
        "index": 26,
        "name": "Pool",
    }
]

def is_breakable(terrain_id):
    return terrain_configs[terrain_id]['hp'] > 0

def load_terrain_configs():
    with open(terrain_config_path, 'r', encoding="utf-8") as file:
        global terrain_configs
        terrain_configs = json.load(file)
    for terrain in terrain_names:
        terrain_configs[terrain['index']]['name'] = terrain['name']

def collect_terrain_1st_appearance():
    for map_id, config in sorted(map_configs.items()):
        terrains = config['field']['terrain']
        for y in range(len(terrains)):
            for x in range(len(terrains[y])):
                terrain_id = terrains[y][x]
                if '1st_appearance' not in terrain_configs[terrain_id]:
                    terrain_configs[terrain_id]['1st_appearance'] = {
                        'map_id': map_id,
                        'position': (x, y),
                    }

columns = ['a', 'b', 'c', 'd', 'e', 'f']

def print_terrain_1st_appearance():
    for terrain in terrain_configs:
        if '1st_appearance' in terrain:
            map_id = terrain['1st_appearance']['map_id']
            x, y = terrain['1st_appearance']['position']
            print(terrain['index'], map_id, columns[x] + str(y + 1))

def load_map_configs():
    for file_name in os.listdir(field_path):
        if file_name.endswith('.json'):
            file_path = os.path.join(field_path, file_name)
            with open(file_path, 'r', encoding="utf-8") as file:
                maps = json.load(file)
                for map in maps:
                    map_id = map['map_id']
                    if re.match(r'S\d{4}$', map_id):
                        map_config_file = os.path.join(map_config_path, map_id + 'C.json')
                        if not os.path.exists(map_config_file):
                            map_config_file = os.path.join(map_config_path, map_id + 'A.json')
                        if os.path.exists(map_config_file):
                            with open(map_config_file, 'r', encoding="utf-8") as f:
                                map_configs[map_id] = json.load(f)
                        for k, v in map.items():
                            map_configs[map_id]['field'][k] = v
                        if not os.path.exists(os.path.join(wiki_config_save_path, map_id + '.txt')):
                            fetch_config_from_wiki(map_id)
                        load_map_from_wiki(map_id)

def load_map_names():
    for file_name in os.listdir(message_en_path):
        if file_name.endswith('.json'):
            file_path = os.path.join(message_en_path, file_name)
            with open(file_path, 'r', encoding="utf-8") as file:
                messages = json.load(file)
                for message in messages:
                    key_prefix = 'MID_STAGE_'
                    if message['key'].startswith(key_prefix + 'S'):
                        map_id = message['key'][len(key_prefix):]
                        if map_id in map_configs:
                            map_configs[map_id]['name'] = message['value']
    for map_id, name in map_names.items():
        map_configs[map_id]['name'] = name

def get_text_in_textarea(url):
    with sync_playwright() as playwright:
        browser = playwright.chromium.launch(headless=True)
        page = browser.new_page()
        page.goto(url)
        page.wait_for_selector('textarea')
        # text_content/inner_html/input_value all work
        text = page.query_selector('textarea').text_content()
        browser.close()
        return text

def fetch_config_from_wiki(map_id):
    url = wiki_config_url % urllib.parse.quote_plus(map_configs[map_id]['name'].replace('’', "'").replace(' ', '_'))
    text = get_text_in_textarea(url)
    with open(os.path.join(wiki_config_save_path, map_id + '.txt'), 'w', encoding='utf-8') as file:
        file.write(text)

def fetch_all_configs_from_wiki():
    for map_id in map_configs:
        if not os.path.exists(os.path.join(wiki_config_save_path, map_id + '.txt')):
            print('Fetching map %s: %s' % (map_id, map_configs[map_id]['name']))
            fetch_config_from_wiki(map_id)

def load_map_from_wiki(map_id):
    map_configs[map_id]['field']['changes'] = {}
    with open(os.path.join(wiki_config_save_path, map_id + '.txt'), 'r', encoding='utf-8') as file:
        text = file.read()
        text = text.replace('#invoke:MapLayout|', '')
        pattern = '\| ([a-f][1-8])=\{\{Wall\|([^}]*)}}'
        for match in re.finditer(pattern, text):
            map_configs[map_id]['field']['changes'][match.group(1)] = {}
            map_configs[map_id]['field']['changes'][match.group(1)]['x'] = ord(match.group(1)[0]) - ord('a')
            map_configs[map_id]['field']['changes'][match.group(1)]['y'] = int(match.group(1)[1]) - 1
            args = match.group(2).split('|')
            for arg in args:
                k, v = arg.split('=')
                map_configs[map_id]['field']['changes'][match.group(1)][k] = v

# Reference: https://feheroes.fandom.com/wiki/Module:MapLayout

wall_positions = [
    # 1	    2	   U		# HP
    [[8,3], [7,3], [6,3]],	# N
    [[5,4], [4,4], [3,4]],	# E
    [[5,3], [4,3], [3,3]],	# NE
    [[2,4], [1,4], [0,4]],	# S
    [[5,0], [4,0], [3,0]],	# NS
    [[5,2], [4,2], [3,2]],	# ES
    [[5,1], [4,1], [3,1]],	# NES
    [[8,4], [7,4], [6,4]],	# W
    [[2,3], [1,3], [0,3]],	# NW
    [[2,0], [1,0], [0,0]],	# EW
    [[8,0], [7,0], [6,0]],	# NEW
    [[8,2], [7,2], [6,2]],	# SW
    [[8,1], [7,1], [6,1]],	# NSW
    [[2,1], [1,1], [0,1]],	# ESW
    [[2,2], [1,2], [0,2]],	# NESW
    [[9,2], [9,1], [9,0]],	# Pillar
    # a     b               # debrisType
    [[9,3], [9,4], [0,0]],	# Debris
]

wall_positions_columns = {
    '1': 0,
    '2': 1,
    'U': 2,
}

def get_wall_position(wall):
    if wall['hp'] == 0:
        if wall['type'].lower() in ('a', 'debris a') or (wall['type'].lower() == 'debris' and wall['debrisType'].lower() == 'a'):
            return wall_positions[16][0]
        if wall['type'].lower() in ('b', 'debris b') or (wall['type'].lower() == 'debris' and wall['debrisType'].lower() == 'b'):
            return wall_positions[16][1]
        warnings.warn('Invalid wall: %s' % str(wall))
        return None
    column = wall_positions_columns[wall['hp']]
    if wall['type'] == 'Pillar':
        return wall_positions[15][column]
    row = -1
    if 'N' in wall['type'].upper():
        row += 1
    if 'E' in wall['type'].upper():
        row += 2
    if 'S' in wall['type'].upper():
        row += 4
    if 'W' in wall['type'].upper():
        row += 8
    return wall_positions[row][column]

def make_map_images():
    for map_id, config in map_configs.items():
        image_path = os.path.join(map_image_path, map_id + '.png')
        if not os.path.exists(image_path):
            warnings.warn('Missing map image for %s' % map_id)
            continue
        image_map = Image.new('RGBA', (192, 256), (0, 0, 0, 0))
        # add wave image
        image_wave_filename = config['field']['backdrop']['filename'].replace('.jpg', '.png')
        image_wave = Image.open(os.path.join(map_common_path, image_wave_filename))
        image_wave = image_wave.crop((0, 0, 540, 540)).resize((192, 192))
        image_map.paste(image_wave, (0, 0))
        image_map.paste(image_wave, (0,192))
        image_base = Image.open(image_path).convert('RGBA')
        # check image size is 540 x 720
        if image_base.size != (540, 720):
            warnings.warn('Invalid map image size for %s: %s' % (map_id, image_base.size))
        # resize image to 192 x 256
        image_base = image_base.resize((192, 256))
        image_map.paste(image_base, (0, 0), image_base)
        # breakable_walls = []
        # terrains = config['field']['terrain']
        # for y in range(len(terrains)):
        #     for x in range(len(terrains[y])):
        #         terrain_id = terrains[y][x]
        #         if is_breakable(terrain_id):
        #             breakable_walls.append((x, y))
        if len(config['field']['changes']) > 0:
            image_map_new = Image.new('RGBA', (192 * 2, 256), (0, 0, 0, 0))
            image_map_new.paste(image_map, (0, 0))
            image_map_new.paste(image_map, (192, 0))
            image_walls_filename = config['field']['wall']['filename'].replace('.jpg', '.png')
            image_walls = Image.open(os.path.join(map_common_path, image_walls_filename)).convert('RGBA')
            for change in config['field']['changes'].values():
                position_x, position_y = get_wall_position(change)
                image_wall = image_walls.crop((position_x * 182, position_y * 182, (position_x * 182 + 180), (position_y * 182 + 180)))
                image_wall = image_wall.resize((32, 32))
                image_map_new.paste(image_wall, (change['x'] * 32, (7 - change['y']) * 32), image_wall)
                if not is_breakable(config['field']['terrain'][change['y']][change['x']]):
                    image_map_new.paste(image_wall, (change['x'] * 32 + 192, (7 - change['y']) * 32), image_wall)
            image_map = image_map_new
        image_map.save(os.path.join(map_image_save_path, map_id + '.png'))

def decrease_map_colors():
    for map_id in map_configs:
        image_map_path = os.path.join(map_image_save_path, map_id + '.png')
        image_map_decreased_color_path = os.path.join(map_image_decreased_color_save_path, map_id + '.png')
        # run FEBuilderGBA to decrease color: https://github.com/laqieer/FEBuilderGBA/commit/f67aa32c83fc79467eecbae02884228ee08a7975
        os.system('%s --decreasecolor --in=%s --out=%s --paletteno=10' % (FEBuiderGBA, image_map_path, image_map_decreased_color_path))

def make_map_tsa():
    for map_id in map_configs:
        image_map_decreased_color_path = os.path.join(map_image_decreased_color_save_path, map_id + '.png')
        map_obj_img_path = os.path.join(map_obj_img_save_path, map_id + '.png')
        map_tsa_path = os.path.join(map_tsa_save_path, map_id + '.bin')
        # run FEBuilderGBA to make TSA: https://github.com/laqieer/FEBuilderGBA/commit/fabcd487abe9f31c0d4578c61e17e6caded2257b
        os.system('%s --convertmap1picture --in=%s --outImg=%s --outTSA=%s' % (FEBuiderGBA, image_map_decreased_color_path, map_obj_img_path, map_tsa_path))

def make_chapters():
    map_ids = sorted(map_configs.keys())
    with open('include/chapters.h', 'w', encoding='utf-8') as file:
        file.write('#pragma once\n\n')
        file.write('enum {\n')
        file.write('    CHAPTER_CH_S0000 = CHAPTER_CH_NEW,\n')
        for map_id in map_ids:
            file.write('    CHAPTER_CH_%s,\n' % map_id)
        file.write('};\n\n')
    with open('source/chapters.c', 'w', encoding='utf-8') as file:
        file.write('''
#include "chapterinfo.h"
#include "chapterNew.h"
#include "constants/chapters.h"
#include "debugchapter.h"
#include "chapters.h"
#include "texts.h"
#include "gfx_map.h"

''')
        for map_id in map_ids:
            file.write('#include "%s_bin.h"\n' % map_id)
        file.write('''

#ifdef SPLIT_MAP_ANIMATION_FOR_NEW_CHAPTERS
void const * const ChapterMapGraphicAnimations[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = DebugChapterMapGraphicAnimation,
};

void const * const ChapterMapPaletteAnimations[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = NULL,
};
#endif

void const * const ChapterMaps[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = DebugChapterMap,
};

struct ChapterInfo const newChapters[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = {
        .debug_name = "S0000",
        .asset_img_b = 2,
        .asset_img_anims = 6,
        .msg_38 = 3786,
        .unk_0F = 3, // initial X
        .unk_10 = 14, // initial Y
        .song_blue_bgm = 10,
        .song_red_bgm = 2,
        .song_green_bgm = 10,
        .song_opening_bgm = 2,
    },
''')
        # chapters
        for map_id in map_ids:
            file.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = {\n' % map_id)
            file.write('        .debug_name = "%s",\n' % map_id)
            file.write('        .msg_38 = MID_STAGE_%s,\n' % map_id)
            if len(map_configs[map_id]['field']['changes']) > 0:
                file.write('        .wall_hp = WALL_HP_DEFAULT,\n')
            file.write('    },\n')
        file.write('};\n\n')
        # map graphics
        file.write('void const * const ChapterMapGraphics[] = {\n')
        file.write('    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = DebugChapterMapGraphic,\n')
        for map_id in map_ids:
            file.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = %sTiles,\n' % (map_id, map_id))
        file.write('};\n\n')
        # map tilesets
        file.write('void const * const ChapterMapTilesets[] = {\n')
        file.write('    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = DebugChapterMapTileset,\n')
        for map_id in map_ids:
            file.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = %s_bin,\n' % (map_id, map_id))
        file.write('};\n\n')
        # map palettes
        file.write('void const * const ChapterMapPalettes[] = {\n')
        file.write('    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = DebugChapterMapPalette,\n')
        for map_id in map_ids:
            file.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = %sPal,\n' % (map_id, map_id))
        file.write('};\n\n')
        #TODO: map changes and events
        file.write('''
void const * const ChapterMapChanges[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = NULL,
};

void const * const ChapterEvents[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = &DebugChapterEvent,
};

''')

if __name__ == '__main__':
    fetch_all_configs_from_wiki()
    load_map_configs()
    print('Loaded %d maps' % len(map_configs))
    load_map_names()
    load_terrain_configs()
    print('Loaded %d terrains' % len(terrain_configs))
    # collect_terrain_1st_appearance()
    # print_terrain_1st_appearance()
    # make_map_images()
    # decrease_map_colors()
    # make_map_tsa()
    make_chapters()
