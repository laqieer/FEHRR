	.include "MPlayDef.s"

	.equ	bgm_map_FEH_04_grp, voicegroup000
	.equ	bgm_map_FEH_04_pri, 0
	.equ	bgm_map_FEH_04_rev, 0
	.equ	bgm_map_FEH_04_mvl, 62
	.equ	bgm_map_FEH_04_key, 0
	.equ	bgm_map_FEH_04_tbs, 1
	.equ	bgm_map_FEH_04_exg, 0
	.equ	bgm_map_FEH_04_cmp, 1

	.section .rodata
	.global	bgm_map_FEH_04
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

bgm_map_FEH_04_1:
	.byte	KEYSH , bgm_map_FEH_04_key+0
bgm_map_FEH_04_1_B1:
@ 000   ----------------------------------------
	.byte	TEMPO , 124*bgm_map_FEH_04_tbs/2
	.byte		VOICE , 0
	.byte		VOL   , 93*bgm_map_FEH_04_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		TIE   , Fs1 , v080
	.byte		TIE   , Fs2
	.byte		N11   , Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
	.byte		N11   , Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
@ 001   ----------------------------------------
	.byte		N11
	.byte		N11   , Cs4
	.byte		N11   , En4
	.byte	W24
	.byte		N05   , An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W18
	.byte		N11   , An3
	.byte		N11   , Cs4
	.byte		N11   , En4
	.byte	W24
	.byte		N05   , An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W08
	.byte		EOT   , Fs1
	.byte		        Fs2
	.byte	W10
@ 002   ----------------------------------------
	.byte		TIE   , Fs1
	.byte		TIE   , Cs2
	.byte		TIE   , Fs2
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W24
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W18
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W24
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W18
@ 003   ----------------------------------------
	.byte		N11   , Ds3
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte	W24
	.byte		N05   , Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W06
	.byte		        Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W18
	.byte		N11   , Ds3
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte	W24
	.byte		N05   , Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W06
	.byte		        Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W08
	.byte		EOT   , Fs1
	.byte		        Cs2
	.byte		        Fs2
	.byte	W10
@ 004   ----------------------------------------
	.byte		N11   , Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Fs1
	.byte		N05   , Fs2
	.byte	W06
	.byte		        Gs1
	.byte		N05   , Gs2
	.byte	W06
	.byte		N17   , An1
	.byte		N17   , An2
	.byte		N11   , Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W18
	.byte		N17   , Bn1
	.byte		N17   , Bn2
	.byte	W06
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		N11   , Cs2
	.byte		N11   , Cs3
	.byte	W12
@ 005   ----------------------------------------
	.byte		        An3
	.byte		N11   , Cs4
	.byte		N11   , En4
	.byte	W24
	.byte		N05   , An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        Gs1
	.byte		N05   , Gs2
	.byte	W06
	.byte		        An1
	.byte		N05   , An2
	.byte	W06
	.byte		N11   , An3
	.byte		N11   , Cs4
	.byte		N11   , En4
	.byte	W24
	.byte		N05   , En1
	.byte		N05   , En2
	.byte		N05   , An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        Fs1
	.byte		N05   , Fs2
	.byte		N05   , An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        Cs1
	.byte		N05   , Cs2
	.byte	W12
@ 006   ----------------------------------------
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W24
	.byte		TIE   , Bn0
	.byte		TIE   , Bn1
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W18
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W24
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W18
@ 007   ----------------------------------------
	.byte		N11   , Ds3
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte	W24
	.byte		N05   , Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W06
	.byte		        Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W18
	.byte		N11   , Ds3
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte	W24
	.byte		N05   , Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W04
	.byte		EOT   , Bn0
	.byte		        Bn1
	.byte	W02
	.byte		N05   , Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W06
	.byte		        Ds1
	.byte	W06
	.byte		        En1
	.byte	W06
@ 008   ----------------------------------------
bgm_map_FEH_04_1_008:
	.byte		N11   , Fs1 , v080
	.byte		N11   , Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W12
	.byte		        Fs2
	.byte	W12
	.byte		        En2
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs2
	.byte	W06
	.byte		N11   , Fs1
	.byte	W06
	.byte		        Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W06
	.byte		N05   , Fs1
	.byte	W06
	.byte		N11   , Fs2
	.byte	W12
	.byte		        En2
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		N11   , Cs2
	.byte	W12
	.byte	PEND
