	.include "MPlayDef.s"

	.equ	song04_grp, voicegroup000
	.equ	song04_pri, 10
	.equ	song04_rev, 148
	.equ	song04_mvl, 127
	.equ	song04_key, 0
	.equ	song04_tbs, 1
	.equ	song04_exg, 0
	.equ	song04_cmp, 1

	.section .rodata
	.global	song04
	.align	2


@**************** Track 1 (Midi-Chn.0) ****************@

song04_001:
@  #01 @000   ----------------------------------------
 .byte   KEYSH , song04_key+0
 .byte   TEMPO , 108*song04_tbs/2
 .byte   VOICE , 69
 .byte   VOL , 51*song04_mvl/mxv
 .byte   PAN , c_v+14
 .byte   W24
 .byte   N23 ,Gn2 ,v088
 .byte   N23 ,Dn3 ,v108
 .byte   W24
 .byte   As2 ,v088
 .byte   N23 ,Fn3 ,v108
 .byte   W24
 .byte   An2 ,v088
 .byte   N23 ,En3 ,v108
 .byte   W24
@  #01 @001   ----------------------------------------
Label_537D2E:
 .byte   N12 ,Fn2 ,v088
 .byte   N12 ,Cn3 ,v108
 .byte   W12
 .byte   N06 ,Cn3 ,v044
 .byte   W12
 .byte   N72 ,Gn2 ,v088
 .byte   N72 ,Dn3 ,v108
 .byte   W72
 .byte   PEND 
@  #01 @002   ----------------------------------------
Label_537D41:
 .byte   W24
 .byte   N23 ,Gn2 ,v088
 .byte   N23 ,Dn3 ,v108
 .byte   W24
 .byte   As2 ,v088
 .byte   N23 ,Fn3 ,v108
 .byte   W24
 .byte   An2 ,v088
 .byte   N23 ,En3 ,v108
 .byte   W24
@  #01 @003   ----------------------------------------
 .byte   N12 ,As2 ,v088
 .byte   N12 ,Fn3 ,v108
 .byte   W12
 .byte   N06 ,Fn3 ,v044
 .byte   W12
 .byte   N44 ,Cn3 ,v088
 .byte   N44 ,Gn3 ,v108
 .byte   W48
 .byte   An2 ,v088
 .byte   N44 ,En3 ,v108
 .byte   W24
@  #01 @004   ----------------------------------------
 .byte   W24
 .byte   Fn2 ,v088
 .byte   N44 ,Cn3 ,v108
 .byte   W48
 .byte   TIE ,Gn2 ,v088
 .byte   TIE ,Dn3 ,v108
 .byte   W24
@  #01 @005   ----------------------------------------
 .byte   W90
 .byte   EOT
 .byte   Gn2 ,v062
 .byte   N06 ,Gn2 ,v028
 .byte   N06 ,Dn3 ,v044
 .byte   W06
@  #01 @006   ----------------------------------------
 .byte   W96
@  #01 @007   ----------------------------------------
 .byte   W96
@  #01 @008   ----------------------------------------
 .byte   W96
@  #01 @009   ----------------------------------------
 .byte   W96
@  #01 @010   ----------------------------------------
 .byte   W96
@  #01 @011   ----------------------------------------
 .byte   W96
@  #01 @012   ----------------------------------------
 .byte   W96
@  #01 @013   ----------------------------------------
 .byte   W96
@  #01 @014   ----------------------------------------
 .byte   W96
@  #01 @015   ----------------------------------------
 .byte   W96
@  #01 @016   ----------------------------------------
 .byte   W96
@  #01 @017   ----------------------------------------
 .byte   VOICE , 47
 .byte   VOL , 51*song04_mvl/mxv
 .byte   PAN , c_v-8
 .byte   N24 ,Dn3 ,v116
 .byte   W24
 .byte   Gn2
 .byte   W72
@  #01 @018   ----------------------------------------
 .byte   W96
@  #01 @019   ----------------------------------------
 .byte   Dn3
 .byte   W24
 .byte   Gn2
 .byte   W72
@  #01 @020   ----------------------------------------
 .byte   VOICE , 69
 .byte   VOL , 51*song04_mvl/mxv
 .byte   PAN , c_v+14
 .byte   W72
 .byte   N23 ,Dn2 ,v108
 .byte   W24
@  #01 @021   ----------------------------------------
 .byte   An2
 .byte   W24
 .byte   N21 ,Gn2
 .byte   W24
 .byte   N23
 .byte   W24
 .byte   Dn2
 .byte   W24
