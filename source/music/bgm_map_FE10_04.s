	.include "MPlayDef.s"

	.equ	bgm_map_FE10_04_grp, voicegroup000
	.equ	bgm_map_FE10_04_pri, 0
	.equ	bgm_map_FE10_04_rev, 0
	.equ	bgm_map_FE10_04_mvl, 127
	.equ	bgm_map_FE10_04_key, 0
	.equ	bgm_map_FE10_04_tbs, 1
	.equ	bgm_map_FE10_04_exg, 0
	.equ	bgm_map_FE10_04_cmp, 1

	.section .rodata
	.global	bgm_map_FE10_04
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

bgm_map_FE10_04_1:
	.byte		VOL   , 127*bgm_map_FE10_04_mvl/mxv
	.byte	KEYSH , bgm_map_FE10_04_key+0
bgm_map_FE10_04_1_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 46
	.byte		N06   , Gs2 , v127
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W24
	.byte		        Cs4 
	.byte	W36
@ 001   ----------------------------------------
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W36
	.byte		        Ds4 
	.byte	W24
	.byte		        Cs4 
	.byte	W36
@ 002   ----------------------------------------
bgm_map_FE10_04_1_002:
	.byte		N06   , Gs2 , v127
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W24
	.byte		        Cs4 
	.byte	W36
	.byte	PEND
@ 003   ----------------------------------------
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N12   , Ds4 
	.byte	W36
	.byte		        Fs4 
	.byte	W24
	.byte		        Ds4 
	.byte	W36
@ 004   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_1_002
@ 005   ----------------------------------------
	.byte		N06   , Gs2 , v127
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W24
	.byte		        Ds4 
	.byte	W36
@ 006   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_1_002
@ 007   ----------------------------------------
	.byte		N06   , Gs2 , v127
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N12   , Ds4 
	.byte	W36
	.byte		        Fs4 
	.byte	W24
	.byte		        Cs5 
	.byte	W12
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	bgm_map_FE10_04_1_B1
bgm_map_FE10_04_1_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

bgm_map_FE10_04_2:
	.byte	KEYSH , bgm_map_FE10_04_key+0
bgm_map_FE10_04_2_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 46
	.byte		VOL   , 76*bgm_map_FE10_04_mvl/mxv
	.byte		N06   , Gs2 , v127
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
@ 001   ----------------------------------------
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
@ 002   ----------------------------------------
bgm_map_FE10_04_2_002:
	.byte		VOL   , 76*bgm_map_FE10_04_mvl/mxv
	.byte		N06   , Gs2 , v127
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte	PEND
@ 003   ----------------------------------------
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N12   , Ds4 
	.byte	W12
	.byte		N06   , Ds3 
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N12   , Fs4 
	.byte	W12
	.byte		N06   , Ds3 
	.byte	W12
	.byte		N12   , Ds4 
	.byte	W12
	.byte		N06   , Fn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
@ 004   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_2_002
@ 005   ----------------------------------------
	.byte		VOL   , 76*bgm_map_FE10_04_mvl/mxv
	.byte		N06   , Gs2 , v127
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
@ 006   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_2_002
@ 007   ----------------------------------------
	.byte		N06   , Gs2 , v127
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N12   , Ds4 
	.byte	W12
	.byte		N06   , Ds3 
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N12   , Fs4 
	.byte	W12
	.byte		N06   , As3 
	.byte	W12
	.byte		N12   , Cs5 
	.byte	W12
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	bgm_map_FE10_04_2_B1
bgm_map_FE10_04_2_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

bgm_map_FE10_04_3:
	.byte	KEYSH , bgm_map_FE10_04_key+0
bgm_map_FE10_04_3_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 127
	.byte		VOL   , 101*bgm_map_FE10_04_mvl/mxv
	.byte		N12   , Ds3 , v127
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N12   
	.byte	W12
