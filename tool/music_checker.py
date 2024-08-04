#!/usr/bin/env python3

import argparse
import openpyxl
import mido
import os
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

def check_s_file(file_path, auto_fix=False):
    try:
        with open(file_path, 'r+' if auto_fix else 'r', encoding="utf-8") as f:
            score = f.read()
            # Get music name
            scoreName = re.findall(r'\.global\s+(\S+)', score)
            if len(scoreName) != 1:
                print("Error: Music name not found or more than one found: " + str(len(scoreName)) + " music names found")
            scoreName = scoreName[0]
            # Check track amount
            tracks = re.findall(r'\.byte\s+(\d+)\s+@\s+NumTrks', score)
            if len(tracks) != 1:
                print("Error: Number of tracks not found or more than one found: " + str(len(tracks)) + " tracks found")
            tracks = int(tracks[0])
            if tracks > 16:
                print("Error: S file has more than 16 tracks: " + str(tracks) + " tracks found")
            # Check priority
            priority = re.findall(rf'\.equ\s+{scoreName}_pri\s*,\s*(\d+)', score)
            if len(priority) != 1:
                print("Error: Priority not found or more than one found: " + str(len(priority)) + " priorities found")
            priority = int(priority[0])
            if priority > 10:
                if auto_fix:
                    print(f"Info: Automatically changing priority from {priority} to 10")
                    score = re.sub(rf'\.equ\s+{scoreName}_pri\s*,\s*\d+', f'.equ\t{scoreName}_pri, 10', score)
                else:
                    print("Error: Priority is higher than 10: " + str(priority))
            # Check loop points
            loops = re.findall(r'\.byte\s+GOTO\s+\.word\s+', score)
            if len(loops) == 0:
                print("Error: No loop points found")
            elif len(loops) != tracks:
                print(f"Error: amount of loop points {len(loops)} does not match the amount of tracks {tracks}")
            # Check used instruments
            usedInstruments = re.findall(r'\.byte\s+VOICE\s*,\s*(\d+)', score)
            usedInstruments = [int(i) for i in usedInstruments]
            badInstruments = [i for i in set(usedInstruments) if nativeInstruments[i] is None]
            if badInstruments:
                print("Error: The following instruments are not native to FE6: " + ', '.join(get_instrument_name(i) for i in badInstruments))
            if auto_fix:
                f.seek(0)
                f.write(score)
                f.truncate()
    except Exception as e:
        print("Error: " + str(e))

def check_midi_file(file_path, auto_fix=False):
    try:
        mid = mido.MidiFile(file_path)
        # Check format
        if mid.type > 1:
            print("Error: MIDI file is not format 0 or 1: " + str(mid.type))
        # Check tracks without notes
        silentTracks = [i for i, track in enumerate(mid.tracks) if not any(msg.type == 'note_on' for msg in track)]
        tracks = len(mid.tracks) - len(silentTracks)
        # Remove 0 from the list
        silentTracks = [i for i in silentTracks if i != 0]
        if silentTracks:
            if auto_fix:
                print("Info: Automatically removing empty tracks: " + ', '.join(f'{i} {mid.tracks[i].name}' for i in silentTracks))
                for i in silentTracks:
                    mid.tracks.pop(i)
            else:
                print("Error: The following tracks have no notes: " + ', '.join(f'{i} {mid.tracks[i].name}' for i in silentTracks))
        # Check track amount
        if tracks > 16:
            print("Error: MIDI file has more than 16 tracks: " + str(tracks) + " tracks found")
        # Check loop points
        # find all markers, texts or cuepoints named "["
        loopStarts = [msg for track in mid.tracks for msg in track if msg.type in ('marker', 'text', 'cuepoint') and msg.text == "["]
        loopEnds = [msg for track in mid.tracks for msg in track if msg.type in ('marker', 'text', 'cuepoint') and msg.text == "["]
        if len(loopStarts) != len(loopEnds):
            print(f"Error: amount of loop beginning points {len(loopStarts)} does not match the amount of loop ending points {len(loopEnds)}")
        if len(loopStarts) == 0:
            if auto_fix:
                print("Info: Automatically adding loop points")
                # find the longest track
                longestTrack = max(mid.tracks, key=lambda track: sum(msg.time for msg in track))
                longestTrack.insert(0, mido.MetaMessage('marker', text='['))
                longestTrack.append(mido.MetaMessage('marker', text=']'))
            else:
                print("Error: No loop points found")
        # Check used instruments
        badInstruments = []
        for i, track in enumerate(mid.tracks):
            for msg in track:
                if msg.type == 'program_change':
                    if msg.program >= 128:
                        print("Error: Program number out of range in track " + str(i) + ": " + str(msg.program))
                    if nativeInstruments[msg.program] is None and msg.program not in badInstruments:
                        badInstruments.append(msg.program)
        if badInstruments:
            print("Error: The following instruments are not native to FE6: " + ', '.join(get_instrument_name(i) for i in badInstruments))
        # Check if note on and note off are paired
        for i, track in enumerate(mid.tracks):
            noteOn = 0
            for j, msg in enumerate(track):
                if msg.type == 'note_on':
                    noteOn += 1
                elif msg.type == 'note_off':
                    noteOn -= 1
                    if noteOn < 0:
                        print(f"Error: Note OFF (msg {j}: {msg}) without initial Note ON in track {i}: {track.name}")
            # if noteOn != 0:
            #     print(f"Error: Note on and note off are not paired in track {i}: {track.name}")
        if auto_fix:
            mid.save(file_path)
    except Exception as e:
        print("Error: " + str(e))

def check_music_file(file_path, auto_fix=False):
    ext = file_path.split('.')[-1].lower()
    if ext == 's':
        check_s_file(file_path, auto_fix=auto_fix)
    elif ext in ('mid', 'midi'):
        check_midi_file(file_path, auto_fix=auto_fix)
    else:
        print("Error: Unsupported music file type: " + ext.upper())

def main():
    parser = argparse.ArgumentParser(description='Music File Checker')
    parser.add_argument('path', help='Path to the music file or folder to check')
    parser.add_argument('--auto-fix', action='store_true', help='Automatically fix the music file')
    args = parser.parse_args()

    load_native_instruments()

    # Check if path is existed
    if not os.path.exists(args.path):
        print("Error: Path not found: " + args.path)
        return

    if os.path.isdir(args.path):
        for file in os.listdir(args.path):
            ext = file.split('.')[-1].lower()
            if ext in ('s', 'mid', 'midi'):
                print("Checking " + file)
                check_music_file(os.path.join(args.path, file), auto_fix=args.auto_fix)
    else:
        check_music_file(args.path, auto_fix=args.auto_fix)

if __name__ == '__main__':
    main()
