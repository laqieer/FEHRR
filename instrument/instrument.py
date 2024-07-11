#!/usr/bin/env python3

import struct
from enum import Enum

class ToneDataKind(Enum):
    SND = 0
    PSG_SQR1 = 1
    PSG_SQR2 = 2
    PSG_PROG_WAV = 3
    PSG_NOISE = 4
    FIX = 8
    SPL = 0x40
    RHY = 0x80

class ToneDataKey(Enum):
    CnM2 = 0
    Cn3 = 60

INSTRUMENT_NUM = 128

def read_instrument_information(file_path):
    comments = ["blank"] * INSTRUMENT_NUM
    with open(file_path, 'r', encoding='utf-8') as f:
        lines = f.readlines()
        instrument_info_started = False
        for line in lines:
            if "Instrument information:" in line:
                instrument_info_started = True
                continue  # Skip the line that contains "Instrument information:"
            if instrument_info_started:
                if "information:" in line:  # If we reach the beginning of next information, stop reading
                    break
                if line.strip():
                    line = line.strip()
                    if '——' in line:
                        line = line.split('——')[1].strip()
                    elif '—' in line:
                        line = line.split('—')[1].strip()
                    elif '-' in line:
                        line = line.split('-')[1].strip()
                    i, info = line.split(' ', 1)
                    i = int(i)
                    comments[i] = info # Add the instrument information to the list
    return comments

class ToneData:
    def __init__(self, kind, key, length, pan_sweep, wav, attack, decay, sustain, release):
        self.kind = kind
        self.key = key
        self.length = length
        self.pan_sweep = pan_sweep
        self.wav = wav
        self.attack = attack
        self.decay = decay
        self.sustain = sustain
        self.release = release

def read_tone_data(file_path):
    instruments = []
    voicegroups = []
    with open(file_path, 'rb') as f:
        for _ in range(INSTRUMENT_NUM):
            data = f.read(12)
            kind, key, length, pan_sweep, wav, attack, decay, sustain, release = struct.unpack('<BBBBIBBBB', data)
            kind = ToneDataKind(kind)
            if kind == ToneDataKind.RHY and wav not in voicegroups:
                voicegroups.append(wav)
            key = ToneDataKey(key)
            instruments.append(ToneData(kind, key, length, pan_sweep, wav, attack, decay, sustain, release))
    return instruments, voicegroups

def make_C_source_file(instruments, voicegroups, comments, file_path):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write("#include \"m4a.h\"\n")
        f.write("#include \"m4aNew.h\"\n\n")
        for i, instrument in enumerate(instruments):
            if instrument.kind == ToneDataKind.SND:
                f.write(f"extern const struct WaveData Voice{i:03d};\n")
            elif instrument.kind == ToneDataKind.RHY:
                f.write(f"extern const struct ToneData VoiceGroup{1 + voicegroups.index(instrument.wav):03d}[];\n")

        f.write("\n// FE6 native instrument map")
        f.write("\nconst struct ToneData voicegroup000[] = {\n")
        for i, instrument in enumerate(instruments):
            f.write(f"    [{i}] = {{ // {comments[i]}\n")
            f.write(f"        .kind = TONEDATA_KIND_{instrument.kind.name},\n")
            f.write(f"        .key = TONEDATA_KEY_{instrument.key.name},\n")
            f.write(f"        .length = {instrument.length},\n")
            f.write(f"        .pan_sweep = {instrument.pan_sweep},\n")
            wav = f"0x{instrument.wav:X}"
            if instrument.kind == ToneDataKind.SND:
                wav = f"&Voice{i:03d}"
            elif instrument.kind == ToneDataKind.RHY:
                wav = f"VoiceGroup{1 + voicegroups.index(instrument.wav):03d}"
            f.write(f"        .wav = (struct WaveData *){wav},\n")
            f.write(f"        .attack = {instrument.attack},\n")
            f.write(f"        .decay = {instrument.decay},\n")
            f.write(f"        .sustain = {instrument.sustain},\n")
            f.write(f"        .release = {instrument.release},\n")
            f.write("    },\n")
        f.write("};\n")

def make_linker_script(instruments, voicegroups, file_path):
    with open(file_path, 'w', encoding='utf-8') as f:
        for i, instrument in enumerate(instruments):
            if instrument.kind == ToneDataKind.SND:
                f.write(f"Voice{i:03d} = 0x{instrument.wav:X};\n")
        for i, voicegroup in enumerate(voicegroups):
            f.write(f"VoiceGroup{1 + i:03d} = 0x{voicegroup:X};\n")

def main():
    instruments, voicegroups = read_tone_data("instrument/FE6 native instrument map/FE6 native instrument map.bin")
    comments = read_instrument_information("instrument/FE6 native instrument map/FE6 native instrument information.txt")
    make_C_source_file(instruments, voicegroups, comments, "source/instruments.c")
    make_linker_script(instruments, voicegroups, "ldscript/instruments.lds")

if __name__ == "__main__":
    main()
