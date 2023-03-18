#!/usr/bin/env python3

# Path: asset/script/make_faces.py

import common

import os
import re
import json
import warnings
from PIL import Image

faces = []
hero_faces = {}
face_counts = {}
face_ids = {}

def is_generic_face(face):
    return face.startswith('ch90_')

def load_hero_faces(folder):
    for root, dirs, files in os.walk(folder):
        for file in files:
            path = os.path.join(root, file)
            with open(path, 'r') as f:
                heros = json.load(f)
                for hero in heros:
                    if hero['face_name'] and not is_generic_face(hero['face_name']):
                        hero_faces[hero['id_tag']] = hero['face_name']

def load_faces_in_scenarios(folder):
    for root, dirs, files in os.walk(folder):
        for file in files:
            if re.match(r'S\d{4}\.json$', file):
                path = os.path.join(root, file)
                with open(path, 'r') as f:
                    scenarios = json.load(f)
                    for scenario in scenarios:
                        if scenario['key'] in ('MID_SCENARIO_OPENING', 'MID_SCENARIO_ENDING', 'MID_SCENARIO_MAP_BEGIN', 'MID_SCENARIO_MAP_END'):
                            faces = re.findall(r'\$WmM\S+?,(\w+?),', scenario['value'])
                            for face in faces:
                                if not is_generic_face(face):
                                    if face not in face_counts:
                                        face_counts[face] = 0
                                    face_counts[face] += 1

def load_heroes_in_maps(folder):
    for root, dirs, files in os.walk(folder):
        for file in files:
            if re.match(r'S\d{4}C\.json$', file):
                path = os.path.join(root, file)
                with open(path, 'r') as f:
                    data = json.load(f)
                    for unit in data['units']:
                        if unit['id_tag'] in hero_faces:
                            face = hero_faces[unit['id_tag']]
                            if not is_generic_face(face):
                                if face not in face_counts:
                                    face_counts[face] = 0
                                face_counts[face] += 1

def sort_faces_by_count():
    global faces
    faces = sorted(face_counts.keys(), key=lambda x: face_counts[x], reverse=True)

def assign_face_ids():
    i = 1
    for face in faces:
        if i % 256 == 0:
            i += 1
        face_ids[face] = i
        i += 1

def clear_faces(folder):
    for root, dirs, files in os.walk(folder):
        for file in files:
            if file.endswith('.png'):
                os.remove(os.path.join(root, file))