@ 001   ----------------------------------------
bgm_map_FE10_04_3_001:
	.byte		N12   , Ds3 , v127
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte	PEND
@ 002   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_001
@ 003   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_001
@ 004   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_001
@ 005   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_001
@ 006   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_001
@ 007   ----------------------------------------
bgm_map_FE10_04_3_007:
	.byte		N12   , Ds3 , v127
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte	PEND
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_007
@ 013   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_007
@ 014   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_007
@ 015   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_007
@ 016   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_007
@ 017   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_007
@ 018   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_007
@ 019   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_3_007
	.byte	GOTO
	 .word	bgm_map_FE10_04_3_B1
bgm_map_FE10_04_3_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

bgm_map_FE10_04_4:
	.byte		VOL   , 127*bgm_map_FE10_04_mvl/mxv
	.byte	KEYSH , bgm_map_FE10_04_key+0
bgm_map_FE10_04_4_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 127
	.byte		N24   , Cs2 , v127
	.byte		N72   , An4 
	.byte	W96
	.byte	W24
@ 001   ----------------------------------------
	.byte	W36
	.byte		N03   , As3 , v016
	.byte	W03
	.byte		        As3 , v028
	.byte	W03
	.byte		        As3 , v040
	.byte	W03
	.byte		        As3 , v052
	.byte	W03
	.byte		        As3 , v064
	.byte	W03
	.byte		N03   
	.byte	W03
	.byte		        As3 , v076
	.byte	W03
	.byte		        As3 , v092
	.byte	W03
	.byte		N12   , An4 , v127
	.byte	W36
	.byte		        Cs2 
	.byte	W24
@ 002   ----------------------------------------
bgm_map_FE10_04_4_002:
	.byte		N24   , Cs2 , v127
	.byte		N72   , An4 
	.byte	W96
	.byte	W24
	.byte	PEND
@ 003   ----------------------------------------
	.byte	W24
	.byte		N12   , Gs2 
	.byte	W24
	.byte		N12   
	.byte	W36
	.byte		        Ds2 
	.byte	W24
	.byte		        Gs2 
	.byte	W12
@ 004   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_4_002
@ 005   ----------------------------------------
	.byte	W96
	.byte	W24
@ 006   ----------------------------------------
	.byte	W96
	.byte	W24
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
bgm_map_FE10_04_4_008:
	.byte		N24   , Cs2 , v127
	.byte		N72   , An4 
	.byte	W96
	.byte	PEND
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_4_008
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte		VOICE , 119
	.byte		N96   , Bn2 , v127
	.byte	W96
@ 019   ----------------------------------------
	.byte		N96   
	.byte	W96
	.byte	GOTO
	 .word	bgm_map_FE10_04_4_B1
bgm_map_FE10_04_4_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 5 (Midi-Chn.5) ****************@

bgm_map_FE10_04_5:
	.byte	KEYSH , bgm_map_FE10_04_key+0
bgm_map_FE10_04_5_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 6
	.byte		VOL   , 32*bgm_map_FE10_04_mvl/mxv
	.byte	W96
	.byte	W24
@ 001   ----------------------------------------
bgm_map_FE10_04_5_001:
	.byte	W24
	.byte		N12   , Gs3 , v127
	.byte	W24
	.byte		N12   
	.byte	W36
	.byte		N12   
	.byte	W36
	.byte	PEND
@ 002   ----------------------------------------
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte	W36
	.byte		N12   
	.byte	W24
	.byte		        As3 
	.byte	W36
@ 003   ----------------------------------------
bgm_map_FE10_04_5_003:
	.byte		N12   , Ds3 , v127
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		N12   
	.byte	W60
	.byte	PEND
@ 004   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_5_001
@ 005   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_5_003
@ 006   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_FE10_04_5_001
@ 007   ----------------------------------------
	.byte		N12   , Gs3 , v127
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        As3 
	.byte	W12
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	bgm_map_FE10_04_5_B1
bgm_map_FE10_04_5_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 6 (Midi-Chn.6) ****************@

