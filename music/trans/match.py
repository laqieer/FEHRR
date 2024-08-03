#!/usr/bin/env python3

# This script is expected to be run in music/trans/ folder

import os
import json
import warnings
from midi2audio import FluidSynth
from audio_similarity.audio_similarity.audio_similarity import AudioSimilarity

sample_rate = 44100
weights = {
    'zcr_similarity': 0.2,
    'rhythm_similarity': 0.2,
    'chroma_similarity': 0.2,
    'spectral_contrast_similarity': 0.1,
    'perceptual_similarity': 0.2
}
fs = FluidSynth('../../instrument/FE6 native instrument map/FE6 soundfont.sf2', sample_rate=sample_rate)

def calculate_match_score(original_audio_file, midi_file):
    try:
        fs.midi_to_audio(midi_file, 'temp.wav')
    except Exception as e:
        warnings.warn(f'Error converting {midi_file} to wav: {e}')
        return {}
    match_score = {}
    audio_similarity = AudioSimilarity('../original/' + original_audio_file, 'temp.wav', sample_rate, weights)
    try:
        match_score['zcr_similarity'] = audio_similarity.zcr_similarity()
    except Exception as e:
        warnings.warn(f'Error calculating zcr_similarity for {original_audio_file} and {midi_file}: {e}')
    try:
        match_score['rhythm_similarity'] = audio_similarity.rhythm_similarity()
    except Exception as e:
        warnings.warn(f'Error calculating rhythm_similarity for {original_audio_file} and {midi_file}: {e}')
    try:
        match_score['chroma_similarity'] = audio_similarity.chroma_similarity()
    except Exception as e:
        warnings.warn(f'Error calculating chroma_similarity for {original_audio_file} and {midi_file}: {e}')
    try:
        match_score['spectral_contrast_similarity'] = audio_similarity.spectral_contrast_similarity()
    except Exception as e:
        warnings.warn(f'Error calculating spectral_contrast_similarity for {original_audio_file} and {midi_file}: {e}')
    try:
        match_score['perceptual_similarity'] = audio_similarity.perceptual_similarity()
    except Exception as e:
        warnings.warn(f'Error calculating perceptual_similarity for {original_audio_file} and {midi_file}: {e}')
    try:
        match_score['stent_weighted_audio_similarity'] = audio_similarity.stent_weighted_audio_similarity()
    except Exception as e:
        warnings.warn(f'Error calculating stent_weighted_audio_similarity for {original_audio_file} and {midi_file}: {e}')
    os.remove('temp.wav')
    return match_score

match_scores = {}

for original_audio_file in os.listdir('../original/'):
    if original_audio_file.endswith('.ogg'):
        match_scores[original_audio_file] = {}

for root, dirs, files in os.walk('.'):
    for file in files:
        if file.endswith('.mid'):
            original_audio_file = file.replace('.mid', '.ogg')
            file = os.path.join(root, file)
            match_scores[original_audio_file][file] = calculate_match_score(original_audio_file, file)

# Save match scores to a json file
with open('match_scores.json', 'w') as f:
    json.dump(match_scores, f, indent=4)

match_results = {}
# Find best match for each original audio file
for original_audio_file in match_scores:
    best_match = None
    best_match_score = 0
    for midi_file in match_scores[original_audio_file]:
        match_score = match_scores[original_audio_file][midi_file].get('stent_weighted_audio_similarity', 0)
        if match_score > best_match_score:
            best_match = midi_file
            best_match_score = match_score
    match_results[original_audio_file] = {
        'best_match': best_match,
        'best_match_score': best_match_score
    }

# Save match results to a json file
with open('match_results.json', 'w') as f:
    json.dump(match_results, f, indent=4)
