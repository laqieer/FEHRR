#!/usr/bin/env python3

import os
import re
import json
import numpy
import common
import warnings
import urllib.parse
from enum import Enum
from PIL import Image
from playwright.sync_api import sync_playwright

map_configs = {}
map_scenarios = {}

message_en_path = 'asset/json/files/assets/USEN/Message/'
message_en_data_path = os.path.join(message_en_path, 'Data/')
message_en_scenario_path = os.path.join(message_en_path, 'Scenario/')
config_common_path = 'asset/json/files/assets/Common/'
field_path = os.path.join(config_common_path, 'SRPG/Field/')
map_config_path = os.path.join(config_common_path, 'SRPGMap/')
terrain_config_path = os.path.join(config_common_path, 'SRPG/Terrain.json')
unit_data_person_path = os.path.join(config_common_path, 'SRPG/Person/')
unit_data_enemy_path = os.path.join(config_common_path, 'SRPG/Enemy/')
weapon_type_path = os.path.join(config_common_path, 'SRPG/Weapon.json')
move_type_path = os.path.join(config_common_path, 'SRPG/Move.json')
map_asset_path = 'asset/file/collection/Maps/'
map_image_path = os.path.join(map_asset_path, 'Story/')
map_common_path = os.path.join(map_asset_path, 'Common/')
map_image_save_path = 'map/full_color/'
map_image_decreased_color_save_path = 'map/decreased_color/'
map_obj_img_save_path = 'gfx/map/'
map_tsa_save_path = 'data/map/'
map_terrain_uncompressed_save_path = 'map/uncompressed_terrain/'
map_terrain_compressed_save_path = 'data/terrain/'
FEBuiderGBA = '..\\FEBuilderGBA\\FEBuilderGBA\\bin\\Debug\\FEBuilderGBA.exe --rom=baserom.gba'
wiki_config_save_path = 'map/wiki_conf/'
wiki_config_url = 'https://feheroes.fandom.com/wiki/%s?action=edit'

hero_ids = common.load_hero_ids('include/heroes.h')

unit_data = {}

hero_by_face = {}

def is_hero(unit):
    return unit['face_name'] is not None and not unit['face_name'].startswith('ch90_')

def is_hero_defined(unit):
    return unit['face_name'] is not None and hero_by_face.get(unit['face_name']) in hero_ids

def load_unit_data():
    for folder in (unit_data_person_path, unit_data_enemy_path):
        for root, dirs, files in os.walk(folder):
            for file in files:
                path = os.path.join(root, file)
                with open(path, 'r', encoding='utf-8') as f:
                    units = json.load(f)
                    for unit in units:
                        unit['id_tag'] = unit['id_tag'].replace('―', '_')
                        if unit['id_tag'].endswith('味方'):
                            unit['id_tag'] = 'E' + unit['id_tag'][1:-2]
                        unit_data[unit['id_tag']] = unit
                        if unit['id_tag'] in hero_ids and hero_by_face.get(unit['face_name']) not in hero_ids:
                            hero_by_face[unit['face_name']] = unit['id_tag']

def load_weapon_type():
    with open(weapon_type_path, 'r', encoding='utf-8') as file:
        global weapon_type
        weapon_type = json.load(file)

def load_move_type():
    with open(move_type_path, 'r', encoding='utf-8') as file:
        global move_type
        move_type = json.load(file)

map_names = {
    "S5125": "Book_V,_Chapter_12-5:_Family",
    "S1105": "Book_I,_Chapter_10:_Part_5:_Radiant_Hero",
    "S6023": "Book_VI,_Chapter_2:_Part_3:_Radiant_Hero",
}

terrain_map = [
    {
        "index": 0,
        "name": "Plain",
        "terrain_id": 1,
    },
    {
        "index": 1,
        "name": "Floor",
        "terrain_id": 0x17,
    },
    {
        "index": 2,
        "name": "Desert",
        "terrain_id": 0xf,
    },
    {
        "index": 3,
        "name": "Forest",
        "terrain_id": 0xc,
    },
    {
        "index": 4,
        "name": "Mountain",
        "terrain_id": 0x12,
    },
    {
        "index": 5,
        "name": "River",
        "terrain_id": 0x10,
    },
    {
        "index": 6,
        "name": "Sea",
        "terrain_id": 0x15,
    },
    {
        "index": 7,
        "name": "Lava",
        "terrain_id": 0x31,
    },
    {
        "index": 8,
        "name": "Wall",
        "terrain_id": 0x1a,
    },
    {
        "index": 9,
        "name": "Wall (Plain) hp=1",
        "terrain_id": 0x1b,
    },
    {
        "index": 10,
        "name": "Wall (Plain) hp=2",
        "terrain_id": 0x1b,
    },
    {
        "index": 11,
        "name": "Wall (Floor) hp=1",
        "terrain_id": 0x1b,
    },
    {
        "index": 12,
        "name": "Wall (Floor) hp=2",
        "terrain_id": 0x1b,
    },
    {
        "index": 13,
        "name": "Wall (Desert) hp=1",
        "terrain_id": 0x1b,
    },
    {
        "index": 14,
        "name": "Wall (Desert) hp=2",
        "terrain_id": 0x1b,
    },
    {
        "index": 15,
        "name": "Bridge",
        "terrain_id": 0x13,
    },
    {
        "index": 16,
        "name": "Gate",
        "terrain_id": 0xb,
    },
    {
        "index": 17,
        "name": "Fortress",
        "terrain_id": 0xa,
    },
    {
        "index": 18,
        "name": "Throne",
        "terrain_id": 0x1f,
    },
    {
        "index": 19,
        "name": "Pillar (Bridge) hp=1",
        "terrain_id": 0x1b,
    },
    {
        "index": 20,
        "name": "Pillar (Bridge) hp=2",
        "terrain_id": 0x1b,
    },
    {
        "index": 21,
        "name": "Building",
        "terrain_id": 0x2c,
    },
    # 22-25: trench, not used in story maps, doc: https://feheroes.fandom.com/wiki/Trenches
    {
        "index": 26,
        "name": "Pool",
        "terrain_id": 0x16,
    }
]

