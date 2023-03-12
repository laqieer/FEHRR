import json
import sys
import os

# Path: asset/script/common.py

local_configs = {}

with open("asset/local_configs.json", 'r') as f:
    local_configs = json.load(f)

for k, v in local_configs.items():
    if sys.platform in v:
        local_configs[k] = v[sys.platform]

def find_file_in_path(filename, path, recursive=True):
    if not recursive:
        if os.path.isfile(os.path.join(path, filename)):
            return os.path.join(path, filename)
        return None
    for root, dirs, files in os.walk(path):
        if filename in files:
            return os.path.join(root, filename)
    return None
