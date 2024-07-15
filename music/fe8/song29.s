	.include "MPlayDef.s"

	.equ	song29_grp, voicegroup000
	.equ	song29_pri, 10
	.equ	song29_rev, 128
	.equ	song29_mvl, 127
	.equ	song29_key, 0
	.equ	song29_tbs, 1
	.equ	song29_exg, 0
	.equ	song29_cmp, 1

	.section .rodata
	.global	song29
	.align	2


@**************** Track 1 (Midi-Chn.0) ****************@

song29_001:
@  #01 @000   ----------------------------------------
 .byte   KEYSH , song29_key+0
Label_88A40A:
 .byte   TEMPO , 74*song29_tbs/2
 .byte   VOICE , 1
 .byte   VOL , 52*song29_mvl/mxv
 .byte   PAN , c_v-30
 .byte   N12 ,Dn4 ,v104
 .byte   W72
 .byte   As3 ,v120
 .byte   W12
 .byte   Fn4
 .byte   W12
@  #01 @001   ----------------------------------------
 .byte   N12
 .byte   W48
 .byte   Cn4 ,v108
 .byte   W48
@  #01 @002   ----------------------------------------
 .byte   Dn4 ,v120
 .byte   W72
 .byte   As3
 .byte   W12
 .byte   Dn4
 .byte   W12
@  #01 @003   ----------------------------------------
 .byte   Fn4
 .byte   W36
 .byte   Gn4
 .byte   W12
 .byte   Fn4
 .byte   W36
 .byte   N12
 .byte   W12
@  #01 @004   ----------------------------------------
 .byte   Fs4
 .byte   W60
 .byte   Cs4
 .byte   W12
 .byte   Gs4 ,v112
 .byte   W24
@  #01 @005   ----------------------------------------
 .byte   Fn4 ,v120
 .byte   W60
 .byte   Cs4
 .byte   W12
 .byte   Gs3
 .byte   W24
@  #01 @006   ----------------------------------------
 .byte   Cn4
 .byte   W96
@  #01 @007   ----------------------------------------
 .byte   Fn4
 .byte   W96
@  #01 @008   ----------------------------------------
 .byte   VOICE , 2
 .byte   N60 ,Fs3 ,v104
 .byte   W72
 .byte   N12 ,As3
 .byte   W12
 .byte   Fs3
 .byte   W12
@  #01 @009   ----------------------------------------
 .byte   N24 ,Gs3
 .byte   W48
 .byte   As3
 .byte   W24
 .byte   Cn4
 .byte   W24
@  #01 @010   ----------------------------------------
 .byte   N36 ,Cs4
 .byte   W48
 .byte   N12
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   N24 ,As3
 .byte   W24
@  #01 @011   ----------------------------------------
 .byte   N36 ,Cn4
 .byte   W48
 .byte   An3
 .byte   W48
@  #01 @012   ----------------------------------------
 .byte   N72 ,As3
 .byte   W72
 .byte   N12 ,Cs4
 .byte   W12
 .byte   As3
 .byte   W12
@  #01 @013   ----------------------------------------
 .byte   N36 ,Cn4
 .byte   W48
 .byte   Ds4
 .byte   W48
@  #01 @014   ----------------------------------------
 .byte   N72 ,Cs4
 .byte   W72
 .byte   N24 ,As3
 .byte   W24
@  #01 @015   ----------------------------------------
 .byte   Fn4
 .byte   W48
 .byte   N12
 .byte   W12
 .byte   Ds4
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   Ds4
 .byte   W12
@  #01 @016   ----------------------------------------
 .byte   GOTO
  .word Label_88A40A
 .byte   FINE

@**************** Track 2 (Midi-Chn.1) ****************@

song29_002:
@  #02 @000   ----------------------------------------
 .byte   KEYSH , song29_key+0
Label_88A487:
 .byte   VOICE , 3
 .byte   VOL , 42*song29_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N92 ,As1 ,v127
 .byte   W96
@  #02 @001   ----------------------------------------
 .byte   Gs1
 .byte   W96
@  #02 @002   ----------------------------------------
 .byte   As1
 .byte   W96
