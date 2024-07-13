	.include "MPlayDef.s"

	.equ	song0C_grp, voicegroup000
	.equ	song0C_pri, 10
	.equ	song0C_rev, 148
	.equ	song0C_mvl, 127
	.equ	song0C_key, 0
	.equ	song0C_tbs, 1
	.equ	song0C_exg, 0
	.equ	song0C_cmp, 1

	.section .rodata
	.global	song0C
	.align	2


@**************** Track 1 (Midi-Chn.0) ****************@

song0C_001:
@  #01 @000   ----------------------------------------
 .byte   KEYSH , song0C_key+0
Label_54027E:
 .byte   TEMPO , 128*song0C_tbs/2
 .byte   VOICE , 63
 .byte   VOL , 48*song0C_mvl/mxv
 .byte   PAN , c_v-15
 .byte   N12 ,En3 ,v104
 .byte   W18
 .byte   N06 ,Fs3
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W12
 .byte   N24 ,Gn3 ,v092
 .byte   W24
 .byte   N06 ,Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W06
 .byte   N18 ,Gn3 ,v104
 .byte   W18
 .byte   N06 ,Gn3 ,v028
 .byte   W06
@  #01 @001   ----------------------------------------
Label_5402A3:
 .byte   N12 ,Fs3 ,v104
 .byte   W18
 .byte   N06 ,Gn3
 .byte   W06
 .byte   Gn3 ,v028
 .byte   W12
 .byte   N24 ,An3 ,v104
 .byte   W24
 .byte   N06 ,Gn3
 .byte   W06
 .byte   Gn3 ,v028
 .byte   W06
 .byte   N18 ,An3 ,v104
 .byte   W18
 .byte   N06 ,An3 ,v028
 .byte   W06
 .byte   PEND 
@  #01 @002   ----------------------------------------
Label_5402C0:
 .byte   N12 ,En3 ,v104
 .byte   W18
 .byte   N06 ,Fs3
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W12
 .byte   N24 ,Gn3 ,v104
 .byte   W24
 .byte   N06 ,Fs3
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W06
 .byte   N18 ,Gn3 ,v104
 .byte   W18
 .byte   N06 ,Gn3 ,v028
 .byte   W06
 .byte   PEND 
@  #01 @003   ----------------------------------------
 .byte   N18 ,Fs3 ,v104
 .byte   W18
 .byte   N06 ,Fs3 ,v028
 .byte   W06
 .byte   N04 ,An3 ,v104
 .byte   W08
 .byte   N04
 .byte   W08
 .byte   N04
 .byte   W08
 .byte   N36 ,Fs3
 .byte   W36
 .byte   N06 ,Fs3 ,v028
 .byte   W12
@  #01 @004   ----------------------------------------
 .byte   PATT
  .word Label_5402C0
@  #01 @005   ----------------------------------------
 .byte   PATT
  .word Label_5402A3
@  #01 @006   ----------------------------------------
 .byte   N12 ,Gn3 ,v104
 .byte   W18
 .byte   N06 ,An3
 .byte   W06
 .byte   An3 ,v028
 .byte   W12
 .byte   N24 ,Bn3 ,v104
 .byte   W24
 .byte   N06 ,Cn4
 .byte   W06
 .byte   Cn4 ,v028
 .byte   W06
 .byte   N18 ,Bn3 ,v104
 .byte   W18
 .byte   N06 ,Bn3 ,v028
 .byte   W06
@  #01 @007   ----------------------------------------
 .byte   N18 ,An3 ,v104
 .byte   W18
 .byte   N06 ,An3 ,v028
 .byte   W06
 .byte   N04 ,Dn4 ,v104
 .byte   W08
 .byte   N04
 .byte   W08
 .byte   N04
 .byte   W08
 .byte   N36 ,An3
 .byte   W36
 .byte   N06 ,An3 ,v028
 .byte   W12
@  #01 @008   ----------------------------------------
 .byte   VOICE , 61
 .byte   VOL , 48*song0C_mvl/mxv
 .byte   PAN , c_v+5
 .byte   N12 ,En3 ,v116
 .byte   W18
 .byte   N06 ,Fs3
 .byte   W06
 .byte   Fs3 ,v036
 .byte   W12
 .byte   N24 ,Gn3 ,v116
 .byte   W24
 .byte   N06 ,Bn3
 .byte   W06
 .byte   Bn3 ,v036
 .byte   W06
 .byte   N18 ,Gn3 ,v116
 .byte   W18
 .byte   N06 ,Gn3 ,v036
 .byte   W06
@  #01 @009   ----------------------------------------
Label_540353:
 .byte   N12 ,Fs3 ,v116
 .byte   W18
 .byte   N06 ,Gn3
 .byte   W06
 .byte   Gn3 ,v036
 .byte   W12
 .byte   N48 ,An3 ,v116
 .byte   W48
 .byte   N06 ,An3 ,v036
 .byte   W12
 .byte   PEND 
@  #01 @010   ----------------------------------------
 .byte   N12 ,En3 ,v116
 .byte   W18
 .byte   N06 ,Fs3
 .byte   W06
 .byte   Fs3 ,v036
 .byte   W12
 .byte   N24 ,Gn3 ,v116
 .byte   W24
 .byte   N06 ,Fs3
 .byte   W06
 .byte   Fs3 ,v036
 .byte   W06
 .byte   N12 ,Gn3 ,v116
 .byte   W12
 .byte   Gn3 ,v036
 .byte   W12
@  #01 @011   ----------------------------------------
 .byte   PATT
  .word Label_540353
@  #01 @012   ----------------------------------------
 .byte   N12 ,En3 ,v116
 .byte   W18
 .byte   N06 ,Fs3
 .byte   W06
 .byte   Fs3 ,v036
 .byte   W12
 .byte   N24 ,Gn3 ,v116
 .byte   W24
 .byte   N06 ,Fs3
 .byte   W06
 .byte   Fs3 ,v036
 .byte   W06
 .byte   N12 ,Gn3 ,v116
 .byte   W18
 .byte   N06 ,Gn3 ,v036
 .byte   W06
@  #01 @013   ----------------------------------------
 .byte   N12 ,Fs3 ,v116
 .byte   W18
 .byte   N06 ,Gn3
 .byte   W06
 .byte   Gn3 ,v036
 .byte   W12
 .byte   N24 ,An3 ,v116
 .byte   W24
 .byte   N06 ,Gn3
 .byte   W06
 .byte   Gn3 ,v036
 .byte   W06
 .byte   N12 ,An3 ,v116
 .byte   W12
 .byte   N06 ,An3 ,v036
 .byte   W12
@  #01 @014   ----------------------------------------
 .byte   N12 ,En3 ,v116
 .byte   W18
 .byte   N06 ,Fs3
 .byte   W06
 .byte   Fs3 ,v036
 .byte   W12
 .byte   N24 ,Gn3 ,v116
 .byte   W24
 .byte   N06 ,Fs3
 .byte   W06
 .byte   Fs3 ,v036
 .byte   W06
 .byte   N18 ,Gn3 ,v116
 .byte   W18
 .byte   N06 ,Gn3 ,v036
 .byte   W06
@  #01 @015   ----------------------------------------
 .byte   N24 ,Fs3 ,v116
 .byte   W24
 .byte   N04 ,An3
 .byte   W08
 .byte   N04
 .byte   W08
 .byte   N04
 .byte   W08
 .byte   N36 ,Fs3
 .byte   W36
 .byte   N06 ,Fs3 ,v036
 .byte   W12
@  #01 @016   ----------------------------------------
 .byte   W96
@  #01 @017   ----------------------------------------
 .byte   W96
@  #01 @018   ----------------------------------------
 .byte   W96
@  #01 @019   ----------------------------------------
 .byte   W96
@  #01 @020   ----------------------------------------
 .byte   W96
@  #01 @021   ----------------------------------------
 .byte   W96
@  #01 @022   ----------------------------------------
 .byte   W96
@  #01 @023   ----------------------------------------
 .byte   W84
 .byte   En3 ,v104
 .byte   W06
 .byte   Fs3
 .byte   W06
@  #01 @024   ----------------------------------------
Label_5403F9:
 .byte   N06 ,Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v028
 .byte   W06
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W06
 .byte   Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v028
 .byte   W06
 .byte   N30 ,An3 ,v104
 .byte   W30
 .byte   N06 ,An3 ,v028
 .byte   W06
 .byte   N18 ,Fs3 ,v104
 .byte   W18
 .byte   N06 ,Fs3 ,v028
 .byte   W06
 .byte   PEND 