class BattleTerrain(Enum):
    DEFAULT = 0
    SNOW = 1
    LAVA_CAVE = 2
    POISON_CAVE = 3
    CASTLE_GRAY = 4
    TOWN = 5
    CASTLE_YELLOW = 6
    MOUNTAIN = 7
    CASTLE_AGAIN = 8
    DESERT = 9

def is_breakable(terrain_id):
    return terrain_configs[terrain_id]['hp'] > 0

def load_terrain_configs():
    with open(terrain_config_path, 'r', encoding="utf-8") as file:
        global terrain_configs
        terrain_configs = json.load(file)
    for terrain in terrain_map:
        for k, v in terrain.items():
            terrain_configs[terrain['index']][k] = v

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
    for file_name in os.listdir(message_en_data_path):
        if file_name.endswith('.json'):
            file_path = os.path.join(message_en_data_path, file_name)
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

def load_map_scenarios():
    for file_name in os.listdir(message_en_scenario_path):
        if re.match(r'S\d{4}.json', file_name):
            map_id = os.path.splitext(file_name)[0]
            map_scenarios[map_id] = {}
            file_path = os.path.join(message_en_scenario_path, file_name)
            with open(file_path, 'r', encoding="utf-8") as file:
                kvs = json.load(file)
                for kv in kvs:
                    map_scenarios[map_id][kv['key']] = kv['value']

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
        text = text.replace('#invoke:MapLayout|', '').replace('Box|', 'Wall|').replace(' ', '')
        pattern = '\|([a-f][1-8])=\{\{Wall\|([^}]*)}}'
        for match in re.finditer(pattern, text, re.IGNORECASE):
            if match.group(1) not in map_configs[map_id]['field']['changes']:
                map_configs[map_id]['field']['changes'][match.group(1)] = {}
                map_configs[map_id]['field']['changes'][match.group(1)]['x'] = ord(match.group(1)[0]) - ord('a')
                map_configs[map_id]['field']['changes'][match.group(1)]['y'] = int(match.group(1)[1]) - 1
                args = match.group(2).split('|')
                for arg in args:
                    k, v = arg.split('=')
                    map_configs[map_id]['field']['changes'][match.group(1)][k] = v
                if 'type' not in map_configs[map_id]['field']['changes'][match.group(1)] and 'debrisType' in map_configs[map_id]['field']['changes'][match.group(1)]:
                    map_configs[map_id]['field']['changes'][match.group(1)]['type'] = 'Debris'

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
    if wall['hp'] == '0':
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
        breakable_walls = []
        terrains = config['field']['terrain']
        for y in range(len(terrains)):
            for x in range(len(terrains[y])):
                terrain_id = terrains[y][x]
                if is_breakable(terrain_id):
                    breakable_walls.append((x, y))
        assert set(breakable_walls) == set([(c['x'], c['y']) for c in config['field']['changes'].values() if c['hp'] in ('1', '2')])
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

def make_map_terrains():
    for map_id, config in map_configs.items():
        terrains = numpy.zeros((32, 32), dtype=numpy.uint8)
        for y in range(8):
            for x in range(6):
                terrain = config['field']['terrain'][7 - y][x]
                terrain_id = terrain_configs[terrain]['terrain_id']
                terrains[2 * y][2 * x] = terrain_id
                terrains[2 * y][2 * x + 1] = terrain_id
                terrains[2 * y + 1][2 * x] = terrain_id
                terrains[2 * y + 1][2 * x + 1] = terrain_id
        for change in config['field']['changes'].values():
            terrain = config['field']['terrain'][change['y']][change['x']]
            if is_breakable(terrain):
                base_terrain = terrain_configs[terrain]['base_terrain']
                base_terrain_id = terrain_configs[base_terrain]['terrain_id']
                terrains[2 * (7 - change['y'])][2 * (change['x'] + 6)] = base_terrain_id
                terrains[2 * (7 - change['y'])][2 * (change['x'] + 6) + 1] = base_terrain_id
                terrains[2 * (7 - change['y']) + 1][2 * (change['x'] + 6)] = base_terrain_id
                terrains[2 * (7 - change['y']) + 1][2 * (change['x'] + 6) + 1] = base_terrain_id
                if change['hp'] == '1':
                    if change['type'] in ('W', 'E', 'Pillar'):
                        terrains[2 * (7 - change['y'])][2 * change['x']] = base_terrain_id
                        terrains[2 * (7 - change['y'])][2 * change['x'] + 1] = base_terrain_id
                    if change['type'] == 'N': # right bottom
                        terrains[2 * (7 - change['y']) + 1][2 * change['x'] + 1] = base_terrain_id
                    if change['type'] == 'S': # left top
                        terrains[2 * (7 - change['y'])][2 * change['x']] = base_terrain_id
        map_terrain_uncompressed_path = os.path.join(map_terrain_uncompressed_save_path, map_id + 'T.bin')
        with open(map_terrain_uncompressed_path, 'wb') as file:
            file.write(b'\x00')
            file.write(terrains.tobytes()[:-1])
        map_terrain_compressed_path = os.path.join(map_terrain_compressed_save_path, map_id + 'T.bin')
        os.system('gbalzss e %s %s' % (map_terrain_uncompressed_path, map_terrain_compressed_path))