@  #02 @003   ----------------------------------------
 .byte   Gs1
 .byte   W96
@  #02 @004   ----------------------------------------
 .byte   Fs1
 .byte   W96
@  #02 @005   ----------------------------------------
 .byte   Gs1
 .byte   W96
@  #02 @006   ----------------------------------------
 .byte   As1
 .byte   W96
@  #02 @007   ----------------------------------------
 .byte   An1
 .byte   W96
@  #02 @008   ----------------------------------------
 .byte   As1
 .byte   W96
@  #02 @009   ----------------------------------------
 .byte   Cn2
 .byte   W96
@  #02 @010   ----------------------------------------
 .byte   Gs1
 .byte   W96
@  #02 @011   ----------------------------------------
 .byte   An1
 .byte   W96
@  #02 @012   ----------------------------------------
 .byte   As1
 .byte   W96
@  #02 @013   ----------------------------------------
 .byte   Cn2
 .byte   W96
@  #02 @014   ----------------------------------------
 .byte   TIE ,As1
 .byte   W84
 .byte   W03
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W05
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W04
@  #02 @015   ----------------------------------------
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W04
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 24*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 22*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 21*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 20*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 19*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 18*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 17*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 16*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 15*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 14*song29_mvl/mxv
 .byte   W01
 .byte   EOT
 .byte   W01
 .byte   VOL , 13*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 11*song29_mvl/mxv
 .byte   W01
@  #02 @016   ----------------------------------------
 .byte   GOTO
  .word Label_88A487
 .byte   FINE

@**************** Track 3 (Midi-Chn.2) ****************@

song29_003:
@  #03 @000   ----------------------------------------
 .byte   KEYSH , song29_key+0
Label_88A522:
 .byte   VOICE , 4
 .byte   VOL , 27*song29_mvl/mxv
 .byte   PAN , c_v+6
 .byte   N90 ,Fn2 ,v104
 .byte   W10
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W28
@  #03 @001   ----------------------------------------
 .byte   N21
 .byte   W24
 .byte   Cn2
 .byte   W24
 .byte   Fn2
 .byte   W20
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   N21 ,Gs2
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
@  #03 @002   ----------------------------------------
 .byte   VOL , 29*song29_mvl/mxv
 .byte   N90 ,Fn2
 .byte   W03
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W30
@  #03 @003   ----------------------------------------
 .byte   N48
 .byte   W48
 .byte   N24 ,Cn2
 .byte   W18
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   N24 ,Fn2
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
@  #03 @004   ----------------------------------------
 .byte   VOL , 32*song29_mvl/mxv
 .byte   N96 ,Cs2
 .byte   W02
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W52
@  #03 @005   ----------------------------------------
 .byte   N92 ,Fn2
 .byte   W28
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song29_mvl/mxv
 .byte   W02
@  #03 @006   ----------------------------------------
 .byte   VOL , 24*song29_mvl/mxv
 .byte   N90
 .byte   W02
 .byte   VOL , 24*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W24
 .byte   W02
@  #03 @007   ----------------------------------------
 .byte   N24 ,Cn3
 .byte   W24
 .byte   An2
 .byte   W23
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   N24 ,Fn2
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   N24 ,Cn2
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W01
@  #03 @008   ----------------------------------------
 .byte   N96 ,Fs2
 .byte   W02
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W36
@  #03 @009   ----------------------------------------
 .byte   N96 ,Gs2
 .byte   W56
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
@  #03 @010   ----------------------------------------
 .byte   VOL , 29*song29_mvl/mxv
 .byte   N60 ,Fn2
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W24
 .byte   N12 ,Cs3
 .byte   W12
 .byte   Gs2
 .byte   W12
 .byte   Fn2
 .byte   W12
@  #03 @011   ----------------------------------------
 .byte   N48
 .byte   W48
 .byte   VOL , 47*song29_mvl/mxv
 .byte   N48 ,Cn2
 .byte   W03
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
@  #03 @012   ----------------------------------------
 .byte   VOL , 29*song29_mvl/mxv
 .byte   N24 ,Fs2
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   N24 ,Cs2
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W16
 .byte   N24 ,Fs2
 .byte   W24
 .byte   As2
 .byte   W24