@ 009   ----------------------------------------
bgm_map_FEH_04_1_009:
	.byte		N11   , An1 , v080
	.byte		N11   , An3
	.byte		N11   , Cs4
	.byte		N11   , En4
	.byte	W12
	.byte		        Fs2
	.byte	W12
	.byte		        En2
	.byte		N05   , An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        Cs2
	.byte	W06
	.byte		N11   , An1
	.byte	W06
	.byte		        An3
	.byte		N11   , Cs4
	.byte		N11   , En4
	.byte	W06
	.byte		N05   , An1
	.byte	W06
	.byte		N11   , Fs2
	.byte	W12
	.byte		        En2
	.byte		N05   , An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		N11   , Cs2
	.byte	W12
	.byte	PEND
@ 010   ----------------------------------------
bgm_map_FEH_04_1_010:
	.byte		N11   , Bn1 , v080
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W12
	.byte		        Gs2
	.byte	W12
	.byte		        Fs2
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Ds2
	.byte	W06
	.byte		N11   , Bn1
	.byte	W06
	.byte		        Fs3
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W06
	.byte		N05   , Bn1
	.byte	W06
	.byte		N11   , Gs2
	.byte	W12
	.byte		        Fs2
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		N11   , Ds2
	.byte	W12
	.byte	PEND
@ 011   ----------------------------------------
bgm_map_FEH_04_1_011:
	.byte		N05   , Fs2 , v080
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W06
	.byte		N05   , Gs2
	.byte	W06
	.byte		N11   , An2
	.byte	W12
	.byte		N17   , Bn2
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W12
	.byte		N11   , An2
	.byte	W06
	.byte		        Fs3
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W06
	.byte		N05   , Bn2
	.byte	W06
	.byte		N11   , Cs3
	.byte	W12
	.byte		N17   , Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W12
	.byte		        Bn2
	.byte	W06
	.byte	PEND
@ 012   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_1_008
@ 013   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_1_009
@ 014   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_1_010
@ 015   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_1_011
@ 016   ----------------------------------------
	.byte	W28
	.byte	W01
	.byte	GOTO
	 .word	bgm_map_FEH_04_1_B1
bgm_map_FEH_04_1_B2:
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

bgm_map_FEH_04_2:
	.byte	KEYSH , bgm_map_FEH_04_key+0
bgm_map_FEH_04_2_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 51
	.byte		VOL   , 78*bgm_map_FEH_04_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N11   , Cs3 , v080
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
	.byte		N11   , Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
@ 001   ----------------------------------------
bgm_map_FEH_04_2_001:
	.byte		N11   , An3 , v080
	.byte		N11   , Cs4
	.byte		N11   , En4
	.byte	W24
	.byte		N05   , An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W18
	.byte		N11   , An3
	.byte		N11   , Cs4
	.byte		N11   , En4
	.byte	W24
	.byte		N05   , An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W18
	.byte	PEND
@ 002   ----------------------------------------
bgm_map_FEH_04_2_002:
	.byte		N11   , Fs3 , v080
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W24
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W18
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W24
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W18
	.byte	PEND
@ 003   ----------------------------------------
bgm_map_FEH_04_2_003:
	.byte		N11   , Ds3 , v080
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte	W24
	.byte		N05   , Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W06
	.byte		        Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W18
	.byte		N11   , Ds3
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte	W24
	.byte		N05   , Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W06
	.byte		        Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W18
	.byte	PEND
@ 004   ----------------------------------------
	.byte		N11   , Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
@ 005   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_2_001
@ 006   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_2_002
@ 007   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_2_003
@ 008   ----------------------------------------
bgm_map_FEH_04_2_008:
	.byte		N11   , Cs3 , v080
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
	.byte		N11   , Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
	.byte	PEND
@ 009   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_2_001
@ 010   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_2_002
@ 011   ----------------------------------------
bgm_map_FEH_04_2_011:
	.byte		N11   , Fs3 , v080
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W24
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W18
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W12
	.byte		        Cs3
	.byte	W12
	.byte		N17   , Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W18
	.byte	PEND
@ 012   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_2_008
@ 013   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_2_001
@ 014   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_2_002
@ 015   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_2_011
@ 016   ----------------------------------------
	.byte	W28
	.byte	W01
	.byte	GOTO
	 .word	bgm_map_FEH_04_2_B1
bgm_map_FEH_04_2_B2:
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

bgm_map_FEH_04_3:
	.byte	KEYSH , bgm_map_FEH_04_key+0
bgm_map_FEH_04_3_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 8
	.byte		VOL   , 78*bgm_map_FEH_04_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N11   , Cs3 , v080
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
	.byte		N11   , Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