bgm_map_FE10_04_6:
	.byte		VOL   , 127*bgm_map_FE10_04_mvl/mxv
	.byte	KEYSH , bgm_map_FE10_04_key+0
bgm_map_FE10_04_6_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 70
	.byte	W96
	.byte	W24
@ 001   ----------------------------------------
	.byte	W96
	.byte	W24
@ 002   ----------------------------------------
	.byte	W96
	.byte	W24
@ 003   ----------------------------------------
	.byte	W96
	.byte	W24
@ 004   ----------------------------------------
	.byte	W96
	.byte	W24
@ 005   ----------------------------------------
	.byte	W96
	.byte	W24
@ 006   ----------------------------------------
	.byte	W96
	.byte	W24
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte		N12   , Gs2 , v127
	.byte	W12
	.byte		N04   , Gn2 
	.byte	W04
	.byte		        Gs2 
	.byte	W04
	.byte		        Gn2 
	.byte	W04
	.byte		N12   , Fs2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		N24   , En2 
	.byte	W24
	.byte		        Ds2 
	.byte	W24
@ 009   ----------------------------------------
	.byte		N06   
	.byte	W06
	.byte		        En2 
	.byte	W06
	.byte		        Ds2 
	.byte	W06
	.byte		        En2 
	.byte	W06
	.byte		N12   , Ds2 
	.byte	W24
	.byte		N06   , Cn3 
	.byte	W06
	.byte		        Cs3 
	.byte	W06
	.byte		        Cn3 
	.byte	W06
	.byte		        Cs3 
	.byte	W06
	.byte		N12   , Cn3 
	.byte	W24
@ 010   ----------------------------------------
	.byte		N12   
	.byte	W12
	.byte		N04   , As2 
	.byte	W04
	.byte		        Cn3 
	.byte	W04
	.byte		        As2 
	.byte	W04
	.byte		N12   , Gs2 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		N24   , Fs2 
	.byte	W24
	.byte		N12   , Fn2 
	.byte	W12
	.byte		        Ds2 
	.byte	W12
@ 011   ----------------------------------------
	.byte		        As2 
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		        Bn2 
	.byte	W06
	.byte		        As2 
	.byte	W06
	.byte		        Bn2 
	.byte	W06
	.byte		        As2 
	.byte	W06
	.byte		        Bn2 
	.byte	W06
	.byte		N24   , As2 
	.byte	W48
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	bgm_map_FE10_04_6_B1
bgm_map_FE10_04_6_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 7 (Midi-Chn.7) ****************@

bgm_map_FE10_04_7:
	.byte		VOL   , 127*bgm_map_FE10_04_mvl/mxv
	.byte	KEYSH , bgm_map_FE10_04_key+0
bgm_map_FE10_04_7_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 13
	.byte	W96
	.byte	W24
@ 001   ----------------------------------------
	.byte	W96
	.byte	W24
@ 002   ----------------------------------------
	.byte	W96
	.byte	W24
@ 003   ----------------------------------------
	.byte	W96
	.byte	W24
@ 004   ----------------------------------------
	.byte	W96
	.byte	W24
@ 005   ----------------------------------------
	.byte	W96
	.byte	W24
@ 006   ----------------------------------------
	.byte	W96
	.byte	W24
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte		N12   , Gs4 , v127
	.byte	W12
	.byte		N04   , Gn4 
	.byte	W04
	.byte		        Gs4 
	.byte	W04
	.byte		        Gn4 
	.byte	W04
	.byte		N12   , Fs4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		N24   , En4 
	.byte	W24
	.byte		        Ds4 
	.byte	W24
@ 009   ----------------------------------------
	.byte		N06   
	.byte	W06
	.byte		        En4 
	.byte	W06
	.byte		        Ds4 
	.byte	W06
	.byte		        En4 
	.byte	W06
	.byte		N12   , Ds4 
	.byte	W24
	.byte		N06   , Cn5 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		N12   , Cn5 
	.byte	W24
