import json
import sys

# Path: asset/script/common.py

local_configs = {}

with open("asset/local_configs.json", 'r') as f:
    local_configs = json.load(f)

local_configs["assets"] = local_configs["assets"][sys.platform]
