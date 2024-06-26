#!/usr/bin/env python3

import os
import re
import json
import warnings
from PIL import Image

map_configs = {}

field_path = 'asset/json/files/assets/Common/SRPG/Field/'
map_config_path = 'asset/json/files/assets/Common/SRPGMap/'
map_image_path = 'asset/file/collection/Maps/Story/'
map_image_save_path = 'map/'
map_common_path = 'asset/file/collection/Maps/Common/'

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

def make_map_images():
    for map_id, config in map_configs.items():
        image_path = os.path.join(map_image_path, map_id + '.png')
        if not os.path.exists(image_path):
            warnings.warn('Missing map image for %s' % map_id)
            continue
        image_map = Image.new('RGBA', (192, 256), (0, 0, 0, 0))
        image_wave_filename = map_configs[map_id]['field']['backdrop']['filename'].replace('.jpg', '.png')
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
        image_map.save(os.path.join(map_image_save_path, map_id + '.png'))

if __name__ == '__main__':
    load_map_configs()
    make_map_images()
    print('Loaded %d maps: %s' % (len(map_configs), ', '.join(sorted(map_configs.keys()))))
