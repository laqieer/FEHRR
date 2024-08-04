	.include "MPlayDef.s"

	.equ	bgm_map_FE08_05_grp, voicegroup000
	.equ	bgm_map_FE08_05_pri, 10
	.equ	bgm_map_FE08_05_rev, 128
	.equ	bgm_map_FE08_05_mvl, 127
	.equ	bgm_map_FE08_05_key, 0
	.equ	bgm_map_FE08_05_tbs, 1
	.equ	bgm_map_FE08_05_exg, 0
	.equ	bgm_map_FE08_05_cmp, 1

	.section .rodata
	.global	bgm_map_FE08_05
	.align	2


@**************** Track 1 (Midi-Chn.0) ****************@

bgm_map_FE08_05_001:
@  #01 @000   ----------------------------------------
 .byte   KEYSH , bgm_map_FE08_05_key+0
 .byte   TEMPO , 122*bgm_map_FE08_05_tbs/2
 .byte   W12
Label_800029:
 .byte   VOICE , 1
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N06 ,Gn3 ,v127
 .byte   W06
 .byte   Fs3
 .byte   W06
 .byte   N42 ,Gn3
 .byte   W48
 .byte   N06
 .byte   W06
 .byte   Gn3 ,v044
 .byte   W06
 .byte   Fs3 ,v127
 .byte   W06
 .byte   Fs3 ,v044
 .byte   W06
@  #01 @001   ----------------------------------------
 .byte   En3 ,v127
 .byte   W06
 .byte   En3 ,v044
 .byte   W06
 .byte   N30 ,Fs3 ,v127
 .byte   W30
 .byte   N06 ,Fs3 ,v032
 .byte   W06
 .byte   N30 ,Gn3 ,v127
 .byte   W30
 .byte   N06 ,Gn3 ,v032
 .byte   W06
 .byte   N24 ,An3 ,v127
 .byte   W24
@  #01 @002   ----------------------------------------
 .byte   N06 ,Bn3
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   N42 ,Bn3
 .byte   W48
 .byte   N06
 .byte   W06
 .byte   Bn3 ,v044
 .byte   W06
 .byte   An3 ,v127
 .byte   W06
 .byte   An3 ,v044
 .byte   W06
 .byte   Gn3 ,v127
 .byte   W06
 .byte   Gn3 ,v044
 .byte   W06
@  #01 @003   ----------------------------------------
 .byte   N30 ,An3 ,v127
 .byte   W30
 .byte   N06 ,An3 ,v044
 .byte   W06
 .byte   N30 ,Bn3 ,v127
 .byte   W30
 .byte   N06 ,Bn3 ,v044
 .byte   W06
 .byte   N24 ,Cn4 ,v127
 .byte   W24
@  #01 @004   ----------------------------------------
 .byte   N72 ,Bn3
 .byte   W72
 .byte   N06 ,Bn3 ,v044
 .byte   W18
 .byte   N04 ,En4 ,v127
 .byte   W06
@  #01 @005   ----------------------------------------
 .byte   N84
 .byte   W22
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   N06 ,En4 ,v044
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #01 @006   ----------------------------------------
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Fs3 ,v127
 .byte   W01
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   W05
 .byte   N06 ,En3
 .byte   W06
 .byte   N42 ,Fs3
 .byte   W42
 .byte   N06 ,Fs3 ,v044
 .byte   W06
 .byte   Fs3 ,v127
 .byte   W06
 .byte   Fs3 ,v044
 .byte   W06
 .byte   En3 ,v127
 .byte   W06
 .byte   En3 ,v044
 .byte   W06
 .byte   Dn3 ,v127
 .byte   W06
 .byte   Dn3 ,v044
 .byte   W06
@  #01 @007   ----------------------------------------
 .byte   N30 ,En3 ,v127
 .byte   W30
 .byte   N06 ,En3 ,v044
 .byte   W06
 .byte   N30 ,Fs3 ,v127
 .byte   W30
 .byte   N06 ,Fs3 ,v044
 .byte   W06
 .byte   N24 ,Gn3 ,v127
 .byte   W24
@  #01 @008   ----------------------------------------
 .byte   N06
 .byte   W06
 .byte   Fs3
 .byte   W06
 .byte   N42 ,Gn3
 .byte   W12
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W30
 .byte   N06 ,Gn3 ,v044
 .byte   W06
 .byte   Gn3 ,v127
 .byte   W06
 .byte   Gn3 ,v044
 .byte   W06
 .byte   Fs3 ,v127
 .byte   W06
 .byte   Fs3 ,v044
 .byte   W06
 .byte   En3 ,v127
 .byte   W06
 .byte   En3 ,v044
 .byte   W06
@  #01 @009   ----------------------------------------
 .byte   N30 ,Fs3 ,v127
 .byte   W30
 .byte   N06 ,Fs3 ,v044
 .byte   W06
 .byte   N30 ,Gn3 ,v127
 .byte   W30
 .byte   N06 ,Gn3 ,v044
 .byte   W06
 .byte   N24 ,An3 ,v127
 .byte   W24
@  #01 @010   ----------------------------------------
 .byte   N06 ,Bn3
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   N60 ,Bn3
 .byte   W36
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Bn3 ,v044
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Fs3 ,v127
 .byte   W06
@  #01 @011   ----------------------------------------
 .byte   N72
 .byte   W40
 .byte   W01
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Fs3 ,v044
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Bn3 ,v127
 .byte   W06
@  #01 @012   ----------------------------------------
 .byte   N72
 .byte   W44
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Bn3 ,v044
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Fs3 ,v127
 .byte   W06
@  #01 @013   ----------------------------------------
 .byte   N72
 .byte   W52
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOICE , 2
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Fs3 ,v044
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #01 @014   ----------------------------------------
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   N54 ,Bn3 ,v108
 .byte   W02
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W07
 .byte   N06 ,Bn3 ,v044
 .byte   W06
 .byte   N12 ,Bn3 ,v108
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   Bn3
 .byte   W12
@  #01 @015   ----------------------------------------
 .byte   N42
 .byte   W42
 .byte   N06 ,Bn3 ,v044
 .byte   W06
 .byte   N12 ,Bn3 ,v108
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   N21 ,Bn3
 .byte   W24
@  #01 @016   ----------------------------------------
 .byte   N56 ,Fs3
 .byte   W60
 .byte   N12
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   An3
 .byte   W12
@  #01 @017   ----------------------------------------
 .byte   N60 ,Dn3
 .byte   W60
 .byte   N06 ,Dn3 ,v044
 .byte   W12
 .byte   N24 ,Bn2 ,v108
 .byte   W24
@  #01 @018   ----------------------------------------
 .byte   N56 ,En3
 .byte   W60
 .byte   N12
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   En3
 .byte   W06
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #01 @019   ----------------------------------------
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   N36 ,Bn3
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W18
 .byte   N12 ,An3
 .byte   W12
 .byte   N24 ,Gn3
 .byte   W24
 .byte   An3
 .byte   W24
@  #01 @020   ----------------------------------------
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,Fs3
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,Gn3
 .byte   W02
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,Fs3
 .byte   W03
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   N12 ,Gn3
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   N12 ,Fs3
 .byte   W02
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,Gn3
 .byte   W03
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   N12 ,Fs3
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   N12 ,Gn3
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W03
@  #01 @021   ----------------------------------------
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,An3
 .byte   W02
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,Bn3
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W11
 .byte   N12 ,An3
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W05
 .byte   N12 ,Bn3
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W05
 .byte   N12 ,An3
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W05
 .byte   N12 ,Bn3
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W05
 .byte   N12 ,An3
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W05
 .byte   N12 ,Bn3
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W05
@  #01 @022   ----------------------------------------
 .byte   N48 ,An3
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W44
 .byte   W03
 .byte   N48 ,Bn3
 .byte   W44
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #01 @023   ----------------------------------------
 .byte   VOICE , 1
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Gn3
 .byte   W06
 .byte   Gn3 ,v060
 .byte   W06
 .byte   Gn3 ,v108
 .byte   W06
 .byte   Gn3 ,v060
 .byte   W06
 .byte   Fs3 ,v108
 .byte   W06
 .byte   Fs3 ,v060
 .byte   W18
 .byte   An3 ,v108
 .byte   W06
 .byte   An3 ,v060
 .byte   W06
 .byte   An3 ,v108
 .byte   W06
 .byte   An3 ,v060
 .byte   W06
 .byte   Gn3 ,v108
 .byte   W06
 .byte   Gn3 ,v060
 .byte   W18
@  #01 @024   ----------------------------------------
Label_8004AA:
 .byte   N06 ,Bn3 ,v108
 .byte   W06
 .byte   Bn3 ,v060
 .byte   W06
 .byte   Bn3 ,v108
 .byte   W06
 .byte   Bn3 ,v060
 .byte   W06
 .byte   Gn3 ,v108
 .byte   W06
 .byte   Gn3 ,v060
 .byte   W06
 .byte   An3 ,v108
 .byte   W06
 .byte   An3 ,v060
 .byte   W06
 .byte   Fs3 ,v108
 .byte   W06
 .byte   Fs3 ,v060
 .byte   W06
 .byte   Gn3 ,v108
 .byte   W06
 .byte   Gn3 ,v060
 .byte   W06
 .byte   Dn3 ,v108
 .byte   W06
 .byte   Dn3 ,v060
 .byte   W18
 .byte   PEND
@  #01 @025   ----------------------------------------
 .byte   Gn3 ,v108
 .byte   W06
 .byte   Gn3 ,v060
 .byte   W06
 .byte   Gn3 ,v108
 .byte   W06
 .byte   Gn3 ,v060
 .byte   W06
 .byte   Fs3 ,v108
 .byte   W06
 .byte   Fs3 ,v060
 .byte   W18
 .byte   An3 ,v108
 .byte   W06
 .byte   An3 ,v060
 .byte   W06
 .byte   An3 ,v108
 .byte   W06
 .byte   An3 ,v060
 .byte   W06
 .byte   Gn3 ,v108
 .byte   W06
 .byte   Gn3 ,v060
 .byte   W18
@  #01 @026   ----------------------------------------
 .byte   PATT
  .word Label_8004AA
@  #01 @027   ----------------------------------------
 .byte   N06 ,Cs4 ,v108
 .byte   W06
 .byte   Cs4 ,v060
 .byte   W06
 .byte   Cs4 ,v108
 .byte   W06
 .byte   Cs4 ,v060
 .byte   W06
 .byte   Bn3 ,v108
 .byte   W06
 .byte   Bn3 ,v060
 .byte   W18
 .byte   Dn4 ,v108
 .byte   W06
 .byte   Dn4 ,v060
 .byte   W06
 .byte   Dn4 ,v108
 .byte   W06
 .byte   Dn4 ,v060
 .byte   W06
 .byte   Cs4 ,v108
 .byte   W06
 .byte   Cs4 ,v060
 .byte   W18
@  #01 @028   ----------------------------------------
 .byte   En4 ,v108
 .byte   W06
 .byte   En4 ,v060
 .byte   W06
 .byte   En4 ,v108
 .byte   W06
 .byte   En4 ,v060
 .byte   W06
 .byte   Cs4 ,v108
 .byte   W06
 .byte   Cs4 ,v060
 .byte   W06
 .byte   Dn4 ,v108
 .byte   W06
 .byte   Dn4 ,v060
 .byte   W06
 .byte   Bn3 ,v108
 .byte   W06
 .byte   Bn3 ,v060
 .byte   W06
 .byte   Cs4 ,v108
 .byte   W06
 .byte   Cs4 ,v060
 .byte   W06
 .byte   An3 ,v108
 .byte   W06
 .byte   An3 ,v060
 .byte   W18
