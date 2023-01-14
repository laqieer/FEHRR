#!/usr/bin/env python3

# Path: asset/script/count_faces_in_scenario.py

import os
import re

face_counts = {}
face_names = {}

for root, dirs, files in os.walk('asset/json/files/assets/JPJA/Message/Scenario/'):
    for file in files:
        if re.match(r'S\d{4}\.json$', file):
            path = os.path.join(root, file)
            with open(path, 'r') as f:
                text = f.read()
                faces = re.findall(r'\$WmM(\S+?),(\w+?),', text)
                if faces:
                    for face in faces:
                        if face[1] not in face_counts:
                            face_counts[face[1]] = 0
                            face_names[face[1]] = face[0]
                        face_counts[face[1]] += 1

print(f'{len(face_counts)} faces:')

for face in sorted(face_counts.items(), key=lambda x: x[1], reverse=True):
    print(face[1], face[0], face_names[face[0]])

k_v_exchanged = {}

for key, value in face_names.items():
   if value not in k_v_exchanged:
      k_v_exchanged[value] = [key]
   else:
      k_v_exchanged[value].append(key)

print('\nFollowing characters have more than one face:')

for key, value in k_v_exchanged.items():
   if len(value) > 1:
      print(key, value)
