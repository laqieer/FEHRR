#!/usr/bin/env python3

# Path: asset/script/count_units_in_map.py

import os
import re

unit_counts = {}

for root, dirs, files in os.walk('asset/json/files/assets/Common/SRPGMap/'):
    for file in files:
        if re.match(r'S\d{4}C\.json$', file):
            path = os.path.join(root, file)
            with open(path, 'r') as f:
                text = f.read()
                units = re.findall(r'"id_tag": "([^"]+)",', text)
                if units:
                    for unit in units:
                        if unit not in unit_counts:
                            unit_counts[unit] = 0
                        unit_counts[unit] += 1

print(f'{len(unit_counts)} units:')

for unit in sorted(unit_counts.items(), key=lambda x: x[1], reverse=True):
    print(unit[1], unit[0])
