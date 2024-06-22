import json
import sys
import os
import re
from PIL import Image

# Path: asset/script/common.py

local_configs = {}

with open("asset/local_configs.json", 'r', encoding='utf-8') as f:
    local_configs = json.load(f)

for k, v in local_configs.items():
    if sys.platform in v:
        local_configs[k] = v[sys.platform]

def index_files_in_path(path):
    file_paths = {}
    for root, dirs, files in os.walk(path):
        for filename in files:
            file_paths[filename] = root
    return file_paths

def find_file_in_path(filename, path, recursive=True):
    if not recursive:
        if os.path.isfile(os.path.join(path, filename)):
            return os.path.join(path, filename)
        return None
    for root, dirs, files in os.walk(path):
        if filename in files:
            return os.path.join(root, filename)
    return None

def parse_background_color_in_grit(grit_path):
    with open(grit_path, 'r', encoding='utf-8') as f:
        for line in f:
            result = re.findall(r'-gT([0-9a-fA-F]+)', line)
            if result:
                return tuple(int(result[0][i:i+2], 16) for i in (0, 2, 4))
    return None

def decide_background_color_for_image(img_path):
    path = os.path.splitext(img_path)[0] + '.grit'
    if os.path.isfile(path):
        return parse_background_color_in_grit(path)
    path = os.path.basename(os.path.normpath(os.path.dirname(img_path))) + '.grit'
    if os.path.isfile(path):
        return parse_background_color_in_grit(path)
    return None

def convert_rgba_to_rgb(img, background_color):
    if background_color is None:
        return img.convert('RGB')
    img.load()
    background = Image.new('RGB', img.size, background_color)
    background.paste(img, mask=img.split()[3]) # 3 is the alpha channel
    return background