@  #03 @013   ----------------------------------------
 .byte   N96 ,Gs2
 .byte   W96
@  #03 @014   ----------------------------------------
 .byte   TIE ,Fn2
 .byte   W66
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W04
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W04
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W04
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
@  #03 @015   ----------------------------------------
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 23*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 22*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 21*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 21*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 19*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 18*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 16*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 15*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 14*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 13*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 12*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 11*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 10*song29_mvl/mxv
 .byte   W04
@  #03 @016   ----------------------------------------
 .byte   EOT
 .byte   GOTO
  .word Label_88A522
 .byte   FINE

@**************** Track 4 (Midi-Chn.3) ****************@

song29_004:
@  #04 @000   ----------------------------------------
 .byte   KEYSH , song29_key+0
Label_88AA1C:
 .byte   VOICE , 5
 .byte   VOL , 58*song29_mvl/mxv
 .byte   PAN , c_v-24
 .byte   N09 ,As1 ,v120
 .byte   W12
 .byte   Dn2
 .byte   W12
 .byte   Fn2
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Dn4
 .byte   W12
@  #04 @001   ----------------------------------------
Label_88AA34:
 .byte   N09 ,Gs1 ,v120
 .byte   W12
 .byte   Cn2
 .byte   W12
 .byte   Fn2
 .byte   W12
 .byte   Gs2
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   Gs3
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   PEND 
@  #04 @002   ----------------------------------------
 .byte   As1
 .byte   W12
 .byte   Dn2
 .byte   W12
 .byte   Fn2
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Dn4
 .byte   W12
@  #04 @003   ----------------------------------------
 .byte   PATT
  .word Label_88AA34
@  #04 @004   ----------------------------------------
Label_88AA5C:
 .byte   N09 ,Fs1 ,v120
 .byte   W12
 .byte   Cs2
 .byte   W12
 .byte   Fs2
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Cs3
 .byte   W12
 .byte   Fs3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Cs4
 .byte   W12
 .byte   PEND 
@  #04 @005   ----------------------------------------
 .byte   Fn1
 .byte   W12
 .byte   Cs2
 .byte   W12
 .byte   Fn2
 .byte   W12
 .byte   Gs2
 .byte   W12
 .byte   Cs3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   Gs3
 .byte   W12
 .byte   Cs4
 .byte   W12
@  #04 @006   ----------------------------------------
 .byte   Fn1
 .byte   W12
 .byte   Cn2
 .byte   W12
 .byte   Fn2
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Cn4
 .byte   W12
@  #04 @007   ----------------------------------------
Label_88AA8F:
 .byte   N09 ,Fn1 ,v120
 .byte   W12
 .byte   Cn2
 .byte   W12
 .byte   Fn2
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   PEND 
@  #04 @008   ----------------------------------------
 .byte   PATT
  .word Label_88AA5C
@  #04 @009   ----------------------------------------
Label_88AAA7:
 .byte   N09 ,Gs1 ,v120
 .byte   W12
 .byte   Ds2
 .byte   W12
 .byte   Gs2
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   Ds3
 .byte   W12
 .byte   Gs3
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   Ds4
 .byte   W12
 .byte   PEND 
@  #04 @010   ----------------------------------------
 .byte   Cs2
 .byte   W12
 .byte   Gs2
 .byte   W12
 .byte   Cs3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   Gs3
 .byte   W12
 .byte   Cs4
 .byte   W12
 .byte   Fn4
 .byte   W12
 .byte   Gs4
 .byte   W12
@  #04 @011   ----------------------------------------
 .byte   PATT
  .word Label_88AA8F
@  #04 @012   ----------------------------------------
 .byte   PATT
  .word Label_88AA5C
@  #04 @013   ----------------------------------------
 .byte   PATT
  .word Label_88AAA7
@  #04 @014   ----------------------------------------
 .byte   N09 ,As1 ,v120
 .byte   W12
 .byte   Fn2
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Cs3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Cs4
 .byte   W12
 .byte   Fn4
 .byte   W12
