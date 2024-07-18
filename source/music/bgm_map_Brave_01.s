	.include "MPlayDef.s"

	.equ	bgm_map_Brave_01_grp, voicegroup000
	.equ	bgm_map_Brave_01_pri, 0
	.equ	bgm_map_Brave_01_rev, 0
	.equ	bgm_map_Brave_01_mvl, 62
	.equ	bgm_map_Brave_01_key, 0
	.equ	bgm_map_Brave_01_tbs, 1
	.equ	bgm_map_Brave_01_exg, 0
	.equ	bgm_map_Brave_01_cmp, 1

	.section .rodata
	.global	bgm_map_Brave_01
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

bgm_map_Brave_01_1:
	.byte	KEYSH , bgm_map_Brave_01_key+0
bgm_map_Brave_01_1_B1:
@ 000   ----------------------------------------
	.byte	TEMPO , 107*bgm_map_Brave_01_tbs/2
	.byte		VOICE , 0
	.byte		VOL   , 88*bgm_map_Brave_01_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N17   , Dn2 , v080
	.byte		N32   , Dn3 
	.byte		N32   , An3 
	.byte	W18
	.byte		N17   , Dn2 
	.byte	W18
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N22   , An3 
	.byte		N22   , Dn4 
	.byte	W12
	.byte		N11   , Dn2 
	.byte	W12
	.byte		N17   , As1 
	.byte		N22   , Dn4 
	.byte		N22   , Gn4 
	.byte	W18
	.byte		N17   , As1 
	.byte	W06
@ 001   ----------------------------------------
	.byte		N22   , An3 
	.byte		N22   , Dn4 
	.byte	W12
	.byte		N11   , As1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N11   , An3 
	.byte		N11   , Dn4 
	.byte	W12
	.byte		N17   , Cn2 
	.byte		N44   , Gn3 
	.byte		N44   , Cn4 
	.byte	W18
	.byte		N17   , Cn2 
	.byte	W18
	.byte		N11   
	.byte	W12
@ 002   ----------------------------------------
	.byte		N11   
	.byte		N11   , Gn3 
	.byte		N11   , Cn4 
	.byte	W12
	.byte		        Cn2 
	.byte		N11   , Cn4 
	.byte		N11   , Fn4 
	.byte	W12
	.byte		N17   , Gn1 
	.byte		N68   , Dn4 
	.byte		N68   , Gn4 
	.byte	W18
	.byte		N17   , Gn1 
	.byte	W18
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 003   ----------------------------------------
	.byte		N17   , Dn2 
	.byte		N17   , An2 
	.byte	W12
	.byte		N05   , Dn3 
	.byte	W06
	.byte		N17   , Dn2 
	.byte		N05   , An2 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N05   , Dn4 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		N17   , As1 
	.byte		N17   , An2 
	.byte	W18
	.byte		        As1 
	.byte		N17   , An2 
	.byte	W06
@ 004   ----------------------------------------
	.byte		N05   , Dn3 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , As1 
	.byte		N11   , An2 
	.byte		N05   , Dn4 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , As1 
	.byte		N11   , An2 
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		N11   , As1 
	.byte		N11   , An2 
	.byte	W12
	.byte		N17   , Cn2 
	.byte		N17   , Gn2 
	.byte	W18
	.byte		        Cn2 
	.byte		N17   , Gn2 
	.byte	W06
	.byte		N05   , Dn3 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , Cn2 
	.byte		N11   , Gn2 
	.byte		N05   , Dn4 
	.byte	W06
	.byte		        An3 
	.byte	W06
@ 005   ----------------------------------------
	.byte		N11   , Cn2 
	.byte		N11   , Gn2 
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		N11   , Cn2 
	.byte		N11   , Gn2 
	.byte	W12
	.byte		N17   , Gn1 
	.byte		N17   , Gn2 
	.byte	W18
	.byte		        Gn1 
	.byte		N17   , Gn2 
	.byte	W06
	.byte		N05   , Dn3 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , Gn1 
	.byte		N11   , Gn2 
	.byte		N05   , Dn4 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , Gn1 
	.byte		N11   , Gn2 
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		N11   , Gn1 
	.byte		N11   , Gn2 
	.byte	W12
@ 006   ----------------------------------------
	.byte		N68   , Fs2 , v064
	.byte		N68   , An2 
	.byte		N68   , Dn3 
	.byte		N32   , Fs4 
	.byte	W36
	.byte		N11   
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		N68   , En2 
	.byte		N68   , An2 
	.byte		N68   , Cn3 
	.byte		N32   , Cn5 
	.byte	W24
@ 007   ----------------------------------------
	.byte	W12
	.byte		N11   , Bn4 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		N68   , Fs2 
	.byte		N68   , An2 
	.byte		N68   , Dn3 
	.byte		N17   , Fs4 
	.byte	W18
	.byte		N05   , An4 
	.byte	W06
	.byte		N22   , Dn4 
	.byte	W24
@ 008   ----------------------------------------
	.byte		N11   
	.byte	W12
	.byte		        En4 
	.byte	W12
	.byte		N68   , Fn2 
	.byte		N68   , As2 
	.byte		N68   , Dn3 
	.byte		N44   , Fn4 
	.byte	W60
	.byte		N05   , Gn4 , v080
	.byte	W06
	.byte		        An4 
	.byte	W06