@  #01 @025   ----------------------------------------
Label_54041D:
 .byte   N06 ,Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v028
 .byte   W06
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W06
 .byte   Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v028
 .byte   W06
 .byte   N42 ,An3 ,v104
 .byte   W42
 .byte   N06 ,An3 ,v028
 .byte   W06
 .byte   Gn3 ,v104
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   PEND 
@  #01 @026   ----------------------------------------
Label_54043E:
 .byte   N06 ,Bn3 ,v104
 .byte   W06
 .byte   Bn3 ,v028
 .byte   W06
 .byte   An3 ,v104
 .byte   W06
 .byte   An3 ,v028
 .byte   W06
 .byte   Bn3 ,v104
 .byte   W06
 .byte   Bn3 ,v028
 .byte   W06
 .byte   N30 ,Cn4 ,v104
 .byte   W30
 .byte   N06 ,Cn4 ,v028
 .byte   W06
 .byte   N18 ,Bn3 ,v104
 .byte   W18
 .byte   N06 ,Bn3 ,v028
 .byte   W06
 .byte   PEND 
@  #01 @027   ----------------------------------------
 .byte   Dn4 ,v104
 .byte   W06
 .byte   Dn4 ,v028
 .byte   W06
 .byte   Cn4 ,v104
 .byte   W06
 .byte   Cn4 ,v028
 .byte   W06
 .byte   Bn3 ,v104
 .byte   W06
 .byte   Bn3 ,v028
 .byte   W06
 .byte   N30 ,An3 ,v104
 .byte   W30
 .byte   N06 ,An3 ,v028
 .byte   W06
 .byte   N12 ,Fs3 ,v104
 .byte   W12
 .byte   N06 ,En3
 .byte   W06
 .byte   Fs3
 .byte   W06
@  #01 @028   ----------------------------------------
 .byte   PATT
  .word Label_5403F9
@  #01 @029   ----------------------------------------
 .byte   PATT
  .word Label_54041D
@  #01 @030   ----------------------------------------
 .byte   PATT
  .word Label_54043E
@  #01 @031   ----------------------------------------
 .byte   N06 ,Dn4 ,v104
 .byte   W06
 .byte   Dn4 ,v028
 .byte   W06
 .byte   Cn4 ,v104
 .byte   W06
 .byte   Cn4 ,v028
 .byte   W06
 .byte   Bn3 ,v104
 .byte   W06
 .byte   Bn3 ,v028
 .byte   W06
 .byte   N30 ,An3 ,v104
 .byte   W30
 .byte   N06 ,An3 ,v028
 .byte   W06
 .byte   N18 ,Fs3 ,v104
 .byte   W18
 .byte   N06 ,Fs3 ,v028
 .byte   W06
@  #01 @032   ----------------------------------------
 .byte   VOICE , 63
 .byte   VOL , 45*song0C_mvl/mxv
 .byte   PAN , c_v-25
 .byte   N66 ,Dn3 ,v116
 .byte   W66
 .byte   N06 ,Dn3 ,v032
 .byte   W06
 .byte   Dn3 ,v116
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   Cn3 ,v116
 .byte   W06
 .byte   Cn3 ,v032
 .byte   W06
@  #01 @033   ----------------------------------------
 .byte   N66 ,Dn3 ,v112
 .byte   W66
 .byte   N06 ,Dn3 ,v032
 .byte   W06
 .byte   Fn3 ,v116
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   En3 ,v116
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
@  #01 @034   ----------------------------------------
 .byte   N66 ,Fn3 ,v112
 .byte   W66
 .byte   N06 ,Fn3 ,v032
 .byte   W06
 .byte   Fn3 ,v116
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   En3 ,v116
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
@  #01 @035   ----------------------------------------
 .byte   N42 ,Dn3 ,v112
 .byte   W42
 .byte   N06 ,Dn3 ,v032
 .byte   W06
 .byte   N42 ,Cn3 ,v112
 .byte   W42
 .byte   N06 ,Cn3 ,v032
 .byte   W06
@  #01 @036   ----------------------------------------
 .byte   N66 ,Fn2 ,v112
 .byte   W66
 .byte   N06 ,Fn2 ,v032
 .byte   W06
 .byte   Fn2 ,v116
 .byte   W06
 .byte   Fn2 ,v032
 .byte   W06
 .byte   Gn2 ,v116
 .byte   W06
 .byte   Gn2 ,v032
 .byte   W06
@  #01 @037   ----------------------------------------
 .byte   N66 ,Gs2 ,v112
 .byte   W66
 .byte   N06 ,Gs2 ,v032
 .byte   W06
 .byte   Gs2 ,v116
 .byte   W06
 .byte   Gs2 ,v032
 .byte   W06
 .byte   As2 ,v116
 .byte   W06
 .byte   As2 ,v032
 .byte   W06
@  #01 @038   ----------------------------------------
 .byte   N72 ,Cn3 ,v112
 .byte   W72
 .byte   N06 ,Cn3 ,v032
 .byte   W12
 .byte   Cn3 ,v116
 .byte   W06
 .byte   Cs3
 .byte   W06
@  #01 @039   ----------------------------------------
 .byte   N78 ,Ds3 ,v112
 .byte   W78
 .byte   N06 ,Ds3 ,v032
 .byte   W18
@  #01 @040   ----------------------------------------
 .byte   GOTO
  .word Label_54027E
 .byte   FINE

@**************** Track 2 (Midi-Chn.1) ****************@

song0C_002:
@  #02 @000   ----------------------------------------
 .byte   KEYSH , song0C_key+0
Label_54054E:
 .byte   VOICE , 34
 .byte   VOL , 39*song0C_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N06 ,En2 ,v127
 .byte   W24
 .byte   N20
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N20
 .byte   W24
@  #02 @001   ----------------------------------------
Label_54055E:
 .byte   N06 ,En2 ,v127
 .byte   W24
 .byte   N20
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   Bn1
 .byte   W12
 .byte   PEND 
@  #02 @002   ----------------------------------------
Label_54056B:
 .byte   N06 ,En2 ,v127
 .byte   W24
 .byte   N20
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N20
 .byte   W24
 .byte   PEND 
@  #02 @003   ----------------------------------------
 .byte   PATT
  .word Label_54055E
@  #02 @004   ----------------------------------------
 .byte   PATT
  .word Label_54056B
@  #02 @005   ----------------------------------------
 .byte   PATT
  .word Label_54055E
@  #02 @006   ----------------------------------------
 .byte   PATT
  .word Label_54056B
@  #02 @007   ----------------------------------------
Label_54058A:
 .byte   N06 ,En2 ,v127
 .byte   W24
 .byte   N20
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   Dn2
 .byte   W12
 .byte   PEND 
@  #02 @008   ----------------------------------------
 .byte   Cn2
 .byte   W24
 .byte   N20
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N20
 .byte   W24
@  #02 @009   ----------------------------------------
 .byte   N06
 .byte   W24
 .byte   N20
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N05
 .byte   W12
 .byte   Bn1
 .byte   W12
@  #02 @010   ----------------------------------------
 .byte   N06 ,An1
 .byte   W24
 .byte   N20
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N20
 .byte   W24
@  #02 @011   ----------------------------------------
 .byte   N06
 .byte   W24
 .byte   N20
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   An2
 .byte   W12
 .byte   Fs2
 .byte   W12
@  #02 @012   ----------------------------------------
 .byte   PATT
  .word Label_54056B
@  #02 @013   ----------------------------------------
 .byte   PATT
  .word Label_54055E
@  #02 @014   ----------------------------------------
 .byte   PATT
  .word Label_54056B
@  #02 @015   ----------------------------------------
 .byte   PATT
  .word Label_54058A
@  #02 @016   ----------------------------------------
 .byte   N24 ,Cn2 ,v127
 .byte   W36
 .byte   N06 ,Gn1
 .byte   W12
 .byte   N36 ,Cn2
 .byte   W48
@  #02 @017   ----------------------------------------
 .byte   N36
 .byte   W48
 .byte   N14
 .byte   W24
 .byte   N14
 .byte   W24
@  #02 @018   ----------------------------------------
 .byte   N36 ,Bn1
 .byte   W48
 .byte   N15
 .byte   W24
 .byte   Fs1
 .byte   W24
@  #02 @019   ----------------------------------------
 .byte   N60 ,Bn1
 .byte   W72
 .byte   N15
 .byte   W24