@  #01 @022   ----------------------------------------
 .byte   An2
 .byte   W24
 .byte   N44 ,Gn2
 .byte   W48
 .byte   Fn2
 .byte   W24
@  #01 @023   ----------------------------------------
 .byte   W24
 .byte   N23 ,Gn2
 .byte   W24
 .byte   Gs2
 .byte   W24
 .byte   As2
 .byte   W24
@  #01 @024   ----------------------------------------
 .byte   N92 ,Cn3
 .byte   W96
@  #01 @025   ----------------------------------------
 .byte   VOICE , 69
 .byte   VOL , 51*song04_mvl/mxv
 .byte   PAN , c_v+14
 .byte   W24
 .byte   N23 ,Gn2 ,v100
 .byte   N23 ,Dn3 ,v116
 .byte   W24
 .byte   As2 ,v088
 .byte   N23 ,Fn3 ,v108
 .byte   W24
 .byte   An2 ,v088
 .byte   N23 ,En3 ,v108
 .byte   W24
@  #01 @026   ----------------------------------------
 .byte   PATT
  .word Label_537D2E
@  #01 @027   ----------------------------------------
 .byte   GOTO
  .word Label_537D41
 .byte   FINE

@**************** Track 2 (Midi-Chn.1) ****************@

song04_002:
@  #02 @000   ----------------------------------------
 .byte   KEYSH , song04_key+0
 .byte   VOICE , 33
 .byte   VOL , 44*song04_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N06 ,Gn1 ,v127
 .byte   W12
 .byte   Gn2
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #02 @001   ----------------------------------------
Label_537E01:
 .byte   N06 ,Gn2 ,v127
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   Gn1
 .byte   W12
 .byte   PEND 
@  #02 @002   ----------------------------------------
Label_537E0E:
 .byte   N06 ,Gn1 ,v127
 .byte   W12
 .byte   Gn2
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   PEND 
@  #02 @003   ----------------------------------------
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   Gn1
 .byte   W12
@  #02 @004   ----------------------------------------
 .byte   PATT
  .word Label_537E0E
@  #02 @005   ----------------------------------------
 .byte   W12
 .byte   N06 ,Gn2 ,v127
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #02 @006   ----------------------------------------
 .byte   PATT
  .word Label_537E0E
@  #02 @007   ----------------------------------------
 .byte   W12
 .byte   N06 ,Gn2 ,v127
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   Gn1
 .byte   W12
@  #02 @008   ----------------------------------------
 .byte   N06
 .byte   W12
 .byte   Gn2
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N12 ,Fn2
 .byte   W12
 .byte   En2
 .byte   W12
 .byte   Ds2
 .byte   W12
@  #02 @009   ----------------------------------------
 .byte   N06 ,Dn2 ,v120
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #02 @010   ----------------------------------------
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N09
 .byte   W24
 .byte   N10 ,Dn3
 .byte   W24
 .byte   N06 ,Dn2
 .byte   W12
@  #02 @011   ----------------------------------------
 .byte   Cs2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #02 @012   ----------------------------------------
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N12 ,Cs3
 .byte   W18
 .byte   N06
 .byte   W06
 .byte   Bn2
 .byte   W06
 .byte   An2
 .byte   W06
@  #02 @013   ----------------------------------------
 .byte   Gn2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   Dn2
 .byte   W12
@  #02 @014   ----------------------------------------
 .byte   Gn2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   Gn1
 .byte   W24
 .byte   Gn2
 .byte   W12
@  #02 @015   ----------------------------------------
 .byte   Fs2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   Cs2
 .byte   W12
@  #02 @016   ----------------------------------------
 .byte   Fs1 ,v127
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #02 @017   ----------------------------------------
 .byte   TIE ,Gn1
 .byte   W96
@  #02 @018   ----------------------------------------
 .byte   W16
 .byte   EOT
 .byte   W08
 .byte   N17 ,Gn2
 .byte   W24
 .byte   Dn2
 .byte   W24
 .byte   Gn1
 .byte   W24
@  #02 @019   ----------------------------------------
 .byte   TIE ,Dn2
 .byte   W96
@  #02 @020   ----------------------------------------
 .byte   W22
 .byte   EOT
 .byte   W02
 .byte   N15 ,Dn3
 .byte   W24
 .byte   Dn2
 .byte   W24
 .byte   N21 ,An1
 .byte   W24
@  #02 @021   ----------------------------------------
 .byte   N78 ,Dn2
 .byte   W84
 .byte   N12 ,An1
 .byte   W12