@  #01 @029   ----------------------------------------
 .byte   VOICE , 2
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+21
 .byte   TIE ,Cn3 ,v100
 .byte   W96
@  #01 @030   ----------------------------------------
 .byte   W44
 .byte   W03
 .byte   EOT
 .byte   W01
 .byte   N23
 .byte   W24
 .byte   Dn3
 .byte   W24
@  #01 @031   ----------------------------------------
 .byte   N92 ,En3
 .byte   W52
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 16*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 13*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 12*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 10*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 9*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 7*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 6*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 3*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 2*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #01 @032   ----------------------------------------
 .byte   VOL , 0*bgm_map_FE08_05_mvl/mxv
 .byte   W36
 .byte   W03
 .byte   VOL , 7*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W54
@  #01 @033   ----------------------------------------
 .byte   VOICE , 1
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,En3 ,v108
 .byte   W12
 .byte   En3 ,v060
 .byte   W12
 .byte   N04 ,En3 ,v108
 .byte   W04
 .byte   En3 ,v060
 .byte   W04
 .byte   En3 ,v108
 .byte   W04
 .byte   En3 ,v060
 .byte   W04
 .byte   En3 ,v108
 .byte   W04
 .byte   En3 ,v060
 .byte   W04
 .byte   N12 ,Fs3 ,v108
 .byte   W12
 .byte   Fs3 ,v060
 .byte   W12
 .byte   Fs3 ,v108
 .byte   W12
 .byte   Fs3 ,v060
 .byte   W12
@  #01 @034   ----------------------------------------
Label_8005F0:
 .byte   N12 ,Gn3 ,v108
 .byte   W12
 .byte   Gn3 ,v060
 .byte   W12
 .byte   N04 ,Gn3 ,v108
 .byte   W04
 .byte   Gn3 ,v060
 .byte   W04
 .byte   Gn3 ,v108
 .byte   W04
 .byte   Gn3 ,v060
 .byte   W04
 .byte   Gn3 ,v108
 .byte   W04
 .byte   Gn3 ,v060
 .byte   W04
 .byte   N12 ,An3 ,v108
 .byte   W12
 .byte   An3 ,v060
 .byte   W12
 .byte   An3 ,v108
 .byte   W12
 .byte   An3 ,v060
 .byte   W12
 .byte   PEND
@  #01 @035   ----------------------------------------
 .byte   Bn3 ,v108
 .byte   W12
 .byte   Bn3 ,v060
 .byte   W12
 .byte   N04 ,Bn3 ,v108
 .byte   W04
 .byte   Bn3 ,v060
 .byte   W04
 .byte   Bn3 ,v108
 .byte   W04
 .byte   Bn3 ,v060
 .byte   W04
 .byte   Bn3 ,v108
 .byte   W04
 .byte   Bn3 ,v060
 .byte   W04
 .byte   N12 ,An3 ,v108
 .byte   W12
 .byte   An3 ,v060
 .byte   W12
 .byte   An3 ,v108
 .byte   W12
 .byte   An3 ,v060
 .byte   W12
@  #01 @036   ----------------------------------------
 .byte   PATT
  .word Label_8005F0
@  #01 @037   ----------------------------------------
 .byte   N12 ,Bn3 ,v108
 .byte   W12
 .byte   Bn3 ,v060
 .byte   W12
 .byte   N04 ,An3 ,v108
 .byte   W04
 .byte   An3 ,v060
 .byte   W04
 .byte   Bn3 ,v108
 .byte   W04
 .byte   Bn3 ,v060
 .byte   W04
 .byte   An3 ,v108
 .byte   W04
 .byte   An3 ,v060
 .byte   W04
 .byte   N12 ,An3 ,v108
 .byte   W12
 .byte   An3 ,v060
 .byte   W12
 .byte   An3 ,v108
 .byte   W12
 .byte   An3 ,v060
 .byte   W12
@  #01 @038   ----------------------------------------
 .byte   An3 ,v108
 .byte   W12
 .byte   An3 ,v060
 .byte   W12
 .byte   N04 ,Gn3 ,v108
 .byte   W04
 .byte   Gn3 ,v060
 .byte   W04
 .byte   An3 ,v108
 .byte   W04
 .byte   An3 ,v060
 .byte   W04
 .byte   Gn3 ,v108
 .byte   W04
 .byte   Gn3 ,v060
 .byte   W04
 .byte   N12 ,Bn3 ,v108
 .byte   W12
 .byte   Bn3 ,v060
 .byte   W12
 .byte   An3 ,v108
 .byte   W12
 .byte   An3 ,v060
 .byte   W12
@  #01 @039   ----------------------------------------
 .byte   Gn3 ,v108
 .byte   W12
 .byte   Gn3 ,v060
 .byte   W12
 .byte   N04 ,Fs3 ,v108
 .byte   W04
 .byte   Fs3 ,v060
 .byte   W04
 .byte   Gn3 ,v108
 .byte   W04
 .byte   Gn3 ,v060
 .byte   W04
 .byte   Fs3 ,v108
 .byte   W04
 .byte   Fs3 ,v060
 .byte   W04
 .byte   N12 ,Gn3 ,v108
 .byte   W12
 .byte   Gn3 ,v060
 .byte   W12
 .byte   Gn3 ,v108
 .byte   W12
 .byte   Gn3 ,v060
 .byte   W12
@  #01 @040   ----------------------------------------
 .byte   An3 ,v108
 .byte   W12
 .byte   An3 ,v060
 .byte   W12
 .byte   N04 ,Gn3 ,v108
 .byte   W04
 .byte   Gn3 ,v060
 .byte   W04
 .byte   An3 ,v108
 .byte   W04
 .byte   An3 ,v060
 .byte   W04
 .byte   Gn3 ,v108
 .byte   W04
 .byte   Gn3 ,v060
 .byte   W04
 .byte   N12 ,Bn3 ,v108
 .byte   W12
 .byte   N06 ,Bn3 ,v060
 .byte   W12
 .byte   Bn2 ,v124
 .byte   W06
 .byte   Bn2 ,v048
 .byte   W06
 .byte   N04 ,En3 ,v124
 .byte   W06
 .byte   N04
 .byte   W06
@  #01 @041   ----------------------------------------
 .byte   N72
 .byte   W72
 .byte   N06 ,En3 ,v044
 .byte   W12
 .byte   Cn3 ,v124
 .byte   W06
 .byte   Cn3 ,v044
 .byte   W06
@  #01 @042   ----------------------------------------
 .byte   N48 ,Gn3 ,v124
 .byte   W48
 .byte   N24 ,Fs3
 .byte   W24
 .byte   N06 ,Fs3 ,v044
 .byte   W12
 .byte   N04 ,Gn3 ,v124
 .byte   W06
 .byte   N04
 .byte   W06
@  #01 @043   ----------------------------------------
 .byte   N78
 .byte   W78
 .byte   N06 ,Gn3 ,v044
 .byte   W06
 .byte   En3 ,v124
 .byte   W06
 .byte   En3 ,v044
 .byte   W06
@  #01 @044   ----------------------------------------
 .byte   N48 ,Bn3 ,v124
 .byte   W48
 .byte   N24 ,An3
 .byte   W24
 .byte   N06 ,Gn3
 .byte   W06
 .byte   Gn3 ,v044
 .byte   W06
 .byte   Fs3 ,v124
 .byte   W06
 .byte   Fs3 ,v044
 .byte   W06
@  #01 @045   ----------------------------------------
 .byte   GOTO
  .word Label_800029
 .byte   FINE

@**************** Track 2 (Midi-Chn.1) ****************@

bgm_map_FE08_05_002:
@  #02 @000   ----------------------------------------
 .byte   KEYSH , bgm_map_FE08_05_key+0
 .byte   W12
Label_800728:
 .byte   VOICE , 3
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N24 ,En2 ,v127
 .byte   W36
 .byte   N14
 .byte   W24
 .byte   N08
 .byte   W12
 .byte   N05 ,En3
 .byte   W12
@  #02 @001   ----------------------------------------
 .byte   En2
 .byte   W12
Label_80073B:
 .byte   N24 ,En2 ,v127
 .byte   W24
 .byte   N02 ,En3 ,v100
 .byte   W12
 .byte   N16 ,En2 ,v127
 .byte   W24
 .byte   N03 ,En2 ,v120
 .byte   W12
 .byte   N04 ,En3 ,v127
 .byte   W12
@  #02 @002   ----------------------------------------
 .byte   N03 ,En2 ,v120
 .byte   W12
 .byte   PEND
 .byte   N24 ,En2 ,v127
 .byte   W36
 .byte   N14
 .byte   W24
 .byte   N08
 .byte   W12
 .byte   N05 ,En3
 .byte   W12
@  #02 @003   ----------------------------------------
 .byte   En2
 .byte   W12
@  #02 @004   ----------------------------------------
 .byte   PATT
  .word Label_80073B
@  #02 @005   ----------------------------------------
 .byte   N23 ,En2 ,v127
 .byte   W24
 .byte   N03 ,En3
 .byte   W12
 .byte   N16 ,En2
 .byte   W24
 .byte   N04
 .byte   W12
 .byte   N03 ,En3
 .byte   W12
 .byte   En2
 .byte   W12
@  #02 @006   ----------------------------------------
 .byte   N24
 .byte   W24
 .byte   N03 ,En3
 .byte   W12
 .byte   N16 ,En2
 .byte   W24
 .byte   N05
 .byte   W12
 .byte   N05
 .byte   W12
 .byte   Dn2
 .byte   W12
@  #02 @007   ----------------------------------------
 .byte   N24 ,Cn2
 .byte   W24
 .byte   N08 ,Cn3
 .byte   W12
 .byte   N06 ,Cn2 ,v120
 .byte   W24
 .byte   N03 ,Cn2 ,v127
 .byte   W12
 .byte   N06 ,Cn3
 .byte   W12
 .byte   N03 ,Cn2
 .byte   W12
@  #02 @008   ----------------------------------------
 .byte   N15
 .byte   W24
 .byte   N05 ,Cn3
 .byte   W12
 .byte   N17 ,Cn2
 .byte   W24
 .byte   N04
 .byte   W12
 .byte   N05
 .byte   W12
 .byte   Bn1
 .byte   W12
@  #02 @009   ----------------------------------------
 .byte   N24 ,An1
 .byte   W24
 .byte   N04 ,An2
 .byte   W12
 .byte   An1 ,v112
 .byte   W24
 .byte   N05 ,An1 ,v127
 .byte   W12
 .byte   N04 ,An2 ,v124
 .byte   W12
 .byte   N05 ,An1 ,v127
 .byte   W12
@  #02 @010   ----------------------------------------
 .byte   N24
 .byte   W24
 .byte   N03 ,An2 ,v124
 .byte   W12
 .byte   N16 ,An1 ,v127
 .byte   W24
 .byte   N04
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   N03 ,Dn2
 .byte   W12