@  #02 @020   ----------------------------------------
 .byte   N60 ,An1
 .byte   W72
 .byte   N15 ,En1
 .byte   W24
@  #02 @021   ----------------------------------------
 .byte   N36 ,An1
 .byte   W48
 .byte   N15
 .byte   W24
 .byte   N15
 .byte   W24
@  #02 @022   ----------------------------------------
 .byte   N60 ,Dn2
 .byte   W72
 .byte   N15
 .byte   W24
@  #02 @023   ----------------------------------------
 .byte   N18 ,Bn1
 .byte   W24
 .byte   N18
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   Bn2
 .byte   W12
 .byte   Bn1
 .byte   W12
@  #02 @024   ----------------------------------------
Label_54060B:
 .byte   N06 ,En2 ,v127
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   PEND 
@  #02 @025   ----------------------------------------
Label_54061A:
 .byte   N06 ,Dn2 ,v127
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   PEND 
@  #02 @026   ----------------------------------------
Label_540629:
 .byte   N06 ,Cn2 ,v127
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   PEND 
@  #02 @027   ----------------------------------------
 .byte   PATT
  .word Label_54061A
@  #02 @028   ----------------------------------------
 .byte   PATT
  .word Label_54060B
@  #02 @029   ----------------------------------------
 .byte   PATT
  .word Label_54061A
@  #02 @030   ----------------------------------------
 .byte   PATT
  .word Label_540629
@  #02 @031   ----------------------------------------
 .byte   N06 ,Dn2 ,v127
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
@  #02 @032   ----------------------------------------
 .byte   PATT
  .word Label_54061A
@  #02 @033   ----------------------------------------
 .byte   PATT
  .word Label_540629
@  #02 @034   ----------------------------------------
 .byte   N06 ,As1 ,v127
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #02 @035   ----------------------------------------
 .byte   Cn2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Gs2
 .byte   W12
 .byte   Gn2
 .byte   W12
@  #02 @036   ----------------------------------------
 .byte   Fn2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #02 @037   ----------------------------------------
 .byte   Ds2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #02 @038   ----------------------------------------
 .byte   Cs2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #02 @039   ----------------------------------------
 .byte   Ds2
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   Bn1
 .byte   W12
@  #02 @040   ----------------------------------------
 .byte   GOTO
  .word Label_54054E
 .byte   FINE

@**************** Track 3 (Midi-Chn.2) ****************@

song0C_003:
@  #03 @000   ----------------------------------------
 .byte   KEYSH , song0C_key+0
Label_5406BA:
 .byte   VOICE , 48
 .byte   VOL , 34*song0C_mvl/mxv
 .byte   PAN , c_v+15
 .byte   W96
@  #03 @001   ----------------------------------------
 .byte   W96
@  #03 @002   ----------------------------------------
 .byte   W96
@  #03 @003   ----------------------------------------
 .byte   W72
 .byte   N06 ,An2 ,v100
 .byte   W06
 .byte   Bn2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Dn3
 .byte   W06
@  #03 @004   ----------------------------------------
 .byte   N92 ,Bn2 ,v096
 .byte   N92 ,En3 ,v104
 .byte   W96
@  #03 @005   ----------------------------------------
 .byte   N68 ,An2 ,v092
 .byte   N68 ,Dn3 ,v100
 .byte   W72
 .byte   N20 ,Fs2 ,v076
 .byte   N20 ,An2 ,v100
 .byte   W24
@  #03 @006   ----------------------------------------
 .byte   N44 ,Gn2 ,v080
 .byte   N44 ,Bn2 ,v096
 .byte   W48
 .byte   N20 ,Bn2 ,v080
 .byte   N20 ,Dn3 ,v112
 .byte   W24
 .byte   Dn3 ,v080
 .byte   N20 ,Gn3 ,v112
 .byte   W24
@  #03 @007   ----------------------------------------
 .byte   N72 ,Dn3 ,v092
 .byte   N76 ,Fs3 ,v104
 .byte   W78
 .byte   N05 ,En3 ,v076
 .byte   W06
 .byte   Dn3 ,v092
 .byte   W06
 .byte   Cs3 ,v068
 .byte   W06
@  #03 @008   ----------------------------------------
 .byte   TIE ,Gn2 ,v092
 .byte   TIE ,Cn3 ,v104
 .byte   W96
@  #03 @009   ----------------------------------------
 .byte   W64
 .byte   W01
 .byte   EOT
 .byte   Gn2 ,v060
 .byte   W07
 .byte   N04 ,Cn3 ,v108
 .byte   W12
 .byte   N06 ,Bn2 ,v092
 .byte   W12
@  #03 @010   ----------------------------------------
 .byte   TIE ,En2 ,v084
 .byte   TIE ,An2 ,v108
 .byte   W96
@  #03 @011   ----------------------------------------
 .byte   W21
 .byte   EOT
 .byte   En2 ,v057
 .byte   W03
 .byte   N21 ,En2
 .byte   N21 ,An2
 .byte   W24
 .byte   N21
 .byte   N21 ,Cn3
 .byte   W30
 .byte   N05 ,Bn2 ,v088
 .byte   W06
 .byte   Cn3 ,v084
 .byte   W06
 .byte   Dn3 ,v096
 .byte   W06
@  #03 @012   ----------------------------------------
 .byte   N76 ,Bn2
 .byte   N76 ,En3 ,v104
 .byte   W84
 .byte   N04 ,Bn2 ,v092
 .byte   N04 ,En3 ,v096
 .byte   W06
 .byte   Bn2 ,v088
 .byte   N04 ,En3 ,v092
 .byte   W06
@  #03 @013   ----------------------------------------
 .byte   N76 ,An2 ,v104
 .byte   N76 ,Dn3
 .byte   W84
 .byte   N03 ,An2 ,v092
 .byte   N03 ,Dn3 ,v096
 .byte   W12
@  #03 @014   ----------------------------------------
 .byte   N76 ,Bn2
 .byte   N76 ,En3
 .byte   W84
 .byte   N03 ,Bn2 ,v092
 .byte   N02 ,En3 ,v088
 .byte   W06
 .byte   N03 ,Bn2
 .byte   N03 ,En3 ,v092
 .byte   W06
@  #03 @015   ----------------------------------------
 .byte   N44 ,An2 ,v104
 .byte   N44 ,Dn3
 .byte   W48
 .byte   Fs2
 .byte   N44 ,An2 ,v100
 .byte   W48
@  #03 @016   ----------------------------------------
 .byte   W96
@  #03 @017   ----------------------------------------
 .byte   W96
@  #03 @018   ----------------------------------------
 .byte   W96
@  #03 @019   ----------------------------------------
 .byte   W96
@  #03 @020   ----------------------------------------
 .byte   W96
@  #03 @021   ----------------------------------------
 .byte   W96
@  #03 @022   ----------------------------------------
 .byte   W96
@  #03 @023   ----------------------------------------
 .byte   W96
@  #03 @024   ----------------------------------------
 .byte   W96
@  #03 @025   ----------------------------------------
 .byte   W96
@  #03 @026   ----------------------------------------
 .byte   W96
@  #03 @027   ----------------------------------------
 .byte   W96
@  #03 @028   ----------------------------------------
 .byte   W96
@  #03 @029   ----------------------------------------
 .byte   W96
@  #03 @030   ----------------------------------------
 .byte   W96
@  #03 @031   ----------------------------------------
 .byte   W96
@  #03 @032   ----------------------------------------
 .byte   VOICE , 56
 .byte   VOL , 46*song0C_mvl/mxv
 .byte   PAN , c_v+25
 .byte   N06 ,Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   En3 ,v104
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   N30 ,Gn3 ,v104
 .byte   W30
 .byte   N06 ,Gn3 ,v032
 .byte   W06
 .byte   N18 ,En3 ,v104
 .byte   W18
 .byte   N06 ,En3 ,v032
 .byte   W06
@  #03 @033   ----------------------------------------
 .byte   Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   En3 ,v104
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   N30 ,Gn3 ,v104
 .byte   W30
 .byte   N06 ,Gn3 ,v032
 .byte   W06
 .byte   N18 ,An3 ,v104
 .byte   W24
@  #03 @034   ----------------------------------------
 .byte   N06
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W06
 .byte   An3 ,v104
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   N30 ,As3 ,v104
 .byte   W30
 .byte   N06 ,As3 ,v032
 .byte   W06
 .byte   N24 ,An3 ,v104
 .byte   W24