@ 009   ----------------------------------------
	.byte		N17   , Cn2 
	.byte		N17   , Gn2 
	.byte		N22   , Gn4 
	.byte	W18
	.byte		N17   , Cn2 
	.byte		N17   , Gn2 
	.byte	W06
	.byte		N11   , En4 
	.byte	W12
	.byte		        Gn1 
	.byte		N11   , Dn2 
	.byte		N22   , Dn4 
	.byte	W12
	.byte		N11   , Gn1 
	.byte		N11   , Dn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N11   , Dn2 
	.byte		N11   , Cn4 
	.byte	W12
	.byte		N17   , As1 
	.byte		N17   , Fn2 
	.byte		N44   , Dn4 
	.byte	W18
	.byte		N17   , As1 
	.byte		N17   , Fn2 
	.byte	W06
@ 010   ----------------------------------------
	.byte	W12
	.byte		N11   , Gn1 
	.byte		N11   , Dn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N11   , Dn2 
	.byte		N22   , Fn4 
	.byte	W12
	.byte		N11   , Gn1 
	.byte		N11   , Dn2 
	.byte	W12
	.byte		N17   
	.byte		N17   , An2 
	.byte		N32   , Gn3 
	.byte		N32   , Dn4 
	.byte	W18
	.byte		N17   , Dn2 
	.byte		N17   , An2 
	.byte	W18
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N32   , Fs3 
	.byte	W12
@ 011   ----------------------------------------
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		        Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		N17   , Dn2 
	.byte		N17   , An2 
	.byte		N32   , En3 
	.byte	W18
	.byte		N17   , Dn2 
	.byte		N17   , An2 
	.byte	W18
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N32   , Fs3 
	.byte	W12
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		        Dn2 
	.byte		N11   , An2 
	.byte	W12
@ 012   ----------------------------------------
	.byte		N68   , Dn2 , v064
	.byte		N68   , Fs2 
	.byte		N68   , An2 
	.byte		N68   , Dn3 
	.byte		N32   , Fs4 
	.byte	W36
	.byte		N11   
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		N68   , Cn2 
	.byte		N68   , En2 
	.byte		N68   , An2 
	.byte		N68   , Cn3 
	.byte		N32   , Cn5 
	.byte	W24
@ 013   ----------------------------------------
	.byte	W12
	.byte		N11   , Bn4 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		N68   , Dn2 
	.byte		N68   , Fs2 
	.byte		N68   , An2 
	.byte		N68   , Dn3 
	.byte		N17   , Fs4 
	.byte	W18
	.byte		N05   , An4 
	.byte	W06
	.byte		N22   , Dn4 
	.byte	W24
@ 014   ----------------------------------------
	.byte		N11   
	.byte	W12
	.byte		        En4 
	.byte	W12
	.byte		N68   , As1 , v080
	.byte		N44   , Fn4 
	.byte	W03
	.byte		N68   , Fn2 
	.byte	W03
	.byte		N64   , As2 
	.byte	W03
	.byte		N60   , Dn3 
	.byte	W48
	.byte	W03
	.byte		N05   , Gn3 
	.byte		N05   , Gn4 
	.byte	W06
	.byte		        An3 
	.byte		N05   , An4 
	.byte	W06
@ 015   ----------------------------------------
	.byte		N17   , Cn2 
	.byte		N17   , Gn2 
	.byte		N22   , Gn3 
	.byte		N22   , Gn4 
	.byte	W18
	.byte		N17   , Cn2 
	.byte		N17   , Gn2 
	.byte	W06
	.byte		N11   , En3 
	.byte		N11   , En4 
	.byte	W12
	.byte		        Gn1 
	.byte		N11   , Dn2 
	.byte		N22   , Dn3 
	.byte		N22   , Dn4 
	.byte	W12
	.byte		N11   , Gn1 
	.byte		N11   , Dn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N11   , Dn2 
	.byte		N11   , Cn3 
	.byte		N11   , Cn4 
	.byte	W12
	.byte		N17   , As1 
	.byte		N17   , Fn2 
	.byte		N44   , Dn3 
	.byte		N44   , Dn4 
	.byte	W18
	.byte		N17   , As1 
	.byte		N17   , Fn2 
	.byte	W06
@ 016   ----------------------------------------
	.byte	W12
	.byte		N11   , Gn1 
	.byte		N11   , Dn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N11   , Dn2 
	.byte		N22   , Fn3 
	.byte		N22   , Fn4 
	.byte	W12
	.byte		N11   , Gn1 
	.byte		N11   , Dn2 
	.byte	W12
	.byte		N17   
	.byte		N17   , An2 
	.byte		N17   , An3 
	.byte		N17   , Dn4 
	.byte	W18
	.byte		        Dn2 
	.byte		N17   , An2 
	.byte		N17   , An3 
	.byte	W18
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N17   , Gn3 
	.byte	W12