@  #04 @015   ----------------------------------------
 .byte   As1
 .byte   W12
 .byte   Fn2
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Cs3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   Ds4
 .byte   W12
@  #04 @016   ----------------------------------------
 .byte   GOTO
  .word Label_88AA1C
 .byte   FINE

@**************** Track 5 (Midi-Chn.4) ****************@

song29_005:
@  #05 @000   ----------------------------------------
 .byte   KEYSH , song29_key+0
Label_88AB03:
 .byte   VOICE , 6
 .byte   VOL , 24*song29_mvl/mxv
 .byte   PAN , c_v-29
 .byte   N96 ,Dn3 ,v104
 .byte   W06
 .byte   VOL , 24*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W48
 .byte   W02
@  #05 @001   ----------------------------------------
 .byte   N72 ,Cn3
 .byte   W60
 .byte   W02
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   N24 ,Ds3
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song29_mvl/mxv
 .byte   W01
@  #05 @002   ----------------------------------------
 .byte   VOL , 23*song29_mvl/mxv
 .byte   N24 ,Dn3
 .byte   W03
 .byte   VOL , 23*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   N24 ,As2
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   N24 ,Fn2
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W13
 .byte   N24 ,Dn3
 .byte   W24
@  #05 @003   ----------------------------------------
 .byte   Cn3
 .byte   W24
 .byte   Gs2
 .byte   W24
 .byte   N30 ,Fn2
 .byte   W05
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song29_mvl/mxv
 .byte   W12
 .byte   VOL , 31*song29_mvl/mxv
 .byte   N06 ,Dn3
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W04
 .byte   N06 ,Cn3
 .byte   W06
@  #05 @004   ----------------------------------------
 .byte   N96 ,As2
 .byte   W96
@  #05 @005   ----------------------------------------
 .byte   N21 ,Cs3
 .byte   W24
 .byte   Gs2
 .byte   W24
 .byte   Cs3
 .byte   W24
 .byte   As2
 .byte   W24
@  #05 @006   ----------------------------------------
 .byte   N72 ,Cn3
 .byte   W72
 .byte   N12 ,An2
 .byte   W12
 .byte   Cn3
 .byte   W12
@  #05 @007   ----------------------------------------
 .byte   N24 ,Fn3
 .byte   W24
 .byte   VOL , 47*song29_mvl/mxv
 .byte   N24 ,Cn3
 .byte   W03
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   N24 ,An2
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 35*song29_mvl/mxv
 .byte   N24 ,Fn2
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W02
@  #05 @008   ----------------------------------------
 .byte   VOL , 30*song29_mvl/mxv
 .byte   N96 ,Cs3
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W64
@  #05 @009   ----------------------------------------
 .byte   N96 ,Ds3
 .byte   W56
 .byte   W02
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
@  #05 @010   ----------------------------------------
 .byte   VOL , 31*song29_mvl/mxv
 .byte   N96 ,Cs3
 .byte   W03
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W30
 .byte   W01
@  #05 @011   ----------------------------------------
 .byte   N48 ,Cn3
 .byte   W60
 .byte   N12 ,An2 ,v112
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Cn3
 .byte   W12
@  #05 @012   ----------------------------------------
 .byte   N24 ,Cs3
 .byte   W24
 .byte   As2
 .byte   W24
 .byte   Cs3
 .byte   W24
 .byte   Fs3
 .byte   W24
@  #05 @013   ----------------------------------------
 .byte   Ds3
 .byte   W24
 .byte   Cn3
 .byte   W24
 .byte   Gs2
 .byte   W24
 .byte   Cn3
 .byte   W24
@  #05 @014   ----------------------------------------
 .byte   TIE ,Cs3 ,v104
 .byte   W76
 .byte   VOL , 47*song29_mvl/mxv
 .byte   W04
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 46*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 45*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 44*song29_mvl/mxv
 .byte   W02
@  #05 @015   ----------------------------------------
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 43*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 40*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W03
 .byte   VOL , 37*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 26*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 24*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 22*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 21*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 21*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 20*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 19*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 18*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 16*song29_mvl/mxv
 .byte   W02
 .byte   VOL , 15*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 14*song29_mvl/mxv
 .byte   W01
 .byte   VOL , 13*song29_mvl/mxv
 .byte   W15
