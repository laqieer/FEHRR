#!/usr/bin/env python3

import argparse
import openpyxl
import mido
import re

NativeInstrumentMap = 'instrument/Native Instrument Map.xlsx'

nativeInstruments = [None] * 128
standardInstruments = [None] * 128

def get_instrument_name(instrumentId):
    instrumentName = str(instrumentId)
    if standardInstruments[instrumentId] is not None:
        instrumentName += ": " + standardInstruments[instrumentId]
    return instrumentName

def load_native_instruments():
    wb = openpyxl.load_workbook(NativeInstrumentMap)
    ws = wb.active
    for row in ws.iter_rows(min_row=3, max_row=146, min_col=1, max_col=4):
        # skip if the cells are merged
        if type(row[1]) == openpyxl.cell.cell.MergedCell:
            continue
        No, nameEnglish, nameChinese, fe6 = row
        instrumentId = int(No.value) - 1
        nativeInstruments[instrumentId] = fe6.value
        standardInstruments[instrumentId] = nameEnglish.value
        if nameChinese.value:
            standardInstruments[instrumentId] += " (" + nameChinese.value + ")"

def check_s_file(file_path):
    try:
        with open(file_path, 'r', encoding="utf-8") as f:
            score = f.read()
            # Check track amount
            tracks = re.findall(r'\.byte\s+(\d+)\s+@\s+NumTrks', score)
            if len(tracks) != 1:
                print("Error: Number of tracks not found or more than one found: " + str(len(tracks)) + " tracks found")
            tracks = int(tracks[0])
            if tracks > 16:
                print("Error: S file has more than 16 tracks: " + str(tracks) + " tracks found")
            # Check loop points
            loops = re.findall(r'\.byte\s+GOTO\s+\.word\s+', score)
            if len(loops) != tracks:
                print(f"Error: amount of loop points {len(loops)} does not match the amount of tracks {tracks}")
            # Check used instruments
            usedInstruments = re.search(r'\.byte\s+VOICE\s*,\s*(\d+)', score).groups()
            usedInstruments = [int(i) for i in usedInstruments]
            badInstruments = [i for i in usedInstruments if nativeInstruments[i] is None]
            if badInstruments:
                print("Error: The following instruments are not native to FE6: " + ', '.join(get_instrument_name(i) for i in badInstruments))
    except Exception as e:
        print("Error: " + str(e))

def check_midi_file(file_path):
    try:
        mid = mido.MidiFile(file_path)
        # Check format
        if mid.type > 1:
            print("Error: MIDI file is not format 0 or 1: " + str(mid.type))
        # Check tracks without notes
        silentTracks = [i for i, track in enumerate(mid.tracks) if not any(msg.type == 'note_on' for msg in track)]
        if len(silentTracks) > 1 or (len(silentTracks) == 1 and silentTracks[0] != 0):
            print("Error: The following tracks have no notes: " + ', '.join(f'{i}: {mid.tracks[i].name}' for i in silentTracks))
        # Check track amount
        tracks = len(mid.tracks) - len(silentTracks)
        if tracks > 16:
            print("Error: MIDI file has more than 16 tracks: " + str(tracks) + " tracks found")
        # Check loop points
        # find all markers, texts or cuepoints named "["
        loopStarts = [msg for track in mid.tracks for msg in track if msg.type in ('marker', 'text', 'cuepoint') and msg.text == "["]
        loopEnds = [msg for track in mid.tracks for msg in track if msg.type in ('marker', 'text', 'cuepoint') and msg.text == "["]
        if len(loopStarts) != len(loopEnds):
            print(f"Error: amount of loop beginning points {len(loopStarts)} does not match the amount of loop ending points {len(loopEnds)}")
        if len(loopStarts) == 0:
            print("Error: No loop points found")
        # Check used instruments
        badInstruments = []
        for i, track in enumerate(mid.tracks):
            for msg in track:
                if msg.type == 'program_change':
                    if msg.program >= 128:
                        print("Error: Program number out of range in track " + str(i) + ": " + str(msg.program))
                    if nativeInstruments[msg.program] is None:
                        badInstruments.append(msg.program)
        if badInstruments:
            print("Error: The following instruments are not native to FE6: " + ', '.join(get_instrument_name(i) for i in badInstruments))
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