@ 010   ----------------------------------------
	.byte		N12   
	.byte	W12
	.byte		N04   , As4 
	.byte	W04
	.byte		        Cn5 
	.byte	W04
	.byte		        As4 
	.byte	W04
	.byte		N12   , Gs4 
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		N24   , Fs4 
	.byte	W24
	.byte		N12   , Fn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
@ 011   ----------------------------------------
	.byte		        As4 
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		N48   , As4 
	.byte	W48
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	bgm_map_FE10_04_7_B1
bgm_map_FE10_04_7_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 8 (Midi-Chn.8) ****************@

bgm_map_FE10_04_8:
	.byte	KEYSH , bgm_map_FE10_04_key+0
bgm_map_FE10_04_8_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 40
	.byte		VOL   , 70*bgm_map_FE10_04_mvl/mxv
	.byte	W96
	.byte	W24
@ 001   ----------------------------------------
	.byte	W96
	.byte	W24
@ 002   ----------------------------------------
	.byte	W96
	.byte	W24
@ 003   ----------------------------------------
	.byte	W96
	.byte	W24
@ 004   ----------------------------------------
	.byte	W96
	.byte	W24
@ 005   ----------------------------------------
	.byte	W96
	.byte	W24
@ 006   ----------------------------------------
	.byte	W96
	.byte	W24
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte		N24   , Cn5 , v127
	.byte	W24
	.byte		        As4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
	.byte		        Gn4 
	.byte	W24
@ 013   ----------------------------------------
	.byte		N48   , Fn4 
	.byte	W48
	.byte		N24   , Ds4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
@ 014   ----------------------------------------
	.byte		        Ds5 
	.byte	W24
	.byte		        Cs5 
	.byte	W24
	.byte		        Cn5 
	.byte	W24
	.byte		        As4 
	.byte	W24
@ 015   ----------------------------------------
	.byte		N48   , Gs4 
	.byte	W48
	.byte		        Fs4 
	.byte	W48
@ 016   ----------------------------------------
	.byte		TIE   , Fn4 
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	bgm_map_FE10_04_8_B1
bgm_map_FE10_04_8_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 9 (Midi-Chn.9) ****************@

bgm_map_FE10_04_9:
	.byte		VOL   , 127*bgm_map_FE10_04_mvl/mxv
	.byte	KEYSH , bgm_map_FE10_04_key+0
bgm_map_FE10_04_9_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 73
	.byte	W96
	.byte	W24
@ 001   ----------------------------------------
	.byte	W96
	.byte	W24
@ 002   ----------------------------------------
	.byte	W96
	.byte	W24
@ 003   ----------------------------------------
	.byte	W96
	.byte	W24
@ 004   ----------------------------------------
	.byte	W96
	.byte	W24
@ 005   ----------------------------------------
	.byte	W96
	.byte	W24
@ 006   ----------------------------------------
	.byte	W96
	.byte	W24
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte		N24   , Cn5 , v127
	.byte	W24
	.byte		        As4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
	.byte		        Gn4 
	.byte	W24
@ 013   ----------------------------------------
	.byte		N48   , Fn4 
	.byte	W48
	.byte		N24   , Ds4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
@ 014   ----------------------------------------
	.byte		        Ds5 
	.byte	W24
	.byte		        Cs5 
	.byte	W24
	.byte		        Cn5 
	.byte	W24
	.byte		        As4 
	.byte	W24
@ 015   ----------------------------------------
	.byte		N48   , Gs4 
	.byte	W48
	.byte		        Fs4 
	.byte	W48
@ 016   ----------------------------------------
	.byte		TIE   , Fn4 
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	bgm_map_FE10_04_9_B1
bgm_map_FE10_04_9_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 10 (Midi-Chn.11) ****************@

bgm_map_FE10_04_10:
	.byte	KEYSH , bgm_map_FE10_04_key+0
bgm_map_FE10_04_10_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 68
	.byte		VOL   , 45*bgm_map_FE10_04_mvl/mxv
	.byte	W96
	.byte	W24