def make_map_tilesets():
    make_map_tsa()
    make_map_terrains()
    map_ids = sorted(map_configs.keys())
    with open('include/tilesets.h', 'w', encoding='utf-8') as file:
        file.write('#pragma once\n\n')
        for map_id in map_ids:
            file.write('#include "%s_bin.h"\n' % map_id)
            file.write('#include "%sT_bin.h"\n' % map_id)

def make_map_changes():
    map_ids = sorted(map_configs.keys())
    with open('include/mapchanges.h', 'w', encoding='utf-8') as file:
        file.write('#pragma once\n\n')
        for map_id in map_ids:
            if len(map_configs[map_id]['field']['changes']) > 0:
                file.write('extern const struct MapChangeInfo %sMapChanges[];\n' % map_id)
    with open('source/mapchanges.c', 'w', encoding='utf-8') as file:
        file.write('#include "unknown_types.h"\n\n')
        for map_id, config in sorted(map_configs.items(), key=lambda x: x[0]):
            if len(config['field']['changes']) > 0:
                file.write('const u16 %sMapChangedTiles[] = {\n' % map_id)
                for i, change in enumerate(sorted(config['field']['changes'].values(), key=lambda x: x['x'] + (7 - x['y']) * 12)):
                    x0 = 2 * (change['x'] + 6)
                    y0 = 2 * (7 - change['y'])
                    file.write('    4 * %d, 4 * %d, 4 * %d, 4 * %d, // %d\n' % (y0 * 32 + x0 + 1, y0 * 32 + x0 + 1 + 1, (y0 + 1) * 32 + x0 + 1, (y0 + 1) * 32 + x0 + 1 + 1, i))
                file.write('};\n\n')
                file.write('const struct MapChangeInfo %sMapChanges[] = {\n' % map_id)
                for i, change in enumerate(sorted(config['field']['changes'].values(), key=lambda x: x['x'] + (7 - x['y']) * 12)):
                    x0 = 2 * change['x']
                    y0 = 2 * (7 - change['y'])
                    file.write('    {\n')
                    file.write('        .id = %d,\n' % i)
                    file.write('        .x = %d,\n' % x0)
                    file.write('        .y = %d,\n' % y0)
                    file.write('        .width = 2,\n')
                    file.write('        .height = 2,\n')
                    file.write('        .metatiles = &%sMapChangedTiles[2 * 2 * %d],\n' % (map_id, i))
                    file.write('    },\n')
                file.write('''    {
        .id = -1,
    },
};

''')

def make_common_map():
    with open('source/newmap.c', 'w', encoding='utf-8') as file:
        file.write('''
#include <gba_types.h>

const u16 NewChapterMap[] = {
    0xE600, 1,
    15 + (16 <<8),
''')
        for y in range(16):
            file.write('   ')
            for x in range(12):
                file.write(' %d,' % (4 * (y * 32 + x + 1)))
            file.write(' 4 * 25, 4 * 25, 4 * 25,\n')
        file.write('};\n')