@ 017   ----------------------------------------
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W06
	.byte		N17   , Gn3 
	.byte	W06
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		N17   , Dn2 
	.byte		N17   , An2 
	.byte		N17   , En3 
	.byte	W18
	.byte		        Dn2 
	.byte		N17   , An2 
	.byte		N17   , En3 
	.byte	W18
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N17   , Fs3 
	.byte	W12
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W06
	.byte		N17   , Fs3 
	.byte	W06
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W12
@ 018   ----------------------------------------
	.byte		N17   , Dn3 , v064
	.byte		N17   , Gn3 
	.byte	W18
	.byte		        Dn3 
	.byte		N17   , Fs3 
	.byte	W18
	.byte		        Cn3 
	.byte		N17   , Fn3 
	.byte	W18
	.byte		        Cn3 
	.byte		N17   , En3 
	.byte	W18
	.byte		        As2 
	.byte		N17   , Ds3 
	.byte	W18
	.byte		        As2 
	.byte		N17   , Dn3 
	.byte	W06
@ 019   ----------------------------------------
	.byte	W12
	.byte		        An2 
	.byte		N17   , Dn3 
	.byte	W18
	.byte		        An2 
	.byte		N17   , Cs3 
	.byte	W18
	.byte		        Dn2 , v080
	.byte		N17   , An2 
	.byte		N17   , Dn3 
	.byte		N17   , Gn3 
	.byte	W18
	.byte		        Dn2 
	.byte		N17   , An2 
	.byte		N17   , Gn3 
	.byte	W18
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N17   , Fs3 
	.byte	W12
@ 020   ----------------------------------------
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W06
	.byte		N17   , Fs3 
	.byte	W06
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		N17   , Dn2 
	.byte		N17   , An2 
	.byte		N17   , En3 
	.byte	W18
	.byte		        Dn2 
	.byte		N17   , An2 
	.byte		N17   , En3 
	.byte	W18
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N17   , Fs3 
	.byte	W12
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W06
	.byte		N17   , Fs3 
	.byte	W06
	.byte		N11   , Dn2 , v064
	.byte		N11   , An2 
	.byte	W12
@ 021   ----------------------------------------
	.byte	W24
	.byte	GOTO
	 .word	bgm_map_Brave_01_1_B1
bgm_map_Brave_01_1_B2:
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

bgm_map_Brave_01_2:
	.byte	KEYSH , bgm_map_Brave_01_key+0
bgm_map_Brave_01_2_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 51
	.byte		VOL   , 76*bgm_map_Brave_01_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N17   , Dn2 , v080
	.byte		N32   , Dn3 
	.byte		N32   , An3 
	.byte	W18
	.byte		N17   , Dn2 
	.byte	W18
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N22   , An3 
	.byte		N22   , Dn4 
	.byte	W12
	.byte		N11   , Dn2 
	.byte	W12
	.byte		N17   , As1 
	.byte		N22   , Dn4 
	.byte		N22   , Gn4 
	.byte	W18
	.byte		N17   , As1 
	.byte	W06
@ 001   ----------------------------------------
	.byte		N22   , An3 
	.byte		N22   , Dn4 
	.byte	W12
	.byte		N11   , As1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N11   , An3 
	.byte		N11   , Dn4 
	.byte	W12
	.byte		N17   , Cn2 
	.byte		N44   , Gn3 
	.byte		N44   , Cn4 
	.byte	W18
	.byte		N17   , Cn2 
	.byte	W18
	.byte		N11   
	.byte	W12
@ 002   ----------------------------------------
	.byte		N11   
	.byte		N11   , Gn3 
	.byte		N11   , Cn4 
	.byte	W12
	.byte		        Cn2 
	.byte		N11   , Cn4 
	.byte		N11   , Fn4 
	.byte	W12
	.byte		N17   , Gn1 
	.byte		N68   , Dn4 
	.byte		N68   , Gn4 
	.byte	W18
	.byte		N17   , Gn1 
	.byte	W18
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 003   ----------------------------------------
	.byte		N17   , Dn2 
	.byte		N17   , An2 
	.byte	W12
	.byte		N05   , Dn3 
	.byte	W06
	.byte		N17   , Dn2 
	.byte		N05   , An2 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N05   , Dn4 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		N17   , As1 
	.byte		N17   , An2 
	.byte	W18
	.byte		        As1 
	.byte		N17   , An2 
	.byte	W06
@ 004   ----------------------------------------
	.byte		N05   , Dn3 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , As1 
	.byte		N11   , An2 
	.byte		N05   , Dn4 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , As1 
	.byte		N11   , An2 
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		N11   , As1 
	.byte		N11   , An2 
	.byte	W12
	.byte		N17   , Cn2 
	.byte		N17   , Gn2 
	.byte	W18
	.byte		        Cn2 
	.byte		N17   , Gn2 
	.byte	W06
	.byte		N05   , Dn3 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , Cn2 
	.byte		N11   , Gn2 
	.byte		N05   , Dn4 
	.byte	W06
	.byte		        An3 
	.byte	W06
@ 005   ----------------------------------------
	.byte		N11   , Cn2 
	.byte		N11   , Gn2 
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		N11   , Cn2 
	.byte		N11   , Gn2 
	.byte	W12
	.byte		N17   , Gn1 
	.byte		N17   , Gn2 
	.byte	W18
	.byte		        Gn1 
	.byte		N17   , Gn2 
	.byte	W06
	.byte		N05   , Dn3 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , Gn1 
	.byte		N11   , Gn2 
	.byte		N05   , Dn4 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		N11   , Gn1 
	.byte		N11   , Gn2 
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		N11   , Gn1 
	.byte		N11   , Gn2 
	.byte	W12
