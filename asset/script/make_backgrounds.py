#!/usr/bin/env python3

# Path: asset/script/make_backgrounds.py

import common

import os
import re
import json
import warnings
from PIL import Image, ImageDraw

backgrounds = set()

def load_backgrounds_in_scenarios(folder):
    for root, dirs, files in os.walk(folder):
        for file in files:
            if re.match(r'S\d{4}\.json$', file):
                path = os.path.join(root, file)
                with open(path, 'r') as f:
                    scenarios = json.load(f)
                    for scenario in scenarios:
                        if scenario['key'] in ('MID_SCENARIO_OPENING_IMAGE', 'MID_SCENARIO_ENDING_IMAGE'):
                            backgrounds.add(scenario['value'])

def make_backgrounds(src_folder, dst_folder, filename):
    with open(filename, 'w') as f:
        f.write('#include "background.h"\n')
        f.write('#include "backgrounds.h"\n')
        f.write('#include "gfx_background.h"\n')
        f.write('\n')
        f.write('struct BackgroundEntNew const newBackgrounds[] = {\n')
        for background in sorted(backgrounds):
            background_file = background + '.png'
            src = os.path.join(src_folder, background_file)
            if not os.path.exists(src):
                warnings.warn('%s does not exist' % background_file)
                continue
            im = Image.open(src)
            if im is None:
                warnings.warn('%s cannot be opened' % background_file)
                continue
            im = im.crop((145, 0, 689, 340))
            im = im.resize((256, 160))
            ImageDraw.Draw(im).rectangle((240, 0, 256, 160), fill=(255, 0, 0))
            im = im.quantize(colors=128, dither=Image.Dither.NONE)
            background = 'BACKGROUND_' + background
            im.crop((0, 0, 256, 128)).save(os.path.join(dst_folder, background + '_img1.png'))
            im.crop((0, 128, 256, 160)).save(os.path.join(dst_folder, background + '_img2.png'))
            f.write('    [%s - BACKGROUND_NEW] = {\n' % background)
            f.write('        .img1 = %s_img1Tiles,\n' % background)
            f.write('        .img2 = %s_img2Tiles,\n' % background)
            f.write('        .pal = %s_img1Pal,\n' % background)
            f.write('    },\n')
            f.write('\n')
        f.write('};\n')

def make_header(filename):
    with open(filename, 'w') as f:
        f.write('#pragma once\n')
        f.write('\n')
        f.write('#define BACKGROUND_NEW 21\n')
        for i, background in enumerate(sorted(backgrounds)):
            f.write('#define BACKGROUND_%s BACKGROUND_NEW + %d\n' % (background, i))
        f.write('#define BACKGROUND_LAST BACKGROUND_%s\n' % sorted(backgrounds)[-1])

def main():
    load_backgrounds_in_scenarios('asset/json/files/assets/JPJA/Message/Scenario/')
    make_header('include/backgrounds.h')
    make_backgrounds(common.local_configs["FEH"] + '/assets/Common/Img_Talk/', 'gfx/background/', 'source/backgrounds.c')

if __name__ == '__main__':
    main()