@  #05 @016   ----------------------------------------
 .byte   EOT
 .byte   GOTO
  .word Label_88AB03
 .byte   FINE

@**************** Track 6 (Midi-Chn.5) ****************@

song29_006:
@  #06 @000   ----------------------------------------
 .byte   KEYSH , song29_key+0
Label_88AE3D:
 .byte   VOICE , 1
 .byte   VOL , 18*song29_mvl/mxv
 .byte   PAN , c_v+40
 .byte   W06
 .byte   N12 ,Dn4 ,v060
 .byte   W72
 .byte   As3 ,v076
 .byte   W12
 .byte   Fn4
 .byte   W06
@  #06 @001   ----------------------------------------
 .byte   W06
 .byte   N12
 .byte   W48
 .byte   Cn4 ,v060
 .byte   W42
@  #06 @002   ----------------------------------------
 .byte   W06
 .byte   Dn4 ,v076
 .byte   W72
 .byte   As3
 .byte   W12
 .byte   Dn4
 .byte   W06
@  #06 @003   ----------------------------------------
 .byte   W06
 .byte   Fn4
 .byte   W36
 .byte   Gn4
 .byte   W12
 .byte   Fn4
 .byte   W36
 .byte   N12
 .byte   W06
@  #06 @004   ----------------------------------------
 .byte   W06
 .byte   Fs4
 .byte   W60
 .byte   Cs4
 .byte   W12
 .byte   Gs4 ,v068
 .byte   W18
@  #06 @005   ----------------------------------------
 .byte   W06
 .byte   Fn4 ,v076
 .byte   W60
 .byte   Cs4
 .byte   W12
 .byte   Gs3
 .byte   W18
@  #06 @006   ----------------------------------------
 .byte   W06
 .byte   Cn4
 .byte   W90
@  #06 @007   ----------------------------------------
 .byte   W06
 .byte   Fn4
 .byte   W90
@  #06 @008   ----------------------------------------
 .byte   VOICE , 2
 .byte   W06
 .byte   N60 ,Fs3 ,v060
 .byte   W72
 .byte   N12 ,As3
 .byte   W12
 .byte   Fs3
 .byte   W06
@  #06 @009   ----------------------------------------
 .byte   W06
 .byte   N24 ,Gs3
 .byte   W48
 .byte   As3
 .byte   W24
 .byte   Cn4
 .byte   W18
@  #06 @010   ----------------------------------------
 .byte   W06
 .byte   N36 ,Cs4
 .byte   W48
 .byte   N12
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   N24 ,As3
 .byte   W18
@  #06 @011   ----------------------------------------
 .byte   W06
 .byte   N36 ,Cn4
 .byte   W48
 .byte   An3
 .byte   W42
@  #06 @012   ----------------------------------------
 .byte   W06
 .byte   N72 ,As3
 .byte   W72
 .byte   N12 ,Cs4
 .byte   W12
 .byte   As3
 .byte   W06
@  #06 @013   ----------------------------------------
 .byte   W06
 .byte   N36 ,Cn4
 .byte   W48
 .byte   Ds4
 .byte   W42
@  #06 @014   ----------------------------------------
 .byte   W06
 .byte   N72 ,Cs4
 .byte   W72
 .byte   N24 ,As3
 .byte   W18
@  #06 @015   ----------------------------------------
 .byte   W06
 .byte   Fn4
 .byte   W48
 .byte   N12
 .byte   W12
 .byte   Ds4
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   Ds4
 .byte   W06
@  #06 @016   ----------------------------------------
 .byte   GOTO
  .word Label_88AE3D
@  #06 @017   ----------------------------------------
 .byte   W06
 .byte   FINE

@******************************************************@
	.align	2

song29:
	.byte	6	@ NumTrks
	.byte	0	@ NumBlks
	.byte	song29_pri	@ Priority
	.byte	song29_rev	@ Reverb.
    
	.word	song29_grp
    
	.word	song29_001
	.word	song29_002
	.word	song29_003
	.word	song29_004
	.word	song29_005
	.word	song29_006

	.end