@  #03 @035   ----------------------------------------
 .byte   N06 ,Cn4
 .byte   W06
 .byte   Cn4 ,v032
 .byte   W06
 .byte   As3 ,v104
 .byte   W06
 .byte   As3 ,v032
 .byte   W06
 .byte   An3 ,v104
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   N30 ,Gn3 ,v104
 .byte   W30
 .byte   N06 ,Gn3 ,v032
 .byte   W06
 .byte   N12 ,En3 ,v104
 .byte   W12
 .byte   N06 ,Fn3
 .byte   W06
 .byte   Gn3
 .byte   W06
@  #03 @036   ----------------------------------------
 .byte   Gs3
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W06
 .byte   Gs3 ,v104
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   N30 ,As3 ,v104
 .byte   W30
 .byte   N06 ,As3 ,v032
 .byte   W06
 .byte   N24 ,Gn3 ,v104
 .byte   W24
@  #03 @037   ----------------------------------------
 .byte   N06 ,Gs3
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W06
 .byte   Gs3 ,v104
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   N30 ,As3 ,v104
 .byte   W30
 .byte   N06 ,As3 ,v032
 .byte   W06
 .byte   N24 ,Cn4 ,v104
 .byte   W24
@  #03 @038   ----------------------------------------
 .byte   N06
 .byte   W06
 .byte   Cn4 ,v032
 .byte   W06
 .byte   As3 ,v104
 .byte   W06
 .byte   As3 ,v032
 .byte   W06
 .byte   Cn4 ,v104
 .byte   W06
 .byte   Cn4 ,v032
 .byte   W06
 .byte   N30 ,Cs4 ,v104
 .byte   W30
 .byte   N06 ,Cs4 ,v032
 .byte   W06
 .byte   N24 ,Cn4 ,v104
 .byte   W24
@  #03 @039   ----------------------------------------
 .byte   N06 ,Ds4
 .byte   W06
 .byte   Ds4 ,v032
 .byte   W06
 .byte   Cs4 ,v104
 .byte   W06
 .byte   Cs4 ,v032
 .byte   W06
 .byte   Cn4 ,v104
 .byte   W06
 .byte   Cn4 ,v032
 .byte   W06
 .byte   N36 ,As3 ,v104
 .byte   W60
@  #03 @040   ----------------------------------------
 .byte   GOTO
  .word Label_5406BA
 .byte   FINE

@**************** Track 4 (Midi-Chn.3) ****************@

song0C_004:
@  #04 @000   ----------------------------------------
 .byte   KEYSH , song0C_key+0
Label_540886:
 .byte   VOICE , 61
 .byte   VOL , 41*song0C_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N12 ,Bn2 ,v092
 .byte   W18
 .byte   N06 ,Dn3 ,v104
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W12
 .byte   N24 ,En3 ,v104
 .byte   W24
 .byte   N06 ,Dn3
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   N18 ,En3 ,v104
 .byte   W18
 .byte   N06 ,En3 ,v032
 .byte   W06
@  #04 @001   ----------------------------------------
Label_5408A9:
 .byte   N12 ,Dn3 ,v104
 .byte   W18
 .byte   N06 ,En3
 .byte   W06
 .byte   En3 ,v032
 .byte   W12
 .byte   N24 ,Fs3 ,v104
 .byte   W24
 .byte   N06 ,En3
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   N18 ,Fs3 ,v104
 .byte   W18
 .byte   N06 ,Fs3 ,v032
 .byte   W06
 .byte   PEND 
@  #04 @002   ----------------------------------------
Label_5408C6:
 .byte   N12 ,Bn2 ,v104
 .byte   W18
 .byte   N06 ,Dn3
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W12
 .byte   N24 ,En3 ,v104
 .byte   W24
 .byte   N06 ,Dn3
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   N18 ,En3 ,v104
 .byte   W18
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   PEND 
@  #04 @003   ----------------------------------------
 .byte   N24 ,Dn3 ,v104
 .byte   W24
 .byte   N04 ,Fs3
 .byte   W08
 .byte   N04
 .byte   W08
 .byte   N04
 .byte   W08
 .byte   N42 ,Dn3
 .byte   W42
 .byte   N06 ,Dn3 ,v032
 .byte   W06
@  #04 @004   ----------------------------------------
 .byte   PATT
  .word Label_5408C6
@  #04 @005   ----------------------------------------
 .byte   PATT
  .word Label_5408A9
@  #04 @006   ----------------------------------------
 .byte   N12 ,En3 ,v104
 .byte   W18
 .byte   N06 ,Fs3
 .byte   W06
 .byte   Fs3 ,v032
 .byte   W12
 .byte   N24 ,Gn3 ,v104
 .byte   W24
 .byte   N06 ,An3
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   N18 ,Gn3 ,v104
 .byte   W18
 .byte   N06 ,Gn3 ,v032
 .byte   W06
@  #04 @007   ----------------------------------------
 .byte   N24 ,Fs3 ,v104
 .byte   W24
 .byte   N04 ,An3
 .byte   W08
 .byte   N04
 .byte   W08
 .byte   N04
 .byte   W08
 .byte   N24 ,Fs3
 .byte   W48
@  #04 @008   ----------------------------------------
 .byte   VOICE , 68
 .byte   VOL , 24*song0C_mvl/mxv
 .byte   N12 ,Cn4
 .byte   W18
 .byte   N06 ,Dn4
 .byte   W06
 .byte   Dn4 ,v032
 .byte   W12
 .byte   N24 ,En4 ,v104
 .byte   W24
 .byte   N06 ,Gn4
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W06
 .byte   N18 ,En4 ,v104
 .byte   W18
 .byte   N06 ,En4 ,v032
 .byte   W06
@  #04 @009   ----------------------------------------
Label_540948:
 .byte   N12 ,Dn4 ,v104
 .byte   W18
 .byte   N06 ,En4
 .byte   W06
 .byte   En4 ,v032
 .byte   W12
 .byte   N54 ,Fs4 ,v104
 .byte   W54
 .byte   N06 ,Fs4 ,v032
 .byte   W06
 .byte   PEND 
@  #04 @010   ----------------------------------------
 .byte   N12 ,Cn4 ,v104
 .byte   W18
 .byte   N06 ,Dn4
 .byte   W06
 .byte   Dn4 ,v032
 .byte   W12
 .byte   N24 ,En4 ,v104
 .byte   W24
 .byte   N06 ,Dn4
 .byte   W06
 .byte   Dn4 ,v032
 .byte   W06
 .byte   N18 ,En4 ,v104
 .byte   W18
 .byte   N06 ,En4 ,v032
 .byte   W06
@  #04 @011   ----------------------------------------
 .byte   PATT
  .word Label_540948
@  #04 @012   ----------------------------------------
 .byte   VOICE , 61
 .byte   VOL , 41*song0C_mvl/mxv
 .byte   N12 ,Bn2 ,v104
 .byte   W18
 .byte   N06 ,Dn3
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W12
 .byte   N24 ,En3 ,v104
 .byte   W24
 .byte   N06 ,Dn3
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   N18 ,En3 ,v104
 .byte   W18
 .byte   N06 ,En3 ,v032
 .byte   W06
@  #04 @013   ----------------------------------------
 .byte   PATT
  .word Label_5408A9
@  #04 @014   ----------------------------------------
 .byte   PATT
  .word Label_5408C6
@  #04 @015   ----------------------------------------
 .byte   N24 ,Dn3 ,v104
 .byte   W24
 .byte   N04 ,Fs3
 .byte   W08
 .byte   N04
 .byte   W08
 .byte   N04
 .byte   W08
 .byte   N42 ,Dn3
 .byte   W48
@  #04 @016   ----------------------------------------
 .byte   VOICE , 48
 .byte   VOL , 41*song0C_mvl/mxv
 .byte   N84
 .byte   W84
 .byte   N06 ,Cn3
 .byte   W06
 .byte   Dn3
 .byte   W06
@  #04 @017   ----------------------------------------
 .byte   N21 ,En3
 .byte   W24
 .byte   Dn3
 .byte   W24
 .byte   N24
 .byte   W24
 .byte   Cn3
 .byte   W24
@  #04 @018   ----------------------------------------
 .byte   N80 ,Bn2
 .byte   W84
 .byte   N06 ,Cn3
 .byte   W06
 .byte   Cn3 ,v032
 .byte   W06
@  #04 @019   ----------------------------------------
 .byte   N72 ,Dn3 ,v104
 .byte   W78
 .byte   N06 ,Bn2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Dn3
 .byte   W06