def make_chapters():
    total_enemy_counts = 0
    map_ids = sorted(map_configs.keys())
    with open('include/chapters.h', 'w', encoding='utf-8') as file:
        file.write('#pragma once\n\n')
        file.write('enum {\n')
        file.write('    CHAPTER_CH_S0000 = CHAPTER_CH_NEW,\n')
        for map_id in map_ids:
            file.write('    CHAPTER_CH_%s,\n' % map_id)
        file.write('    CHAPTER_CH_COUNT,\n')
        file.write('};\n\n')
    with open('source/chapters.c', 'w', encoding='utf-8') as file:
        file.write('''
#include "bm.h"
#include "chapterinfo.h"
#include "chapterNew.h"
#include "constants/faces.h"
#include "constants/chapters.h"
#include "constants/songs.h"
#include "songsNew.h"
#include "debugchapter.h"
#include "chapters.h"
#include "texts.h"
#include "tilesets.h"
#include "unknown_types.h"
#include "mapchanges.h"
#include "chaptergoals.h"
#include "mapevents.h"
#include "gfx_map.h"

#ifdef SPLIT_MAP_ANIMATION_FOR_NEW_CHAPTERS
void const * const ChapterMapGraphicAnimations[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = DebugChapterMapGraphicAnimation,
};

void const * const ChapterMapPaletteAnimations[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = NULL,
};
#endif

extern const u16 NewChapterMap[];

void const * const ChapterMaps[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = DebugChapterMap,
    [CHAPTER_CH_S0001 - CHAPTER_CH_NEW] = NewChapterMap,
};

struct ChapterInfoNew const newChapters[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = {
        .debug_name = "S0000",
        .asset_img_b = 2,
        .asset_img_anims = 6,
        .hard_bonus_levels = HARD_MODE_BONUS_LEVELS_DEFAULT,
        .msg_goal = CHAPTER_GOAL_MSG_ID_S0000,
        .msg_blue_army = MSG_ID_BLUE_ARMY,
        .msg_red_army = MSG_ID_RED_ARMY,
        .chibi_red_army = FID_FACTION_CHIBI_1 - FID_FACTION_CHIBI,
        .msg_title = DEBUG_CHAPTER_TITLE_MSG_ID,
        .initial_x = 3,
        .initial_y = 14,
    },
''')
        # chapters
        for map_id in map_ids:
            enemy_count = map_configs[map_id]['unit_count']
            total_enemy_counts += enemy_count
            file.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = {\n' % map_id)
            file.write('        .debug_name = "%s",\n' % map_id)
            file.write('        .has_prep = %s,\n' % ('TRUE' if map_configs[map_id]['player_count'] >= 4 else 'FALSE'))
            file.write('        .initial_x = %d,\n' % map_configs[map_id]['player_pos'][0]['x'])
            file.write('        .initial_y = %d,\n'% map_configs[map_id]['player_pos'][0]['y'])
            # file.write('        .weather = WEATHER_%s,\n' % ('FLAMES' if get_battle_terrain(map_id) == BattleTerrain.LAVA_CAVE else 'NONE'))
            file.write('        .banim_terrain_id = BANIM_TERRAIN_%s,\n' % get_battle_terrain(map_id).name)
            file.write('        .hard_bonus_levels = HARD_MODE_BONUS_LEVELS_DEFAULT,\n')
            file.write('        .class_roll_set = 6,\n')
            # Assume 1 turn to approach enemies and defeat 1 enemy each turn
            min_clear_turns = max(map_configs[map_id]['turns_to_win'], map_configs[map_id]['turns_to_defend'], map_configs[map_id]['unit_count']) + 1
            file.write('        .rank_turns = {%d, %d, %d, %d},\n' % (min_clear_turns, min_clear_turns + 5, min_clear_turns + 10, min_clear_turns + 20))
            # Assume level up 3 times after defeating 4 enemies
            level_up_times = int(total_enemy_counts * 0.75)
            file.write('        .rank_exps = {%d, %d, %d, %d},\n' % (level_up_times, int(level_up_times * 0.9), int(level_up_times * 0.8), int(level_up_times * 0.7)))
            # Assume 2 stats up each level up (7 stats including HP, considering growth rate, base stats and job stats cap)
            file.write('        .rank_stats = {%d, %d, %d, %d},\n' % (level_up_times * 2, int(level_up_times * 1.5), int(level_up_times * 1.2), level_up_times))
            file.write('        .msg_goal = CHAPTER_GOAL_MSG_ID_%s,\n' % map_id)
            file.write('        .msg_blue_army = MSG_ID_BLUE_ARMY,\n')
            file.write('        .msg_red_army = MSG_ID_RED_ARMY,\n')
            file.write('        .chibi_red_army = FID_FACTION_CHIBI_1 - FID_FACTION_CHIBI,\n')
            file.write('        .msg_title = MID_STAGE_%s,\n' % map_id)
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
        # map terrains
        file.write('''
void const * const ChapterMapTerrains[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = NULL,
''')
        for map_id in map_ids:
            file.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = %sT_bin,\n' % (map_id, map_id))
        # map changes
        file.write('''
};

void const * const ChapterMapChanges[] = {
''')
        for map_id in map_ids:
            if len(map_configs[map_id]['field']['changes']) > 0:
                file.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = %sMapChanges,\n' % (map_id, map_id))
        # map events
        file.write('''
};

void const * const ChapterEvents[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = &DebugChapterEvent,
''')
        for map_id in map_ids:
            file.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = &ChapterEventInfo_%s,\n' % (map_id, map_id))
        # map BGMs
        file.write('''
};

const u16 ChapterMapBGMs[] = {
    [CHAPTER_CH_S0000 - CHAPTER_CH_NEW] = SONG_01,
''')
        for map_id in map_ids:
            file.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = %s_BGM,\n' % (map_id, map_id))
        # Openning BGMs
        file.write('''
};

const u16 ChapterOPBGMs[] = {
''')
        for map_id in map_ids:
            if 'MID_SCENARIO_OPENING_BGM' in map_scenarios.get(map_id, {}):
                file.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = %s_MID_SCENARIO_OPENING_BGM,\n' % (map_id, map_id))
            elif 'MID_SCENARIO_MAP_BEGIN_BGM' in map_scenarios.get(map_id, {}):
                file.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = %s_MID_SCENARIO_MAP_BEGIN_BGM,\n' % (map_id, map_id))
        file.write('};\n')

def print_terrain_by_groups():
    print([{'terrain_group': t['terrain_group'], 'terrain': t.get('name', t['index'])} for t in sorted(terrain_configs, key=lambda x: len(terrain_configs) * x['terrain_group'] + x['index'])])

map_anims = set()

def print_map_anims():
    for config in map_configs.values():
        map_anims.add(config['field']['anim'])
    print(map_anims)

# define Enum for battle terrain

battle_terrain_by_group = {
    # 0: BattleTerrain.DEFAULT,
    1: BattleTerrain.CASTLE_GRAY,
    2: BattleTerrain.DESERT,
    # 3: BattleTerrain.DEFAULT,
    # 4: BattleTerrain.MOUNTAIN,
    5: BattleTerrain.LAVA_CAVE,
}

battle_terrain_by_anim_p0 = {
    '氷': BattleTerrain.SNOW,
    '雪': BattleTerrain.SNOW,
    '炎': BattleTerrain.LAVA_CAVE,
    '溶岩': BattleTerrain.LAVA_CAVE,
    '砂漠': BattleTerrain.DESERT,
}

battle_terrain_by_anim_p1 = {
    '城内和': BattleTerrain.CASTLE_YELLOW,
    '城内洋': BattleTerrain.CASTLE_GRAY,
}

def get_battle_terrain(map_id):
    if map_configs[map_id]['field']['anim'] in battle_terrain_by_anim_p0:
        return battle_terrain_by_anim_p0[map_configs[map_id]['field']['anim']]
    if map_configs[map_id]['field']['anim'] in battle_terrain_by_anim_p1:
        return battle_terrain_by_anim_p1[map_configs[map_id]['field']['anim']]
    for y in range(8):
        for x in range(6):
            terrain_group = terrain_configs[map_configs[map_id]['field']['terrain'][y][x]]['terrain_group']
            if terrain_group in battle_terrain_by_group:
                return battle_terrain_by_group[terrain_group]
    return BattleTerrain.DEFAULT

def make_chapter_goals():
    with open('include/chaptergoals.h', 'w', encoding='utf-8') as file:
        file.write('#pragma once\n\n')
        file.write('#define CHAPTER_GOAL_MSG_ID_S0000 CHAPTER_GOAL_MSG_ID_DEFEAT_ALL\n')
        for map_id in sorted(map_configs.keys()):
            file.write('#define CHAPTER_GOAL_MSG_ID_%s CHAPTER_GOAL_MSG_ID_%s\n' % (map_id, 'SURVIVAL' if map_configs[map_id]['turns_to_win'] + map_configs[map_id]['turns_to_defend'] > 0 else 'DEFEAT_ALL'))

def print_max_enemy_unit_count():
    print(max([len(x['units']) for x in map_configs.values()]))

def print_max_enemy_hero_count():
    print(max([len(set([u['id_tag'] for u in x['units'] if is_hero(unit_data[u['id_tag']]) and not is_hero_defined(unit_data[u['id_tag']])])) for x in map_configs.values()]))

HERO_ID_MYUNIT = 'EID_フード'

blue_hero_ids = hero_ids[:3] + [HERO_ID_MYUNIT]

def make_blue_units():
    with open('include/blueunitdefs.h', 'w', encoding='utf-8') as file:
        file.write('#pragma once\n\n')
        for map_id in sorted(map_configs.keys()):
            file.write('extern const struct UnitInfo %sBlueUnits[];\n' % map_id)
    with open('include/blueunits.h', 'w', encoding='utf-8') as file:
        file.write('#pragma once\n\n')
        for map_id in sorted(map_configs.keys()):
            file.write('const struct UnitInfo %sBlueUnits[] = {\n' % map_id)
            for i in range(map_configs[map_id]['player_count']):
                x = 2 * map_configs[map_id]['player_pos'][i]['x']
                y = 2 * (7 - map_configs[map_id]['player_pos'][i]['y'])
                file.write('    { %s, J%s, 0, TRUE, FACTION_ID_BLUE, 1, %d, %d, %d, %d, { 0 }, { 0 } },\n' % (blue_hero_ids[i], blue_hero_ids[i][1:], x, y, x, y))
            file.write('    { 0 }, // end\n')
            file.write('};\n\n')
#             file.write('const EventScr EventScr_LoadUnits_%sBlueUnits[] = {\n' % map_id)
#             file.write('    EvtLoadUnits(%sBlueUnits)' % map_id)
#             file.write('''
#     EvtMoveWait
#     EvtClearSkip
#     EvtEnd
# };

# ''')

promoted_jobs = {
    'JID_PEGASUSKNIGHT': 'JID_FALCONKNIGHT',
    'JID_MYRMIDON': 'JID_SWORDMASTER',
    'JID_SOLDIER': 'JID_HALBERDIER',
    'JID_FIGHTER': 'JID_WARRIOR',
    'JID_ARCHER': 'JID_SNIPER',
    'JID_THIEF': 'JID_THIEF_LEADER',
    'JID_MAGE': 'JID_SAGE',
    'JID_SHAMAN': 'JID_DRUID',
    'JID_PRIEST': 'JID_BISHOP',
    'JID_ARMOR': 'JID_GENERAL',
    'JID_CAVALIER': 'JID_PALADIN',
    'JID_NOMAD': 'JID_NOMADTROOPER',
    'JID_TROUBADOUR': 'JID_VALKYRIE',
}

def guess_unit_job(unit, move, weapon):
    if unit_data[unit['id_tag']]['refresher']:
        return 'JID_DANCER'
    if weapon.endswith('竜') or weapon.endswith('獣'):
        if move in ('MVID_騎馬', 'MVID_飛行'):
            return 'JID_MANAKETE_F'
        return 'JID_MANAKETE'
    if move == 'MVID_飛行':
        return 'JID_PEGASUSKNIGHT'
    if move == 'MVID_重装':
        return 'JID_ARMOR'
    if move == 'MVID_騎馬':
        if weapon.endswith('弓') or weapon.endswith('暗'):
            return 'JID_NOMAD'
        if weapon == 'WID_杖' or weapon.endswith('魔'):
            return 'JID_TROUBADOUR'
        return 'JID_CAVALIER'
    if move == 'MVID_歩行':
        if weapon == 'WID_剣':
            return 'JID_MYRMIDON'
        if weapon == 'WID_槍':
            return 'JID_SOLDIER'
        if weapon == 'WID_斧':
            return 'JID_FIGHTER'
        if weapon.endswith('弓'):
            return 'JID_ARCHER'
        if weapon.endswith('暗'):
            return 'JID_THIEF'
        if weapon in ('WID_赤魔', 'WID_青魔', 'WID_緑魔'):
            return 'JID_MAGE'
        if weapon == 'WID_無魔':
            return 'JID_SHAMAN'
        if weapon == 'WID_杖':
            return 'JID_PRIEST'
    return 'JID_NONE'

def make_red_unit_jobs():
    with open('include/enemy_unit_jobs.h', 'w', encoding='utf-8') as file:
        file.write('#pragma once\n\n')
        file.write('// Generic enemies\n')
        for unit in unit_data.values():
            if unit['roman'] != 'NONE' and not is_hero(unit):
                unit_move = move_type[unit_data[unit['id_tag']]['move_type']]['id_tag']
                unit_weapon = weapon_type[unit_data[unit['id_tag']]['weapon_type']]['id_tag']
                unit_job = guess_unit_job(unit, unit_move, unit_weapon)
                file.write('#define J%s_UNPROMOTED %s // %s %s\n' % (unit['id_tag'][1:], unit_job, unit_move, unit_weapon))
                unit_job = promoted_jobs.get(unit_job, unit_job)
                file.write('#define J%s_PROMOTED %s\n' % (unit['id_tag'][1:], unit_job))
        file.write('\n')
        file.write('// Hero enemies\n')
        for unit in unit_data.values():
            if is_hero(unit) and not is_hero_defined(unit):
                unit_move = move_type[unit_data[unit['id_tag']]['move_type']]['id_tag']
                unit_weapon = weapon_type[unit_data[unit['id_tag']]['weapon_type']]['id_tag']
                unit_job = guess_unit_job(unit, unit_move, unit_weapon)
                file.write('#define J%s_UNPROMOTED %s // %s %s\n' % (unit['id_tag'][1:], unit_job, unit_move, unit_weapon))
                unit_job = promoted_jobs.get(unit_job, unit_job)
                file.write('#define J%s_PROMOTED %s\n' % (unit['id_tag'][1:], unit_job))

def get_red_unit_id_tag(id_tag):
    unit = unit_data[id_tag]
    if not is_hero(unit):
        return 'EID_ENEMY_GENERIC'
    if is_hero_defined(unit):
        return id_tag
    return 'EID_ENEMY_HERO_'

def make_red_units_and_event_scripts():
    with open('include/redunits.h', 'w', encoding='utf-8') as file, open(
        'include/redunitdefs.h', 'w', encoding='utf-8') as file_defs,open(
            'source/eventscripts.c', 'w', encoding='utf-8') as file_scripts, open(
                'include/eventscripts.h', 'w', encoding='utf-8') as file_scripts_defs, open(
                    'source/enemy_hero_faces.c', 'w', encoding='utf-8') as file_faces, open(
                        'source/enemy_hero_names.c', 'w', encoding='utf-8') as file_names:
        file_faces.write('''
#include "prelude.h"
#include "constants/chapters.h"
#include "chapterNew.h"
#include "chapters.h"
#include "facesNew.h"

const u16 ChapterEnemyHeroFaces[][7] = {
''')
        file_names.write('''
#include "prelude.h"
#include "constants/chapters.h"
#include "chapterNew.h"
#include "chapters.h"
#include "texts.h"

const u16 ChapterEnemyHeroNames[][14] = {
''')
        file.write('#pragma once\n\n')
        file_defs.write('#pragma once\n\n')
        file_scripts_defs.write('#pragma once\n\n')
        file_scripts.write('''
#include "unit.h"
#include "blueunitdefs.h"
#include "redunitdefs.h"
#include "event.h"
#include "eventinfo.h"
#include "eventscript.h"
#include "faction.h"
#include "backgrounds.h"
#include "texts.h"
#include "constants/songs.h"
#include "songsNew.h"
#include "constants/chapters.h"
#include "chapterNew.h"
#include "chapters.h"

''')
        red_unit_lv = 0
        is_red_unit_promoted = False
        map_ids = sorted(map_configs.keys())
        for i, map_id in enumerate(map_ids):
            next_map_id = map_ids[i + 1] if i + 1 < len(map_ids) else map_ids[0]
            # file_scripts_defs.write('extern const EventScr EventScr_LoadUnits_%s[];\n' % map_id)
            file_scripts.write('const EventScr EventScr_LoadUnits_%s[] = {\n' % map_id)
            if 'MID_SCENARIO_OPENING_IMAGE' in map_scenarios.get(map_id, {}):
                file_scripts.write('    EvtFadeToBlack(16)\n')
                file_scripts.write('    EvtExitMap\n')
                file_scripts.write('    EvtBackground(BACKGROUND_%s)\n' % map_scenarios.get(map_id, {})['MID_SCENARIO_OPENING_IMAGE'])
                file_scripts.write('    EvtFadeFromBlack(16)\n')
                file_scripts.write('    EvtEnterMap\n')
            if 'MID_SCENARIO_OPENING' in map_scenarios.get(map_id, {}):
                file_scripts.write('    EvtTalk(MID_SCENARIO_OPENING_%s)\n' % map_id)
                file_scripts.write('    EvtClearTalk\n')
            file_scripts.write('    EvtLoadUnits(%sRedUnits)\n' % map_id)
            file_scripts.write('    EvtLoadUnits(%sBlueUnits)\n' % map_id)
            if 'MID_SCENARIO_MAP_BEGIN_BGM' in map_scenarios.get(map_id, {}) and 'MID_SCENARIO_OPENING_BGM' in map_scenarios.get(map_id, {}):
                file_scripts.write('    EvtSetBgm(%s_MID_SCENARIO_MAP_BEGIN_BGM)\n' % map_id)
            if 'MID_SCENARIO_MAP_BEGIN' in map_scenarios.get(map_id, {}):
                file_scripts.write('    EvtTalk(MID_SCENARIO_MAP_BEGIN_%s)\n' % map_id)
                file_scripts.write('    EvtClearTalk\n')
            file_scripts.write('    EvtClearSkip\n')
            file_scripts.write('    EvtEnd\n')
            file_scripts.write('};\n\n')
            if red_unit_lv <= 20:
                red_unit_lv += 1
            if red_unit_lv == 21:
                if not is_red_unit_promoted:
                    is_red_unit_promoted = True
                    red_unit_lv = 1
                else:
                    red_unit_lv = 20
            red_units_by_turn_and_count = {}
            loaded_red_heroes = []
            red_unit_commander = "PID_NONE"
            for unit in map_configs[map_id]['units']:
                unit['id_tag'] = unit['id_tag'].replace('―', '_')
                if unit['id_tag'].endswith('味方'):
                    unit['id_tag'] = 'E' + unit['id_tag'][1:-2]
                if unit['spawn_turns'] not in red_units_by_turn_and_count:
                    red_units_by_turn_and_count[unit['spawn_turns']] = {}
                if unit['spawn_count'] not in red_units_by_turn_and_count[unit['spawn_turns']]:
                    red_units_by_turn_and_count[unit['spawn_turns']][unit['spawn_count']] = []
                red_units_by_turn_and_count[unit['spawn_turns']][unit['spawn_count']].append(unit)
                if red_unit_commander == "PID_NONE":
                    red_unit_id_tag = get_red_unit_id_tag(unit['id_tag'])
                    if red_unit_id_tag == 'EID_ENEMY_HERO_':
                        red_unit_commander = red_unit_id_tag + '1'
                    elif red_unit_id_tag != 'EID_ENEMY_GENERIC':
                        red_unit_commander = red_unit_id_tag
            for turn, counts in red_units_by_turn_and_count.items():
                for count, units in counts.items():
                    if turn == -1:
                        if count == -1:
                            red_units_label = '%sRedUnits' % map_id
                        else:
                            red_units_label = '%sRedUnits_Turn_1_%d' % (map_id, count)
                    else:

                        red_units_label = '%sRedUnits_Turn_%d_%d' % (map_id, turn + 1, turn + count)
                    file.write('const struct UnitInfo %s[] = {\n' % red_units_label)
                    for unit in units:
                        x = 2 * unit['pos']['x']
                        y = 2 * (7 - unit['pos']['y'])
                        red_unit_id = get_red_unit_id_tag(unit['id_tag'])
                        if red_unit_id == 'EID_ENEMY_HERO_':
                            if unit['id_tag'] not in loaded_red_heroes:
                                loaded_red_heroes.append(unit['id_tag'])
                            red_unit_id += str(loaded_red_heroes.index(unit['id_tag']) + 1)
                            assert len(loaded_red_heroes) <= 7
                        red_unit_job = 'J' + unit['id_tag'][1:]
                        if not is_hero_defined(unit_data[unit['id_tag']]):
                            red_unit_job += '_PROMOTED' if is_red_unit_promoted else '_UNPROMOTED'
                        red_unit_job_lv = red_unit_lv
                        if is_red_unit_promoted:
                                red_unit_move = move_type[unit_data[unit['id_tag']]['move_type']]['id_tag']
                                red_unit_weapon = weapon_type[unit_data[unit['id_tag']]['weapon_type']]['id_tag']
                                red_unit_job_unpromoted = guess_unit_job(unit, red_unit_move, red_unit_weapon)
                                if red_unit_job_unpromoted not in promoted_jobs:
                                    red_unit_job_lv = 20
                        red_unit_items = 'IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW'
                        if unit_data[unit['id_tag']]['weapon_type'] > 10:
                            red_unit_items = 'IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF'
                        if weapon_type[unit_data[unit['id_tag']]['weapon_type']]['id_tag'].endswith('竜') or weapon_type[unit_data[unit['id_tag']]['weapon_type']]['id_tag'].endswith('獣'):
                            if move_type[unit_data[unit['id_tag']]['move_type']]['id_tag'] in ('MVID_騎馬', 'MVID_飛行'):
                                red_unit_items = 'IID_DIVINESTONE, 0, 0, 0'
                            else:
                                red_unit_items = 'IID_FIRESTONE, 0, 0, 0'
                        file.write('    { %s, %s, %s, TRUE, FACTION_ID_RED, %d, %d, %d, %d, %d, { %s }, { 0 } },\n' % (red_unit_id, red_unit_job, "PID_NONE" if red_unit_id == red_unit_commander else red_unit_commander, red_unit_job_lv, x, y, x, y, red_unit_items))
                    file.write('    { 0 }, // end\n')
                    file.write('};\n\n')
                    file_defs.write('extern const struct UnitInfo %s[];\n' % red_units_label)
                    if turn != -1 or count != -1:
                        # file_scripts_defs.write('extern const EventScr EventScr_LoadUnits_%s[];\n' % red_units_label)
                        file_scripts.write('const EventScr EventScr_LoadUnits_%s[] = {\n' % red_units_label)
                        file_scripts.write('    EvtLoadUnits(%s)\n' % red_units_label)
                        file_scripts.write('    EvtClearSkip\n')
                        file_scripts.write('    EvtEnd\n')
                        file_scripts.write('};\n\n')
            # victory event
            file_scripts_defs.write('extern const EventScr EventScr_%s_Victory[];\n' % map_id)
            file_scripts.write('const EventScr EventScr_%s_Victory[] = {\n' % map_id)
            if 'MID_SCENARIO_MAP_END' in map_scenarios.get(map_id, {}):
                file_scripts.write('    EvtTalk(MID_SCENARIO_MAP_END_%s)\n' % map_id)
                file_scripts.write('    EvtClearTalk\n')
            if 'MID_SCENARIO_ENDING_BGM' in map_scenarios.get(map_id, {}):
                file_scripts.write('    EvtSetBgm(%s_MID_SCENARIO_ENDING_BGM)\n' % map_id)
            if 'MID_SCENARIO_ENDING_IMAGE' in map_scenarios.get(map_id, {}):
                file_scripts.write('    EvtFadeToBlack(16)\n')
                file_scripts.write('    EvtExitMap\n')
                file_scripts.write('    EvtBackground(BACKGROUND_%s)\n' % map_scenarios.get(map_id, {})['MID_SCENARIO_ENDING_IMAGE'])
                file_scripts.write('    EvtFadeFromBlack(16)\n')
                file_scripts.write('    EvtEnterMap\n')
            if 'MID_SCENARIO_ENDING' in map_scenarios.get(map_id, {}):
                file_scripts.write('    EvtTalk(MID_SCENARIO_ENDING_%s)\n' % map_id)
                file_scripts.write('    EvtClearTalk\n')
            file_scripts.write('    EvtNoSkip\n')
            file_scripts.write('    EvtGiveMoney(100 * %s)\n' % map_id[-1])
            file_scripts.write('    EvtSleep(64)\n')
            file_scripts.write('    EvtNextChapter(CHAPTER_CH_%s)\n' % next_map_id)
            file_scripts.write('    EvtSleep(1)\n')
            file_scripts.write('    EvtKill\n')
            file_scripts.write('    EvtClearSkip\n')
            file_scripts.write('    EvtEnd\n')
            file_scripts.write('};\n\n')
            # turn events list
            file_scripts_defs.write('extern const EventScr EventListScr_%s_Turn[];\n' % map_id)
            file_scripts.write('const EventListScr EventListScr_%s_Turn[] = {\n' % map_id)
            for turn in sorted(red_units_by_turn_and_count.keys()):
                for count in sorted(red_units_by_turn_and_count[turn].keys()):
                    if turn == -1:
                        if count == -1:
                            file_scripts.write('    EvtListTurn(0, EventScr_LoadUnits_%s, 1, 0, FACTION_BLUE)\n' % map_id)
                        else:
                            file_scripts.write('    EvtListTurn(0, EventScr_LoadUnits_%s, 1, %d, FACTION_RED)\n' % (red_units_label, count if count > 1 else 0))
                    else:
                        file_scripts.write('    EvtListTurn(0, EventScr_LoadUnits_%s, %d, %d, FACTION_RED)\n' % (red_units_label, turn + 1, (turn + count) if count > 1 else 0))
            if map_configs[map_id]['turns_to_win'] + map_configs[map_id]['turns_to_defend'] > 0:
                file_scripts.write('    EvtListTurn(0, EventScr_%s_Victory, %d + 1, 0, FACTION_BLUE)\n' % (map_id, map_configs[map_id]['turns_to_win'] + map_configs[map_id]['turns_to_defend']))
            file_scripts.write('    EvtListEnd\n')
            file_scripts.write('};\n\n')
            # enemy hero faces and names
            if len(loaded_red_heroes) > 0:
                file_faces.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = {\n' % map_id)
                file_names.write('    [CHAPTER_CH_%s - CHAPTER_CH_NEW] = {\n' % map_id)
                for i, hero_id in enumerate(loaded_red_heroes):
                    file_faces.write('        FID_%s, // %d: %s\n' % (unit_data[hero_id]['face_name'], i + 1, hero_id))
                    file_names.write('        M%s, M%s, // %d\n' % (hero_id, hero_id.replace('ID_', 'ID_H_'), i + 1))
                file_faces.write('    },\n')
                file_names.write('    },\n')
        file_faces.write('};\n')
        file_names.write('};\n')

def make_map_events():
    with open('include/mapevents.h', 'w', encoding='utf-8') as file:
        file.write('#pragma once\n\n')
        for map_id in sorted(map_configs.keys()):
            file.write('extern const struct ChapterEventInfo ChapterEventInfo_%s;\n' % map_id)
    with open('source/mapevents.c', 'w', encoding='utf-8') as file:
        file.write('''
#include "unit.h"
#include "blueunitdefs.h"
#include "redunitdefs.h"
#include "eventinfo.h"
#include "eventfunctions.h"
#include "eventscript.h"
#include "eventscripts.h"
#include "chapterevents.h"
#include "debugchapter.h"

''')
        for map_id in sorted(map_configs.keys()):
            file.write('const EventListScr EventListScr_%s_Move[] = {\n' % map_id)
            file.write('    EvtListFlag(0, EventScr_GameOver, FLAG_101)\n')
            if map_configs[map_id]['turns_to_win'] + map_configs[map_id]['turns_to_defend'] <= 0:
                file.write('    EvtListFunc(FLAG_3, EventScr_%s_Victory, func_fe6_0806C2F8)\n' % map_id)
            file.write('    EvtListEnd\n')
            file.write('};\n\n')
            file.write('const struct ChapterEventInfo ChapterEventInfo_%s = {\n' % map_id)
            file.write('    .event_list_turn = EventListScr_%s_Turn,\n' % map_id)
            file.write('    .event_list_talk = DummyEvent,\n')
            file.write('    .event_list_tile = DummyEvent,\n')
            file.write('    .event_list_move = EventListScr_%s_Move,\n' % map_id)
            file.write('    .units_red = %sRedUnits,\n' % map_id)
            file.write('    .units_blue = %sBlueUnits,\n' % map_id)
            file.write('    .event_script_victory = EventScr_%s_Victory,\n' % map_id)
            file.write('};\n\n')

if __name__ == '__main__':
    fetch_all_configs_from_wiki()
    load_map_configs()
    print('Loaded %d maps' % len(map_configs))
    load_map_names()
    load_map_scenarios()
    print('Loaded %d map scenarios' % len(map_scenarios))
    load_terrain_configs()
    print('Loaded %d terrains' % len(terrain_configs))
    # collect_terrain_1st_appearance()
    # print_terrain_1st_appearance()
    # print_terrain_by_groups()
    # print_map_anims()
    # make_map_images()
    # decrease_map_colors()
    # make_map_tilesets()
    # make_map_changes()
    # make_common_map()
    # make_chapter_goals()
    make_chapters()
    # print_max_enemy_unit_count()
    load_unit_data()
    print('Loaded %d units' % len(unit_data))
    load_weapon_type()
    print('Loaded %d weapon types' % len(weapon_type))
    load_move_type()
    print('Loaded %d move types' % len(move_type))
    # print_max_enemy_hero_count()
    make_blue_units()
    make_red_unit_jobs()
    make_red_units_and_event_scripts()
    make_map_events()