@ 006   ----------------------------------------
	.byte		N68   , Fs2 , v064
	.byte		N68   , An2 
	.byte		N68   , Dn3 
	.byte		N32   , Fs4 
	.byte	W36
	.byte		N11   
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		N68   , En2 
	.byte		N68   , An2 
	.byte		N68   , Cn3 
	.byte		N32   , Cn5 
	.byte	W24
@ 007   ----------------------------------------
	.byte	W12
	.byte		N11   , Bn4 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		N68   , Fs2 
	.byte		N68   , An2 
	.byte		N68   , Dn3 
	.byte		N17   , Fs4 
	.byte	W18
	.byte		N05   , An4 
	.byte	W06
	.byte		N22   , Dn4 
	.byte	W24
@ 008   ----------------------------------------
	.byte		N11   
	.byte	W12
	.byte		        En4 
	.byte	W12
	.byte		N68   , Fn2 
	.byte		N68   , As2 
	.byte		N68   , Dn3 
	.byte		N44   , Fn4 
	.byte	W60
	.byte		N05   , Gn4 , v080
	.byte	W06
	.byte		        An4 
	.byte	W06
@ 009   ----------------------------------------
	.byte		N17   , Cn2 
	.byte		N17   , Gn2 
	.byte		N22   , Gn4 
	.byte	W18
	.byte		N17   , Cn2 
	.byte		N17   , Gn2 
	.byte	W06
	.byte		N11   , En4 
	.byte	W12
	.byte		        Gn1 
	.byte		N11   , Dn2 
	.byte		N22   , Dn4 
	.byte	W12
	.byte		N11   , Gn1 
	.byte		N11   , Dn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N11   , Dn2 
	.byte		N11   , Cn4 
	.byte	W12
	.byte		N17   , As1 
	.byte		N17   , Fn2 
	.byte		N44   , Dn4 
	.byte	W18
	.byte		N17   , As1 
	.byte		N17   , Fn2 
	.byte	W06
@ 010   ----------------------------------------
	.byte	W12
	.byte		N11   , Gn1 
	.byte		N11   , Dn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N11   , Dn2 
	.byte		N22   , Fn4 
	.byte	W12
	.byte		N11   , Gn1 
	.byte		N11   , Dn2 
	.byte	W12
	.byte		N17   
	.byte		N17   , An2 
	.byte		N32   , Gn3 
	.byte		N32   , Dn4 
	.byte	W18
	.byte		N17   , Dn2 
	.byte		N17   , An2 
	.byte	W18
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N32   , Fs3 
	.byte	W12
@ 011   ----------------------------------------
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		        Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		N17   , Dn2 
	.byte		N17   , An2 
	.byte		N32   , En3 
	.byte	W18
	.byte		N17   , Dn2 
	.byte		N17   , An2 
	.byte	W18
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N32   , Fs3 
	.byte	W12
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		        Dn2 
	.byte		N11   , An2 
	.byte	W12
@ 012   ----------------------------------------
	.byte		N68   , Dn2 , v064
	.byte		N68   , Fs2 
	.byte		N68   , An2 
	.byte		N68   , Dn3 
	.byte		N32   , Fs4 
	.byte	W36
	.byte		N11   
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		N68   , Cn2 
	.byte		N68   , En2 
	.byte		N68   , An2 
	.byte		N68   , Cn3 
	.byte		N32   , Cn5 
	.byte	W24
@ 013   ----------------------------------------
	.byte	W12
	.byte		N11   , Bn4 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		N68   , Dn2 
	.byte		N68   , Fs2 
	.byte		N68   , An2 
	.byte		N68   , Dn3 
	.byte		N17   , Fs4 
	.byte	W18
	.byte		N05   , An4 
	.byte	W06
	.byte		N22   , Dn4 
	.byte	W24
@ 014   ----------------------------------------
	.byte		N11   
	.byte	W12
	.byte		        En4 
	.byte	W12
	.byte		N68   , As1 , v080
	.byte		N44   , Fn4 
	.byte	W03
	.byte		N68   , Fn2 
	.byte	W03
	.byte		N64   , As2 
	.byte	W03
	.byte		N60   , Dn3 
	.byte	W48
	.byte	W03
	.byte		N05   , Gn3 
	.byte		N05   , Gn4 
	.byte	W06
	.byte		        An3 
	.byte		N05   , An4 
	.byte	W06
@ 015   ----------------------------------------
	.byte		N17   , Cn2 
	.byte		N17   , Gn2 
	.byte		N22   , Gn3 
	.byte		N22   , Gn4 
	.byte	W18
	.byte		N17   , Cn2 
	.byte		N17   , Gn2 
	.byte	W06
	.byte		N11   , En3 
	.byte		N11   , En4 
	.byte	W12
	.byte		        Gn1 
	.byte		N11   , Dn2 
	.byte		N22   , Dn3 
	.byte		N22   , Dn4 
	.byte	W12
	.byte		N11   , Gn1 
	.byte		N11   , Dn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N11   , Dn2 
	.byte		N11   , Cn3 
	.byte		N11   , Cn4 
	.byte	W12
	.byte		N17   , As1 
	.byte		N17   , Fn2 
	.byte		N44   , Dn3 
	.byte		N44   , Dn4 
	.byte	W18
	.byte		N17   , As1 
	.byte		N17   , Fn2 
	.byte	W06