@  #04 @020   ----------------------------------------
 .byte   N78 ,En3 ,v096
 .byte   W78
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   Dn3 ,v104
 .byte   W06
 .byte   En3
 .byte   W06
@  #04 @021   ----------------------------------------
 .byte   N24 ,Fs3
 .byte   W24
 .byte   En3
 .byte   W24
 .byte   Dn3
 .byte   W24
 .byte   En3
 .byte   W24
@  #04 @022   ----------------------------------------
 .byte   N44 ,Dn3 ,v096
 .byte   W48
 .byte   Fs3
 .byte   W48
@  #04 @023   ----------------------------------------
 .byte   Ds3 ,v104
 .byte   W48
 .byte   N32 ,Fs3 ,v112
 .byte   W48
@  #04 @024   ----------------------------------------
 .byte   W96
@  #04 @025   ----------------------------------------
 .byte   W96
@  #04 @026   ----------------------------------------
 .byte   W96
@  #04 @027   ----------------------------------------
 .byte   W96
@  #04 @028   ----------------------------------------
 .byte   VOICE , 65
 .byte   VOL , 37*song0C_mvl/mxv
 .byte   PAN , c_v+36
 .byte   N72 ,En2
 .byte   N72 ,Gn2
 .byte   W72
 .byte   N06 ,Gn2 ,v032
 .byte   W12
 .byte   En2 ,v112
 .byte   N06 ,Gn2
 .byte   W06
 .byte   Fs2
 .byte   N06 ,An2
 .byte   W06
@  #04 @029   ----------------------------------------
 .byte   N30 ,Gn2
 .byte   N30 ,Bn2
 .byte   W30
 .byte   N06 ,Bn2 ,v032
 .byte   W06
 .byte   Fs2 ,v112
 .byte   N06 ,An2
 .byte   W06
 .byte   Gn2
 .byte   N06 ,Bn2
 .byte   W06
 .byte   N12 ,An2
 .byte   N12 ,Cn3
 .byte   W12
 .byte   N06 ,Cn3 ,v032
 .byte   W12
 .byte   N12 ,Fs2 ,v112
 .byte   N12 ,An2
 .byte   W12
 .byte   N06 ,An2 ,v032
 .byte   W12
@  #04 @030   ----------------------------------------
 .byte   N72 ,En2 ,v112
 .byte   N72 ,Gn2
 .byte   W72
 .byte   N06 ,Gn2 ,v032
 .byte   W12
 .byte   Gn2 ,v112
 .byte   N06 ,Bn2
 .byte   W06
 .byte   Bn2 ,v032
 .byte   W06
@  #04 @031   ----------------------------------------
 .byte   N12 ,Fs2 ,v112
 .byte   N12 ,An2
 .byte   W12
 .byte   N06 ,An2 ,v032
 .byte   W12
 .byte   N12 ,Gn2 ,v112
 .byte   N12 ,Bn2
 .byte   W12
 .byte   N06 ,Bn2 ,v032
 .byte   W12
 .byte   N12 ,An2 ,v112
 .byte   N12 ,Cn3
 .byte   W12
 .byte   N06 ,Cn3 ,v032
 .byte   W12
 .byte   N12 ,Dn3 ,v112
 .byte   N12 ,Fs3
 .byte   W12
 .byte   N06 ,Fs3 ,v032
 .byte   W12
@  #04 @032   ----------------------------------------
 .byte   W96
@  #04 @033   ----------------------------------------
 .byte   W96
@  #04 @034   ----------------------------------------
 .byte   W96
@  #04 @035   ----------------------------------------
 .byte   W96
@  #04 @036   ----------------------------------------
 .byte   W96
@  #04 @037   ----------------------------------------
 .byte   W96
@  #04 @038   ----------------------------------------
 .byte   VOICE , 68
 .byte   VOL , 41*song0C_mvl/mxv
 .byte   PAN , c_v-25
 .byte   W96
@  #04 @039   ----------------------------------------
 .byte   N12 ,Ds4 ,v112
 .byte   W12
 .byte   Cs4
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   N21 ,As3
 .byte   W24
 .byte   N12 ,Gs3 ,v104
 .byte   N12 ,Cs4 ,v112
 .byte   W12
 .byte   Gn3 ,v104
 .byte   N12 ,Cn4 ,v112
 .byte   W12
 .byte   Ds3 ,v104
 .byte   N12 ,Gs3 ,v112
 .byte   W12
@  #04 @040   ----------------------------------------
 .byte   GOTO
  .word Label_540886
 .byte   FINE

@**************** Track 5 (Midi-Chn.4) ****************@

song0C_005:
@  #05 @000   ----------------------------------------
 .byte   KEYSH , song0C_key+0
Label_540AAD:
 .byte   W96
@  #05 @001   ----------------------------------------
 .byte   W96
@  #05 @002   ----------------------------------------
 .byte   W96
@  #05 @003   ----------------------------------------
 .byte   W96
@  #05 @004   ----------------------------------------
 .byte   W96
@  #05 @005   ----------------------------------------
 .byte   W96
@  #05 @006   ----------------------------------------
 .byte   W96
@  #05 @007   ----------------------------------------
 .byte   W96
@  #05 @008   ----------------------------------------
 .byte   W96
@  #05 @009   ----------------------------------------
 .byte   W96
@  #05 @010   ----------------------------------------
 .byte   W96
@  #05 @011   ----------------------------------------
 .byte   W96
@  #05 @012   ----------------------------------------
 .byte   W96
@  #05 @013   ----------------------------------------
 .byte   W96
@  #05 @014   ----------------------------------------
 .byte   W96
@  #05 @015   ----------------------------------------
 .byte   W96
@  #05 @016   ----------------------------------------
 .byte   VOICE , 68
 .byte   VOL , 45*song0C_mvl/mxv
 .byte   PAN , c_v+16
 .byte   N92 ,Bn3 ,v092
 .byte   W96
@  #05 @017   ----------------------------------------
 .byte   N20
 .byte   W24
 .byte   An3
 .byte   W24
 .byte   N20
 .byte   W24
 .byte   Gn3
 .byte   W24
@  #05 @018   ----------------------------------------
 .byte   N68 ,Fs3
 .byte   W72
 .byte   N05 ,Fs3 ,v032
 .byte   W12
 .byte   Gn3 ,v092
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W06
@  #05 @019   ----------------------------------------
 .byte   N80 ,Fs3 ,v092
 .byte   W84
 .byte   N05 ,Fs3 ,v032
 .byte   W12
@  #05 @020   ----------------------------------------
 .byte   N68 ,Cn4 ,v092
 .byte   W72
 .byte   N05 ,Cn4 ,v032
 .byte   W12
 .byte   N06 ,Bn3 ,v092
 .byte   W06
 .byte   Cn4
 .byte   W06
@  #05 @021   ----------------------------------------
 .byte   N20 ,Dn4
 .byte   W24
 .byte   Cn4
 .byte   W24
 .byte   Bn3
 .byte   W24
 .byte   Cn4
 .byte   W24
@  #05 @022   ----------------------------------------
 .byte   N72 ,Dn4
 .byte   W72
 .byte   N06 ,Bn3
 .byte   W06
 .byte   N05 ,Bn3 ,v032
 .byte   W06
 .byte   N06 ,Dn4 ,v092
 .byte   W06
 .byte   N05 ,Dn4 ,v032
 .byte   W06
@  #05 @023   ----------------------------------------
 .byte   N78 ,Ds4 ,v092
 .byte   W72
 .byte   VOICE , 48
 .byte   VOL , 39*song0C_mvl/mxv
 .byte   PAN , c_v+25
 .byte   W06
 .byte   N05 ,Ds4 ,v032
 .byte   W06
 .byte   N06 ,Bn2 ,v104
 .byte   W06
 .byte   Dn3
 .byte   W06
@  #05 @024   ----------------------------------------
Label_540B22:
 .byte   N06 ,En3 ,v104
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   Dn3 ,v104
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   En3 ,v104
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   N30 ,Fs3 ,v104
 .byte   W30
 .byte   N06 ,Fs3 ,v032
 .byte   W06
 .byte   N24 ,Dn3 ,v104
 .byte   W24
 .byte   PEND 
@  #05 @025   ----------------------------------------
Label_540B42:
 .byte   N06 ,En3 ,v104
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   Dn3 ,v104
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   En3 ,v104
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   N42 ,Fs3 ,v104
 .byte   W42
 .byte   N06 ,Fs3 ,v032
 .byte   W06
 .byte   Dn3 ,v104
 .byte   W06
 .byte   En3
 .byte   W06
 .byte   PEND 