@ 001   ----------------------------------------
bgm_map_FEH_04_3_001:
	.byte		N11   , An3 , v080
	.byte		N11   , Cs4
	.byte		N11   , En4
	.byte	W24
	.byte		N05   , An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W18
	.byte		N11   , An3
	.byte		N11   , Cs4
	.byte		N11   , En4
	.byte	W24
	.byte		N05   , An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W06
	.byte		        An3
	.byte		N05   , Cs4
	.byte		N05   , En4
	.byte	W18
	.byte	PEND
@ 002   ----------------------------------------
bgm_map_FEH_04_3_002:
	.byte		N11   , Fs3 , v080
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W24
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W18
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W24
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W18
	.byte	PEND
@ 003   ----------------------------------------
bgm_map_FEH_04_3_003:
	.byte		N11   , Ds3 , v080
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte	W24
	.byte		N05   , Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W06
	.byte		        Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W18
	.byte		N11   , Ds3
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte	W24
	.byte		N05   , Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W06
	.byte		        Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte	W18
	.byte	PEND
@ 004   ----------------------------------------
	.byte		N11   , Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
	.byte		N11   , Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		N11   , Cs3
	.byte	W12
@ 005   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_3_001
@ 006   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_3_002
@ 007   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_3_003
@ 008   ----------------------------------------
bgm_map_FEH_04_3_008:
	.byte		N11   , Cs3 , v080
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
	.byte		N11   , Cs3
	.byte		N11   , Fs3
	.byte		N11   , An3
	.byte	W24
	.byte		N05   , Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W06
	.byte		        Cs3
	.byte		N05   , Fs3
	.byte		N05   , An3
	.byte	W18
	.byte	PEND
@ 009   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_3_001
@ 010   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_3_002
@ 011   ----------------------------------------
bgm_map_FEH_04_3_011:
	.byte		N11   , Fs3 , v080
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W24
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W18
	.byte		N11   , Fs3
	.byte		N11   , Bn3
	.byte		N11   , Ds4
	.byte	W12
	.byte		        Cs3
	.byte	W12
	.byte		N17   , Ds3
	.byte		N05   , Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W06
	.byte		        Fs3
	.byte		N05   , Bn3
	.byte		N05   , Ds4
	.byte	W18
	.byte	PEND
@ 012   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_3_008
@ 013   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_3_001
@ 014   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_3_002
@ 015   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_3_011
@ 016   ----------------------------------------
	.byte	W28
	.byte	W01
	.byte	GOTO
	 .word	bgm_map_FEH_04_3_B1
bgm_map_FEH_04_3_B2:
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

bgm_map_FEH_04_4:
	.byte	KEYSH , bgm_map_FEH_04_key+0
bgm_map_FEH_04_4_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 34
	.byte		VOL   , 115*bgm_map_FEH_04_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		TIE   , Fs0 , v080
	.byte		TIE   , Fs1
	.byte	W96
@ 001   ----------------------------------------
	.byte	W84
	.byte	W02
	.byte		EOT   , Fs0
	.byte		        Fs1
	.byte	W10
@ 002   ----------------------------------------
	.byte		TIE   , Fs0
	.byte		TIE   , Cs1
	.byte		TIE   , Fs1
	.byte	W96
@ 003   ----------------------------------------
	.byte	W84
	.byte	W02
	.byte		EOT   , Fs0
	.byte		        Cs1
	.byte		        Fs1
	.byte	W10
@ 004   ----------------------------------------
	.byte	W36
	.byte		N05   , Fs0
	.byte		N05   , Fs1
	.byte	W06
	.byte		        Gs0
	.byte		N05   , Gs1
	.byte	W06
	.byte		N17   , An0
	.byte		N17   , An1
	.byte	W18
	.byte		        Bn0
	.byte		N17   , Bn1
	.byte	W18
	.byte		N11   , Cs1
	.byte	W12
@ 005   ----------------------------------------
	.byte	W36
	.byte		N05   , Gs0
	.byte		N05   , Gs1
	.byte	W06
	.byte		        An0
	.byte		N05   , An1
	.byte	W30
	.byte		        En0
	.byte		N05   , En1
	.byte	W06
	.byte		        Fs0
	.byte		N05   , Fs1
	.byte	W06
	.byte		        Cs0
	.byte		N05   , Cs1
	.byte	W12
@ 006   ----------------------------------------
	.byte	W24
	.byte		TIE   , BnM1
	.byte		TIE   , Bn0
	.byte	W72
@ 007   ----------------------------------------
	.byte	W76
	.byte		EOT   , BnM1
	.byte		        Bn0
	.byte	W08
	.byte		N05   , Ds0
	.byte	W06
	.byte		        En0
	.byte	W06