@ 016   ----------------------------------------
	.byte	W12
	.byte		N11   , Gn1 
	.byte		N11   , Dn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N11   , Dn2 
	.byte		N22   , Fn3 
	.byte		N22   , Fn4 
	.byte	W12
	.byte		N11   , Gn1 
	.byte		N11   , Dn2 
	.byte	W12
	.byte		N17   
	.byte		N17   , An2 
	.byte		N17   , An3 
	.byte		N17   , Dn4 
	.byte	W18
	.byte		        Dn2 
	.byte		N17   , An2 
	.byte		N17   , An3 
	.byte	W18
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N17   , Gn3 
	.byte	W12
@ 017   ----------------------------------------
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W06
	.byte		N17   , Gn3 
	.byte	W06
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		N17   , Dn2 
	.byte		N17   , An2 
	.byte		N17   , En3 
	.byte	W18
	.byte		        Dn2 
	.byte		N17   , An2 
	.byte		N17   , En3 
	.byte	W18
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N17   , Fs3 
	.byte	W12
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W06
	.byte		N17   , Fs3 
	.byte	W06
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W12
@ 018   ----------------------------------------
	.byte		N17   , Dn3 , v064
	.byte		N17   , Gn3 
	.byte	W18
	.byte		        Dn3 
	.byte		N17   , Fs3 
	.byte	W18
	.byte		        Cn3 
	.byte		N17   , Fn3 
	.byte	W18
	.byte		        Cn3 
	.byte		N17   , En3 
	.byte	W18
	.byte		        As2 
	.byte		N17   , Ds3 
	.byte	W18
	.byte		        As2 
	.byte		N17   , Dn3 
	.byte	W06
@ 019   ----------------------------------------
	.byte	W12
	.byte		        An2 
	.byte		N17   , Dn3 
	.byte	W18
	.byte		        An2 
	.byte		N17   , Cs3 
	.byte	W18
	.byte		        Dn2 , v080
	.byte		N17   , An2 
	.byte		N17   , Dn3 
	.byte		N17   , Gn3 
	.byte	W18
	.byte		        Dn2 
	.byte		N17   , An2 
	.byte		N17   , Gn3 
	.byte	W18
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N17   , Fs3 
	.byte	W12
@ 020   ----------------------------------------
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W06
	.byte		N17   , Fs3 
	.byte	W06
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		N17   , Dn2 
	.byte		N17   , An2 
	.byte		N17   , En3 
	.byte	W18
	.byte		        Dn2 
	.byte		N17   , An2 
	.byte		N17   , En3 
	.byte	W18
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte		N17   , Fs3 
	.byte	W12
	.byte		N11   , Dn2 
	.byte		N11   , An2 
	.byte	W06
	.byte		N17   , Fs3 
	.byte	W06
	.byte		N11   , Dn2 , v064
	.byte		N11   , An2 
	.byte	W12
@ 021   ----------------------------------------
	.byte	W24
	.byte	GOTO
	 .word	bgm_map_Brave_01_2_B1
bgm_map_Brave_01_2_B2:
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

bgm_map_Brave_01_3:
	.byte	KEYSH , bgm_map_Brave_01_key+0
bgm_map_Brave_01_3_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 8
	.byte		VOL   , 83*bgm_map_Brave_01_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N32   , Dn3 , v080
	.byte		N32   , An3 
	.byte	W48
	.byte		N22   
	.byte		N22   , Dn4 
	.byte	W24
	.byte		N22   
	.byte		N22   , Gn4 
	.byte	W24
@ 001   ----------------------------------------
	.byte		        An3 
	.byte		N22   , Dn4 
	.byte	W36
	.byte		N11   , An3 
	.byte		N11   , Dn4 
	.byte	W12
	.byte		N44   , Gn3 
	.byte		N44   , Cn4 
	.byte	W48
@ 002   ----------------------------------------
	.byte		N11   , Gn3 
	.byte		N11   , Cn4 
	.byte	W12
	.byte		N11   
	.byte		N11   , Fn4 
	.byte	W12
	.byte		N68   , Dn4 
	.byte		N68   , Gn4 
	.byte	W72
@ 003   ----------------------------------------
	.byte	W12
	.byte		N05   , Dn3 
	.byte	W12
	.byte		N05   
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W42
@ 004   ----------------------------------------
	.byte		N05   
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W42
	.byte		N05   
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
	.byte		        An3 
	.byte	W06
@ 005   ----------------------------------------
	.byte		        Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W42
	.byte		N05   
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W18
@ 006   ----------------------------------------
bgm_map_Brave_01_3_006:
	.byte		N68   , Dn3 , v064
	.byte		N32   , Fs4 
	.byte	W36
	.byte		N11   
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		N68   , Cn3 
	.byte		N32   , Cn5 
	.byte	W24
	.byte	PEND
@ 007   ----------------------------------------
bgm_map_Brave_01_3_007:
	.byte	W12
	.byte		N11   , Bn4 , v064
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		N68   , Dn3 
	.byte		N17   , Fs4 
	.byte	W18
	.byte		N05   , An4 
	.byte	W06
	.byte		N22   , Dn4 
	.byte	W24
	.byte	PEND
@ 008   ----------------------------------------
	.byte		N11   
	.byte	W12
	.byte		        En4 
	.byte	W12
	.byte		N68   , Dn3 
	.byte		N44   , Fn4 
	.byte	W60
	.byte		N05   , Gn4 , v080
	.byte	W06
	.byte		        An4 
	.byte	W06