@  #05 @026   ----------------------------------------
Label_540B63:
 .byte   N06 ,Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W06
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v032
 .byte   W06
 .byte   Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W06
 .byte   N30 ,An3 ,v104
 .byte   W30
 .byte   N06 ,An3 ,v032
 .byte   W06
 .byte   N24 ,Gn3 ,v104
 .byte   W24
 .byte   PEND 
@  #05 @027   ----------------------------------------
 .byte   N06 ,Bn3
 .byte   W06
 .byte   Bn3 ,v032
 .byte   W06
 .byte   An3 ,v104
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W06
 .byte   N30 ,Fs3 ,v104
 .byte   W30
 .byte   N06 ,Fs3 ,v032
 .byte   W06
 .byte   N12 ,Dn3 ,v104
 .byte   W12
 .byte   N06 ,Bn2
 .byte   W06
 .byte   Dn3
 .byte   W06
@  #05 @028   ----------------------------------------
 .byte   PATT
  .word Label_540B22
@  #05 @029   ----------------------------------------
 .byte   PATT
  .word Label_540B42
@  #05 @030   ----------------------------------------
 .byte   PATT
  .word Label_540B63
@  #05 @031   ----------------------------------------
 .byte   N06 ,Bn3 ,v104
 .byte   W06
 .byte   Bn3 ,v032
 .byte   W06
 .byte   An3 ,v104
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W06
 .byte   N30 ,Fs3 ,v104
 .byte   W30
 .byte   N06 ,Fs3 ,v032
 .byte   W06
 .byte   N12 ,Dn3 ,v104
 .byte   W12
 .byte   N06 ,An2
 .byte   W06
 .byte   Cn3
 .byte   W06
@  #05 @032   ----------------------------------------
 .byte   Dn3
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   Cn3 ,v104
 .byte   W06
 .byte   Cn3 ,v032
 .byte   W06
 .byte   Dn3 ,v104
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   N30 ,En3 ,v104
 .byte   W30
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   N24 ,Cn3 ,v104
 .byte   W24
@  #05 @033   ----------------------------------------
 .byte   N06 ,Dn3
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   Cn3 ,v104
 .byte   W06
 .byte   Cn3 ,v032
 .byte   W06
 .byte   Dn3 ,v104
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W06
 .byte   N30 ,En3 ,v104
 .byte   W30
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   N24 ,Fn3 ,v104
 .byte   W24
@  #05 @034   ----------------------------------------
 .byte   N06
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   En3 ,v104
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   N30 ,Gn3 ,v104
 .byte   W30
 .byte   N06 ,Gn3 ,v032
 .byte   W06
 .byte   N24 ,Fn3 ,v104
 .byte   W24
@  #05 @035   ----------------------------------------
 .byte   N06 ,An3
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W06
 .byte   Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   N30 ,En3 ,v104
 .byte   W30
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   N12 ,Cn3 ,v104
 .byte   W12
 .byte   N06 ,Dn3
 .byte   W06
 .byte   En3
 .byte   W06
@  #05 @036   ----------------------------------------
 .byte   Fn3
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   Ds3 ,v104
 .byte   W06
 .byte   Ds3 ,v032
 .byte   W06
 .byte   Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   N30 ,Gn3 ,v104
 .byte   W30
 .byte   N06 ,Gn3 ,v032
 .byte   W06
 .byte   N24 ,Ds3 ,v104
 .byte   W24
@  #05 @037   ----------------------------------------
 .byte   N06 ,Fn3
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   Ds3 ,v104
 .byte   W06
 .byte   Ds3 ,v032
 .byte   W06
 .byte   Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   N30 ,Gn3 ,v104
 .byte   W30
 .byte   N06 ,Gn3 ,v032
 .byte   W06
 .byte   N24 ,Gs3 ,v104
 .byte   W24
@  #05 @038   ----------------------------------------
 .byte   N06
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   Gn3 ,v104
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W06
 .byte   Gs3 ,v104
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   N30 ,As3 ,v104
 .byte   W30
 .byte   N06 ,As3 ,v032
 .byte   W06
 .byte   N24 ,Gs3 ,v104
 .byte   W24
@  #05 @039   ----------------------------------------
 .byte   N06 ,Cn4
 .byte   W06
 .byte   Cn4 ,v032
 .byte   W06
 .byte   As3 ,v104
 .byte   W06
 .byte   As3 ,v032
 .byte   W06
 .byte   Gs3 ,v104
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   N48 ,Gn3 ,v104
 .byte   W48
 .byte   N06 ,Gn3 ,v032
 .byte   W12
@  #05 @040   ----------------------------------------
 .byte   GOTO
  .word Label_540AAD
 .byte   FINE

@**************** Track 6 (Midi-Chn.5) ****************@

song0C_006:
@  #06 @000   ----------------------------------------
 .byte   KEYSH , song0C_key+0
Label_540CCE:
 .byte   VOICE , 52
 .byte   VOL , 34*song0C_mvl/mxv
 .byte   PAN , c_v+29
 .byte   N80 ,En2 ,v104
 .byte   W84
 .byte   N03 ,En2 ,v096
 .byte   W06
 .byte   En2 ,v092
 .byte   W06
@  #06 @001   ----------------------------------------
 .byte   N76 ,En2 ,v104
 .byte   W84
 .byte   N03 ,En2 ,v096
 .byte   W12
@  #06 @002   ----------------------------------------
 .byte   N78
 .byte   W84
 .byte   N02 ,En2 ,v088
 .byte   W06
 .byte   N03 ,En2 ,v092
 .byte   W06
@  #06 @003   ----------------------------------------
 .byte   N64 ,En2 ,v104
 .byte   W96
@  #06 @004   ----------------------------------------
 .byte   W96
@  #06 @005   ----------------------------------------
 .byte   W96
@  #06 @006   ----------------------------------------
 .byte   W96
@  #06 @007   ----------------------------------------
 .byte   W96
@  #06 @008   ----------------------------------------
 .byte   W96
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
 .byte   VOL , 34*song0C_mvl/mxv
 .byte   N76 ,Cn2 ,v068
 .byte   N68 ,Gn2 ,v072
 .byte   W78
 .byte   N05 ,Gn2 ,v068
 .byte   W06
 .byte   An2 ,v064
 .byte   W06
 .byte   Bn2 ,v068
 .byte   W06
@  #06 @017   ----------------------------------------
 .byte   N80 ,En2 ,v076
 .byte   N84 ,Cn3 ,v072
 .byte   W96
@  #06 @018   ----------------------------------------
 .byte   N68 ,Dn2 ,v080
 .byte   N68 ,Bn2 ,v072
 .byte   W72
 .byte   N06 ,Dn2
 .byte   N06 ,An2
 .byte   W12
 .byte   Cn2
 .byte   N06 ,Gn2
 .byte   W12
@  #06 @019   ----------------------------------------
 .byte   N88 ,Bn1 ,v076
 .byte   N92 ,Fs2 ,v084
 .byte   W96
@  #06 @020   ----------------------------------------
 .byte   Cn2 ,v076
 .byte   N92 ,Gn2
 .byte   W96
@  #06 @021   ----------------------------------------
 .byte   En2
 .byte   N32 ,Gn2 ,v072
 .byte   W36
 .byte   N11 ,An2
 .byte   W12
 .byte   N44 ,Bn2
 .byte   W48
@  #06 @022   ----------------------------------------
 .byte   N92 ,Dn2 ,v060
 .byte   N92 ,An2 ,v076
 .byte   W96
@  #06 @023   ----------------------------------------
 .byte   Fs2 ,v100
 .byte   W04
 .byte   VOL , 34*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 13*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 12*song0C_mvl/mxv
 .byte   W02
 .byte   VOL , 13*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 13*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 14*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 14*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 15*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 15*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 15*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 16*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 16*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 18*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 18*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 18*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 19*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 19*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 21*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 21*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 21*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song0C_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song0C_mvl/mxv
 .byte   W12
@  #06 @024   ----------------------------------------
 .byte   N06 ,En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v092
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
@  #06 @025   ----------------------------------------
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
@  #06 @026   ----------------------------------------
Label_540E4E:
 .byte   N06 ,Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   PEND 
@  #06 @027   ----------------------------------------
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   Fs2 ,v088
 .byte   W06
 .byte   Fs2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
@  #06 @028   ----------------------------------------
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
@  #06 @029   ----------------------------------------
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
@  #06 @030   ----------------------------------------
 .byte   PATT
  .word Label_540E4E