@  #02 @011   ----------------------------------------
Label_8007CD:
 .byte   N24 ,En2 ,v127
 .byte   W24
 .byte   N03 ,En3
 .byte   W12
 .byte   N17 ,En2
 .byte   W24
 .byte   N04
 .byte   W12
 .byte   N03 ,En3
 .byte   W12
 .byte   En2
 .byte   W12
 .byte   PEND
@  #02 @012   ----------------------------------------
 .byte   N24
 .byte   W24
 .byte   N03 ,En3
 .byte   W12
 .byte   N17 ,En2
 .byte   W24
 .byte   N04
 .byte   W12
 .byte   N03
 .byte   W12
 .byte   En3
 .byte   W12
@  #02 @013   ----------------------------------------
 .byte   PATT
  .word Label_8007CD
@  #02 @014   ----------------------------------------
 .byte   N24 ,En2 ,v127
 .byte   W24
 .byte   N03 ,En3
 .byte   W12
 .byte   N17 ,En2
 .byte   W24
 .byte   N04
 .byte   W12
 .byte   N03
 .byte   W12
 .byte   Dn2
 .byte   W12
@  #02 @015   ----------------------------------------
 .byte   N21 ,Cn2
 .byte   W24
 .byte   N03 ,Cn3 ,v112
 .byte   W12
 .byte   N16 ,Cn2 ,v127
 .byte   W24
 .byte   N02 ,Bn1
 .byte   N10 ,Cn2
 .byte   W24
 .byte   N04 ,Gn1 ,v124
 .byte   W12
@  #02 @016   ----------------------------------------
 .byte   N24 ,Cn2 ,v127
 .byte   W24
 .byte   N06 ,Cn3 ,v120
 .byte   W12
 .byte   N16 ,Cn2 ,v127
 .byte   W24
 .byte   N15
 .byte   W24
 .byte   N06 ,Cn2 ,v120
 .byte   W12
@  #02 @017   ----------------------------------------
 .byte   N23 ,Bn1 ,v127
 .byte   W24
 .byte   N05 ,Bn2 ,v124
 .byte   W12
 .byte   N19 ,Bn1 ,v127
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   N03 ,Fs1
 .byte   W12
@  #02 @018   ----------------------------------------
 .byte   N24 ,Bn1
 .byte   W24
 .byte   N04 ,Bn2
 .byte   W12
 .byte   N14 ,Bn1
 .byte   W24
 .byte   N05
 .byte   W12
 .byte   N09 ,Bn1 ,v124
 .byte   W12
 .byte   N07 ,As1 ,v127
 .byte   W12
@  #02 @019   ----------------------------------------
Label_80084C:
 .byte   N21 ,An1 ,v127
 .byte   W24
 .byte   N03 ,An2 ,v112
 .byte   W12
 .byte   N16 ,An1 ,v127
 .byte   W24
 .byte   N10
 .byte   W24
 .byte   N04 ,En1 ,v124
 .byte   W12
 .byte   PEND
@  #02 @020   ----------------------------------------
 .byte   PATT
  .word Label_80084C
@  #02 @021   ----------------------------------------
 .byte   N21 ,Bn1 ,v124
 .byte   W24
 .byte   N04 ,Bn2 ,v116
 .byte   W12
 .byte   N19 ,Bn1 ,v124
 .byte   W24
 .byte   Bn1 ,v127
 .byte   W24
 .byte   N09
 .byte   W12
@  #02 @022   ----------------------------------------
 .byte   N14
 .byte   W24
 .byte   N05 ,Bn2
 .byte   W12
 .byte   N17 ,Bn1
 .byte   W24
 .byte   N08
 .byte   W24
 .byte   N07
 .byte   W12
@  #02 @023   ----------------------------------------
 .byte   N24
 .byte   W24
 .byte   N06 ,Bn2 ,v120
 .byte   W12
 .byte   N17 ,An2 ,v127
 .byte   W24
 .byte   Gn2
 .byte   W24
 .byte   N06 ,Fs2
 .byte   W06
 .byte   Bn1
 .byte   W06
@  #02 @024   ----------------------------------------
Label_800892:
 .byte   W24
 .byte   N23 ,En2 ,v127
 .byte   W48
 .byte   N23
 .byte   W24
 .byte   PEND
@  #02 @025   ----------------------------------------
Label_80089A:
 .byte   W24
 .byte   N23 ,En2 ,v127
 .byte   W48
 .byte   N08
 .byte   W12
 .byte   N05
 .byte   W06
 .byte   N06
 .byte   W06
 .byte   PEND
@  #02 @026   ----------------------------------------
 .byte   PATT
  .word Label_800892
@  #02 @027   ----------------------------------------
 .byte   PATT
  .word Label_80089A
@  #02 @028   ----------------------------------------
 .byte   W24
 .byte   N23 ,Fs2 ,v127
 .byte   W48
 .byte   N23
 .byte   W24
@  #02 @029   ----------------------------------------
 .byte   W24
 .byte   N23
 .byte   W48
 .byte   N05 ,Fs1
 .byte   W06
 .byte   Gn1
 .byte   W06
 .byte   An1 ,v112
 .byte   W06
 .byte   Bn1 ,v096
 .byte   W06
@  #02 @030   ----------------------------------------
 .byte   Cn2 ,v127
 .byte   W12
 .byte   N14
 .byte   W24
 .byte   N15
 .byte   W24
 .byte   N14
 .byte   W24
 .byte   N14
 .byte   W12
@  #02 @031   ----------------------------------------
 .byte   W12
 .byte   N12
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   N12
 .byte   W12
 .byte   N03
 .byte   W12
 .byte   Bn1
 .byte   W12
@  #02 @032   ----------------------------------------
 .byte   N04 ,An1
 .byte   W12
 .byte   N14
 .byte   W24
 .byte   N15
 .byte   W24
 .byte   N14
 .byte   W24
 .byte   N14
 .byte   W12
@  #02 @033   ----------------------------------------
 .byte   W12
 .byte   N12
 .byte   W24
 .byte   N10
 .byte   W24
 .byte   N11
 .byte   W12
 .byte   N03
 .byte   W06
 .byte   N05 ,Bn1 ,v116
 .byte   W06
 .byte   N08 ,Cn2 ,v108
 .byte   W06
 .byte   N06 ,Dn2 ,v116
 .byte   W06
@  #02 @034   ----------------------------------------
 .byte   N76 ,En2 ,v124
 .byte   W84
 .byte   N03 ,En2 ,v127
 .byte   W12
@  #02 @035   ----------------------------------------
 .byte   N76 ,Dn2
 .byte   W84
 .byte   N05
 .byte   W12
@  #02 @036   ----------------------------------------
 .byte   N72 ,Cs2
 .byte   W84
 .byte   N05
 .byte   W12
@  #02 @037   ----------------------------------------
 .byte   N44 ,Cn2
 .byte   W48
 .byte   N40 ,Bn1
 .byte   W48
@  #02 @038   ----------------------------------------
 .byte   N80 ,An1
 .byte   W84
 .byte   N04
 .byte   W06
 .byte   N04
 .byte   W06
@  #02 @039   ----------------------------------------
 .byte   N60 ,Bn1 ,v124
 .byte   W72
 .byte   N05 ,An1 ,v127
 .byte   W06
 .byte   Bn1
 .byte   W06
 .byte   Cn2
 .byte   W06
 .byte   Dn2
 .byte   W06
@  #02 @040   ----------------------------------------
 .byte   N80 ,En2
 .byte   W84
 .byte   N05 ,Dn2
 .byte   W12
@  #02 @041   ----------------------------------------
 .byte   N36 ,Cn2 ,v124
 .byte   W48
 .byte   N12 ,Bn1 ,v127
 .byte   W24
 .byte   N16
 .byte   W24
@  #02 @042   ----------------------------------------
 .byte   N24 ,Cn2
 .byte   W36
 .byte   N19
 .byte   W24
 .byte   N05
 .byte   W12
 .byte   Cn3 ,v120
 .byte   W12
 .byte   Cn2 ,v127
 .byte   W12
@  #02 @043   ----------------------------------------
 .byte   N24 ,Dn2
 .byte   W24
 .byte   N08 ,Dn3 ,v120
 .byte   W12
 .byte   N19 ,Dn2 ,v127
 .byte   W24
 .byte   N05
 .byte   W12
 .byte   Dn3 ,v120
 .byte   W12
 .byte   Dn2 ,v127
 .byte   W12
@  #02 @044   ----------------------------------------
 .byte   N22 ,Cn2
 .byte   W24
 .byte   N04 ,Cn3
 .byte   W12
 .byte   N16 ,Cn2
 .byte   W24
 .byte   N05
 .byte   W12
 .byte   N02
 .byte   W12
 .byte   N06 ,Cn3
 .byte   W06
 .byte   N03 ,Cn2
 .byte   W06
@  #02 @045   ----------------------------------------
 .byte   N20 ,Dn2
 .byte   W24
 .byte   N04 ,Dn3 ,v116
 .byte   W12
 .byte   N14 ,Dn2 ,v127
 .byte   W24
 .byte   N07
 .byte   W12
 .byte   N04 ,Dn3
 .byte   W12
 .byte   N06 ,Dn2
 .byte   W12
@  #02 @046   ----------------------------------------
 .byte   GOTO
  .word Label_800728
 .byte   FINE

@**************** Track 3 (Midi-Chn.2) ****************@

bgm_map_FE08_05_003:
@  #03 @000   ----------------------------------------
 .byte   KEYSH , bgm_map_FE08_05_key+0
 .byte   W12
Label_800987:
 .byte   VOICE , 4
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v-39
 .byte   N54 ,En3 ,v108
 .byte   W60
 .byte   N06
 .byte   W06
 .byte   En3 ,v060
 .byte   W06
 .byte   Dn3 ,v108
 .byte   W06
 .byte   Dn3 ,v060
 .byte   W06
@  #03 @001   ----------------------------------------
 .byte   Bn2 ,v108
 .byte   W06
 .byte   Bn2 ,v060
 .byte   W06
 .byte   N30 ,Dn3 ,v108
 .byte   W36
 .byte   En3
 .byte   W36
 .byte   N18 ,Fs3
 .byte   W24
@  #03 @002   ----------------------------------------
 .byte   N54 ,Gn3
 .byte   W60
 .byte   N06
 .byte   W06
 .byte   Gn3 ,v060
 .byte   W06
 .byte   Fs3 ,v108
 .byte   W06
 .byte   Fs3 ,v060
 .byte   W06
 .byte   En3 ,v108
 .byte   W06
 .byte   En3 ,v060
 .byte   W06
@  #03 @003   ----------------------------------------
 .byte   N30 ,Fs3 ,v108
 .byte   W36
 .byte   Gn3
 .byte   W36
 .byte   N18 ,An3
 .byte   W24
@  #03 @004   ----------------------------------------
 .byte   N78 ,Gn3
 .byte   W78
 .byte   N06 ,Gn3 ,v060
 .byte   W12
 .byte   N04 ,Bn3 ,v108
 .byte   W06
@  #03 @005   ----------------------------------------
 .byte   N84
 .byte   W36
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W05
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Bn3 ,v060
 .byte   W02
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #03 @006   ----------------------------------------
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   N54 ,Dn3 ,v108
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W56
 .byte   W03
 .byte   N06
 .byte   W06
 .byte   Dn3 ,v060
 .byte   W06
 .byte   Bn2 ,v108
 .byte   W06
 .byte   Bn2 ,v060
 .byte   W06
 .byte   An2 ,v108
 .byte   W06
 .byte   An2 ,v060
 .byte   W06
