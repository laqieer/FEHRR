#!/usr/bin/env python3

"""
Convert SE audio to .s for GBA m4a engine.
Usage: ./se2m4a.py -h/--help
"""

import os
import sys
import wave
import aifc
import math
import argparse
import numpy as np

magic_rates = (5734, 7884, 10512, 13379, 15768, 18157, 21024, 26758, 31536, 36314, 40137, 42048)
blk_size = 64
quantized_table = [0, 1, 4, 9, 16, 25, 36, 49, -64, -49, -36, -25, -16, -9, -4, -1]
quantized_array = [8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 14, 14, 14, 14, 15, 15, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7]
quantized_matrix = [[8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8], [8, 9], [8, 9], [8, 9], [8, 9], [8, 9], [8, 9], [8, 9], [8, 9], [8, 9], [8, 9], [8, 9], [8, 9], [8, 9], [8, 9], [9, 10], [9, 10], [9, 10], [9, 10], [9, 10], [9, 10], [9, 10], [9, 10], [9, 10], [9, 10], [9, 10], [9, 10], [9, 10], [10, 11], [10, 11], [10, 11], [10, 11], [10, 11], [10, 11], [10, 11], [10, 11], [10, 11], [10, 11], [10, 11], [11, 12], [11, 12], [11, 12], [11, 12], [11, 12], [11, 12], [11, 12], [11, 12], [11, 12], [12, 13], [12, 13], [12, 13], [12, 13], [12, 13], [12, 13], [12, 13], [13, 14], [13, 14], [13, 14], [13, 14], [13, 14], [14, 15], [14, 15], [14, 15], [0, 15], [0, 1, 15], [1, 0], [1, 2], [1, 2], [2, 1], [2, 3], [2, 3], [2, 3], [2, 3], [3, 2], [3, 4], [3, 4], [3, 4], [3, 4], [3, 4], [3, 4], [4, 3], [4, 5], [4, 5], [4, 5], [4, 5], [4, 5], [4, 5], [4, 5], [4, 5], [5, 4], [5, 6], [5, 6], [5, 6], [5, 6], [5, 6], [5, 6], [5, 6], [5, 6], [5, 6], [5, 6], [6, 5], [6, 7], [6, 7], [6, 7], [6, 7], [6, 7], [6, 7], [6, 7], [6, 7], [6, 7], [6, 7], [6, 7], [6, 7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7], [7]]

def dpcm_lookahead(min_error, buffer, lookahead, prev_level, fast_mode):
    if lookahead == 0:
        min_error["val"] = 0
        min_error["id"] = 0
        return
    min_error["val"] = float('inf')
    min_error["id"] = len(quantized_table)
    if fast_mode:
        candicate_set = quantized_matrix[buffer[0] - prev_level + 255]
    else:
        candicate_set = range(len(quantized_table))
    for i in candicate_set:
        new_level = prev_level + quantized_table[i]
        estimated_error = (buffer[0] - new_level) ** 2
        if estimated_error >= min_error["val"]:
            continue
        rec_min_error = {"val": 0, "id": 0}
        dpcm_lookahead(rec_min_error, buffer[1:], lookahead - 1, new_level, fast_mode)
        error = estimated_error + rec_min_error["val"]
        if error < min_error["val"]:
            if new_level <= 127 and new_level >= -128:
                min_error["val"] = error
                min_error["id"] = i

def compress_blk_with_lookahead(uncompressed_data, lookahead, fast_mode):
    s = uncompressed_data[0]
    compressed_data = [s]
    decompressed_data = [s]
    i = 1
    while i < blk_size:
        min_error = {"val": 0, "id": 0}
        compressed_byte = 0
        if i > 1:
            dpcm_lookahead(min_error, uncompressed_data[i:], min(lookahead, blk_size - i), s, fast_mode)
            compressed_byte = (min_error["id"] & 0xF) << 4
            s += quantized_table[min_error["id"]]
            s = max(-128, min(127, s))
            decompressed_data.append(s)
            i += 1
        dpcm_lookahead(min_error, uncompressed_data[i:], min(lookahead, blk_size - i), s, fast_mode)
        compressed_byte |= min_error["id"] & 0xF
        s += quantized_table[min_error["id"]]
        s = max(-128, min(127, s))
        decompressed_data.append(s)
        i += 1
        compressed_data.append(compressed_byte)
    return compressed_data, decompressed_data

