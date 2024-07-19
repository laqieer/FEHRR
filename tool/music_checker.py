#!/usr/bin/env python3

import argparse
import mido
import re

NativeInstrumentMap = 'instrument/FE6 native instrument map/FE6 native instrument information.txt'

nativeInstruments = [None] * 128

def load_native_instruments():
    with open(NativeInstrumentMap, 'r', encoding='utf-8') as f:
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
                    nativeInstruments[i] = info

def check_s_file(file_path):
    try:
        with open(file_path, 'r', encoding="utf-8") as f:
            score = f.read()
            # Check used instruments
            usedInstruments = re.search(r'\.byte\s+VOICE\s*,\s*(\d+)', score).groups()
            usedInstruments = [int(i) for i in usedInstruments]
            badInstruments = [i for i in usedInstruments if nativeInstruments[i] is None]
            if badInstruments:
                raise Exception ("The following instruments are not native to FE6: " + ', '.join(str(i) for i in badInstruments))
            # Check passed
            print("S file is valid.")
    except Exception as e:
        print("Error: " + str(e))

def check_midi_file(file_path):
    try:
        mid = mido.MidiFile(file_path)
        # Check track amount
        if len(mid.tracks) > 16:
            raise Exception("MIDI file has more than 16 tracks: " + str(len(mid.tracks)) + " tracks found")
        # Check used instruments
        badInstruments = []
        for i, track in enumerate(mid.tracks):
            for msg in track:
                if msg.type == 'program_change':
                    if msg.program >= 128:
                        raise Exception("Program number out of range in track " + str(i) + ": " + str(msg.program))
                    if nativeInstruments[msg.program] is None:
                        badInstruments.append(msg.program)
        if badInstruments:
            raise Exception("The following instruments are not native to FE6: " + ', '.join(str(i) for i in badInstruments))
        print("MIDI file is valid.")
    except Exception as e:
        print("Error: " + str(e))

def main():
    parser = argparse.ArgumentParser(description='Music File Checker')
    parser.add_argument('file', help='Path to the music file')
    args = parser.parse_args()

    load_native_instruments()

    ext = args.file.split('.')[-1].lower()
    if ext == 's':
        check_s_file(args.file)
    elif ext in ('mid', 'midi'):
        check_midi_file(args.file)
    else:
        print("Error: Unsupported music file type: " + ext.upper())

if __name__ == '__main__':
    main()