@  #03 @007   ----------------------------------------
 .byte   N30 ,Bn2 ,v108
 .byte   W36
 .byte   Dn3
 .byte   W36
 .byte   N24 ,En3
 .byte   W24
@  #03 @008   ----------------------------------------
 .byte   N54
 .byte   W60
 .byte   N06
 .byte   W06
 .byte   En3 ,v060
 .byte   W06
 .byte   Dn3 ,v108
 .byte   W06
 .byte   Dn3 ,v060
 .byte   W06
 .byte   Bn2 ,v108
 .byte   W06
 .byte   Bn2 ,v060
 .byte   W06
@  #03 @009   ----------------------------------------
 .byte   N30 ,Dn3 ,v108
 .byte   W30
 .byte   N06 ,Dn3 ,v060
 .byte   W06
 .byte   N30 ,En3 ,v108
 .byte   W30
 .byte   N06 ,En3 ,v060
 .byte   W06
 .byte   N24 ,Fs3 ,v108
 .byte   W24
@  #03 @010   ----------------------------------------
 .byte   N90 ,Gn3
 .byte   W44
 .byte   W02
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Dn3
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W04
@  #03 @011   ----------------------------------------
 .byte   N90
 .byte   W13
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W17
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W17
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Gn3
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W05
@  #03 @012   ----------------------------------------
 .byte   N90
 .byte   W08
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W13
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W12
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W13
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Dn3
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W03
@  #03 @013   ----------------------------------------
 .byte   N84
 .byte   W44
 .byte   W03
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Dn3 ,v032
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #03 @014   ----------------------------------------
 .byte   VOL , 17*bgm_map_FE08_05_mvl/mxv
 .byte   N56 ,Gn3 ,v096
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W44
 .byte   N12
 .byte   W12
 .byte   Fs3
 .byte   W12
 .byte   N09 ,Gn3
 .byte   W12
@  #03 @015   ----------------------------------------
 .byte   N42
 .byte   W42
 .byte   N06 ,Gn3 ,v032
 .byte   W06
 .byte   N12 ,Gn3 ,v096
 .byte   W12
 .byte   Fs3
 .byte   W12
 .byte   N24 ,Gn3
 .byte   W24
@  #03 @016   ----------------------------------------
 .byte   N56 ,Dn3
 .byte   W60
 .byte   N12
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Fs3
 .byte   W12
@  #03 @017   ----------------------------------------
 .byte   N60 ,Bn2
 .byte   W60
 .byte   N06 ,Bn2 ,v032
 .byte   W12
 .byte   N24 ,Fs2 ,v096
 .byte   W24
@  #03 @018   ----------------------------------------
 .byte   N56 ,Cn3
 .byte   W60
 .byte   N12
 .byte   W12
 .byte   Bn2
 .byte   W12
 .byte   Cn3
 .byte   W12
@  #03 @019   ----------------------------------------
 .byte   N36 ,Gn3
 .byte   W36
 .byte   N12 ,Fs3
 .byte   W12
 .byte   N24 ,En3
 .byte   W24
 .byte   Fs3
 .byte   W24
@  #03 @020   ----------------------------------------
 .byte   N12 ,Dn3
 .byte   W03
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,En3
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   N12 ,Dn3
 .byte   W02
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   N12 ,En3
 .byte   W02
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,Dn3
 .byte   W03
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,En3
 .byte   W03
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   N12 ,Dn3
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   N12 ,En3
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #03 @021   ----------------------------------------
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,Fs3
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,Gn3
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W08
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   N12 ,Fs3
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   N12 ,Gn3
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   N12 ,Fs3
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,Gn3
 .byte   W04
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   N12 ,Fs3
 .byte   W04
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   N12 ,Gn3
 .byte   W03
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #03 @022   ----------------------------------------
 .byte   N12 ,An3
 .byte   W03
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   N12 ,Bn3
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W10
 .byte   N12 ,An3
 .byte   W12
 .byte   Bn3
 .byte   W05
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W07
 .byte   N12 ,An3
 .byte   W12
 .byte   Bn3
 .byte   W08
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   N12 ,An3
 .byte   W12
 .byte   Bn3
 .byte   W11
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #03 @023   ----------------------------------------
 .byte   VOICE , 5
 .byte   N06 ,En4
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   Dn4
 .byte   W24
 .byte   Fs4
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   En4
 .byte   W24
@  #03 @024   ----------------------------------------
Label_800D27:
 .byte   N06 ,Gn4 ,v096
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   En4
 .byte   W12
 .byte   Fs4
 .byte   W12
 .byte   Dn4
 .byte   W12
 .byte   En4
 .byte   W12
 .byte   Bn3
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   Dn4
 .byte   W06
 .byte   PEND
@  #03 @025   ----------------------------------------
 .byte   En4
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   Dn4
 .byte   W24
 .byte   Fs4
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   En4
 .byte   W24
@  #03 @026   ----------------------------------------
 .byte   PATT
  .word Label_800D27
@  #03 @027   ----------------------------------------
 .byte   VOICE , 2
 .byte   N06 ,An3 ,v096
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   Gs3
 .byte   W24
 .byte   Bn3
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   An3
 .byte   W23
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #03 @028   ----------------------------------------
 .byte   N06 ,Cs4
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   Bn3
 .byte   W12
 .byte   Gs3
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   Fs3
 .byte   W12
 .byte   Cs3
 .byte   W06
 .byte   En3
 .byte   W06
@  #03 @029   ----------------------------------------
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Bn2
 .byte   W12
 .byte   Fs3
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Cn3
 .byte   W12
@  #03 @030   ----------------------------------------
 .byte   Gn3
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   Fs3
 .byte   W06
 .byte   Dn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Bn2
 .byte   W12
 .byte   Dn3
 .byte   W12
@  #03 @031   ----------------------------------------
 .byte   En3
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Bn2
 .byte   W12
 .byte   Fs3
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Bn2
 .byte   W12
@  #03 @032   ----------------------------------------
 .byte   Gn3
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   Fs3
 .byte   W06
 .byte   Dn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Bn2
 .byte   W12
 .byte   Dn3
 .byte   W11
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #03 @033   ----------------------------------------
 .byte   N96 ,Bn2
 .byte   W04
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #03 @034   ----------------------------------------
 .byte   N96 ,En3
 .byte   W02
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #03 @035   ----------------------------------------
 .byte   N96 ,Bn2
 .byte   TIE ,En3
 .byte   W05
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W03
@  #03 @036   ----------------------------------------
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   N44 ,An2
 .byte   W04
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   EOT
 .byte   En3
 .byte   N44 ,Bn2
 .byte   N44 ,Dn3
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W02
@  #03 @037   ----------------------------------------
 .byte   N96 ,Cn3
 .byte   N96 ,En3
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #03 @038   ----------------------------------------
 .byte   N96 ,Bn2
 .byte   N72 ,Dn3
 .byte   W04
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   N06
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   N06 ,En3
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   N06 ,Fs3
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #03 @039   ----------------------------------------
 .byte   N78 ,Cs3
 .byte   TIE ,Gn3
 .byte   W04
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   N12 ,Dn3
 .byte   W02
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   W02
@  #03 @040   ----------------------------------------
 .byte   N48 ,En3
 .byte   W48
 .byte   EOT
 .byte   Gn3
 .byte   N12 ,Ds3
 .byte   N12 ,Fs3
 .byte   W12
 .byte   N06 ,Ds3 ,v048
 .byte   N06 ,Fs3
 .byte   W24
 .byte   VOICE , 4
 .byte   N03 ,Gn3 ,v096
 .byte   W06
 .byte   N03
 .byte   W06
@  #03 @041   ----------------------------------------
 .byte   N72
 .byte   W72
 .byte   N06 ,Gn3 ,v048
 .byte   W12
 .byte   En3 ,v096
 .byte   W06
 .byte   En3 ,v048
 .byte   W06
@  #03 @042   ----------------------------------------
 .byte   N48 ,Bn3 ,v096
 .byte   W48
 .byte   N24 ,An3
 .byte   W24
 .byte   N06 ,An3 ,v048
 .byte   W12
 .byte   N03 ,Cn4 ,v096
 .byte   W06
 .byte   N03
 .byte   W06
@  #03 @043   ----------------------------------------
 .byte   N72 ,Cn4 ,v060
 .byte   W72
 .byte   N06 ,Cn4 ,v024
 .byte   W12
 .byte   An3 ,v060
 .byte   W06
 .byte   An3 ,v024
 .byte   W06
@  #03 @044   ----------------------------------------
 .byte   N48 ,En4 ,v060
 .byte   W48
 .byte   N18 ,Dn4
 .byte   W18
 .byte   N06 ,Dn4 ,v024
 .byte   W06
 .byte   Cn4 ,v060
 .byte   W06
 .byte   Cn4 ,v024
 .byte   W06
 .byte   Bn3 ,v060
 .byte   W06
 .byte   Bn3 ,v024
 .byte   W06
@  #03 @045   ----------------------------------------
 .byte   GOTO
  .word Label_800987
 .byte   FINE

@**************** Track 4 (Midi-Chn.3) ****************@

bgm_map_FE08_05_004:
@  #04 @000   ----------------------------------------
 .byte   KEYSH , bgm_map_FE08_05_key+0
 .byte   W12
Label_801066:
 .byte   W96
@  #04 @001   ----------------------------------------
 .byte   W96
@  #04 @002   ----------------------------------------
 .byte   W96
@  #04 @003   ----------------------------------------
 .byte   W96
@  #04 @004   ----------------------------------------
 .byte   W96
@  #04 @005   ----------------------------------------
 .byte   W92
 .byte   W03
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #04 @006   ----------------------------------------
 .byte   VOICE , 6
 .byte   MOD , 0
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+16
 .byte   N06 ,Dn2 ,v112
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
@  #04 @007   ----------------------------------------
 .byte   W12
 .byte   Cn2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #04 @008   ----------------------------------------
 .byte   En2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
@  #04 @009   ----------------------------------------
 .byte   W12
 .byte   Dn2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #04 @010   ----------------------------------------
 .byte   W96
@  #04 @011   ----------------------------------------
 .byte   W96
@  #04 @012   ----------------------------------------
 .byte   W96
@  #04 @013   ----------------------------------------
 .byte   W96
@  #04 @014   ----------------------------------------
 .byte   W96
@  #04 @015   ----------------------------------------
 .byte   W96
@  #04 @016   ----------------------------------------
 .byte   W96
@  #04 @017   ----------------------------------------
 .byte   W96
@  #04 @018   ----------------------------------------
 .byte   W96
@  #04 @019   ----------------------------------------
 .byte   W96
@  #04 @020   ----------------------------------------
 .byte   W72
 .byte   VOICE , 5
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v-34
 .byte   W24
@  #04 @021   ----------------------------------------
 .byte   W96
@  #04 @022   ----------------------------------------
 .byte   N06 ,Fs4 ,v104
 .byte   W06
 .byte   En4
 .byte   W06
 .byte   Fs4
 .byte   W12
 .byte   An4
 .byte   W06
 .byte   Gn4
 .byte   W06
 .byte   An4
 .byte   W12
 .byte   Bn4
 .byte   W06
 .byte   An4
 .byte   W06
 .byte   Bn4
 .byte   W12
 .byte   Ds5
 .byte   W06
 .byte   Cs5
 .byte   W06
 .byte   Ds5
 .byte   W12