def compress_blk(uncompressed_data):
    diff_value = [uncompressed_data[0]]
    compressed_data = [uncompressed_data[0]]
    decompressed_data = [uncompressed_data[0]]
    for index in range(len(uncompressed_data)) :
        if index == 0 :
            compressed_data.append(0)
            continue
        diff_value.append(np.int(uncompressed_data[index]) - np.int(decompressed_data[index - 1]))
        quantized_value = quantized_array[diff_value[index] + 255]
        if index % 2 == 0:
            compressed_data.append((quantized_value & 0xF) << 4)
        else:
            compressed_data[-1] |= quantized_value & 0xF
        decompressed_data.append(decompressed_data[index - 1] + quantized_table[quantized_value])
        #print("%d: %d %d %d %d" % (index, uncompressed_data[index], diff_value[index], quantized_value, compressed_data[-1]))
    return compressed_data, decompressed_data

def compress(uncompressed_data, lookahead=0, lookahead_fast=False):
    #print("index: value delta quantized compressed")
    compressed_data = []
    decompressed_data = []
    blks = np.split(uncompressed_data, len(uncompressed_data) / blk_size)
    for blk in blks:
        if lookahead > 0:
            compressed_blk, decompressed_blk = compress_blk_with_lookahead(blk, lookahead, lookahead_fast)
        else:
            compressed_blk, decompressed_blk = compress_blk(blk)
        compressed_data += compressed_blk
        decompressed_data += decompressed_blk
    return compressed_data, decompressed_data

def calculate_SNR(uncompressed_data, decompressed_data) :
    sum_son = np.int64(0)
    sum_mum = np.int64(0)
    for i in range(len(decompressed_data)) :
        sum_son += int(decompressed_data[i] + 128) ** 2
        sub = int(decompressed_data[i]) - int(uncompressed_data[i])
        sum_mum += sub ** 2
    return 10 * math.log10(float(sum_son) / float(sum_mum))

def calculate_PSNR(uncompressed_data, decompressed_data) :
    mse = np.mean((np.array(uncompressed_data)/1.0 - np.array(decompressed_data)/1.0) ** 2)
    if mse < 1.0e-10:  # MSE is zero means no noise is present in the signal. Therefore PSNR has no importance.
        return 100
    return 20 * math.log10(255.0 / math.sqrt(mse))

