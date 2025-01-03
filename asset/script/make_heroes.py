#!/usr/bin/env python3

# Path: asset/script/make_heroes.py

import common

import os
import json

hero_data = {}

hero_ids = common.load_hero_ids('include/heroes.h')
# print(hero_ids)

def load_hero_data(folder):
    for root, dirs, files in os.walk(folder):
        for file in files:
            path = os.path.join(root, file)
            with open(path, 'r', encoding='utf-8') as f:
                heros = json.load(f)
                for hero in heros:
                    if hero['id_tag'] in hero_ids:
                        hero_data[hero['id_tag']] = hero

def make_heroes(filename):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write('#include "heroes.h"\n')
        f.write('#include "hero_jobs.h"\n')
        f.write('#include "unit.h"\n')
        f.write('#include "texts.h"\n')
        f.write('#include "enemies.h"\n')
        f.write('#include "facesNew.h"\n')
        f.write('\n')
        f.write('#include "constants/jids.h"\n')
        f.write('\n')
        f.write('const struct PInfo heroes[] = {\n')
        for hero in hero_ids:
            data = hero_data[hero]
            f.write('    [%s - 1] = {\n' % hero)
            f.write('        .id = %s,\n' % hero)
            f.write('        .sort_order_key = %s,\n' % hero)
            f.write('        .jid_default = J%s,\n' % hero[1:])
            # print('#define J%s JID_OBSTACLE' % hero[1:])
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
        f.write('    #include "enemy_data.h"\n')
        f.write('\n')
        f.write('};\n')
        f.write('\n')
        f.write('const char * const hero_names[] = {\n')
        for hero in hero_ids:
            f.write('    [%s - 1] = "%s",\n' % (hero, hero))
        f.write('};\n')

def make_debug_heroes(filename):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write('#include "heroes.h"\n')
        f.write('#include "hero_jobs.h"\n')
        f.write('#include "debugchapter.h"\n')
        f.write('\n')
        f.write('#include "constants/iids.h"\n')
        f.write('#include "constants/jids.h"\n')
        f.write('\n')
        f.write('const struct UnitInfo DebugBlueUnits[] = {\n')
        for i, hero in enumerate(hero_ids):
            f.write('    {\n')
            data = hero_data[hero]
            f.write('        .pid = %s,\n' % hero)
            f.write('        .jid = J%s_PROMOTED,\n' % hero[1:])
            f.write('        .pid_lead = PID_アルフォンス,\n')
            f.write('        .level = DEBUG_BLUE_UNIT_LEVEL,\n')
            f.write('        .autolevel = DEBUG_BLUE_UNIT_AUTOLEVEL,\n')
            # f.write('        .items = {\n')
            # if data['weapon_type'] <= 10:
            #     f.write('            IID_IRONSWORD,\n')
            #     f.write('            IID_IRONLANCE,\n')
            #     f.write('            IID_IRONAXE,\n')
            #     f.write('            IID_IRONBOW,\n')
            # elif data['weapon_type'] <= 15:
            #     f.write('            IID_FIRE,\n')
            #     f.write('            IID_LIGHTNING,\n')
            #     f.write('            IID_FLUX,\n')
            #     f.write('            IID_HEALSTAFF,\n')
            # else:
            #     f.write('            IID_FIRESTONE,\n')
            #     f.write('            IID_DIVINESTONE,\n')
            # f.write('        },\n')
            x = 2 * (i % 8)
            y = i // 8
            f.write('        .x_load = %d,\n' % x)
            f.write('        .x_move = %d,\n' % x)
            f.write('        .y_load = %d,\n' % y)
            f.write('        .y_move = %d,\n' % y)
            f.write('    },\n')
            f.write('\n')
        f.write('    {\n')
        f.write('    }\n')
        f.write('};\n')

def main():
    load_hero_data('asset/json/files/assets/Common/SRPG/Person/')
    load_hero_data('asset/json/files/assets/Common/SRPG/Enemy/')
    # print(hero_data)
    make_heroes('source/heroes.c')
    make_debug_heroes('source/debugheroes.c')

if __name__ == '__main__':
    main()