@  #02 @022   ----------------------------------------
 .byte   N96 ,Dn2
 .byte   W96
@  #02 @023   ----------------------------------------
 .byte   Cs2
 .byte   W96
@  #02 @024   ----------------------------------------
 .byte   N48
 .byte   W60
 .byte   N06 ,Ds2
 .byte   W12
 .byte   Gs2
 .byte   W12
 .byte   N06
 .byte   W12
@  #02 @025   ----------------------------------------
 .byte   PATT
  .word Label_537E0E
@  #02 @026   ----------------------------------------
 .byte   PATT
  .word Label_537E01
@  #02 @027   ----------------------------------------
 .byte   GOTO
  .word Label_537E0E
 .byte   FINE

@**************** Track 3 (Midi-Chn.2) ****************@

song04_003:
@  #03 @000   ----------------------------------------
 .byte   KEYSH , song04_key+0
 .byte   W96
@  #03 @001   ----------------------------------------
 .byte   W96
@  #03 @002   ----------------------------------------
Label_537EF1:
 .byte   W96
@  #03 @003   ----------------------------------------
 .byte   W96
@  #03 @004   ----------------------------------------
 .byte   W96
@  #03 @005   ----------------------------------------
 .byte   W96
@  #03 @006   ----------------------------------------
 .byte   W96
@  #03 @007   ----------------------------------------
 .byte   W96
@  #03 @008   ----------------------------------------
 .byte   VOICE , 52
 .byte   VOL , 44*song04_mvl/mxv
 .byte   PAN , c_v+0
 .byte   W48
 .byte   N05 ,Fn3 ,v116
 .byte   W06
 .byte   Gn3
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   Bn3
 .byte   W06
 .byte   Cn4
 .byte   W06
 .byte   Dn4
 .byte   W06
 .byte   En4
 .byte   W06
 .byte   Fs4
 .byte   W06
@  #03 @009   ----------------------------------------
 .byte   VOL , 26*song04_mvl/mxv
 .byte   TIE ,Gs4 ,v056
 .byte   W03
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 35*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 44*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song04_mvl/mxv
 .byte   W24
 .byte   W03
@  #03 @010   ----------------------------------------
 .byte   W96
@  #03 @011   ----------------------------------------
 .byte   W44
 .byte   W03
 .byte   EOT
 .byte   W01
 .byte   N92 ,Fs4 ,v064
 .byte   W48
@  #03 @012   ----------------------------------------
 .byte   W48
 .byte   N44 ,En4 ,v076
 .byte   W48
@  #03 @013   ----------------------------------------
 .byte   W48
 .byte   N23 ,Dn4 ,v080
 .byte   W24
 .byte   N11 ,Cs4
 .byte   W12
 .byte   Dn4
 .byte   W12
@  #03 @014   ----------------------------------------
 .byte   N44 ,En4
 .byte   W48
 .byte   Fs4
 .byte   W48
@  #03 @015   ----------------------------------------
 .byte   N92 ,Cs4 ,v076
 .byte   W92
 .byte   W03
 .byte   VOL , 44*song04_mvl/mxv
 .byte   W01
@  #03 @016   ----------------------------------------
 .byte   VOICE , 49
 .byte   VOL , 40*song04_mvl/mxv
 .byte   PAN , c_v-14
 .byte   W13
 .byte   VOL , 51*song04_mvl/mxv
 .byte   W11
 .byte   N18 ,Cs3 ,v100
 .byte   W18
 .byte   N06 ,Cs3 ,v052
 .byte   W06
 .byte   N18 ,Fs3 ,v100
 .byte   W18
 .byte   N06 ,Fs3 ,v052
 .byte   W06
 .byte   N18 ,Cs4 ,v100
 .byte   W18
 .byte   N06 ,Cs4 ,v052
 .byte   W06
@  #03 @017   ----------------------------------------
 .byte   N68 ,An3 ,v088
 .byte   N68 ,Cs4 ,v100
 .byte   W72
 .byte   N23 ,Bn3 ,v088
 .byte   N23 ,Dn4 ,v100
 .byte   W24
@  #03 @018   ----------------------------------------
 .byte   N54 ,Gn3 ,v088
 .byte   N54 ,Bn3 ,v100
 .byte   W54
 .byte   N06 ,Bn3 ,v052
 .byte   W06
 .byte   N12 ,Gn3 ,v088
 .byte   N12 ,Bn3 ,v100
 .byte   W12
 .byte   An3 ,v084
 .byte   N12 ,Cs4 ,v092
 .byte   W12
 .byte   Bn3 ,v080
 .byte   N12 ,Dn4 ,v088
 .byte   W12