@  #04 @023   ----------------------------------------
 .byte   TIE ,En4 ,v096
 .byte   W96
@  #04 @024   ----------------------------------------
 .byte   W80
 .byte   W01
 .byte   EOT
 .byte   W03
 .byte   N04 ,En4 ,v104
 .byte   W06
 .byte   N04
 .byte   W06
@  #04 @025   ----------------------------------------
 .byte   N92 ,En4 ,v096
 .byte   W96
@  #04 @026   ----------------------------------------
 .byte   N44 ,Fs4
 .byte   W48
 .byte   N28 ,Gn4
 .byte   W30
 .byte   N05 ,Fs4 ,v104
 .byte   W06
 .byte   En4
 .byte   W06
 .byte   Dn4
 .byte   W06
@  #04 @027   ----------------------------------------
 .byte   TIE ,Cs4 ,v096
 .byte   W96
@  #04 @028   ----------------------------------------
 .byte   W92
 .byte   W03
 .byte   EOT
 .byte   W01
@  #04 @029   ----------------------------------------
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+14
 .byte   N06 ,En4
 .byte   W06
 .byte   En4 ,v044
 .byte   W06
 .byte   En4 ,v096
 .byte   W06
 .byte   En4 ,v044
 .byte   W06
 .byte   Dn4 ,v096
 .byte   W06
 .byte   Dn4 ,v044
 .byte   W06
 .byte   Bn3 ,v096
 .byte   W06
 .byte   Bn3 ,v044
 .byte   W06
 .byte   Fs4 ,v096
 .byte   W06
 .byte   Fs4 ,v044
 .byte   W06
 .byte   Fs4 ,v096
 .byte   W06
 .byte   Fs4 ,v044
 .byte   W06
 .byte   En4 ,v096
 .byte   W06
 .byte   En4 ,v044
 .byte   W06
 .byte   Cn4 ,v096
 .byte   W06
 .byte   Cn4 ,v044
 .byte   W06
@  #04 @030   ----------------------------------------
 .byte   Gn4 ,v096
 .byte   W06
 .byte   Gn4 ,v044
 .byte   W06
 .byte   Gn4 ,v096
 .byte   W06
 .byte   Gn4 ,v044
 .byte   W06
 .byte   En4 ,v096
 .byte   W06
 .byte   En4 ,v044
 .byte   W06
 .byte   En4 ,v096
 .byte   W06
 .byte   En4 ,v044
 .byte   N06 ,Fs4 ,v096
 .byte   W06
 .byte   Dn4
 .byte   N06 ,Fs4 ,v044
 .byte   W06
 .byte   Dn4
 .byte   W06
 .byte   En4 ,v096
 .byte   W06
 .byte   En4 ,v044
 .byte   W06
 .byte   Bn3 ,v096
 .byte   W06
 .byte   Bn3 ,v044
 .byte   W06
 .byte   Dn4 ,v096
 .byte   W06
 .byte   Dn4 ,v044
 .byte   W06
@  #04 @031   ----------------------------------------
 .byte   En4 ,v096
 .byte   W06
 .byte   En4 ,v044
 .byte   W06
 .byte   En4 ,v096
 .byte   W06
 .byte   En4 ,v044
 .byte   W06
 .byte   Dn4 ,v096
 .byte   W06
 .byte   Dn4 ,v044
 .byte   W06
 .byte   Bn3 ,v096
 .byte   W06
 .byte   Bn3 ,v044
 .byte   W06
 .byte   Fs4 ,v096
 .byte   W06
 .byte   Fs4 ,v044
 .byte   W06
 .byte   Fs4 ,v096
 .byte   W06
 .byte   Fs4 ,v044
 .byte   W06
 .byte   En4 ,v096
 .byte   W06
 .byte   En4 ,v044
 .byte   W06
 .byte   Cn4 ,v096
 .byte   W06
 .byte   Cn4 ,v044
 .byte   W06
@  #04 @032   ----------------------------------------
 .byte   Gn4 ,v096
 .byte   W06
 .byte   Gn4 ,v044
 .byte   W06
 .byte   Gn4 ,v096
 .byte   W06
 .byte   Gn4 ,v044
 .byte   W06
 .byte   En4 ,v096
 .byte   W06
 .byte   En4 ,v044
 .byte   W06
 .byte   En4 ,v096
 .byte   W06
 .byte   En4 ,v044
 .byte   N06 ,Fs4 ,v096
 .byte   W06
 .byte   Dn4
 .byte   N06 ,Fs4 ,v044
 .byte   W06
 .byte   Dn4
 .byte   W06
 .byte   En4 ,v096
 .byte   W06
 .byte   En4 ,v044
 .byte   W06
 .byte   Bn3 ,v096
 .byte   W06
 .byte   Bn3 ,v044
 .byte   W06
 .byte   Dn4 ,v096
 .byte   W06
 .byte   Dn4 ,v044
 .byte   W05
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #04 @033   ----------------------------------------
 .byte   VOICE , 7
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v-34
 .byte   N06 ,En3 ,v108
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   Bn3 ,v108
 .byte   W06
 .byte   Bn3 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
 .byte   Fs4 ,v108
 .byte   W06
 .byte   Fs4 ,v032
 .byte   W06
 .byte   En3 ,v108
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   Bn3 ,v108
 .byte   W06
 .byte   Bn3 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
 .byte   Fs4 ,v108
 .byte   W06
 .byte   Fs4 ,v032
 .byte   W06
@  #04 @034   ----------------------------------------
 .byte   Dn3 ,v108
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   Bn3 ,v108
 .byte   W06
 .byte   Bn3 ,v032
 .byte   W06
 .byte   An4 ,v108
 .byte   W06
 .byte   An4 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
 .byte   Dn3 ,v108
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   Bn3 ,v108
 .byte   W06
 .byte   Bn3 ,v032
 .byte   W06
 .byte   An4 ,v108
 .byte   W06
 .byte   An4 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
@  #04 @035   ----------------------------------------
 .byte   Cs3 ,v108
 .byte   W06
 .byte   Cs3 ,v032
 .byte   W06
 .byte   En4 ,v108
 .byte   W06
 .byte   En4 ,v032
 .byte   W06
 .byte   Fs4 ,v108
 .byte   W06
 .byte   Fs4 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
 .byte   An4 ,v108
 .byte   W06
 .byte   An4 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
 .byte   Fs4 ,v108
 .byte   W06
 .byte   Fs4 ,v032
 .byte   W06
 .byte   Bn4 ,v108
 .byte   W06
 .byte   Bn4 ,v032
 .byte   W06
@  #04 @036   ----------------------------------------
 .byte   Cn3 ,v108
 .byte   W06
 .byte   Cn3 ,v032
 .byte   W06
 .byte   Cn4 ,v108
 .byte   W06
 .byte   Cn4 ,v032
 .byte   W06
 .byte   En4 ,v108
 .byte   W06
 .byte   En4 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
 .byte   Dn4 ,v108
 .byte   W06
 .byte   Dn4 ,v032
 .byte   W06
 .byte   Bn3 ,v108
 .byte   W06
 .byte   Bn3 ,v032
 .byte   W06
 .byte   Dn4 ,v108
 .byte   W06
 .byte   Dn4 ,v032
 .byte   W06
 .byte   Fs4 ,v108
 .byte   W06
 .byte   Fs4 ,v032
 .byte   W06
@  #04 @037   ----------------------------------------
 .byte   Cn3 ,v108
 .byte   W06
 .byte   Cn3 ,v032
 .byte   W06
 .byte   Gn3 ,v108
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W06
 .byte   En4 ,v108
 .byte   W06
 .byte   En4 ,v032
 .byte   W06
 .byte   Dn4 ,v108
 .byte   W06
 .byte   Dn4 ,v032
 .byte   W06
 .byte   Cn3 ,v108
 .byte   W06
 .byte   Cn3 ,v032
 .byte   W06
 .byte   Gn3 ,v108
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W06
 .byte   En4 ,v108
 .byte   W06
 .byte   En4 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
@  #04 @038   ----------------------------------------
 .byte   Dn3 ,v108
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   An3 ,v108
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
 .byte   Fs4 ,v108
 .byte   W06
 .byte   Fs4 ,v032
 .byte   W06
 .byte   Dn3 ,v108
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   An3 ,v108
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   An4 ,v108
 .byte   W06
 .byte   An4 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
@  #04 @039   ----------------------------------------
 .byte   Cs3 ,v108
 .byte   W06
 .byte   Cs3 ,v032
 .byte   W06
 .byte   En4 ,v108
 .byte   W06
 .byte   En4 ,v032
 .byte   W06
 .byte   Fs4 ,v108
 .byte   W06
 .byte   Fs4 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
 .byte   An4 ,v108
 .byte   W06
 .byte   An4 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
 .byte   Fs4 ,v108
 .byte   W06
 .byte   Fs4 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
@  #04 @040   ----------------------------------------
 .byte   An3 ,v108
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   Cn4 ,v108
 .byte   W06
 .byte   Cn4 ,v032
 .byte   W06
 .byte   En4 ,v108
 .byte   W06
 .byte   En4 ,v032
 .byte   W06
 .byte   An4 ,v108
 .byte   W06
 .byte   An4 ,v032
 .byte   W06
 .byte   Bn4 ,v108
 .byte   W06
 .byte   Bn4 ,v032
 .byte   W06
 .byte   Bn3 ,v108
 .byte   W06
 .byte   Bn3 ,v032
 .byte   W06
 .byte   Ds4 ,v108
 .byte   W06
 .byte   Ds4 ,v032
 .byte   W06
 .byte   Fs4 ,v108
 .byte   W06
 .byte   Fs4 ,v032
 .byte   W06
@  #04 @041   ----------------------------------------
Label_801353:
 .byte   N06 ,Cn3 ,v108
 .byte   W06
 .byte   Cn3 ,v032
 .byte   W06
 .byte   En3 ,v108
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   Cn4 ,v108
 .byte   W06
 .byte   Cn4 ,v032
 .byte   W06
 .byte   En4 ,v108
 .byte   W06
 .byte   En4 ,v032
 .byte   W06
 .byte   Dn5 ,v108
 .byte   W06
 .byte   Dn5 ,v032
 .byte   W06
 .byte   Cn5 ,v108
 .byte   W06
 .byte   Cn5 ,v032
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
 .byte   En4 ,v108
 .byte   W06
 .byte   En4 ,v032
 .byte   W06
 .byte   PEND
@  #04 @042   ----------------------------------------
Label_801385:
 .byte   N06 ,Dn3 ,v108
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   Fs3 ,v108
 .byte   W06
 .byte   Fs3 ,v032
 .byte   W06
 .byte   Dn4 ,v108
 .byte   W06
 .byte   Dn4 ,v032
 .byte   W06
 .byte   Fs4 ,v108
 .byte   W06
 .byte   Fs4 ,v032
 .byte   W06
 .byte   En5 ,v108
 .byte   W06
 .byte   En5 ,v032
 .byte   W06
 .byte   Dn5 ,v108
 .byte   W06
 .byte   Dn5 ,v032
 .byte   W06
 .byte   An4 ,v108
 .byte   W06
 .byte   An4 ,v032
 .byte   W06
 .byte   Fs4 ,v108
 .byte   W06
 .byte   Fs4 ,v032
 .byte   W06
 .byte   PEND
