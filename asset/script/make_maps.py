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
        image = Image.open(image_path)
        # check image size is 540 x 720
        if image.size != (540, 720):
            warnings.warn('Invalid map image size for %s: %s' % (map_id, image.size))
        # resize image to 192 x 256
        image = image.resize((192, 256))
        image.save(os.path.join(map_image_save_path, map_id + '.png'))

if __name__ == '__main__':
    load_map_configs()
    make_map_images()
    print('Loaded %d maps: %s' % (len(map_configs), ', '.join(sorted(map_configs.keys()))))