@ 008   ----------------------------------------
bgm_map_FEH_04_4_008:
	.byte		N11   , Fs0 , v080
	.byte	W12
	.byte		        Fs1
	.byte	W12
	.byte		        En1
	.byte	W12
	.byte		N05   , Cs1
	.byte	W06
	.byte		N11   , Fs0
	.byte	W12
	.byte		N05
	.byte	W06
	.byte		N11   , Fs1
	.byte	W12
	.byte		        En1
	.byte	W12
	.byte		        Cs1
	.byte	W12
	.byte	PEND
@ 009   ----------------------------------------
bgm_map_FEH_04_4_009:
	.byte		N11   , An0 , v080
	.byte	W12
	.byte		        Fs1
	.byte	W12
	.byte		        En1
	.byte	W12
	.byte		N05   , Cs1
	.byte	W06
	.byte		N11   , An0
	.byte	W12
	.byte		N05
	.byte	W06
	.byte		N11   , Fs1
	.byte	W12
	.byte		        En1
	.byte	W12
	.byte		        Cs1
	.byte	W12
	.byte	PEND
@ 010   ----------------------------------------
bgm_map_FEH_04_4_010:
	.byte		N11   , Bn0 , v080
	.byte	W12
	.byte		        Gs1
	.byte	W12
	.byte		        Fs1
	.byte	W12
	.byte		N05   , Ds1
	.byte	W06
	.byte		N11   , Bn0
	.byte	W12
	.byte		N05
	.byte	W06
	.byte		N11   , Gs1
	.byte	W12
	.byte		        Fs1
	.byte	W12
	.byte		        Ds1
	.byte	W12
	.byte	PEND
@ 011   ----------------------------------------
bgm_map_FEH_04_4_011:
	.byte		N05   , Fs1 , v080
	.byte	W06
	.byte		        Gs1
	.byte	W06
	.byte		N11   , An1
	.byte	W12
	.byte		N17   , Bn1
	.byte	W18
	.byte		N11   , An1
	.byte	W12
	.byte		N05   , Bn1
	.byte	W36
	.byte		N05
	.byte	W06
	.byte	PEND
@ 012   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_4_008
@ 013   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_4_009
@ 014   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_4_010
@ 015   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_4_011
@ 016   ----------------------------------------
	.byte	W28
	.byte	W01
	.byte	GOTO
	 .word	bgm_map_FEH_04_4_B1
bgm_map_FEH_04_4_B2:
	.byte	FINE

@**************** Track 5 (Midi-Chn.10) ****************@

bgm_map_FEH_04_5:
	.byte		VOL   , 127*bgm_map_FEH_04_mvl/mxv
	.byte	KEYSH , bgm_map_FEH_04_key+0
bgm_map_FEH_04_5_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte	W18
	.byte		N06   , Dn1 , v064
	.byte	W06
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W66
@ 001   ----------------------------------------
bgm_map_FEH_04_5_001:
	.byte	W24
	.byte		N06   , Dn1 , v064
	.byte	W06
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W60
	.byte	PEND
@ 002   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_5_001
@ 003   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_5_001
@ 004   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_5_001
@ 005   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_5_001
@ 006   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_5_001
@ 007   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FEH_04_5_001
@ 008   ----------------------------------------
	.byte		N06   , Dn1 , v064
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W06
@ 009   ----------------------------------------
	.byte	W06
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
@ 010   ----------------------------------------
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
@ 011   ----------------------------------------
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
@ 012   ----------------------------------------
	.byte	W06
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
@ 013   ----------------------------------------
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
@ 014   ----------------------------------------
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
@ 015   ----------------------------------------
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W12
	.byte		N06
	.byte	W06
	.byte		N06
	.byte	W06
@ 016   ----------------------------------------
	.byte	W28
	.byte	W01
	.byte	GOTO
	 .word	bgm_map_FEH_04_5_B1
bgm_map_FEH_04_5_B2:
	.byte	FINE

@******************************************************@
	.align	2

bgm_map_FEH_04:
	.byte	5	@ NumTrks
	.byte	0	@ NumBlks
	.byte	bgm_map_FEH_04_pri	@ Priority
	.byte	bgm_map_FEH_04_rev	@ Reverb.

	.word	bgm_map_FEH_04_grp

	.word	bgm_map_FEH_04_1
	.word	bgm_map_FEH_04_2
	.word	bgm_map_FEH_04_3
	.word	bgm_map_FEH_04_4
	.word	bgm_map_FEH_04_5

	.end