@  #04 @043   ----------------------------------------
 .byte   PATT
  .word Label_801353
@  #04 @044   ----------------------------------------
 .byte   PATT
  .word Label_801385
@  #04 @045   ----------------------------------------
 .byte   GOTO
  .word Label_801066
 .byte   FINE

@**************** Track 5 (Midi-Chn.4) ****************@

bgm_map_FE08_05_005:
@  #05 @000   ----------------------------------------
 .byte   KEYSH , bgm_map_FE08_05_key+0
 .byte   W12
Label_8013CA:
 .byte   VOICE , 8
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v-14
 .byte   W12
 .byte   N06 ,Gn2 ,v112
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
@  #05 @001   ----------------------------------------
 .byte   N06
 .byte   W12
Label_8013DD:
 .byte   N06 ,Fs2 ,v112
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   PEND
@  #05 @002   ----------------------------------------
Label_8013EA:
 .byte   W12
 .byte   N06 ,Gn2 ,v112
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   PEND
@  #05 @003   ----------------------------------------
 .byte   PATT
  .word Label_8013DD
@  #05 @004   ----------------------------------------
 .byte   PATT
  .word Label_8013EA
@  #05 @005   ----------------------------------------
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Gn2 ,v112
 .byte   W06
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   N06
 .byte   W06
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   N06
 .byte   W06
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 16*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 14*bgm_map_FE08_05_mvl/mxv
 .byte   N06
 .byte   W06
 .byte   VOL , 12*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 10*bgm_map_FE08_05_mvl/mxv
 .byte   N06
 .byte   W06
 .byte   VOL , 8*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 6*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 3*bgm_map_FE08_05_mvl/mxv
 .byte   W06
@  #05 @006   ----------------------------------------
 .byte   W96
@  #05 @007   ----------------------------------------
 .byte   W96
@  #05 @008   ----------------------------------------
 .byte   W96
@  #05 @009   ----------------------------------------
 .byte   W96
@  #05 @010   ----------------------------------------
 .byte   VOICE , 8
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v-14
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
@  #05 @011   ----------------------------------------
Label_801445:
 .byte   W12
 .byte   N06 ,Fs2 ,v112
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   PEND
@  #05 @012   ----------------------------------------
 .byte   Gn2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
@  #05 @013   ----------------------------------------
 .byte   PATT
  .word Label_801445
@  #05 @014   ----------------------------------------
 .byte   W96
@  #05 @015   ----------------------------------------
 .byte   W96
@  #05 @016   ----------------------------------------
 .byte   W96
@  #05 @017   ----------------------------------------
 .byte   W96
@  #05 @018   ----------------------------------------
 .byte   W96
@  #05 @019   ----------------------------------------
 .byte   W96
@  #05 @020   ----------------------------------------
 .byte   W96
@  #05 @021   ----------------------------------------
 .byte   W96
@  #05 @022   ----------------------------------------
 .byte   N92 ,Fs3 ,v116
 .byte   W04
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 16*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 13*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 10*bgm_map_FE08_05_mvl/mxv
 .byte   W04
 .byte   VOL , 10*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 10*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 11*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 11*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 11*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 12*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 12*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 13*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 13*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 13*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 14*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 14*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 14*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 15*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 16*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 16*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   W13
@  #05 @023   ----------------------------------------
 .byte   W96
@  #05 @024   ----------------------------------------
 .byte   W96
@  #05 @025   ----------------------------------------
 .byte   W96
@  #05 @026   ----------------------------------------
 .byte   W96
@  #05 @027   ----------------------------------------
 .byte   W96
@  #05 @028   ----------------------------------------
 .byte   W96
@  #05 @029   ----------------------------------------
 .byte   VOICE , 1
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+0
 .byte   W96
@  #05 @030   ----------------------------------------
 .byte   W96
@  #05 @031   ----------------------------------------
 .byte   N80 ,Bn2 ,v060
 .byte   W84
 .byte   N06
 .byte   W06
 .byte   Cn3
 .byte   W06
@  #05 @032   ----------------------------------------
 .byte   N96 ,Dn3
 .byte   N48 ,Fs3 ,v076
 .byte   W48
 .byte   N42 ,Gn3
 .byte   W36
 .byte   W02
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   N05 ,Gn3 ,v032
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #05 @033   ----------------------------------------
 .byte   N96 ,En3 ,v076
 .byte   W08
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W05
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W06
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W05
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W03
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 45*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 42*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 14*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 11*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 9*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 7*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 5*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 2*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 0*bgm_map_FE08_05_mvl/mxv
 .byte   W02
@  #05 @034   ----------------------------------------
 .byte   W12
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   W84
@  #05 @035   ----------------------------------------
 .byte   W96
@  #05 @036   ----------------------------------------
 .byte   VOICE , 5
 .byte   N12 ,En3 ,v108
 .byte   W12
 .byte   En3 ,v060
 .byte   W12
 .byte   N04 ,En3 ,v108
 .byte   W04
 .byte   En3 ,v060
 .byte   W04
 .byte   En3 ,v108
 .byte   W04
 .byte   En3 ,v060
 .byte   W04
 .byte   En3 ,v108
 .byte   W04
 .byte   En3 ,v060
 .byte   W04
 .byte   N12 ,Fs3 ,v108
 .byte   W12
 .byte   Fs3 ,v060
 .byte   W12
 .byte   Fs3 ,v108
 .byte   W12
 .byte   Fs3 ,v060
 .byte   W12
@  #05 @037   ----------------------------------------
 .byte   Gn3 ,v108
 .byte   W12
 .byte   Gn3 ,v060
 .byte   W12
 .byte   N04 ,Fs3 ,v108
 .byte   W04
 .byte   Fs3 ,v060
 .byte   W04
 .byte   Gn3 ,v108
 .byte   W04
 .byte   Gn3 ,v060
 .byte   W04
 .byte   Fs3 ,v108
 .byte   W04
 .byte   Fs3 ,v060
 .byte   W04
 .byte   N12 ,En3 ,v108
 .byte   W12
 .byte   En3 ,v060
 .byte   W12
 .byte   Dn3 ,v108
 .byte   W12
 .byte   Dn3 ,v060
 .byte   W12
@  #05 @038   ----------------------------------------
 .byte   Fs3 ,v108
 .byte   W12
 .byte   Fs3 ,v060
 .byte   W12
 .byte   N04 ,En3 ,v108
 .byte   W04
 .byte   En3 ,v060
 .byte   W04
 .byte   Fs3 ,v108
 .byte   W04
 .byte   Fs3 ,v060
 .byte   W04
 .byte   En3 ,v108
 .byte   W04
 .byte   En3 ,v060
 .byte   W04
 .byte   N12 ,Gn3 ,v108
 .byte   W12
 .byte   Gn3 ,v060
 .byte   W12
 .byte   Fs3 ,v108
 .byte   W12
 .byte   Fs3 ,v060
 .byte   W12
@  #05 @039   ----------------------------------------
 .byte   Cs3 ,v108
 .byte   W12
 .byte   Cs3 ,v060
 .byte   W12
 .byte   N04 ,Cs3 ,v108
 .byte   W04
 .byte   Cs3 ,v060
 .byte   W04
 .byte   Cs3 ,v108
 .byte   W04
 .byte   Cs3 ,v060
 .byte   W04
 .byte   Cs3 ,v108
 .byte   W04
 .byte   Cs3 ,v060
 .byte   W04
 .byte   N12 ,Cs3 ,v108
 .byte   W12
 .byte   Cs3 ,v060
 .byte   W12
 .byte   Cs3 ,v108
 .byte   W12
 .byte   Cs3 ,v060
 .byte   W12
@  #05 @040   ----------------------------------------
 .byte   En3 ,v108
 .byte   W12
 .byte   En3 ,v060
 .byte   W12
 .byte   N04 ,En3 ,v108
 .byte   W04
 .byte   En3 ,v060
 .byte   W04
 .byte   En3 ,v108
 .byte   W04
 .byte   En3 ,v060
 .byte   W04
 .byte   En3 ,v108
 .byte   W04
 .byte   En3 ,v060
 .byte   W04
 .byte   N12 ,Fs3 ,v108
 .byte   W12
 .byte   Fs3 ,v060
 .byte   W36
@  #05 @041   ----------------------------------------
 .byte   N84 ,Cn3 ,v080
 .byte   W84
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
@  #05 @042   ----------------------------------------
 .byte   N96 ,An2
 .byte   W96
@  #05 @043   ----------------------------------------
 .byte   W09
 .byte   N06 ,Dn3
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W15
@  #05 @044   ----------------------------------------
 .byte   VOICE , 8
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v-14
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
@  #05 @045   ----------------------------------------
 .byte   GOTO
  .word Label_8013CA
 .byte   FINE

@**************** Track 6 (Midi-Chn.5) ****************@

bgm_map_FE08_05_006:
@  #06 @000   ----------------------------------------
 .byte   KEYSH , bgm_map_FE08_05_key+0
 .byte   W12
Label_80168C:
 .byte   VOICE , 8
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+11
 .byte   W12
 .byte   N06 ,En2 ,v112
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
@  #06 @001   ----------------------------------------
 .byte   N06
 .byte   W12
Label_80169F:
 .byte   N06 ,Dn2 ,v112
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   PEND
@  #06 @002   ----------------------------------------
Label_8016AC:
 .byte   W12
 .byte   N06 ,En2 ,v112
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   PEND
@  #06 @003   ----------------------------------------
 .byte   PATT
  .word Label_80169F
@  #06 @004   ----------------------------------------
 .byte   W12
 .byte   N06 ,En2 ,v112
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W11
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #06 @005   ----------------------------------------
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   N06
 .byte   W01
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   N06
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   N06
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 16*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 16*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 14*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 14*bgm_map_FE08_05_mvl/mxv
 .byte   N06
 .byte   W01
 .byte   VOL , 14*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 13*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 13*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 13*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 12*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 12*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 11*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 11*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 11*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 10*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 10*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 10*bgm_map_FE08_05_mvl/mxv
 .byte   N06
 .byte   W01
 .byte   VOL , 9*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 9*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 9*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 8*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 8*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 7*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 7*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 7*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 6*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 6*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 5*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 5*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 5*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 4*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 4*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 8*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #06 @006   ----------------------------------------
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   N06 ,Fs2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
@  #06 @007   ----------------------------------------
 .byte   PATT
  .word Label_8016AC
@  #06 @008   ----------------------------------------
 .byte   N06 ,Gn2 ,v112
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
@  #06 @009   ----------------------------------------
 .byte   W12
 .byte   Fs2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #06 @010   ----------------------------------------
Label_8017B7:
 .byte   N06 ,En2 ,v112
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   PEND
@  #06 @011   ----------------------------------------
Label_8017C6:
 .byte   W12
 .byte   N06 ,Dn2 ,v112
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   PEND
@  #06 @012   ----------------------------------------
 .byte   PATT
  .word Label_8017B7
@  #06 @013   ----------------------------------------
 .byte   PATT
  .word Label_8017C6
@  #06 @014   ----------------------------------------
 .byte   N96 ,Gn2 ,v108
 .byte   W96