@  #03 @019   ----------------------------------------
 .byte   N84 ,Cs4 ,v072
 .byte   N84 ,En4 ,v088
 .byte   W84
 .byte   N12 ,Bn3 ,v080
 .byte   N12 ,Dn4 ,v092
 .byte   W12
@  #03 @020   ----------------------------------------
 .byte   N24 ,An3 ,v084
 .byte   N24 ,Cs4 ,v096
 .byte   W24
 .byte   N66 ,Fs3 ,v088
 .byte   N66 ,An3 ,v100
 .byte   W52
 .byte   W01
 .byte   VOL , 51*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song04_mvl/mxv
 .byte   N06 ,An3 ,v052
 .byte   W01
 .byte   VOL , 35*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W01
@  #03 @021   ----------------------------------------
 .byte   VOICE , 52
 .byte   VOL , 30*song04_mvl/mxv
 .byte   PAN , c_v+0
 .byte   TIE ,Gn4 ,v068
 .byte   W01
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 51*song04_mvl/mxv
 .byte   W48
 .byte   W02
@  #03 @022   ----------------------------------------
 .byte   W96
@  #03 @023   ----------------------------------------
 .byte   W96
@  #03 @024   ----------------------------------------
 .byte   W40
 .byte   W01
 .byte   VOL , 49*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 18*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 15*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 13*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 12*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 10*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 8*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 7*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 6*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 4*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 2*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 0*song04_mvl/mxv
 .byte   W01
 .byte   EOT
 .byte   VOL , 0*song04_mvl/mxv
 .byte   W24
@  #03 @025   ----------------------------------------
 .byte   W96
@  #03 @026   ----------------------------------------
 .byte   W96
@  #03 @027   ----------------------------------------
 .byte   GOTO
  .word Label_537EF1
 .byte   FINE

@**************** Track 4 (Midi-Chn.3) ****************@

song04_004:
@  #04 @000   ----------------------------------------
 .byte   KEYSH , song04_key+0
 .byte   VOICE , 48
 .byte   VOL , 51*song04_mvl/mxv
 .byte   PAN , c_v+0
 .byte   TIE ,Gn2 ,v088
 .byte   W96
@  #04 @001   ----------------------------------------
 .byte   W72
 .byte   EOT
 .byte   N06 ,Gn2 ,v044
 .byte   W06
 .byte   An2 ,v096
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   En3
 .byte   W06
@  #04 @002   ----------------------------------------
Label_5380FA:
 .byte   TIE ,Dn3 ,v088
 .byte   W96
@  #04 @003   ----------------------------------------
 .byte   W72
 .byte   EOT
 .byte   N06 ,Dn3 ,v044
 .byte   W06
 .byte   Dn3 ,v096
 .byte   W06
 .byte   Fn3 ,v092
 .byte   W06
 .byte   An3 ,v088
 .byte   W06
@  #04 @004   ----------------------------------------
 .byte   TIE ,Gn3
 .byte   W96
@  #04 @005   ----------------------------------------
 .byte   W18
 .byte   EOT
 .byte   N06 ,Gn3 ,v044
 .byte   W06
 .byte   N24 ,Dn3 ,v068
 .byte   N24 ,Gn3 ,v096
 .byte   W24
 .byte   An3 ,v064
 .byte   N24 ,Dn4 ,v080
 .byte   W24
 .byte   Cn4 ,v064
 .byte   N24 ,Fn4 ,v076
 .byte   W24
@  #04 @006   ----------------------------------------
 .byte   Bn3 ,v064
 .byte   N24 ,En4 ,v076
 .byte   W24
 .byte   N44 ,Gn3 ,v068
 .byte   N44 ,Cn4 ,v084
 .byte   W48
 .byte   Dn3 ,v064
 .byte   N44 ,Gn3 ,v092
 .byte   W24
@  #04 @007   ----------------------------------------
 .byte   W24
 .byte   N48 ,Bn2 ,v060
 .byte   N48 ,En3 ,v096
 .byte   W48
 .byte   N24 ,Gn2 ,v056
 .byte   N24 ,Cn3 ,v084
 .byte   W24
@  #04 @008   ----------------------------------------
 .byte   N90 ,Gn2 ,v068
 .byte   N90 ,Dn3 ,v096
 .byte   W96
@  #04 @009   ----------------------------------------
 .byte   N72 ,Cs3
 .byte   W72
 .byte   N24 ,Bn2 ,v092
 .byte   W24