def make_faces(src_folder, dst_folder, filename):
    clear_faces(dst_folder)
    with open(filename, 'w') as f:
        f.write('#include "face.h"\n')
        f.write('#include "faceNew.h"\n')
        f.write('#include "facesNew.h"\n')
        f.write('#include "gfx_face.h"\n')
        f.write('\n')
        f.write('#include <stddef.h>\n')
        f.write('\n')
        f.write('const struct FaceInfoNew newFaces[] = {\n')
        for face in faces:
            if not os.path.exists(os.path.join(src_folder, face)):
                warnings.warn('%s does not exist' % face)
                continue
            face_file = 'Face.png'
            src = os.path.join(src_folder, face, face_file)
            im = None
            try:
                im = Image.open(src)
            except:
                for root, dirs, files in os.walk(os.path.join(src_folder, face)):
                    for file in files:
                        if re.match(r'Face_Normal\w+\.png$', file):
                            face_file = file
                            src = os.path.join(root, file)
                            im = Image.open(src)
                            break
            if im is None:
                for root, dirs, files in os.walk(os.path.join(src_folder, face)):
                    for file in files:
                        if re.match(r'Face_Cool\w+\.png$', file):
                            face_file = file
                            src = os.path.join(root, file)
                            im = Image.open(src)
                            break
            if im is None:
                warnings.warn('%s does not have a face' % face)
                continue
            dst = os.path.join(dst_folder, 'full', '%s_%s' % (face, face_file))
            im = im.crop(im.getbbox())
            im = im.crop((0, 0, im.width, im.width))
            im = im.resize((128, 128))
            im = common.convert_rgba_to_rgb(im, common.decide_background_color_for_image(dst))
            im = im.quantize(colors=64, dither=Image.Dither.NONE)
            # im = im.convert('P', dither=Image.Dither.NONE, palette=Image.Palette.ADAPTIVE, colors=64)
            im.save(dst)
            hasChibiFace = True
            try:
                src = os.path.join(src_folder, face, 'Face_FC.png')
                dst = os.path.join(dst_folder, 'chibi', '%s_Face_FC.png' % face)
                im = Image.open(src)
                im = im.resize((32, 32))
                im = common.convert_rgba_to_rgb(im, common.decide_background_color_for_image(dst))
                im = im.quantize(colors=16, dither=Image.Dither.NONE)
                # im = im.convert('P', dither=Image.Dither.NONE, palette=Image.Palette.ADAPTIVE, colors=16)
                im.save(dst)
            except FileNotFoundError:
                hasChibiFace = False
            face_file = os.path.splitext(face_file)[0]
            f.write('    [FID_%s - FID_NEW] = {\n' % face)
            f.write('        .img = %s_%sTiles,\n' % (face, face_file))
            if hasChibiFace:
                f.write('        .img_chibi = %s_Face_FCTiles,\n' % face)
            else:
                f.write('        .img_chibi = NULL,\n')
            f.write('        .pal = %s_%sPal,\n' % (face, face_file))
            f.write('        .x_mouth = 0,\n')
            f.write('        .y_mouth = 0,\n')
            f.write('        .x_box = 0,\n')
            f.write('        .y_box = 0,\n')
            if hasChibiFace:
                f.write('        .pal_chibi = %s_Face_FCPal,\n' % face)
            else:
                f.write('        .pal_chibi = NULL,\n')
            f.write('    },\n')
            f.write('\n')
        f.write('};\n')

def make_header(filename):
    with open(filename, 'w') as f:
        f.write('#pragma once\n')
        f.write('\n')
        f.write('enum {\n')
        f.write('    FID_NEW = 0x100,\n')
        for face, id in face_ids.items():
            id += 0x100
            f.write('    FID_%s = 0x%x,\n' % (face, id))
        f.write('};\n')
        f.write('\n')
        for face, id in face_ids.items():
            id += 0x200
            f.write('#define %s "\\x%x\\x%x"\n' % (face, id & 0xff, id >> 8))

def make_test_text(filename):
    with open(filename, 'w') as f:
        f.write('#include "textNew.h"\n')
        f.write('#include "facesNew.h"\n')
        f.write('\n')
        f.write('const char FaceTestText[] =\\')
        for i, face in enumerate(faces):
            if i % 2 == 0:
                f.write('\n    TEXT_CMD_LEFT ')
            else:
                f.write('\n    TEXT_CMD_RIGHT ')
            f.write('TEXT_CMD_FACE %s "%s" TEXT_CMD_WAIT TEXT_CMD_CLEAR' % (face, face))
            if i == len(faces) - 1:
                f.write(';')
            else:
                f.write(' \\')
        f.write('\n')

def main():
    load_hero_faces('asset/json/files/assets/Common/SRPG/Person/')
    load_hero_faces('asset/json/files/assets/Common/SRPG/Enemy/')
    # print(hero_faces)
    load_faces_in_scenarios('asset/json/files/assets/JPJA/Message/Scenario/')
    load_heroes_in_maps('asset/json/files/assets/Common/SRPGMap/')
    # print(face_counts)
    sort_faces_by_count()
    # print(faces)
    assign_face_ids()
    # print(face_ids)
    make_header('include/facesNew.h')
    make_faces(common.local_configs["FEH"] + '/assets/Common/Face/', 'gfx/face/', 'source/faces.c')
    make_test_text('source/facesTest.c')

if __name__ == '__main__':
    main()