@ 009   ----------------------------------------
	.byte		N22   , Gn4 
	.byte	W24
	.byte		N11   , En4 
	.byte	W12
	.byte		N22   , Dn4 
	.byte	W24
	.byte		N11   , Cn4 
	.byte	W12
	.byte		N44   , Dn4 
	.byte	W24
@ 010   ----------------------------------------
	.byte	W24
	.byte		N22   , Fn4 
	.byte	W24
	.byte		N32   , Gn3 
	.byte		N32   , Dn4 
	.byte	W36
	.byte		        Fs3 
	.byte	W12
@ 011   ----------------------------------------
	.byte	W24
	.byte		        En3 
	.byte	W36
	.byte		        Fs3 
	.byte	W36
@ 012   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_3_006
@ 013   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_3_007
@ 014   ----------------------------------------
	.byte		N11   , Dn4 , v064
	.byte	W12
	.byte		        En4 
	.byte	W12
	.byte		N44   , Fn4 , v080
	.byte	W09
	.byte		N60   , Dn3 
	.byte	W48
	.byte	W03
	.byte		N05   , Gn3 
	.byte		N05   , Gn4 
	.byte	W06
	.byte		        An3 
	.byte		N05   , An4 
	.byte	W06
@ 015   ----------------------------------------
	.byte		N22   , Gn3 
	.byte		N22   , Gn4 
	.byte	W24
	.byte		N11   , En3 
	.byte		N11   , En4 
	.byte	W12
	.byte		N22   , Dn3 
	.byte		N22   , Dn4 
	.byte	W24
	.byte		N11   , Cn3 
	.byte		N11   , Cn4 
	.byte	W12
	.byte		N44   , Dn3 
	.byte		N44   , Dn4 
	.byte	W24
@ 016   ----------------------------------------
	.byte	W24
	.byte		N22   , Fn3 
	.byte		N22   , Fn4 
	.byte	W24
	.byte		N17   , An3 
	.byte		N17   , Dn4 
	.byte	W18
	.byte		        An3 
	.byte	W18
	.byte		        Gn3 
	.byte	W12
@ 017   ----------------------------------------
	.byte	W06
	.byte		N17   
	.byte	W18
	.byte		        En3 
	.byte	W18
	.byte		N17   
	.byte	W18
	.byte		        Fs3 
	.byte	W18
	.byte		N17   
	.byte	W18
@ 018   ----------------------------------------
	.byte		        Dn3 , v064
	.byte		N17   , Gn3 
	.byte	W18
	.byte		        Dn3 
	.byte		N17   , Fs3 
	.byte	W18
	.byte		        Cn3 
	.byte		N17   , Fn3 
	.byte	W18
	.byte		        Cn3 
	.byte		N17   , En3 
	.byte	W18
	.byte		        Ds3 
	.byte	W18
	.byte		        Dn3 
	.byte	W06
@ 019   ----------------------------------------
	.byte	W12
	.byte		N17   
	.byte	W18
	.byte		        Cs3 
	.byte	W18
	.byte		        Dn3 , v080
	.byte		N17   , Gn3 
	.byte	W18
	.byte		N17   
	.byte	W18
	.byte		        Fs3 
	.byte	W12
@ 020   ----------------------------------------
	.byte	W06
	.byte		N17   
	.byte	W18
	.byte		        En3 
	.byte	W18
	.byte		N17   
	.byte	W18
	.byte		        Fs3 
	.byte	W18
	.byte		N17   
	.byte	W18
@ 021   ----------------------------------------
	.byte	W24
	.byte	GOTO
	 .word	bgm_map_Brave_01_3_B1
bgm_map_Brave_01_3_B2:
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

bgm_map_Brave_01_4:
	.byte	KEYSH , bgm_map_Brave_01_key+0
bgm_map_Brave_01_4_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 38
	.byte		VOL   , 98*bgm_map_Brave_01_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N17   , Dn1 , v080
	.byte	W18
	.byte		N17   
	.byte	W18
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N17   , As0 
	.byte	W18
	.byte		N17   
	.byte	W06
@ 001   ----------------------------------------
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N17   , Cn1 
	.byte	W18
	.byte		N17   
	.byte	W18
	.byte		N11   
	.byte	W12
@ 002   ----------------------------------------
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N17   , Gn0 
	.byte	W18
	.byte		N17   
	.byte	W18
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 003   ----------------------------------------
	.byte		N17   , Dn1 
	.byte		N17   , An1 
	.byte	W18
	.byte		        Dn1 
	.byte		N05   , An1 
	.byte	W18
	.byte		N11   , Dn1 
	.byte		N11   , An1 
	.byte	W12
	.byte		        Dn1 
	.byte		N11   , An1 
	.byte	W12
	.byte		        Dn1 
	.byte		N11   , An1 
	.byte	W12
	.byte		N17   , As0 
	.byte		N17   , An1 
	.byte	W18
	.byte		        As0 
	.byte		N17   , An1 
	.byte	W06
@ 004   ----------------------------------------
	.byte	W12
	.byte		N11   , As0 
	.byte		N11   , An1 
	.byte	W12
	.byte		        As0 
	.byte		N11   , An1 
	.byte	W12
	.byte		        As0 
	.byte		N11   , An1 
	.byte	W12
	.byte		N17   , Cn1 
	.byte		N17   , Gn1 
	.byte	W18
	.byte		        Cn1 
	.byte		N17   , Gn1 
	.byte	W18
	.byte		N11   , Cn1 
	.byte		N11   , Gn1 
	.byte	W12