@  #04 @010   ----------------------------------------
 .byte   N12 ,Cs3 ,v096
 .byte   W12
 .byte   N06 ,Cs3 ,v028
 .byte   W12
 .byte   N48 ,Dn3 ,v096
 .byte   W48
 .byte   En3 ,v100
 .byte   W24
@  #04 @011   ----------------------------------------
 .byte   W24
 .byte   Fs3 ,v096
 .byte   W48
 .byte   Gs3
 .byte   W24
@  #04 @012   ----------------------------------------
 .byte   W24
 .byte   N24 ,An3 ,v104
 .byte   W24
 .byte   Gs3 ,v096
 .byte   W24
 .byte   En3
 .byte   W24
@  #04 @013   ----------------------------------------
 .byte   N68 ,Gn2 ,v080
 .byte   N68 ,Dn3 ,v096
 .byte   W72
 .byte   N12 ,An2 ,v080
 .byte   N12 ,Cs3 ,v096
 .byte   W12
 .byte   Bn2 ,v080
 .byte   N12 ,Dn3 ,v096
 .byte   W12
@  #04 @014   ----------------------------------------
 .byte   N48 ,Cs3 ,v080
 .byte   N48 ,En3 ,v096
 .byte   W48
 .byte   Dn3 ,v080
 .byte   N48 ,Fs3 ,v096
 .byte   W48
@  #04 @015   ----------------------------------------
 .byte   N96 ,An2 ,v080
 .byte   N96 ,Cs3 ,v096
 .byte   W96
@  #04 @016   ----------------------------------------
 .byte   N48 ,Cs3 ,v088
 .byte   N48 ,Fs3 ,v092
 .byte   W48
 .byte   N48
 .byte   N48 ,Cs4 ,v096
 .byte   W48
@  #04 @017   ----------------------------------------
 .byte   VOICE , 68
 .byte   VOL , 51*song04_mvl/mxv
 .byte   PAN , c_v+15
 .byte   W96
@  #04 @018   ----------------------------------------
 .byte   W24
 .byte   N24 ,Fs4 ,v104
 .byte   W24
 .byte   En4
 .byte   W24
 .byte   Dn4
 .byte   W24
@  #04 @019   ----------------------------------------
 .byte   N92 ,Cs4
 .byte   W96
@  #04 @020   ----------------------------------------
 .byte   N96 ,En4
 .byte   W68
 .byte   W03
 .byte   VOL , 49*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 21*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 18*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 16*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 15*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 12*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 10*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 8*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 6*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 4*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 2*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 0*song04_mvl/mxv
 .byte   W01
@  #04 @021   ----------------------------------------
 .byte   W96
@  #04 @022   ----------------------------------------
 .byte   W96
@  #04 @023   ----------------------------------------
 .byte   VOICE , 48
 .byte   VOL , 51*song04_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N24 ,Gs2 ,v088
 .byte   W24
 .byte   N48 ,Cn3
 .byte   W48
 .byte   Ds3
 .byte   W24
@  #04 @024   ----------------------------------------
 .byte   W24
 .byte   N24 ,Gs2
 .byte   N24 ,Gs3
 .byte   W24
 .byte   Cn3
 .byte   N24 ,Cn4
 .byte   W24
 .byte   Gs2
 .byte   N24 ,Gs3
 .byte   W24
@  #04 @025   ----------------------------------------
 .byte   TIE ,Gn2
 .byte   W96
@  #04 @026   ----------------------------------------
 .byte   W72
 .byte   EOT
 .byte   N06 ,Gn2 ,v044
 .byte   W06
 .byte   An2 ,v096
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   En3
 .byte   W06
@  #04 @027   ----------------------------------------
 .byte   GOTO
  .word Label_5380FA
 .byte   FINE

@**************** Track 5 (Midi-Chn.4) ****************@

song04_005:
@  #05 @000   ----------------------------------------
 .byte   KEYSH , song04_key+0
Label_53822D:
 .byte   VOICE , 51
 .byte   VOL , 51*song04_mvl/mxv
 .byte   PAN , c_v+21
 .byte   W24
 .byte   N23 ,Dn3 ,v088
 .byte   W24
 .byte   Fn3
 .byte   W24
 .byte   En3
 .byte   W24
 .byte   PEND 
@  #05 @001   ----------------------------------------
Label_53823D:
 .byte   N11 ,Cn3 ,v088
 .byte   W12
 .byte   N05 ,Cn3 ,v032
 .byte   W12
 .byte   N72 ,Dn3 ,v088
 .byte   W72
 .byte   PEND 