@  #06 @015   ----------------------------------------
 .byte   N96
 .byte   W96
@  #06 @016   ----------------------------------------
 .byte   Dn2
 .byte   W96
@  #06 @017   ----------------------------------------
 .byte   N96
 .byte   W96
@  #06 @018   ----------------------------------------
 .byte   En2
 .byte   W96
@  #06 @019   ----------------------------------------
 .byte   N96
 .byte   W96
@  #06 @020   ----------------------------------------
 .byte   Fs2
 .byte   W96
@  #06 @021   ----------------------------------------
 .byte   An2
 .byte   W92
 .byte   W03
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #06 @022   ----------------------------------------
 .byte   VOICE , 7
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+0
 .byte   W48
 .byte   N06 ,Bn3
 .byte   W06
 .byte   En4
 .byte   W06
 .byte   Ds4
 .byte   W06
 .byte   Gn4
 .byte   W06
 .byte   N04 ,Fs4 ,v096
 .byte   W04
 .byte   Bn4
 .byte   W04
 .byte   Cs5
 .byte   W04
 .byte   Ds5
 .byte   W04
 .byte   En5
 .byte   W04
 .byte   Fs5
 .byte   W04
@  #06 @023   ----------------------------------------
 .byte   VOICE , 2
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+0
 .byte   TIE ,Gn3
 .byte   W96
@  #06 @024   ----------------------------------------
 .byte   W80
 .byte   W01
 .byte   EOT
 .byte   W03
 .byte   N04 ,Gn3 ,v104
 .byte   W06
 .byte   N04
 .byte   W06
@  #06 @025   ----------------------------------------
 .byte   N92 ,Gn3 ,v096
 .byte   W96
@  #06 @026   ----------------------------------------
 .byte   N68
 .byte   W72
 .byte   N23 ,En3
 .byte   W24
@  #06 @027   ----------------------------------------
 .byte   TIE ,Fs3
 .byte   W96
@  #06 @028   ----------------------------------------
 .byte   W92
 .byte   W03
 .byte   EOT
 .byte   W01
@  #06 @029   ----------------------------------------
Label_801835:
 .byte   N06 ,Gn3 ,v124
 .byte   W06
 .byte   Gn3 ,v036
 .byte   W06
 .byte   Gn3 ,v124
 .byte   W06
 .byte   Gn3 ,v036
 .byte   W06
 .byte   Fs3 ,v127
 .byte   W06
 .byte   Fs3 ,v040
 .byte   W06
 .byte   Dn3 ,v127
 .byte   W06
 .byte   Dn3 ,v040
 .byte   W06
 .byte   An3 ,v127
 .byte   W06
 .byte   An3 ,v040
 .byte   W06
 .byte   An3 ,v127
 .byte   W06
 .byte   An3 ,v040
 .byte   W06
 .byte   Gn3 ,v124
 .byte   W06
 .byte   Gn3 ,v036
 .byte   W06
 .byte   En3 ,v124
 .byte   W06
 .byte   En3 ,v036
 .byte   W06
 .byte   PEND
@  #06 @030   ----------------------------------------
 .byte   Bn3 ,v127
 .byte   W06
 .byte   Bn3 ,v040
 .byte   W06
 .byte   Bn3 ,v127
 .byte   W06
 .byte   Bn3 ,v040
 .byte   W06
 .byte   Gn3 ,v124
 .byte   W06
 .byte   Gn3 ,v036
 .byte   W06
 .byte   Gn3 ,v116
 .byte   W06
 .byte   An3 ,v124
 .byte   W06
 .byte   Fs3 ,v127
 .byte   W06
 .byte   Fs3 ,v040
 .byte   W06
 .byte   Gn3 ,v127
 .byte   W06
 .byte   Gn3 ,v040
 .byte   W06
 .byte   Dn3 ,v116
 .byte   W06
 .byte   Dn3 ,v028
 .byte   W06
 .byte   Fs3 ,v127
 .byte   W06
 .byte   Fs3 ,v040
 .byte   W06
@  #06 @031   ----------------------------------------
 .byte   PATT
  .word Label_801835
@  #06 @032   ----------------------------------------
 .byte   N06 ,Bn3 ,v127
 .byte   W06
 .byte   Bn3 ,v040
 .byte   W06
 .byte   Bn3 ,v127
 .byte   W06
 .byte   Bn3 ,v040
 .byte   W06
 .byte   Gn3 ,v124
 .byte   W06
 .byte   Gn3 ,v036
 .byte   W06
 .byte   Gn3 ,v116
 .byte   W06
 .byte   An3 ,v124
 .byte   W06
 .byte   Fs3 ,v112
 .byte   W06
 .byte   Fs3 ,v040
 .byte   W06
 .byte   Gn3 ,v108
 .byte   W06
 .byte   Gn3 ,v040
 .byte   W06
 .byte   Dn3 ,v104
 .byte   W06
 .byte   Dn3 ,v028
 .byte   W06
 .byte   Fs3 ,v100
 .byte   W06
 .byte   Fs3 ,v040
 .byte   W06
@  #06 @033   ----------------------------------------
 .byte   TIE ,Gn3 ,v104
 .byte   W07
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W54
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 35*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_map_FE08_05_mvl/mxv
 .byte   W02
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #06 @034   ----------------------------------------
 .byte   VOL , 22*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 16*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 14*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 13*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 13*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 12*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 11*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 11*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 10*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 9*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 9*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 8*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 7*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 6*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 5*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 5*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 4*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 3*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 2*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 1*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 1*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 0*bgm_map_FE08_05_mvl/mxv
 .byte   W12
 .byte   EOT
 .byte   W15
 .byte   VOL , 6*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 16*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*bgm_map_FE08_05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W32
@  #06 @035   ----------------------------------------
 .byte   W96
@  #06 @036   ----------------------------------------
 .byte   W96
@  #06 @037   ----------------------------------------
 .byte   W96
@  #06 @038   ----------------------------------------
 .byte   W96
@  #06 @039   ----------------------------------------
 .byte   W96
@  #06 @040   ----------------------------------------
 .byte   W96
@  #06 @041   ----------------------------------------
 .byte   N84 ,Gn3 ,v080
 .byte   W84
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
@  #06 @042   ----------------------------------------
 .byte   N48
 .byte   W48
 .byte   Fs3
 .byte   W48
@  #06 @043   ----------------------------------------
 .byte   W12
 .byte   N06 ,Gn3
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W11
 .byte   VOL , 37*bgm_map_FE08_05_mvl/mxv
 .byte   W01
@  #06 @044   ----------------------------------------
 .byte   VOICE , 6
 .byte   VOL , 41*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N06 ,An3
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
@  #06 @045   ----------------------------------------
 .byte   GOTO
  .word Label_80168C
 .byte   FINE

@**************** Track 7 (Midi-Chn.6) ****************@

bgm_map_FE08_05_007:
@  #07 @000   ----------------------------------------
 .byte   KEYSH , bgm_map_FE08_05_key+0
 .byte   VOICE , 0
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N05 ,AnM2 ,v088
 .byte   W06
 .byte   AnM2 ,v072
 .byte   W06
Label_8019AC:
 .byte   N19 ,AnM2 ,v100
 .byte   N36 ,AsM2 ,v076
 .byte   W36
 .byte   N14 ,AnM2 ,v100
 .byte   W24
 .byte   N13
 .byte   W24
@  #07 @001   ----------------------------------------
 .byte   N03 ,AnM2 ,v088
 .byte   W12
Label_8019BD:
 .byte   N03 ,AnM2 ,v092
 .byte   W12
 .byte   N15 ,AnM2 ,v100
 .byte   W24
 .byte   AnM2 ,v096
 .byte   W24
 .byte   N03 ,AnM2 ,v076
 .byte   W12
 .byte   AnM2 ,v064
 .byte   W12
@  #07 @002   ----------------------------------------
 .byte   AnM2 ,v088
 .byte   W06
 .byte   N04 ,AnM2 ,v080
 .byte   W06
 .byte   PEND
 .byte   N19 ,AnM2 ,v100
 .byte   W36
 .byte   N14
 .byte   W24
 .byte   N13
 .byte   W24
@  #07 @003   ----------------------------------------
 .byte   N03 ,AnM2 ,v088
 .byte   W06
 .byte   N03
 .byte   W06
 .byte   N19 ,AnM2 ,v100
 .byte   W24
 .byte   N08
 .byte   W12
 .byte   N08
 .byte   W24
 .byte   N03 ,AnM2 ,v088
 .byte   W12
 .byte   N03
 .byte   W12
@  #07 @004   ----------------------------------------
 .byte   N04 ,AnM2 ,v080
 .byte   W06
 .byte   AnM2 ,v092
 .byte   W06
 .byte   N19 ,AnM2 ,v100
 .byte   W36
 .byte   N14
 .byte   W24
 .byte   N13
 .byte   W24
@  #07 @005   ----------------------------------------
 .byte   N03 ,AnM2 ,v088
 .byte   W12
@  #07 @006   ----------------------------------------
 .byte   PATT
  .word Label_8019BD
@  #07 @007   ----------------------------------------
 .byte   N23 ,AnM2 ,v100
 .byte   W36
 .byte   N15 ,AnM2 ,v096
 .byte   W24
 .byte   N13 ,AnM2 ,v088
 .byte   W24
 .byte   N05 ,AnM2 ,v096
 .byte   W12
@  #07 @008   ----------------------------------------
 .byte   N04 ,AnM2 ,v080
 .byte   W12
 .byte   N16 ,AnM2 ,v092
 .byte   W24
 .byte   N15 ,AnM2 ,v080
 .byte   W24
 .byte   N05
 .byte   W24
 .byte   N11 ,BnM2
 .byte   W12
@  #07 @009   ----------------------------------------
 .byte   N17 ,AnM2 ,v068
 .byte   W36
 .byte   N14 ,AnM2 ,v080
 .byte   W24
 .byte   N06 ,AnM2 ,v076
 .byte   W12
 .byte   N04 ,AnM2 ,v068
 .byte   W12
 .byte   N03 ,AnM2 ,v072
 .byte   W12
@  #07 @010   ----------------------------------------
 .byte   AnM2 ,v088
 .byte   W12
 .byte   N14 ,AnM2 ,v080
 .byte   W24
 .byte   N13 ,AnM2 ,v092
 .byte   W24
 .byte   N03 ,AnM2 ,v076
 .byte   W12
 .byte   AnM2 ,v072
 .byte   W12
 .byte   N11 ,BnM2 ,v096
 .byte   W12
@  #07 @011   ----------------------------------------
 .byte   N15 ,AnM2 ,v080
 .byte   N36 ,AsM2 ,v076
 .byte   W36
 .byte   N14 ,AnM2 ,v088
 .byte   W24
 .byte   N07 ,AnM2 ,v076
 .byte   W12
 .byte   N03 ,AnM2 ,v068
 .byte   W12
 .byte   N05 ,AnM2 ,v092
 .byte   W12
@  #07 @012   ----------------------------------------
 .byte   N21 ,AnM2 ,v096
 .byte   W36
 .byte   N12 ,AnM2 ,v072
 .byte   W24
 .byte   N04
 .byte   W12
 .byte   N04
 .byte   W12
 .byte   AnM2 ,v076
 .byte   W12