@ 005   ----------------------------------------
	.byte		        Cn1 
	.byte		N11   , Gn1 
	.byte	W12
	.byte		        Cn1 
	.byte		N11   , Gn1 
	.byte	W12
	.byte		N17   , Gn0 
	.byte		N17   , Gn1 
	.byte	W18
	.byte		        Gn0 
	.byte		N17   , Gn1 
	.byte	W18
	.byte		N11   , Gn0 
	.byte		N11   , Gn1 
	.byte	W12
	.byte		        Gn0 
	.byte		N11   , Gn1 
	.byte	W12
	.byte		        Gn0 
	.byte		N11   , Gn1 
	.byte	W12
@ 006   ----------------------------------------
	.byte		N68   , Fs1 , v064
	.byte		N68   , An1 
	.byte	W72
	.byte		        En1 
	.byte		N68   , An1 
	.byte	W24
@ 007   ----------------------------------------
	.byte	W48
	.byte		        Fs1 
	.byte		N68   , An1 
	.byte	W48
@ 008   ----------------------------------------
	.byte	W24
	.byte		        Fn1 
	.byte		N68   , As1 
	.byte	W72
@ 009   ----------------------------------------
bgm_map_Brave_01_4_009:
	.byte		N17   , Cn1 , v080
	.byte		N17   , Gn1 
	.byte	W18
	.byte		        Cn1 
	.byte		N17   , Gn1 
	.byte	W18
	.byte		N11   , Gn0 
	.byte		N11   , Dn1 
	.byte	W12
	.byte		        Gn0 
	.byte		N11   , Dn1 
	.byte	W12
	.byte		        Gn0 
	.byte		N11   , Dn1 
	.byte	W12
	.byte		N17   , As0 
	.byte		N17   , Fn1 
	.byte	W18
	.byte		        As0 
	.byte		N17   , Fn1 
	.byte	W06
	.byte	PEND
@ 010   ----------------------------------------
bgm_map_Brave_01_4_010:
	.byte	W12
	.byte		N11   , Gn0 , v080
	.byte		N11   , Dn1 
	.byte	W12
	.byte		        Gn0 
	.byte		N11   , Dn1 
	.byte	W12
	.byte		        Gn0 
	.byte		N11   , Dn1 
	.byte	W12
	.byte		N17   
	.byte		N17   , An1 
	.byte	W18
	.byte		        Dn1 
	.byte		N17   , An1 
	.byte	W18
	.byte		N11   , Dn1 
	.byte		N11   , An1 
	.byte	W12
	.byte	PEND
@ 011   ----------------------------------------
bgm_map_Brave_01_4_011:
	.byte		N11   , Dn1 , v080
	.byte		N11   , An1 
	.byte	W12
	.byte		        Dn1 
	.byte		N11   , An1 
	.byte	W12
	.byte		N17   , Dn1 
	.byte		N17   , An1 
	.byte	W18
	.byte		        Dn1 
	.byte		N17   , An1 
	.byte	W18
	.byte		N11   , Dn1 
	.byte		N11   , An1 
	.byte	W12
	.byte		        Dn1 
	.byte		N11   , An1 
	.byte	W12
	.byte		        Dn1 
	.byte		N11   , An1 
	.byte	W12
	.byte	PEND
@ 012   ----------------------------------------
	.byte		N68   , Dn1 , v064
	.byte		N68   , Fs1 
	.byte		N68   , An1 
	.byte	W72
	.byte		        Cn1 
	.byte		N68   , En1 
	.byte		N68   , An1 
	.byte	W24
@ 013   ----------------------------------------
	.byte	W48
	.byte		        Dn1 
	.byte		N68   , Fs1 
	.byte		N68   , An1 
	.byte	W48
@ 014   ----------------------------------------
	.byte	W24
	.byte		        As0 , v080
	.byte	W03
	.byte		        Fn1 
	.byte	W03
	.byte		N64   , As1 
	.byte	W66
@ 015   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_4_009
@ 016   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_4_010
@ 017   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_4_011
@ 018   ----------------------------------------
	.byte	W72
	.byte		N17   , As1 , v064
	.byte	W18
	.byte		N17   
	.byte	W06
@ 019   ----------------------------------------
	.byte	W12
	.byte		        An1 
	.byte	W18
	.byte		N17   
	.byte	W18
	.byte		        Dn1 , v080
	.byte		N17   , An1 
	.byte	W18
	.byte		        Dn1 
	.byte		N17   , An1 
	.byte	W18
	.byte		N11   , Dn1 
	.byte		N11   , An1 
	.byte	W12
@ 020   ----------------------------------------
	.byte		        Dn1 
	.byte		N11   , An1 
	.byte	W12
	.byte		        Dn1 
	.byte		N11   , An1 
	.byte	W12
	.byte		N17   , Dn1 
	.byte		N17   , An1 
	.byte	W18
	.byte		        Dn1 
	.byte		N17   , An1 
	.byte	W18
	.byte		N11   , Dn1 
	.byte		N11   , An1 
	.byte	W12
	.byte		        Dn1 
	.byte		N11   , An1 
	.byte	W12
	.byte		        Dn1 , v064
	.byte		N11   , An1 
	.byte	W12