@  #05 @002   ----------------------------------------
Label_53824A:
 .byte   W24
 .byte   N23 ,Dn3 ,v088
 .byte   W24
 .byte   Fn3
 .byte   W24
 .byte   En3
 .byte   W24
@  #05 @003   ----------------------------------------
 .byte   N11 ,Fn3
 .byte   W12
 .byte   N05 ,Fn3 ,v032
 .byte   W12
 .byte   N44 ,Gn3 ,v088
 .byte   W48
 .byte   En3
 .byte   W24
@  #05 @004   ----------------------------------------
 .byte   W24
 .byte   Cn3
 .byte   W48
 .byte   TIE ,Dn3
 .byte   W24
@  #05 @005   ----------------------------------------
 .byte   W96
@  #05 @006   ----------------------------------------
 .byte   EOT
 .byte   W96
@  #05 @007   ----------------------------------------
 .byte   W96
@  #05 @008   ----------------------------------------
 .byte   W72
 .byte   VOL , 25*song04_mvl/mxv
 .byte   W23
 .byte   VOL , 25*song04_mvl/mxv
 .byte   W01
@  #05 @009   ----------------------------------------
 .byte   TIE ,Fs2 ,v096
 .byte   TIE ,Cs3
 .byte   TIE ,En3
 .byte   W04
 .byte   VOL , 26*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 26*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 26*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 29*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W36
 .byte   W02
@  #05 @010   ----------------------------------------
 .byte   W54
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W04
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W01
@  #05 @011   ----------------------------------------
 .byte   EOT
 .byte   Fs2 ,v061
 .byte   En3
 .byte   VOL , 26*song04_mvl/mxv
 .byte   N96 ,Gs2
 .byte   TIE ,Cs3
 .byte   W04
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W03
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W48
 .byte   W01
@  #05 @012   ----------------------------------------
 .byte   N96 ,Bn2
 .byte   W96
@  #05 @013   ----------------------------------------
 .byte   EOT
 .byte   Cs3
 .byte   N96 ,An2
 .byte   W68
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song04_mvl/mxv
 .byte   W01
@  #05 @014   ----------------------------------------
 .byte   VOL , 24*song04_mvl/mxv
 .byte   N96 ,Bn2
 .byte   W01
 .byte   VOL , 24*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song04_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song04_mvl/mxv
 .byte   W68
 .byte   W01
@  #05 @015   ----------------------------------------
 .byte   N96 ,Fs2
 .byte   W96
@  #05 @016   ----------------------------------------
 .byte   Cs3 ,v100
 .byte   W96
@  #05 @017   ----------------------------------------
 .byte   VOICE , 60
 .byte   VOL , 40*song04_mvl/mxv
 .byte   PAN , c_v-29
 .byte   W24
 .byte   N24 ,Bn2 ,v120
 .byte   W24
 .byte   TIE
 .byte   N72 ,Gn3
 .byte   W48
@  #05 @018   ----------------------------------------
 .byte   W24
 .byte   N24
 .byte   W24
 .byte   Fs3
 .byte   W24
 .byte   En3
 .byte   W24
@  #05 @019   ----------------------------------------
 .byte   EOT
 .byte   Bn2
 .byte   W24
 .byte   N24 ,An2
 .byte   W24
 .byte   TIE
 .byte   N72 ,Fs3
 .byte   W48
@  #05 @020   ----------------------------------------
 .byte   W24
 .byte   N24 ,Dn3 ,v104
 .byte   W24
 .byte   Cs3 ,v108
 .byte   W24
 .byte   Dn3 ,v100
 .byte   W24
@  #05 @021   ----------------------------------------
 .byte   EOT
 .byte   An2
 .byte   TIE ,As2 ,v084
 .byte   TIE ,Fn3
 .byte   W96
@  #05 @022   ----------------------------------------
 .byte   W96
@  #05 @023   ----------------------------------------
 .byte   W96
@  #05 @024   ----------------------------------------
 .byte   EOT
 .byte   As2 ,v065
 .byte   N44 ,Cn3
 .byte   N44 ,Ds3
 .byte   W48
 .byte   N23 ,Gs2
 .byte   N23 ,Cn3
 .byte   W24
 .byte   Ds2
 .byte   N23 ,Gs2
 .byte   W24
@  #05 @025   ----------------------------------------
 .byte   PATT
  .word Label_53822D
@  #05 @026   ----------------------------------------
 .byte   PATT
  .word Label_53823D
@  #05 @027   ----------------------------------------
 .byte   GOTO
  .word Label_53824A
 .byte   FINE

