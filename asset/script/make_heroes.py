#!/usr/bin/env python3

# Path: asset/script/make_heroes.py

import common

import os
import re
import json

hero_ids = []
hero_data = {}

def load_hero_ids(header_file):
    with open(header_file, 'r') as f:
        lines = f.readlines()
        for line in lines:
            result = re.findall(r'([PE]ID_\w+)', line)
            if result:
                hero_ids.append(result[0])

def load_hero_data(folder):
    for root, dirs, files in os.walk(folder):
        for file in files:
            path = os.path.join(root, file)
            with open(path, 'r') as f:
                heros = json.load(f)
                for hero in heros:
                    if hero['id_tag'] in hero_ids:
                        hero_data[hero['id_tag']] = hero

def make_heroes(filename):
    with open(filename, 'w') as f:
        f.write('#include "heroes.h"\n')
        f.write('#include "unit.h"\n')
        f.write('#include "texts.h"\n')
        f.write('#include "facesNew.h"\n')
        f.write('\n')
        f.write('const struct PInfo heroes[] = {\n')
        for hero in hero_ids:
            data = hero_data[hero]
            f.write('    [%s - 1] = {\n' % hero)
            f.write('        .id = %s,\n' % hero)
            f.write('        .msg_name = M%s,\n' % hero)
            f.write('        .msg_desc = M%s,\n' % hero.replace('ID_', 'ID_H_'))
            f.write('        .fid = FID_%s,\n' % data['face_name'])
            f.write('\n')
            f.write('        .base_level = 1,\n')
            f.write('        .base_hp = %d,\n' % data['base_stats']['hp'])
            f.write('        .base_pow = %d,\n' % data['base_stats']['atk'])
            f.write('        .base_spd = %d,\n' % data['base_stats']['spd'])
            f.write('        .base_def = %d,\n' % data['base_stats']['def'])
            f.write('        .base_res = %d,\n' % data['base_stats']['res'])
            f.write('\n')
            f.write('        .growth_hp = %d,\n' % data['growth_rates']['hp'])
            f.write('        .growth_pow = %d,\n' % data['growth_rates']['atk'])
            f.write('        .growth_spd = %d,\n' % data['growth_rates']['spd'])
            f.write('        .growth_def = %d,\n' % data['growth_rates']['def'])
            f.write('        .growth_res = %d,\n' % data['growth_rates']['res'])
            f.write('    },\n')
            f.write('\n')
        f.write('};\n')
        f.write('\n')
        f.write('const char * const hero_names[] = {\n')
        for hero in hero_ids:
            f.write('    [%s - 1] = "%s",\n' % (hero, hero))
        f.write('};\n')

def main():
    load_hero_ids('include/heroes.h')
    # print(hero_ids)
    load_hero_data('asset/json/files/assets/Common/SRPG/Person/')
    load_hero_data('asset/json/files/assets/Common/SRPG/Enemy/')
    # print(hero_data)
    make_heroes('source/heroes.c')

if __name__ == '__main__':
    main()