@ 001   ----------------------------------------
	.byte	W96
	.byte	W24
@ 002   ----------------------------------------
	.byte	W96
	.byte	W24
@ 003   ----------------------------------------
	.byte	W96
	.byte	W24
@ 004   ----------------------------------------
	.byte	W96
	.byte	W24
@ 005   ----------------------------------------
	.byte	W96
	.byte	W24
@ 006   ----------------------------------------
	.byte	W96
	.byte	W24
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte		N24   , Gs3 , v127
	.byte	W24
	.byte		N12   , Gn3 
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		N24   , As3 
	.byte	W24
	.byte		        Gn3 
	.byte	W24
@ 009   ----------------------------------------
	.byte		        Cn4 
	.byte	W24
	.byte		        As3 
	.byte	W24
	.byte		N48   , Gs3 
	.byte	W48
@ 010   ----------------------------------------
	.byte		N24   
	.byte	W24
	.byte		        Fs3 
	.byte	W24
	.byte		        En3 
	.byte	W24
	.byte		        Cs3 
	.byte	W24
@ 011   ----------------------------------------
	.byte		N96   , Ds3 
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	bgm_map_FE10_04_10_B1
bgm_map_FE10_04_10_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 11 (Midi-Chn.12) ****************@

bgm_map_FE10_04_11:
	.byte	KEYSH , bgm_map_FE10_04_key+0
bgm_map_FE10_04_11_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 51
	.byte		VOL   , 79*bgm_map_FE10_04_mvl/mxv
	.byte	W96
	.byte	W24
@ 001   ----------------------------------------
	.byte	W96
	.byte	W24
@ 002   ----------------------------------------
	.byte	W96
	.byte	W24
@ 003   ----------------------------------------
	.byte	W96
	.byte	W24
@ 004   ----------------------------------------
	.byte	W96
	.byte	W24
@ 005   ----------------------------------------
	.byte	W96
	.byte	W24
@ 006   ----------------------------------------
	.byte	W96
	.byte	W24
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte		N96   , Gs1 , v127
	.byte	W48
	.byte		        Ds2 
	.byte	W48
@ 013   ----------------------------------------
	.byte		N48   , Cn2 
	.byte	W48
	.byte		        Cs2 
	.byte	W48
@ 014   ----------------------------------------
	.byte		        Ds2 
	.byte		N48   , Gs2 
	.byte	W48
	.byte		        Fn2 
	.byte		N48   , Gs2 
	.byte	W48
@ 015   ----------------------------------------
	.byte		        Fn2 
	.byte		N48   , As2 
	.byte	W48
	.byte		        Gn2 
	.byte		N48   , Cn3 
	.byte	W48
@ 016   ----------------------------------------
	.byte	W24
	.byte		TIE   , Ds2 
	.byte		TIE   , As2 
	.byte	W72
@ 017   ----------------------------------------
	.byte	W96
	.byte		EOT   , Ds2 
	.byte		        As2 
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	bgm_map_FE10_04_11_B1
bgm_map_FE10_04_11_B2:
@ 020   ----------------------------------------
	.byte	FINE

@******************************************************@
	.align	2

bgm_map_FE10_04:
	.byte	11	@ NumTrks
	.byte	0	@ NumBlks
	.byte	bgm_map_FE10_04_pri	@ Priority
	.byte	bgm_map_FE10_04_rev	@ Reverb.

	.word	bgm_map_FE10_04_grp

	.word	bgm_map_FE10_04_1
	.word	bgm_map_FE10_04_2
	.word	bgm_map_FE10_04_3
	.word	bgm_map_FE10_04_4
	.word	bgm_map_FE10_04_5
	.word	bgm_map_FE10_04_6
	.word	bgm_map_FE10_04_7
	.word	bgm_map_FE10_04_8
	.word	bgm_map_FE10_04_9
	.word	bgm_map_FE10_04_10
	.word	bgm_map_FE10_04_11

	.end