@**************** Track 6 (Midi-Chn.5) ****************@

song04_006:
@  #06 @000   ----------------------------------------
 .byte   KEYSH , song04_key+0
 .byte   W96
@  #06 @001   ----------------------------------------
 .byte   W96
@  #06 @002   ----------------------------------------
Label_5383DF:
 .byte   W96
@  #06 @003   ----------------------------------------
 .byte   W96
@  #06 @004   ----------------------------------------
 .byte   W96
@  #06 @005   ----------------------------------------
 .byte   W96
@  #06 @006   ----------------------------------------
 .byte   VOICE , 60
 .byte   VOL , 40*song04_mvl/mxv
 .byte   PAN , c_v-29
 .byte   W24
 .byte   N09 ,Dn2 ,v100
 .byte   N09 ,Gn2
 .byte   W24
 .byte   TIE
 .byte   TIE ,Dn3
 .byte   W48
@  #06 @007   ----------------------------------------
 .byte   W80
 .byte   W01
 .byte   EOT
 .byte   Gn2 ,v062
 .byte   W15
@  #06 @008   ----------------------------------------
 .byte   W24
 .byte   N09 ,Dn2
 .byte   N09 ,Gn2
 .byte   N09 ,Cn3
 .byte   W24
 .byte   N32 ,Gn2
 .byte   N32 ,Dn3
 .byte   N32 ,Gn3
 .byte   W48
@  #06 @009   ----------------------------------------
 .byte   W96
@  #06 @010   ----------------------------------------
 .byte   W96
@  #06 @011   ----------------------------------------
 .byte   W96
@  #06 @012   ----------------------------------------
 .byte   W96
@  #06 @013   ----------------------------------------
 .byte   W96
@  #06 @014   ----------------------------------------
 .byte   W96
@  #06 @015   ----------------------------------------
 .byte   W96
@  #06 @016   ----------------------------------------
 .byte   W96
@  #06 @017   ----------------------------------------
 .byte   VOICE , 46
 .byte   VOL , 51*song04_mvl/mxv
 .byte   PAN , c_v+20
 .byte   N05 ,Gn2 ,v127
 .byte   W06
 .byte   Bn2
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   Gn3
 .byte   W06
 .byte   Bn3
 .byte   W06
 .byte   Bn2 ,v060
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   Gn3
 .byte   W06
 .byte   Bn3
 .byte   W06
 .byte   Bn2 ,v016
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   Gn3
 .byte   W06
 .byte   Bn3
 .byte   W24
@  #06 @018   ----------------------------------------
 .byte   W96
@  #06 @019   ----------------------------------------
 .byte   Fs2 ,v127
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Fs3
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   An2 ,v060
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Fs3
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   An2 ,v016
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Fs3
 .byte   W06
 .byte   An3
 .byte   W24
@  #06 @020   ----------------------------------------
 .byte   W96
@  #06 @021   ----------------------------------------
 .byte   W96
@  #06 @022   ----------------------------------------
 .byte   W96
@  #06 @023   ----------------------------------------
 .byte   W96
@  #06 @024   ----------------------------------------
 .byte   W96
@  #06 @025   ----------------------------------------
 .byte   W96
@  #06 @026   ----------------------------------------
 .byte   W96
@  #06 @027   ----------------------------------------
 .byte   GOTO
  .word Label_5383DF
 .byte   FINE

@**************** Track 7 (Midi-Chn.6) ****************@

song04_007:
@  #07 @000   ----------------------------------------
 .byte   KEYSH , song04_key+0
 .byte   VOICE , 127
 .byte   VOL , 51*song04_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N06 ,Dn1 ,v120
 .byte   W36
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W36
@  #07 @001   ----------------------------------------
Label_538470:
 .byte   N06 ,Dn1 ,v120
 .byte   W36
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   Dn1 ,v116
 .byte   W24
 .byte   Dn1 ,v112
 .byte   W12
 .byte   PEND 
@  #07 @002   ----------------------------------------
Label_53847F:
 .byte   N06 ,Dn1 ,v108
 .byte   W36
 .byte   Dn1 ,v112
 .byte   W24
 .byte   Dn1 ,v104
 .byte   W36
@  #07 @003   ----------------------------------------
 .byte   Dn1 ,v112
 .byte   W36
 .byte   Dn1 ,v108
 .byte   W12
 .byte   Dn1 ,v104
 .byte   W12
 .byte   Dn1 ,v112
 .byte   W24
 .byte   Dn1 ,v100
 .byte   W06
 .byte   N06
 .byte   W06
