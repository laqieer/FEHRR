#!/usr/bin/env python3

import os
import re
import json
import requests
import warnings
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
map_image_save_path = 'map/'
wiki_map_save_path = 'asset/wiki/maps/'
wiki_map_url = 'https://feheroes.fandom.com/wiki/%s?action=edit'

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

def fetch_map_from_wiki(map_id):
    url = wiki_map_url % map_configs[map_id]['name']
    text = get_text_in_textarea(url)
    with open(os.path.join(wiki_map_save_path, map_id + '.txt'), 'w', encoding='utf-8') as file:
        file.write(text)

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
        has_breakable = False
        terrains = config['field']['terrain']
        for y in range(len(terrains)):
            for x in range(len(terrains[y])):
                terrain_id = terrains[y][x]
                if is_breakable(terrain_id):
                    has_breakable = True
                    break
        if has_breakable:
            image_map_new = Image.new('RGBA', (192 * 2, 256), (0, 0, 0, 0))
            image_map_new.paste(image_map, (0, 0))
            image_map_new.paste(image_map, (192, 0))
            image_walls_filename = config['field']['wall']['filename'].replace('.jpg', '.png')
            image_walls = Image.open(os.path.join(map_common_path, image_walls_filename)).convert('RGBA')
            # for y in range(len(terrains)):
            #     for x in range(len(terrains[y])):
            #         terrain_id = terrains[y][x]
            #         if is_breakable(terrain_id):
            #             position_x, position_y = terrain_configs[terrain_id]['position']
            #             image_wall = image_walls.crop((position_x * 182, position_y * 182, (position_x * 182 + 180), (position_y * 182 + 180)))
            #             image_wall = image_wall.resize((32, 32))
            #             image_map_new.paste(image_wall, (x * 32, (7 - y) * 32), image_wall)
            fetch_map_from_wiki(map_id)
            image_map = image_map_new
        image_map.save(os.path.join(map_image_save_path, map_id + '.png'))

if __name__ == '__main__':
    load_map_configs()
    print('Loaded %d maps' % len(map_configs))
    load_map_names()
    load_terrain_configs()
    print('Loaded %d terrains' % len(terrain_configs))
    # collect_terrain_1st_appearance()
    # print_terrain_1st_appearance()
    make_map_images()
