#!/usr/bin/env python3

import struct
import warnings

from enum import Enum
class ToneDataType(Enum):
    SND = 0
    SQR = 1
    RHY = 128

INSTRUMENT_NUM = 128

TONEDATA_KEY_Cn3 = 60

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
    with open(file_path, 'rb') as f:
        for _ in range(INSTRUMENT_NUM):
            data = f.read(12)
            kind, key, length, pan_sweep, wav, attack, decay, sustain, release = struct.unpack('<BBBBIBBBB', data)
            instruments.append(ToneData(kind, key, length, pan_sweep, wav, attack, decay, sustain, release))
    return instruments

def make_C_source_file(instruments, comments, file_path):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write("#include \"m4a.h\"\n")
        f.write("#include \"m4aNew.h\"\n\n")
        voicegroup = 1
        for i, instrument in enumerate(instruments):
            if instrument.kind == ToneDataType.SND.value:
                f.write(f"extern const struct WaveData Voice{i:03d};\n")
            elif instrument.kind == ToneDataType.RHY.value:
                f.write(f"extern const struct ToneData VoiceGroup{voicegroup:03d}[];\n")
                voicegroup += 1

        f.write("\nconst struct ToneData voicegroup000[] = {\n")
        voicegroup = 1
        for i, instrument in enumerate(instruments):
            f.write(f"    [{i}] = ")
            if instrument.kind == ToneDataType.SND.value:
                assert instrument.key == TONEDATA_KEY_Cn3
                f.write(f"TONEDATA_DIRECT_SOUND(&Voice{i:03d}, {instrument.attack}, {instrument.decay}, {instrument.sustain}, {instrument.release})")
            elif instrument.kind == ToneDataType.SQR.value:
                assert instrument.key == TONEDATA_KEY_Cn3
                f.write(f"TONEDATA_SQUARE({instrument.wav}, {instrument.attack}, {instrument.decay}, {instrument.sustain}, {instrument.release})")
            elif instrument.kind == ToneDataType.RHY.value:
                f.write(f"TONEDATA_KEYSPLIT_ALL(VoiceGroup{voicegroup:03d}, {'TONEDATA_KEY_Cn3' if instrument.key == TONEDATA_KEY_Cn3 else instrument.key})")
                voicegroup += 1
            else:
                warnings.warn(f"unsupported instrument kind: 0x{instrument.kind:x}, instrument {i}: {comments[i]}")
                f.write(f"{{{instrument.kind}, {instrument.key}, {instrument.length}, {instrument.pan_sweep}, (struct WaveData *)0x{instrument.wav:X}, {instrument.attack}, {instrument.decay}, {instrument.sustain}, {instrument.release}}},")
            f.write(f" // {comments[i]}\n")
        f.write("};\n")

def make_linker_script(instruments, file_path):
    with open(file_path, 'w', encoding='utf-8') as f:
        voicegroup = 1
        for i, instrument in enumerate(instruments):
            if instrument.kind == ToneDataType.SND.value:
                f.write(f"Voice{i:03d} = 0x{instrument.wav:X};\n")
            elif instrument.kind == ToneDataType.RHY.value:
                f.write(f"VoiceGroup{voicegroup:03d} = 0x{instrument.wav:X};\n")
                voicegroup += 1

def main():
    instruments = read_tone_data("instrument/FE6 native instrument map/FE6 native instrument map.bin")
    comments = read_instrument_information("instrument/FE6 native instrument map/FE6 native instrument information.txt")
    make_C_source_file(instruments, comments, "source/instruments.c")
    make_linker_script(instruments, "ldscript/instruments.lds")

if __name__ == "__main__":
    main()