@  #07 @004   ----------------------------------------
 .byte   Dn1 ,v112
 .byte   W36
 .byte   N06
 .byte   W24
 .byte   Dn1 ,v108
 .byte   W36
@  #07 @005   ----------------------------------------
 .byte   Dn1 ,v120
 .byte   W36
 .byte   Dn1 ,v116
 .byte   W12
 .byte   Dn1 ,v112
 .byte   W12
 .byte   Dn1 ,v108
 .byte   W24
 .byte   Dn1 ,v112
 .byte   W12
@  #07 @006   ----------------------------------------
 .byte   Dn1 ,v116
 .byte   W36
 .byte   Dn1 ,v108
 .byte   W24
 .byte   Dn1 ,v112
 .byte   W36
@  #07 @007   ----------------------------------------
 .byte   Dn1 ,v116
 .byte   W36
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   Dn1 ,v096
 .byte   W06
 .byte   Dn1 ,v080
 .byte   W06
@  #07 @008   ----------------------------------------
 .byte   Dn1 ,v108
 .byte   W36
 .byte   Dn1 ,v104
 .byte   W06
 .byte   Dn1 ,v084
 .byte   W06
 .byte   Dn1 ,v116
 .byte   W12
 .byte   Dn1 ,v120
 .byte   W24
 .byte   Dn1 ,v096
 .byte   W06
 .byte   Dn1 ,v092
 .byte   W06
@  #07 @009   ----------------------------------------
Label_5384DC:
 .byte   N05 ,Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W30
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W06
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W30
 .byte   N06 ,Ds4 ,v116
 .byte   W06
 .byte   Ds4 ,v028
 .byte   W06
 .byte   PEND 
@  #07 @010   ----------------------------------------
Label_5384F7:
 .byte   N05 ,Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W30
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W06
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W06
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W30
 .byte   PEND 
@  #07 @011   ----------------------------------------
 .byte   PATT
  .word Label_5384DC
@  #07 @012   ----------------------------------------
 .byte   N05 ,Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W30
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W18
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W18
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W06
@  #07 @013   ----------------------------------------
Label_53852F:
 .byte   N05 ,Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W30
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W06
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W30
 .byte   Ds4 ,v124
 .byte   W06
 .byte   Ds4 ,v028
 .byte   W06
 .byte   PEND 
@  #07 @014   ----------------------------------------
 .byte   PATT
  .word Label_5384F7
@  #07 @015   ----------------------------------------
 .byte   PATT
  .word Label_53852F
@  #07 @016   ----------------------------------------
 .byte   N05 ,Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W30
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W06
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W06
 .byte   Fs2 ,v064
 .byte   W06
 .byte   Fs2 ,v016
 .byte   W12
 .byte   N92 ,Fn2 ,v088
 .byte   W18
@  #07 @017   ----------------------------------------
 .byte   W96
@  #07 @018   ----------------------------------------
 .byte   W96
@  #07 @019   ----------------------------------------
 .byte   W96
@  #07 @020   ----------------------------------------
 .byte   W96
@  #07 @021   ----------------------------------------
 .byte   N06 ,Dn1 ,v108
 .byte   W36
 .byte   Dn1 ,v112
 .byte   W60
@  #07 @022   ----------------------------------------
 .byte   Dn1 ,v108
 .byte   W36
 .byte   Dn1 ,v104
 .byte   W48
 .byte   Dn1 ,v108
 .byte   W12
@  #07 @023   ----------------------------------------
 .byte   Dn1 ,v112
 .byte   W36
 .byte   N06
 .byte   W36
 .byte   Dn1 ,v124
 .byte   W12
 .byte   Dn1 ,v112
 .byte   W12
@  #07 @024   ----------------------------------------
 .byte   Dn1 ,v116
 .byte   W72
 .byte   N92 ,Fn2 ,v088
 .byte   W24
@  #07 @025   ----------------------------------------
 .byte   N06 ,Dn1 ,v120
 .byte   W36
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W36
@  #07 @026   ----------------------------------------
 .byte   PATT
  .word Label_538470
@  #07 @027   ----------------------------------------
 .byte   GOTO
  .word Label_53847F
 .byte   FINE

@******************************************************@
	.align	2

song04:
	.byte	7	@ NumTrks
	.byte	0	@ NumBlks
	.byte	song04_pri	@ Priority
	.byte	song04_rev	@ Reverb.
    
	.word	song04_grp
    
	.word	song04_001
	.word	song04_002
	.word	song04_003
	.word	song04_004
	.word	song04_005
	.word	song04_006
	.word	song04_007

	.end