@ 021   ----------------------------------------
	.byte	W24
	.byte	GOTO
	 .word	bgm_map_Brave_01_4_B1
bgm_map_Brave_01_4_B2:
	.byte	FINE

@**************** Track 5 (Midi-Chn.10) ****************@

bgm_map_Brave_01_5:
	.byte		VOL   , 127*bgm_map_Brave_01_mvl/mxv
	.byte	KEYSH , bgm_map_Brave_01_key+0
bgm_map_Brave_01_5_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		N04   , Dn1 , v064
	.byte	W04
	.byte		N04   
	.byte	W04
	.byte		N04   
	.byte	W28
	.byte		N12   , An1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N04   , Dn1 
	.byte	W04
	.byte		N04   
	.byte	W04
	.byte		N04   
	.byte	W16
@ 001   ----------------------------------------
bgm_map_Brave_01_5_001:
	.byte	W12
	.byte		N12   , An1 , v064
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N04   , Dn1 
	.byte	W04
	.byte		N04   
	.byte	W04
	.byte		N04   
	.byte	W28
	.byte		N12   , An1 
	.byte	W12
	.byte	PEND
@ 002   ----------------------------------------
bgm_map_Brave_01_5_002:
	.byte		N12   , An1 , v064
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N04   , Dn1 
	.byte	W04
	.byte		N04   
	.byte	W04
	.byte		N04   
	.byte	W28
	.byte		N12   , An1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte	PEND
@ 003   ----------------------------------------
	.byte		N04   , Dn1 
	.byte	W04
	.byte		N04   
	.byte	W04
	.byte		N04   
	.byte	W28
	.byte		N12   , An1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N04   , Dn1 
	.byte	W04
	.byte		N04   
	.byte	W04
	.byte		N04   
	.byte	W16
@ 004   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_5_001
@ 005   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_5_002
@ 006   ----------------------------------------
bgm_map_Brave_01_5_006:
	.byte		N24   , Dn1 , v064
	.byte	W24
	.byte		N18   , An1 
	.byte	W18
	.byte		N06   
	.byte	W06
	.byte		N12   
	.byte	W24
	.byte		N24   , Dn1 
	.byte	W24
	.byte	PEND
@ 007   ----------------------------------------
bgm_map_Brave_01_5_007:
	.byte		N18   , An1 , v064
	.byte	W18
	.byte		N06   
	.byte	W06
	.byte		N12   
	.byte	W24
	.byte		N24   , Dn1 
	.byte	W24
	.byte		N18   , An1 
	.byte	W18
	.byte		N06   
	.byte	W06
	.byte	PEND
@ 008   ----------------------------------------
bgm_map_Brave_01_5_008:
	.byte		N12   , An1 , v064
	.byte	W24
	.byte		N24   , Dn1 
	.byte	W24
	.byte		N18   , An1 
	.byte	W18
	.byte		N06   
	.byte	W06
	.byte		N12   
	.byte	W24
	.byte	PEND
@ 009   ----------------------------------------
bgm_map_Brave_01_5_009:
	.byte		N24   , Dn1 , v064
	.byte	W24
	.byte		N12   
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte	PEND
@ 010   ----------------------------------------
bgm_map_Brave_01_5_010:
	.byte		N12   , Dn1 , v064
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N24   , An1 
	.byte	W24
	.byte		N18   
	.byte	W18
	.byte		N06   
	.byte	W06
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte	PEND
@ 011   ----------------------------------------
bgm_map_Brave_01_5_011:
	.byte		N12   , An1 , v064
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N18   
	.byte	W18
	.byte		N06   
	.byte	W06
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte	PEND
@ 012   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_5_006
@ 013   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_5_007
@ 014   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_5_008
@ 015   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_5_009
@ 016   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_5_010
@ 017   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_5_011
@ 018   ----------------------------------------
	.byte		N24   , Dn1 , v064
	.byte	W24
	.byte		N12   
	.byte	W12
	.byte		N24   , An1 
	.byte	W24
	.byte		N12   
	.byte	W12
	.byte		N24   , Dn1 
	.byte	W24
@ 019   ----------------------------------------
	.byte		N12   
	.byte	W12
	.byte		N24   , An1 
	.byte	W24
	.byte		N12   
	.byte	W12
	.byte		N18   
	.byte	W18
	.byte		N06   
	.byte	W06
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
@ 020   ----------------------------------------
	.byte	PATT
	 .word	bgm_map_Brave_01_5_011
@ 021   ----------------------------------------
	.byte	W24
	.byte	GOTO
	 .word	bgm_map_Brave_01_5_B1
bgm_map_Brave_01_5_B2:
	.byte	FINE

@******************************************************@
	.align	2

bgm_map_Brave_01:
	.byte	5	@ NumTrks
	.byte	0	@ NumBlks
	.byte	bgm_map_Brave_01_pri	@ Priority
	.byte	bgm_map_Brave_01_rev	@ Reverb.

	.word	bgm_map_Brave_01_grp

	.word	bgm_map_Brave_01_1
	.word	bgm_map_Brave_01_2
	.word	bgm_map_Brave_01_3
	.word	bgm_map_Brave_01_4
	.word	bgm_map_Brave_01_5

	.end