def main():
    parser = argparse.ArgumentParser('Convert sound sample to assembly source for GBA m4a engine.')
    parser.add_argument("-i", "--input", help="Input sound sample file", metavar='xxx.wav/xxx.aif', required=True)
    parser.add_argument("-o", "--output", help="Output assembly source file", metavar='xxx.s')
    parser.add_argument("-c", "--compress", help="Enable DPCM compression", action="store_true")
    parser.add_argument("-l", "--lookahead", help="Lookahead sample number for DPCM compression (only works with -c/--compress)", type=int, default=0)
    parser.add_argument("-f", "--lookahead-fast", help="Enable fast lookahead algorithm (only works with -l/--lookahead)", action="store_true")
    parser.add_argument("--limit-snr", help="SNR limit for DPCM compression (only works with -c/--compress)", type=float, default=0.0)
    parser.add_argument("--limit-psnr", help="PSNR limit for DPCM compression (only works with -c/--compress)", type=float, default=0.0)
    parser.add_argument("--limit-compress-rate", help="Compression rate limit for DPCM compression (only works with -c/--compress)", type=float, default=1.0)
    args = parser.parse_args()
    input_file = args.input
    audio_path, audio_ext = os.path.splitext(input_file)
    symbol = os.path.basename(audio_path)
    output_file = audio_path + '.s'
    if args.output is not None:
        output_file = args.output
    if audio_ext in ('.wav', '.WAV'):
        audio_module = wave
    else:
        audio_module = aifc
    enable_compress = args.compress
    lookahead = args.lookahead
    lookahead_fast = args.lookahead_fast
    min_SNR = args.limit_snr
    min_PSNR = args.limit_psnr
    max_CR = args.limit_compress_rate
    header_file = os.path.splitext(output_file)[0] + '.h'
    print(header_file)
    with audio_module.open(input_file, 'rb') as audio, open(output_file, 'w') as asm, open(header_file, 'w') as header:
        if audio.getnchannels() > 1:
            sys.exit(input_file + " has more than 1 channels. Convert it to mono pls.")
        if audio.getsampwidth() != 1:
            sys.exit(input_file + " is not 8-bit. Convert it to 8-bit pls.")
        rate = audio.getframerate()
        if rate not in magic_rates:
            sys.exit(input_file + " is " + str(rate) + " Hz. Re-sample it to one of " + str(magic_rates) + " Hz pls.")
        asm.write("// Converted from " + input_file + " by se2m4a.\n\n")
        asm.write("\t.include \"MPlayDef.s\"\n\n")
        asm.write("\t.section .rodata\n")
        symbol_song = symbol + "_song"
        asm.write("\t.global " + symbol_song)
        asm.write("\n\t.align 2\n")
        symbol_wave = symbol + "_wave"
        asm.write(symbol_wave + ":\n")
        frames = audio.getnframes()
        raw = audio.readframes(frames)
        if enable_compress:
            if audio_ext in ('.wav', '.WAV'):
                uncompressed_data = (np.frombuffer(raw, dtype = np.ubyte) - 0x80).astype(np.byte)
            else:
                uncompressed_data = np.frombuffer(raw, dtype = np.byte)
            if frames % blk_size > 0:
                uncompressed_data = np.append(uncompressed_data, [0] * (blk_size - frames % blk_size))
            compressed_data, decompressed_data = compress(uncompressed_data, lookahead, lookahead_fast)
            SNR = calculate_SNR(uncompressed_data, decompressed_data)
            if SNR < min_SNR:
                print("SNR: %.2fdB < %.1fdB, no compression!" % (SNR, min_SNR))
                asm.write("\t.hword 0, 0\n")
                asm.write("\t.word " + str(rate * 1024) + ", 0, " + str(frames))
                asm.write("\n\t.byte " + ', '.join(['%d' % b for b in uncompressed_data]))
            else:
                PSNR = calculate_PSNR(uncompressed_data, decompressed_data)
                if PSNR < min_PSNR:
                    print("PSNR: %.2fdB < %.1fdB, no compression!" % (PSNR, min_PSNR))
                    asm.write("\t.hword 0, 0\n")
                    asm.write("\t.word " + str(rate * 1024) + ", 0, " + str(frames))
                    asm.write("\n\t.byte " + ', '.join(['%d' % b for b in uncompressed_data]))
                else:
                    CR = len(compressed_data) / float(frames)
                    if CR > max_CR:
                        print("CR: %.3f > %.2f, no compression!" % (CR, max_CR))
                        asm.write("\t.hword 0, 0\n")
                        asm.write("\t.word " + str(rate * 1024) + ", 0, " + str(frames))
                        asm.write("\n\t.byte " + ', '.join(['%d' % b for b in uncompressed_data]))
                    else:
                        asm.write("\t.hword 1, 0\n")
                        asm.write("\t.word " + str(rate * 1024) + ", 0, " + str(frames))
                        asm.write("\n\t// SNR: %.2fdB PSNR: %.2fdB CR: %.3f" % (SNR, PSNR, CR))
                        asm.write("\n\t.byte " + ', '.join(['%d' % b for b in compressed_data]))
        else:
            asm.write("\t.hword 0, 0\n")
            asm.write("\t.word " + str(rate * 1024) + ", 0, " + str(frames))
            if type(raw) == bytes:
                if audio_ext in ('.wav', '.WAV'):  # formats: wav can't encode Signed Integer PCM to 8-bit
                    asm.write("\n\t.byte " + ', '.join(['%d' % (b - 0x80) for b in raw]))
                else:  # formats: aiff can't encode Unsigned Integer PCM
                    asm.write("\n\t.byte " + ', '.join(['%d' % b for b in raw]))
            else:
                asm.write("\n\t.string \"" + raw + "\"")
        asm.write("\n\t.align 2\n")
        symbol_tone = symbol + "_tone"
        asm.write(symbol_tone + ":\n")
        asm.write("\t.byte 0, Cn3, 0, 0\n")
        asm.write("\t.word " + symbol_wave)
        asm.write("\n\t.byte 255, 0, 255, 0 // ASDR envelope\n")
        symbol_track = symbol + "_track"
        asm.write(symbol_track + ":\n")
        asm.write("\t.byte KEYSH, 0\n")
        asm.write("\t.byte TEMPO, 60\n")
        asm.write("\t.byte VOICE, 0\n")
        asm.write("\t.byte VOL, mxv // Volume\n")
        asm.write("\t.byte PAN, c_v\n")
        asm.write("\t.byte N72, Cn3, v127, W72\n")
        asm.write("\t.byte FINE\n")
        asm.write("\n\t.align 2\n")
        asm.write(symbol_song + ":\n")
        asm.write("\t.byte 1, 0\n")
        asm.write("\t.byte 10 // Priority\n")
        asm.write("\t.byte 0\n")
        asm.write("\t.word " + symbol_tone)
        asm.write("\n\t.word " + symbol_track)
        asm.write("\n")
        header.write("extern const struct Song " + symbol_song + ";\n")


if __name__ == "__main__":
    # execute only if run as a script
    main()