@  #06 @031   ----------------------------------------
 .byte   N06 ,Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
@  #06 @032   ----------------------------------------
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v092
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
@  #06 @033   ----------------------------------------
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v092
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v092
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v092
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v092
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
@  #06 @034   ----------------------------------------
 .byte   As1 ,v088
 .byte   W06
 .byte   As1 ,v032
 .byte   W06
 .byte   As1 ,v088
 .byte   W06
 .byte   As1 ,v032
 .byte   W06
 .byte   As1 ,v088
 .byte   W06
 .byte   As1 ,v032
 .byte   W06
 .byte   As1 ,v088
 .byte   W06
 .byte   As1 ,v032
 .byte   W06
 .byte   As1 ,v088
 .byte   W06
 .byte   As1 ,v032
 .byte   W06
 .byte   As1 ,v088
 .byte   W06
 .byte   As1 ,v032
 .byte   W06
 .byte   As1 ,v088
 .byte   W06
 .byte   As1 ,v032
 .byte   W06
 .byte   As1 ,v088
 .byte   W06
 .byte   As1 ,v032
 .byte   W06
@  #06 @035   ----------------------------------------
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Cn2 ,v092
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
 .byte   Dn2 ,v088
 .byte   W06
 .byte   Dn2 ,v032
 .byte   W06
 .byte   En2 ,v088
 .byte   W06
 .byte   En2 ,v032
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
 .byte   Cn2 ,v032
 .byte   W06
@  #06 @036   ----------------------------------------
 .byte   Fn2 ,v088
 .byte   W06
 .byte   Fn2 ,v032
 .byte   W06
 .byte   Fn2 ,v088
 .byte   W06
 .byte   Fn2 ,v032
 .byte   W06
 .byte   Fn2 ,v088
 .byte   W06
 .byte   Fn2 ,v032
 .byte   W06
 .byte   Fn2 ,v088
 .byte   W06
 .byte   Fn2 ,v032
 .byte   W06
 .byte   Fn2 ,v088
 .byte   W06
 .byte   Fn2 ,v032
 .byte   W06
 .byte   Fn2 ,v088
 .byte   W06
 .byte   Fn2 ,v032
 .byte   W06
 .byte   Fn2 ,v088
 .byte   W06
 .byte   Fn2 ,v032
 .byte   W06
 .byte   Fn2 ,v088
 .byte   W06
 .byte   Fn2 ,v032
 .byte   W06
@  #06 @037   ----------------------------------------
 .byte   Ds2 ,v088
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v088
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v088
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v088
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v088
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v088
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v088
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v088
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
@  #06 @038   ----------------------------------------
 .byte   Cs2 ,v088
 .byte   W06
 .byte   Cs2 ,v032
 .byte   W06
 .byte   Cs2 ,v088
 .byte   W06
 .byte   Cs2 ,v032
 .byte   W06
 .byte   Cs2 ,v088
 .byte   W06
 .byte   Cs2 ,v032
 .byte   W06
 .byte   Cs2 ,v088
 .byte   W06
 .byte   Cs2 ,v032
 .byte   W06
 .byte   Cs2 ,v088
 .byte   W06
 .byte   Cs2 ,v032
 .byte   W06
 .byte   Cs2 ,v088
 .byte   W06
 .byte   Cs2 ,v032
 .byte   W06
 .byte   Cs2 ,v088
 .byte   W06
 .byte   Cs2 ,v032
 .byte   W06
 .byte   Cs2 ,v088
 .byte   W06
 .byte   Cs2 ,v032
 .byte   W06
@  #06 @039   ----------------------------------------
 .byte   Ds2 ,v088
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v092
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v092
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v092
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v092
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v092
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v092
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
 .byte   Ds2 ,v092
 .byte   W06
 .byte   Ds2 ,v032
 .byte   W06
@  #06 @040   ----------------------------------------
 .byte   GOTO
  .word Label_540CCE
 .byte   FINE

@**************** Track 7 (Midi-Chn.6) ****************@

song0C_007:
@  #07 @000   ----------------------------------------
 .byte   KEYSH , song0C_key+0
Label_5410CE:
 .byte   VOICE , 127
 .byte   VOL , 34*song0C_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N36 ,Cs2 ,v112
 .byte   W36
 .byte   N06 ,Dn1 ,v076
 .byte   W24
 .byte   Dn1 ,v112
 .byte   W24
 .byte   Dn1 ,v084
 .byte   W12
@  #07 @001   ----------------------------------------
 .byte   Dn1 ,v112
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   Dn1 ,v100
 .byte   W24
 .byte   Dn1 ,v080
 .byte   W12
 .byte   Dn1 ,v112
 .byte   W12
 .byte   N11 ,Fn1 ,v092
 .byte   W12
@  #07 @002   ----------------------------------------
 .byte   N06 ,Dn1 ,v100
 .byte   W12
 .byte   Dn1 ,v116
 .byte   W24
 .byte   Dn1 ,v112
 .byte   W24
 .byte   Dn1 ,v100
 .byte   W24
 .byte   Dn1 ,v120
 .byte   W12
@  #07 @003   ----------------------------------------
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   Dn1 ,v100
 .byte   W24
 .byte   Dn1 ,v112
 .byte   W12
 .byte   N12 ,Ds1
 .byte   W12
 .byte   N06 ,Dn1 ,v084
 .byte   W06
 .byte   Dn1 ,v112
 .byte   W06
@  #07 @004   ----------------------------------------
 .byte   Dn1 ,v100
 .byte   W12
 .byte   Dn1 ,v116
 .byte   W24
 .byte   Dn1 ,v112
 .byte   W24
 .byte   Dn1 ,v100
 .byte   W24
 .byte   Dn1 ,v092
 .byte   W12
@  #07 @005   ----------------------------------------
 .byte   W12
 .byte   Dn1 ,v116
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   Dn1 ,v112
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N11 ,Fn1 ,v092
 .byte   W12
@  #07 @006   ----------------------------------------
 .byte   N06 ,Dn1 ,v112
 .byte   W12
 .byte   Dn1 ,v120
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   Dn1 ,v092
 .byte   W24
 .byte   N06
 .byte   W12
@  #07 @007   ----------------------------------------
 .byte   W12
 .byte   Dn1 ,v120
 .byte   W24
 .byte   Dn1 ,v112
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N05 ,Cn2
 .byte   W12
 .byte   An1
 .byte   W12
 .byte   N06 ,Dn1
 .byte   W06
 .byte   N06
 .byte   W06
@  #07 @008   ----------------------------------------
 .byte   N12 ,Cs2 ,v076
 .byte   W12
 .byte   N06 ,Dn1 ,v112
 .byte   W24
 .byte   Dn1 ,v080
 .byte   W24
 .byte   Dn1 ,v092
 .byte   W24
 .byte   Dn1 ,v072
 .byte   W12
@  #07 @009   ----------------------------------------
 .byte   W12
 .byte   Dn1 ,v112
 .byte   W24
 .byte   Dn1 ,v080
 .byte   W24
 .byte   Dn1 ,v076
 .byte   W24
 .byte   Dn1 ,v112
 .byte   W06
 .byte   N06
 .byte   W06
@  #07 @010   ----------------------------------------
 .byte   Dn1 ,v100
 .byte   W12
 .byte   Dn1 ,v116
 .byte   W24
 .byte   Dn1 ,v084
 .byte   W24
 .byte   Dn1 ,v120
 .byte   W24
 .byte   Dn1 ,v116
 .byte   W12
@  #07 @011   ----------------------------------------
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   Dn1 ,v076
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N11 ,Cn2 ,v112
 .byte   W12
 .byte   An1
 .byte   W12
 .byte   N06 ,Dn1 ,v076
 .byte   W06
 .byte   N06
 .byte   W06
@  #07 @012   ----------------------------------------
 .byte   W12
 .byte   Dn1 ,v084
 .byte   W24
 .byte   Dn1 ,v112
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   Dn1 ,v100
 .byte   W12
 .byte   N06
 .byte   W12
@  #07 @013   ----------------------------------------
 .byte   W12
 .byte   Dn1 ,v120
 .byte   W24
 .byte   Dn1 ,v116
 .byte   W24
 .byte   Dn1 ,v100
 .byte   W12
 .byte   Dn1 ,v112
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
@  #07 @014   ----------------------------------------
 .byte   Dn1 ,v100
 .byte   W12
 .byte   Dn1 ,v116
 .byte   W24
 .byte   Dn1 ,v112
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   Dn1 ,v120
 .byte   W12