@  #07 @013   ----------------------------------------
 .byte   N21 ,AnM2 ,v096
 .byte   W36
 .byte   N14 ,AnM2 ,v076
 .byte   W24
 .byte   AnM2 ,v088
 .byte   W24
 .byte   N03 ,AnM2 ,v080
 .byte   W06
 .byte   N05 ,AnM2 ,v076
 .byte   W06
@  #07 @014   ----------------------------------------
 .byte   AnM2 ,v092
 .byte   W12
 .byte   N14
 .byte   W24
 .byte   AnM2 ,v088
 .byte   W24
 .byte   N03 ,AnM2 ,v080
 .byte   W12
 .byte   N03
 .byte   W12
 .byte   N04 ,AnM2 ,v092
 .byte   W06
 .byte   N03 ,AnM2 ,v080
 .byte   W06
@  #07 @015   ----------------------------------------
 .byte   N05 ,AnM2 ,v060
 .byte   W24
 .byte   N18 ,CnM1
 .byte   W36
 .byte   N18
 .byte   W36
@  #07 @016   ----------------------------------------
Label_801AAE:
 .byte   W24
 .byte   N18 ,CnM1 ,v072
 .byte   W36
 .byte   N11
 .byte   W12
 .byte   N18
 .byte   W24
 .byte   PEND
@  #07 @017   ----------------------------------------
Label_801AB8:
 .byte   W24
 .byte   N18 ,CnM1 ,v060
 .byte   W36
 .byte   N18
 .byte   W36
 .byte   PEND
@  #07 @018   ----------------------------------------
 .byte   PATT
  .word Label_801AAE
@  #07 @019   ----------------------------------------
 .byte   PATT
  .word Label_801AB8
@  #07 @020   ----------------------------------------
 .byte   PATT
  .word Label_801AAE
@  #07 @021   ----------------------------------------
 .byte   W24
 .byte   N18 ,CnM1 ,v060
 .byte   W36
 .byte   N11
 .byte   W12
 .byte   N18 ,CnM1 ,v068
 .byte   W24
@  #07 @022   ----------------------------------------
 .byte   W24
 .byte   CnM1 ,v060
 .byte   W36
 .byte   N11
 .byte   W12
 .byte   CnM1 ,v068
 .byte   W12
 .byte   N18
 .byte   W12
@  #07 @023   ----------------------------------------
 .byte   W24
 .byte   CnM1 ,v072
 .byte   W36
 .byte   N18
 .byte   W24
 .byte   N02 ,AnM2 ,v076
 .byte   W06
 .byte   N03 ,AnM2 ,v084
 .byte   W06
@  #07 @024   ----------------------------------------
 .byte   N24 ,AsM2
 .byte   W24
 .byte   N04 ,AnM2 ,v112
 .byte   W48
 .byte   N07 ,AnM2 ,v100
 .byte   W24
@  #07 @025   ----------------------------------------
 .byte   W24
 .byte   N10 ,AnM2 ,v072
 .byte   W48
 .byte   N08 ,AnM2 ,v080
 .byte   W12
 .byte   N03 ,AnM2 ,v076
 .byte   W06
 .byte   N05 ,AnM2 ,v064
 .byte   W06
@  #07 @026   ----------------------------------------
 .byte   W24
 .byte   N08 ,AnM2 ,v076
 .byte   W48
 .byte   N09 ,AnM2 ,v092
 .byte   W24
@  #07 @027   ----------------------------------------
 .byte   W24
 .byte   AnM2 ,v072
 .byte   W48
 .byte   N05 ,AnM2 ,v084
 .byte   W12
 .byte   N02 ,AnM2 ,v076
 .byte   W06
 .byte   N03
 .byte   W06
@  #07 @028   ----------------------------------------
 .byte   N05 ,AnM2 ,v072
 .byte   W24
 .byte   AnM2 ,v116
 .byte   W48
 .byte   N06 ,AnM2 ,v092
 .byte   W24
@  #07 @029   ----------------------------------------
 .byte   W24
 .byte   N08 ,AnM2 ,v068
 .byte   W36
 .byte   N04 ,AnM2 ,v076
 .byte   W12
 .byte   N05 ,AnM2 ,v080
 .byte   W06
 .byte   AnM2 ,v040
 .byte   W06
 .byte   AnM2 ,v076
 .byte   W06
 .byte   AnM2 ,v084
 .byte   W06
@  #07 @030   ----------------------------------------
 .byte   VOICE , 13
 .byte   VOL , 36*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N14 ,AnM2 ,v052
 .byte   N05 ,DnM1 ,v127
 .byte   W12
 .byte   N18
 .byte   W24
 .byte   N19
 .byte   W24
 .byte   N18
 .byte   W24
 .byte   N18
 .byte   W12
@  #07 @031   ----------------------------------------
 .byte   W12
 .byte   N16
 .byte   W24
 .byte   N16
 .byte   W24
 .byte   N12
 .byte   W12
 .byte   N03
 .byte   W12
 .byte   DsM1
 .byte   W12
@  #07 @032   ----------------------------------------
 .byte   N04 ,EnM1
 .byte   W12
 .byte   N17
 .byte   W24
 .byte   N17
 .byte   W24
 .byte   N16
 .byte   W24
 .byte   N17
 .byte   W12
@  #07 @033   ----------------------------------------
 .byte   W12
 .byte   N14
 .byte   W24
 .byte   N13
 .byte   W24
 .byte   N11
 .byte   W12
 .byte   N05
 .byte   W06
 .byte   DsM1 ,v116
 .byte   W06
 .byte   DnM1 ,v108
 .byte   W06
 .byte   FnM1 ,v116
 .byte   W06
@  #07 @034   ----------------------------------------
 .byte   VOICE , 0
 .byte   VOL , 46*bgm_map_FE08_05_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N32
 .byte   W48
 .byte   FnM1 ,v112
 .byte   W48
@  #07 @035   ----------------------------------------
 .byte   FnM1 ,v116
 .byte   W48
 .byte   FnM1 ,v112
 .byte   W48
@  #07 @036   ----------------------------------------
 .byte   N44 ,FnM1 ,v124
 .byte   W48
 .byte   N32
 .byte   W36
 .byte   N11 ,FnM1 ,v112
 .byte   W12
@  #07 @037   ----------------------------------------
 .byte   N32
 .byte   W36
 .byte   N11 ,FnM1 ,v096
 .byte   W12
 .byte   FnM1 ,v092
 .byte   W12
 .byte   N23 ,FnM1 ,v100
 .byte   W24
 .byte   N11 ,FnM1 ,v112
 .byte   W12
@  #07 @038   ----------------------------------------
 .byte   N32 ,FnM1 ,v104
 .byte   W36
 .byte   N11 ,FnM1 ,v096
 .byte   W12
 .byte   N44 ,FnM1 ,v100
 .byte   W48
@  #07 @039   ----------------------------------------
 .byte   N32 ,FnM1 ,v112
 .byte   W36
 .byte   N11 ,FnM1 ,v100
 .byte   W12
 .byte   N32 ,FnM1 ,v112
 .byte   W36
 .byte   N11 ,FnM1 ,v104
 .byte   W12
@  #07 @040   ----------------------------------------
 .byte   N32 ,FnM1 ,v116
 .byte   W36
 .byte   N11 ,FnM1 ,v104
 .byte   W12
 .byte   N32 ,FnM1 ,v116
 .byte   W36
 .byte   N11
 .byte   W12
@  #07 @041   ----------------------------------------
 .byte   N32 ,FnM1 ,v120
 .byte   W36
 .byte   N11 ,FnM1 ,v116
 .byte   W12
 .byte   N14 ,FnM1 ,v120
 .byte   W24
 .byte   N02 ,AnM2 ,v068
 .byte   W12
 .byte   N02
 .byte   W06
 .byte   N02
 .byte   W06
@  #07 @042   ----------------------------------------
 .byte   N02
 .byte   W12
 .byte   N02
 .byte   W06
 .byte   N02
 .byte   W06
 .byte   N04 ,AnM2 ,v064
 .byte   W12
 .byte   N01 ,AnM2 ,v056
 .byte   W06
 .byte   N02 ,AnM2 ,v064
 .byte   W06
 .byte   N03 ,AnM2 ,v076
 .byte   W12
 .byte   N02 ,AnM2 ,v068
 .byte   W06
 .byte   AnM2 ,v056
 .byte   W06
 .byte   AnM2 ,v060
 .byte   W12
 .byte   AnM2 ,v072
 .byte   W12
@  #07 @043   ----------------------------------------
 .byte   AnM2 ,v060
 .byte   W12
 .byte   N02
 .byte   W06
 .byte   N03 ,AnM2 ,v068
 .byte   W06
 .byte   N01 ,AnM2 ,v052
 .byte   W12
 .byte   N02 ,AnM2 ,v072
 .byte   W12
 .byte   AnM2 ,v068
 .byte   W12
 .byte   N02
 .byte   W06
 .byte   N02
 .byte   W06
 .byte   N04 ,AnM2 ,v064
 .byte   W12
 .byte   N01 ,AnM2 ,v056
 .byte   W06
 .byte   N02 ,AnM2 ,v064
 .byte   W06
@  #07 @044   ----------------------------------------
 .byte   N03 ,AnM2 ,v076
 .byte   W12
 .byte   N02 ,AnM2 ,v068
 .byte   W06
 .byte   AnM2 ,v056
 .byte   W06
 .byte   AnM2 ,v060
 .byte   W12
 .byte   AnM2 ,v072
 .byte   W06
 .byte   AnM2 ,v064
 .byte   W06
 .byte   AnM2 ,v060
 .byte   W12
 .byte   N02
 .byte   W12
 .byte   N01 ,AnM2 ,v052
 .byte   W06
 .byte   N01
 .byte   W06
 .byte   N02 ,AnM2 ,v072
 .byte   W06
 .byte   N03 ,AnM2 ,v068
 .byte   W06
@  #07 @045   ----------------------------------------
 .byte   AnM2 ,v076
 .byte   W12
 .byte   N02 ,AnM2 ,v068
 .byte   W06
 .byte   AnM2 ,v056
 .byte   W06
 .byte   AnM2 ,v068
 .byte   W12
 .byte   AnM2 ,v072
 .byte   W06
 .byte   AnM2 ,v064
 .byte   W06
 .byte   AnM2 ,v084
 .byte   W12
 .byte   AnM2 ,v068
 .byte   W06
 .byte   N03 ,AnM2 ,v080
 .byte   W06
 .byte   N07 ,AnM2 ,v088
 .byte   W12
 .byte   N10 ,AnM2 ,v100
 .byte   W12
@  #07 @046   ----------------------------------------
 .byte   GOTO
  .word Label_8019AC
 .byte   FINE

@******************************************************@
	.align	2

bgm_map_FE08_05:
	.byte	7	@ NumTrks
	.byte	0	@ NumBlks
	.byte	bgm_map_FE08_05_pri	@ Priority
	.byte	bgm_map_FE08_05_rev	@ Reverb.

	.word	bgm_map_FE08_05_grp

	.word	bgm_map_FE08_05_001
	.word	bgm_map_FE08_05_002
	.word	bgm_map_FE08_05_003
	.word	bgm_map_FE08_05_004
	.word	bgm_map_FE08_05_005
	.word	bgm_map_FE08_05_006
	.word	bgm_map_FE08_05_007

	.end