@  #07 @015   ----------------------------------------
 .byte   Dn1 ,v092
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   Dn1 ,v100
 .byte   W24
 .byte   Dn1 ,v076
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N12 ,Ds1 ,v092
 .byte   W12
@  #07 @016   ----------------------------------------
 .byte   N44 ,Cs2 ,v068
 .byte   W48
 .byte   N06 ,Fs1 ,v092
 .byte   W36
 .byte   N11 ,Bn4 ,v084
 .byte   W12
@  #07 @017   ----------------------------------------
 .byte   N11
 .byte   W12
 .byte   N32 ,Bn4 ,v112
 .byte   W36
 .byte   N06 ,Fs1 ,v080
 .byte   W24
 .byte   N06
 .byte   W06
 .byte   Fs1 ,v072
 .byte   W06
 .byte   N11 ,As1 ,v076
 .byte   W12
@  #07 @018   ----------------------------------------
 .byte   Bn4 ,v100
 .byte   W12
 .byte   N32 ,Bn4 ,v112
 .byte   W36
 .byte   N06 ,Fs1 ,v092
 .byte   W48
@  #07 @019   ----------------------------------------
 .byte   Fs1 ,v080
 .byte   W36
 .byte   N06
 .byte   W24
 .byte   Fs1 ,v068
 .byte   W12
 .byte   Fs1 ,v076
 .byte   W12
 .byte   N11 ,As1 ,v064
 .byte   W12
@  #07 @020   ----------------------------------------
 .byte   N06 ,Fs1 ,v076
 .byte   W48
 .byte   Fs1 ,v092
 .byte   W36
 .byte   N11 ,Bn4 ,v112
 .byte   W12
@  #07 @021   ----------------------------------------
 .byte   Bn4 ,v100
 .byte   W12
 .byte   N32 ,Bn4 ,v084
 .byte   W36
 .byte   N06 ,Fs1 ,v076
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N11 ,As1
 .byte   W12
@  #07 @022   ----------------------------------------
 .byte   Bn4 ,v092
 .byte   W12
 .byte   N32 ,Bn4 ,v112
 .byte   W36
 .byte   N06 ,Fs1 ,v092
 .byte   W24
 .byte   Fs1 ,v084
 .byte   W24
@  #07 @023   ----------------------------------------
 .byte   Fs1 ,v088
 .byte   W18
 .byte   N78 ,En2 ,v124
 .byte   W06
 .byte   N06 ,Fs1 ,v104
 .byte   W24
 .byte   N05 ,Cn2 ,v112
 .byte   W12
 .byte   An1 ,v120
 .byte   W12
 .byte   N06 ,Dn1 ,v072
 .byte   W06
 .byte   Dn1 ,v084
 .byte   W06
 .byte   Dn1 ,v104
 .byte   W06
 .byte   Dn1 ,v112
 .byte   W06
@  #07 @024   ----------------------------------------
 .byte   N44 ,Cs2
 .byte   W48
 .byte   N06 ,Dn1 ,v100
 .byte   W12
 .byte   Dn1 ,v116
 .byte   W24
 .byte   Dn1 ,v072
 .byte   W12
@  #07 @025   ----------------------------------------
 .byte   Dn1 ,v076
 .byte   W12
 .byte   Dn1 ,v100
 .byte   W36
 .byte   N06
 .byte   W12
 .byte   Dn1 ,v092
 .byte   W24
 .byte   N06
 .byte   W12
@  #07 @026   ----------------------------------------
 .byte   Dn1 ,v116
 .byte   W12
 .byte   Dn1 ,v100
 .byte   W36
 .byte   Dn1 ,v084
 .byte   W12
 .byte   Dn1 ,v112
 .byte   W24
 .byte   Dn1 ,v080
 .byte   W12
@  #07 @027   ----------------------------------------
 .byte   N06
 .byte   W12
 .byte   Dn1 ,v092
 .byte   W36
 .byte   Dn1 ,v100
 .byte   W12
 .byte   Dn1 ,v076
 .byte   W12
 .byte   Dn1 ,v080
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
@  #07 @028   ----------------------------------------
 .byte   Dn1 ,v076
 .byte   W12
 .byte   N06
 .byte   W36
 .byte   Dn1 ,v100
 .byte   W12
 .byte   N06
 .byte   W36
@  #07 @029   ----------------------------------------
 .byte   Dn1 ,v116
 .byte   W12
 .byte   Dn1 ,v112
 .byte   W36
 .byte   Dn1 ,v116
 .byte   W12
 .byte   Dn1 ,v112
 .byte   W36
@  #07 @030   ----------------------------------------
 .byte   N06
 .byte   W12
 .byte   Dn1 ,v100
 .byte   W36
 .byte   Dn1 ,v092
 .byte   W12
 .byte   Dn1 ,v100
 .byte   W24
 .byte   Dn1 ,v116
 .byte   W12
@  #07 @031   ----------------------------------------
 .byte   Dn1 ,v092
 .byte   W12
 .byte   Dn1 ,v100
 .byte   W24
 .byte   Dn1 ,v080
 .byte   W12
 .byte   Dn1 ,v092
 .byte   W12
 .byte   Dn1 ,v080
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
 .byte   Dn1 ,v088
 .byte   W06
 .byte   Dn1 ,v096
 .byte   W06
@  #07 @032   ----------------------------------------
 .byte   N44 ,Cs2 ,v112
 .byte   W48
 .byte   N06 ,Dn1 ,v080
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   Dn1 ,v092
 .byte   W12
@  #07 @033   ----------------------------------------
 .byte   Dn1 ,v100
 .byte   W36
 .byte   Dn1 ,v084
 .byte   W12
 .byte   Dn1 ,v076
 .byte   W12
 .byte   Dn1 ,v084
 .byte   W24
 .byte   Dn1 ,v080
 .byte   W12
@  #07 @034   ----------------------------------------
 .byte   N06
 .byte   W12
 .byte   Dn1 ,v068
 .byte   W24
 .byte   Dn1 ,v064
 .byte   W12
 .byte   Dn1 ,v112
 .byte   W12
 .byte   Dn1 ,v064
 .byte   W24
 .byte   Dn1 ,v072
 .byte   W12
@  #07 @035   ----------------------------------------
 .byte   Dn1 ,v100
 .byte   W12
 .byte   Dn1 ,v076
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   Dn1 ,v064
 .byte   W12
 .byte   Dn1 ,v068
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
@  #07 @036   ----------------------------------------
 .byte   N44 ,Cs2 ,v112
 .byte   W48
 .byte   N06 ,Dn1 ,v092
 .byte   W12
 .byte   Dn1 ,v072
 .byte   W24
 .byte   Dn1 ,v084
 .byte   W12
@  #07 @037   ----------------------------------------
 .byte   Dn1 ,v092
 .byte   W12
 .byte   Dn1 ,v064
 .byte   W24
 .byte   Dn1 ,v092
 .byte   W12
 .byte   Dn1 ,v076
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   Dn1 ,v080
 .byte   W12
 .byte   Dn1 ,v076
 .byte   W12
@  #07 @038   ----------------------------------------
 .byte   Dn1 ,v100
 .byte   W12
 .byte   Dn1 ,v068
 .byte   W24
 .byte   Dn1 ,v072
 .byte   W12
 .byte   Dn1 ,v112
 .byte   W12
 .byte   Dn1 ,v052
 .byte   W24
 .byte   Dn1 ,v076
 .byte   W12
@  #07 @039   ----------------------------------------
 .byte   Dn1 ,v100
 .byte   W12
 .byte   Dn1 ,v076
 .byte   W24
 .byte   Dn1 ,v072
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N11 ,Cn2 ,v112
 .byte   W12
 .byte   N05 ,Cn2 ,v127
 .byte   W06
 .byte   An1
 .byte   W06
 .byte   Fn1
 .byte   W06
 .byte   N05
 .byte   W06
@  #07 @040   ----------------------------------------
 .byte   GOTO
  .word Label_5410CE
 .byte   FINE

@******************************************************@
	.align	2

song0C:
	.byte	7	@ NumTrks
	.byte	0	@ NumBlks
	.byte	song0C_pri	@ Priority
	.byte	song0C_rev	@ Reverb.
    
	.word	song0C_grp
    
	.word	song0C_001
	.word	song0C_002
	.word	song0C_003
	.word	song0C_004
	.word	song0C_005
	.word	song0C_006
	.word	song0C_007

	.end
