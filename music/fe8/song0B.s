	.include "MPlayDef.s"

	.equ	song0B_grp, voicegroup000
	.equ	song0B_pri, 10
	.equ	song0B_rev, 128
	.equ	song0B_mvl, 127
	.equ	song0B_key, 0
	.equ	song0B_tbs, 1
	.equ	song0B_exg, 0
	.equ	song0B_cmp, 1

	.section .rodata
	.global	song0B
	.align	2


@**************** Track 1 (Midi-Chn.0) ****************@

song0B_001:
@  #01 @000   ----------------------------------------
 .byte   KEYSH , song0B_key+0
 .byte   TEMPO , 120*song0B_tbs/2
 .byte   W24
Label_833831:
 .byte   VOICE , 1
 .byte   VOL , 48*song0B_mvl/mxv
 .byte   PAN , c_v+13
 .byte   N30 ,Gs2 ,v120
 .byte   W36
 .byte   N06 ,En2
 .byte   W06
 .byte   Gs2
 .byte   W06
 .byte   N18 ,Bn2
 .byte   W18
 .byte   N06 ,Bn2 ,v024
 .byte   W06
@  #01 @001   ----------------------------------------
 .byte   N18 ,En3 ,v120
 .byte   W18
 .byte   N06 ,En3 ,v024
 .byte   W06
 .byte   N30 ,Dn3 ,v120
 .byte   W30
 .byte   N06 ,Dn3 ,v024
 .byte   W06
 .byte   An2 ,v120
 .byte   W12
 .byte   N44 ,Fs2
 .byte   W48
@  #01 @002   ----------------------------------------
 .byte   N30 ,Gs2
 .byte   W36
 .byte   N06 ,En2
 .byte   W06
 .byte   Gs2
 .byte   W06
 .byte   N18 ,Bn2
 .byte   W18
 .byte   N06 ,Bn2 ,v024
 .byte   W06
 .byte   N18 ,En3 ,v120
 .byte   W18
 .byte   N06 ,En3 ,v024
 .byte   W06
@  #01 @003   ----------------------------------------
 .byte   N30 ,Fs3 ,v120
 .byte   W30
 .byte   N06 ,Fs3 ,v024
 .byte   W06
 .byte   Gs3 ,v120
 .byte   W12
 .byte   N18 ,Fs3
 .byte   W18
 .byte   N06 ,Fs3 ,v024
 .byte   W06
 .byte   N18 ,Dn3 ,v120
 .byte   W18
 .byte   N06 ,Dn3 ,v024
 .byte   W06
@  #01 @004   ----------------------------------------
 .byte   N30 ,En3 ,v120
 .byte   W30
 .byte   N06 ,En3 ,v024
 .byte   W06
 .byte   Cn3 ,v120
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   N18 ,En3
 .byte   W18
 .byte   N06 ,En3 ,v024
 .byte   W06
 .byte   N18 ,Fs3 ,v120
 .byte   W18
 .byte   N06 ,Fs3 ,v024
 .byte   W06
@  #01 @005   ----------------------------------------
 .byte   N30 ,Dn3 ,v120
 .byte   W30
 .byte   N06 ,Dn3 ,v024
 .byte   W06
 .byte   En3 ,v120
 .byte   W12
 .byte   N18 ,Dn3
 .byte   W18
 .byte   N06 ,Dn3 ,v024
 .byte   W06
 .byte   N18 ,Bn2 ,v120
 .byte   W18
 .byte   N06 ,Bn2 ,v024
 .byte   W06
@  #01 @006   ----------------------------------------
 .byte   N30 ,Cn3 ,v120
 .byte   W30
 .byte   N06 ,Cn3 ,v024
 .byte   W06
 .byte   Dn3 ,v120
 .byte   W12
 .byte   N18 ,En3
 .byte   W18
 .byte   N06 ,En3 ,v024
 .byte   W06
 .byte   N18 ,Cn3 ,v120
 .byte   W18
 .byte   N06 ,Cn3 ,v024
 .byte   W06
@  #01 @007   ----------------------------------------
 .byte   N42 ,Ds3 ,v120
 .byte   W42
 .byte   N06 ,Ds3 ,v024
 .byte   W06
 .byte   N42 ,Bn2 ,v120
 .byte   W42
 .byte   N06 ,Bn2 ,v024
 .byte   W06
@  #01 @008   ----------------------------------------
Label_8338EE:
 .byte   N30 ,Gs2 ,v127
 .byte   W30
 .byte   N06 ,Gs2 ,v032
 .byte   W06
 .byte   En2 ,v127
 .byte   W06
 .byte   Gs2
 .byte   W06
 .byte   N18 ,Bn2
 .byte   W18
 .byte   N06 ,Bn2 ,v032
 .byte   W06
 .byte   N18 ,En3 ,v127
 .byte   W18
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   PEND
@  #01 @009   ----------------------------------------
 .byte   N24 ,Dn3 ,v127
 .byte   W24
 .byte   N06 ,Dn3 ,v032
 .byte   W12
 .byte   An2 ,v127
 .byte   W06
 .byte   An2 ,v032
 .byte   W06
 .byte   N36 ,Fs2 ,v127
 .byte   W36
 .byte   N06 ,Fs2 ,v028
 .byte   W12
@  #01 @010   ----------------------------------------
 .byte   PATT
  .word Label_8338EE
@  #01 @011   ----------------------------------------
 .byte   N28 ,Fs3 ,v127
 .byte   W30
 .byte   N06 ,Fs3 ,v032
 .byte   W06
 .byte   Gs3 ,v127
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   N18 ,Fs3 ,v127
 .byte   W18
 .byte   N06 ,Fs3 ,v032
 .byte   W06
 .byte   N18 ,Dn3 ,v127
 .byte   W18
 .byte   N06 ,Dn3 ,v032
 .byte   W06
@  #01 @012   ----------------------------------------
 .byte   N24 ,En3 ,v127
 .byte   W30
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   Cn3 ,v127
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   N18 ,En3
 .byte   W18
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   N18 ,Fs3 ,v127
 .byte   W18
 .byte   N06 ,Fs3 ,v032
 .byte   W06
@  #01 @013   ----------------------------------------
 .byte   N28 ,Dn3 ,v127
 .byte   W30
 .byte   N06 ,Dn3 ,v032
 .byte   W06
 .byte   En3 ,v127
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   N18 ,Dn3 ,v127
 .byte   W18
 .byte   N06 ,Dn3 ,v032
 .byte   W06
 .byte   N18 ,Bn2 ,v127
 .byte   W18
 .byte   N06 ,Bn2 ,v032
 .byte   W06
@  #01 @014   ----------------------------------------
 .byte   N28 ,Cn3 ,v127
 .byte   W30
 .byte   N06 ,Cn3 ,v024
 .byte   W06
 .byte   Dn3 ,v127
 .byte   W06
 .byte   Dn3 ,v028
 .byte   W06
 .byte   N18 ,En3 ,v127
 .byte   W18
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   N18 ,Fs3 ,v127
 .byte   W18
 .byte   N06 ,Fs3 ,v032
 .byte   W06
@  #01 @015   ----------------------------------------
 .byte   N24 ,Ds3 ,v127
 .byte   W30
 .byte   N06 ,Ds3 ,v056
 .byte   W06
 .byte   En3 ,v127
 .byte   W06
 .byte   En3 ,v028
 .byte   W06
 .byte   N32 ,Fs3 ,v127
 .byte   W36
 .byte   N06 ,Fs3 ,v028
 .byte   W12
@  #01 @016   ----------------------------------------
 .byte   VOICE , 2
 .byte   VOL , 44*song0B_mvl/mxv
 .byte   N56 ,Gn4 ,v112
 .byte   W60
 .byte   N06 ,Bn4
 .byte   W06
 .byte   Bn4 ,v036
 .byte   W06
 .byte   An4 ,v112
 .byte   W06
 .byte   An4 ,v036
 .byte   W06
 .byte   Gn4 ,v112
 .byte   W06
 .byte   Gn4 ,v036
 .byte   W06
@  #01 @017   ----------------------------------------
 .byte   N44 ,Fs4 ,v112
 .byte   W48
 .byte   N36 ,Dn4
 .byte   W48
@  #01 @018   ----------------------------------------
 .byte   N56 ,Gn4
 .byte   W60
 .byte   N06 ,Bn4
 .byte   W06
 .byte   Bn4 ,v036
 .byte   W06
 .byte   An4 ,v112
 .byte   W06
 .byte   An4 ,v036
 .byte   W06
 .byte   Gn4 ,v112
 .byte   W06
 .byte   Gn4 ,v036
 .byte   W06
@  #01 @019   ----------------------------------------
 .byte   N44 ,Fs4 ,v112
 .byte   W48
 .byte   An4
 .byte   W48
@  #01 @020   ----------------------------------------
 .byte   N11 ,En4 ,v096
 .byte   N11 ,Gn4 ,v112
 .byte   W12
 .byte   Dn4 ,v096
 .byte   N11 ,Fs4 ,v112
 .byte   W12
 .byte   En4 ,v096
 .byte   N11 ,Gn4 ,v112
 .byte   W12
 .byte   N23 ,Cn4 ,v096
 .byte   N23 ,En4 ,v112
 .byte   W24
 .byte   N05 ,Gn4 ,v096
 .byte   N05 ,Bn4 ,v112
 .byte   W06
 .byte   Bn4 ,v036
 .byte   W06
 .byte   Fs4 ,v096
 .byte   N05 ,An4 ,v112
 .byte   W06
 .byte   An4 ,v036
 .byte   W06
 .byte   En4 ,v096
 .byte   N05 ,Gn4 ,v112
 .byte   W06
 .byte   Gn4 ,v036
 .byte   W06
@  #01 @021   ----------------------------------------
 .byte   N11 ,Dn4 ,v096
 .byte   N11 ,Fs4 ,v112
 .byte   W12
 .byte   Cs4 ,v096
 .byte   N11 ,En4 ,v112
 .byte   W12
 .byte   Dn4 ,v096
 .byte   N11 ,Fs4 ,v112
 .byte   W12
 .byte   Bn3 ,v096
 .byte   N11 ,Dn4 ,v112
 .byte   W12
 .byte   N40 ,Fs4 ,v096
 .byte   N40 ,An4 ,v112
 .byte   W42
 .byte   N05 ,An4 ,v036
 .byte   W06
@  #01 @022   ----------------------------------------
 .byte   Gn4 ,v096
 .byte   N05 ,Bn4 ,v112
 .byte   W06
 .byte   Bn4 ,v036
 .byte   W06
 .byte   Fs4 ,v096
 .byte   N05 ,An4 ,v112
 .byte   W06
 .byte   An4 ,v036
 .byte   W06
 .byte   En4 ,v096
 .byte   N05 ,Gn4 ,v112
 .byte   W06
 .byte   Gn4 ,v036
 .byte   W06
 .byte   N23 ,Fs4 ,v112
 .byte   N23 ,An4
 .byte   W24
 .byte   N05 ,Dn4 ,v096
 .byte   N05 ,Fs4 ,v112
 .byte   W06
 .byte   Fs4 ,v036
 .byte   W06
 .byte   En4 ,v096
 .byte   N05 ,Gn4 ,v112
 .byte   W06
 .byte   Gn4 ,v036
 .byte   W06
 .byte   Fs4 ,v096
 .byte   N05 ,An4 ,v112
 .byte   W06
 .byte   An4 ,v036
 .byte   W06
@  #01 @023   ----------------------------------------
 .byte   N40 ,Fs4 ,v096
 .byte   N40 ,Bn4 ,v112
 .byte   W42
 .byte   N05 ,Bn4 ,v036
 .byte   W06
 .byte   N40 ,Ds4 ,v096
 .byte   N40 ,Fs4 ,v112
 .byte   W42
 .byte   N05 ,Fs4 ,v036
 .byte   W06
@  #01 @024   ----------------------------------------
 .byte   VOICE , 3
 .byte   MOD , 0
 .byte   VOL , 44*song0B_mvl/mxv
 .byte   N30 ,En4 ,v104
 .byte   W30
 .byte   N05 ,En4 ,v036
 .byte   W10
 .byte   N04 ,Bn3 ,v104
 .byte   W04
 .byte   Bn3 ,v036
 .byte   W04
 .byte   N18 ,An3 ,v104
 .byte   W18
 .byte   N05 ,An3 ,v036
 .byte   W06
 .byte   N18 ,Bn3 ,v104
 .byte   W18
 .byte   N05 ,Bn3 ,v036
 .byte   W06
@  #01 @025   ----------------------------------------
 .byte   N04 ,En4 ,v104
 .byte   W04
 .byte   En4 ,v036
 .byte   W04
 .byte   Fs4 ,v104
 .byte   W04
 .byte   Fs4 ,v036
 .byte   W04
 .byte   Gn4 ,v104
 .byte   W04
 .byte   Gn4 ,v036
 .byte   W04
 .byte   N60 ,Fs4 ,v104
 .byte   W60
 .byte   N05 ,Fs4 ,v036
 .byte   W12
@  #01 @026   ----------------------------------------
 .byte   N30 ,Cs4 ,v104
 .byte   W30
 .byte   N05 ,Cs4 ,v036
 .byte   W10
 .byte   N04 ,Gs3 ,v104
 .byte   W04
 .byte   Gs3 ,v036
 .byte   W04
 .byte   N18 ,Fs3 ,v104
 .byte   W18
 .byte   N05 ,Fs3 ,v036
 .byte   W06
 .byte   N18 ,Gs3 ,v104
 .byte   W18
 .byte   N05 ,Gs3 ,v036
 .byte   W06
@  #01 @027   ----------------------------------------
 .byte   N04 ,Cs4 ,v104
 .byte   W04
 .byte   Cs4 ,v036
 .byte   W04
 .byte   Ds4 ,v104
 .byte   W04
 .byte   Ds4 ,v036
 .byte   W04
 .byte   En4 ,v104
 .byte   W04
 .byte   En4 ,v036
 .byte   W04
 .byte   N60 ,Ds4 ,v104
 .byte   W60
 .byte   N05 ,Ds4 ,v036
 .byte   W12
@  #01 @028   ----------------------------------------
 .byte   N04 ,En4 ,v104
 .byte   W04
 .byte   En4 ,v036
 .byte   W04
 .byte   Fs4 ,v104
 .byte   W04
 .byte   Fs4 ,v036
 .byte   W04
 .byte   Gs4 ,v104
 .byte   W04
 .byte   Gs4 ,v036
 .byte   W04
 .byte   N60 ,Fs4 ,v104
 .byte   W60
 .byte   N05 ,Fs4 ,v036
 .byte   W11
 .byte   VOL , 44*song0B_mvl/mxv
 .byte   W01
@  #01 @029   ----------------------------------------
 .byte   VOICE , 4
 .byte   VOL , 51*song0B_mvl/mxv
 .byte   PAN , c_v+5
 .byte   N06 ,Cs3 ,v076
 .byte   N06 ,Cs4 ,v084
 .byte   W06
 .byte   Bn2 ,v076
 .byte   N06 ,Bn3 ,v084
 .byte   W06
 .byte   An2 ,v076
 .byte   N06 ,An3 ,v084
 .byte   W06
 .byte   An2 ,v020
 .byte   N06 ,An3 ,v028
 .byte   W06
 .byte   Bn2 ,v076
 .byte   N06 ,Bn3 ,v084
 .byte   W06
 .byte   Bn2 ,v020
 .byte   N06 ,Bn3 ,v028
 .byte   W06
 .byte   Gs2 ,v076
 .byte   N06 ,Gs3 ,v084
 .byte   W06
 .byte   Gs2 ,v020
 .byte   N06 ,Gs3 ,v028
 .byte   W06
 .byte   An2 ,v076
 .byte   N06 ,An3 ,v084
 .byte   W06
 .byte   An2 ,v020
 .byte   N06 ,An3 ,v028
 .byte   W06
 .byte   N24 ,En3 ,v076
 .byte   N24 ,En4 ,v084
 .byte   W24
 .byte   N06 ,En4 ,v028
 .byte   W12
@  #01 @030   ----------------------------------------
 .byte   Ds3 ,v076
 .byte   N06 ,Ds4 ,v084
 .byte   W06
 .byte   Cs3 ,v076
 .byte   N06 ,Cs4 ,v084
 .byte   W06
 .byte   Bn2 ,v076
 .byte   N06 ,Bn3 ,v084
 .byte   W06
 .byte   Bn2 ,v020
 .byte   N06 ,Bn3 ,v028
 .byte   W06
 .byte   Cs3 ,v076
 .byte   N06 ,Cs4 ,v084
 .byte   W06
 .byte   Cs3 ,v020
 .byte   N06 ,Cs4 ,v028
 .byte   W06
 .byte   As2 ,v076
 .byte   N06 ,As3 ,v084
 .byte   W06
 .byte   As2 ,v020
 .byte   N06 ,As3 ,v028
 .byte   W06
 .byte   Bn2 ,v076
 .byte   N06 ,Bn3 ,v084
 .byte   W06
 .byte   Bn2 ,v020
 .byte   N06 ,Bn3 ,v028
 .byte   W06
 .byte   N24 ,Fs3 ,v076
 .byte   N24 ,Fs4 ,v084
 .byte   W24
 .byte   N06 ,Fs4 ,v028
 .byte   W12
@  #01 @031   ----------------------------------------
 .byte   VOICE , 5
 .byte   PAN , c_v-5
 .byte   N06 ,Ds4 ,v088
 .byte   W06
 .byte   Ds4 ,v020
 .byte   W06
 .byte   Cs4 ,v088
 .byte   W06
 .byte   Cs4 ,v020
 .byte   W06
 .byte   Ds4 ,v088
 .byte   W06
 .byte   Ds4 ,v020
 .byte   W06
 .byte   N54 ,Fn4 ,v088
 .byte   W54
 .byte   N06 ,Fn4 ,v020
 .byte   W06
@  #01 @032   ----------------------------------------
 .byte   Fs4 ,v088
 .byte   W06
 .byte   Fs4 ,v020
 .byte   W06
 .byte   Fn4 ,v088
 .byte   W06
 .byte   Fn4 ,v020
 .byte   W06
 .byte   Fs4 ,v088
 .byte   W06
 .byte   Fs4 ,v020
 .byte   W06
 .byte   N48 ,Gs4 ,v088
 .byte   W48
 .byte   N06 ,Gs4 ,v020
 .byte   W12
@  #01 @033   ----------------------------------------
 .byte   As4 ,v088
 .byte   W06
 .byte   As4 ,v020
 .byte   W06
 .byte   Gs4 ,v088
 .byte   W06
 .byte   Gs4 ,v020
 .byte   W06
 .byte   As4 ,v088
 .byte   W06
 .byte   As4 ,v020
 .byte   W06
 .byte   N54 ,Cs5 ,v088
 .byte   W54
 .byte   N06 ,Cs5 ,v020
 .byte   W06
@  #01 @034   ----------------------------------------
 .byte   N30 ,Fs4 ,v088
 .byte   W30
 .byte   N06 ,Fs4 ,v020
 .byte   W06
 .byte   Gs4 ,v088
 .byte   W06
 .byte   Gs4 ,v020
 .byte   W06
 .byte   N36 ,As4 ,v088
 .byte   W36
 .byte   W03
 .byte   N06 ,As4 ,v020
 .byte   W09
@  #01 @035   ----------------------------------------
 .byte   Gs4 ,v088
 .byte   W06
 .byte   Gs4 ,v020
 .byte   W06
 .byte   Fs4 ,v088
 .byte   W06
 .byte   Fs4 ,v020
 .byte   W06
 .byte   Gs4 ,v088
 .byte   W06
 .byte   Gs4 ,v020
 .byte   W06
 .byte   N54 ,As4 ,v088
 .byte   W54
 .byte   N06 ,As4 ,v020
 .byte   W06
@  #01 @036   ----------------------------------------
 .byte   Bn4 ,v088
 .byte   W06
 .byte   Bn4 ,v020
 .byte   W06
 .byte   As4 ,v088
 .byte   W06
 .byte   As4 ,v020
 .byte   W06
 .byte   Bn4 ,v088
 .byte   W06
 .byte   Bn4 ,v020
 .byte   W06
 .byte   N36 ,Cs5 ,v088
 .byte   W42
 .byte   N06 ,Cs5 ,v020
 .byte   W06
 .byte   As3 ,v088
 .byte   W06
 .byte   Cn4
 .byte   W06
@  #01 @037   ----------------------------------------
 .byte   N32 ,Cs4
 .byte   W36
 .byte   N06 ,As3
 .byte   W06
 .byte   Cs4
 .byte   W06
 .byte   N21 ,Fn4
 .byte   W24
 .byte   As4
 .byte   W24
@  #01 @038   ----------------------------------------
 .byte   N32 ,Gs4
 .byte   W36
 .byte   N06 ,Ds4
 .byte   W06
 .byte   Ds4 ,v020
 .byte   W06
 .byte   N30 ,Cn4 ,v088
 .byte   W30
 .byte   N06 ,Cn4 ,v020
 .byte   W06
 .byte   Cs4 ,v088
 .byte   W06
 .byte   Ds4
 .byte   W06
@  #01 @039   ----------------------------------------
 .byte   N32 ,Fn4
 .byte   W36
 .byte   N06 ,Cs4
 .byte   W06
 .byte   Fn4
 .byte   W06
 .byte   N44 ,As4
 .byte   W48
@  #01 @040   ----------------------------------------
 .byte   N36 ,Cn5
 .byte   W42
 .byte   N06 ,Cn5 ,v020
 .byte   W06
 .byte   N36 ,Gs4 ,v088
 .byte   W42
 .byte   N06 ,Gs4 ,v020
 .byte   W06
@  #01 @041   ----------------------------------------
 .byte   N60 ,As4 ,v088
 .byte   W48
 .byte   W01
 .byte   VOL , 51*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 19*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 12*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 8*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 0*song0B_mvl/mxv
 .byte   W02
 .byte   N06 ,As4 ,v020
 .byte   W12
 .byte   VOICE , 1
 .byte   VOL , 51*song0B_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N05 ,Cs2 ,v104
 .byte   W06
 .byte   Ds2
 .byte   W06
 .byte   En2
 .byte   W06
 .byte   Fs2
 .byte   W06
@  #01 @042   ----------------------------------------
 .byte   GOTO
  .word Label_833831
 .byte   FINE

@**************** Track 2 (Midi-Chn.1) ****************@

song0B_002:
@  #02 @000   ----------------------------------------
 .byte   KEYSH , song0B_key+0
 .byte   VOICE , 6
 .byte   VOL , 45*song0B_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N19 ,Bn1 ,v127
 .byte   W24
Label_833CE8:
 .byte   N08 ,En2 ,v127
 .byte   W24
 .byte   N19
 .byte   W24
 .byte   N04 ,En2 ,v116
 .byte   W24
@  #02 @001   ----------------------------------------
 .byte   N16 ,En2 ,v127
 .byte   W24
 .byte   PEND
Label_833CF7:
 .byte   N04 ,En2 ,v127
 .byte   W24
 .byte   N17
 .byte   W24
 .byte   N05
 .byte   W24
@  #02 @002   ----------------------------------------
 .byte   N18
 .byte   W24
 .byte   PEND
Label_833D02:
 .byte   N03 ,En2 ,v127
 .byte   W24
 .byte   N17
 .byte   W24
 .byte   N04
 .byte   W24
@  #02 @003   ----------------------------------------
 .byte   N23 ,En2 ,v116
 .byte   W24
 .byte   PEND
Label_833D0F:
 .byte   N07 ,En2 ,v127
 .byte   W24
 .byte   N19
 .byte   W24
 .byte   N05 ,Dn2
 .byte   W24
@  #02 @004   ----------------------------------------
 .byte   N23
 .byte   W24
 .byte   PEND
Label_833D1B:
 .byte   N07 ,Cn2 ,v127
 .byte   W24
 .byte   N23
 .byte   W24
 .byte   N04 ,Cn2 ,v124
 .byte   W24
@  #02 @005   ----------------------------------------
 .byte   N23 ,Cn2 ,v127
 .byte   W24
 .byte   PEND
Label_833D2A:
 .byte   N04 ,Gn1 ,v116
 .byte   W24
 .byte   N18 ,Gn1 ,v127
 .byte   W24
 .byte   N06 ,Gn1 ,v124
 .byte   W24
@  #02 @006   ----------------------------------------
 .byte   N23 ,Gn1 ,v127
 .byte   W24
 .byte   PEND
Label_833D3B:
 .byte   N07 ,An1 ,v127
 .byte   W24
 .byte   N21
 .byte   W24
 .byte   N06 ,An1 ,v108
 .byte   W24
@  #02 @007   ----------------------------------------
 .byte   N24 ,An1 ,v127
 .byte   W24
 .byte   PEND
Label_833D4A:
 .byte   N05 ,Bn1 ,v127
 .byte   W24
 .byte   N19
 .byte   W24
 .byte   N11 ,Bn1 ,v116
 .byte   W24
@  #02 @008   ----------------------------------------
 .byte   N09 ,Bn1 ,v127
 .byte   W12
 .byte   N09
 .byte   W12
 .byte   PEND
@  #02 @009   ----------------------------------------
 .byte   PATT
  .word Label_833CE8
@  #02 @010   ----------------------------------------
 .byte   PATT
  .word Label_833CF7
@  #02 @011   ----------------------------------------
 .byte   PATT
  .word Label_833D02
@  #02 @012   ----------------------------------------
 .byte   PATT
  .word Label_833D0F
@  #02 @013   ----------------------------------------
 .byte   PATT
  .word Label_833D1B
@  #02 @014   ----------------------------------------
 .byte   PATT
  .word Label_833D2A
@  #02 @015   ----------------------------------------
 .byte   PATT
  .word Label_833D3B
@  #02 @016   ----------------------------------------
 .byte   PATT
  .word Label_833D4A
@  #02 @017   ----------------------------------------
 .byte   N72 ,An1 ,v127
 .byte   W84
 .byte   N05 ,Bn1
 .byte   W06
 .byte   Cn2
 .byte   W06
@  #02 @018   ----------------------------------------
 .byte   N72 ,Bn1 ,v100
 .byte   W84
 .byte   N05 ,Cn2 ,v116
 .byte   W06
 .byte   Dn2 ,v096
 .byte   W06
@  #02 @019   ----------------------------------------
 .byte   N76 ,Cn2 ,v108
 .byte   W84
 .byte   N05 ,Dn2
 .byte   W06
 .byte   En2
 .byte   W06
@  #02 @020   ----------------------------------------
 .byte   N76 ,Dn2 ,v127
 .byte   W96
@  #02 @021   ----------------------------------------
 .byte   N05 ,An1 ,v116
 .byte   W24
 .byte   N48 ,An1 ,v127
 .byte   W60
 .byte   N05 ,Bn1 ,v092
 .byte   W06
 .byte   Cn2 ,v088
 .byte   W06
@  #02 @022   ----------------------------------------
 .byte   Bn1 ,v116
 .byte   W24
 .byte   N32
 .byte   W48
 .byte   N23 ,Bn1 ,v127
 .byte   W24
@  #02 @023   ----------------------------------------
 .byte   N05 ,Cn2 ,v116
 .byte   W24
 .byte   N48 ,Cn2 ,v127
 .byte   W60
 .byte   N11 ,Cn2 ,v084
 .byte   W12
@  #02 @024   ----------------------------------------
 .byte   N05 ,Dn2 ,v116
 .byte   W24
 .byte   N20
 .byte   W24
 .byte   N18 ,Ds2 ,v127
 .byte   W24
 .byte   Bn1
 .byte   W24
@  #02 @025   ----------------------------------------
 .byte   N90 ,En2
 .byte   W96
@  #02 @026   ----------------------------------------
 .byte   N66 ,Cn2
 .byte   W72
 .byte   N20
 .byte   W24
@  #02 @027   ----------------------------------------
 .byte   N64 ,Cs2
 .byte   W72
 .byte   N21 ,Bn1
 .byte   W24
@  #02 @028   ----------------------------------------
 .byte   N66 ,An1
 .byte   W72
 .byte   N21
 .byte   W24
@  #02 @029   ----------------------------------------
 .byte   N56 ,Bn1
 .byte   W72
 .byte   N22
 .byte   W24
@  #02 @030   ----------------------------------------
 .byte   N30 ,An1 ,v124
 .byte   W36
 .byte   N05
 .byte   W12
 .byte   N36 ,Bn1
 .byte   W48
@  #02 @031   ----------------------------------------
 .byte   N24
 .byte   W36
 .byte   N05
 .byte   W12
 .byte   N21 ,Cs2
 .byte   W24
 .byte   Fs1 ,v127
 .byte   W24
@  #02 @032   ----------------------------------------
 .byte   N44 ,Bn1
 .byte   W84
 .byte   W01
 .byte   N04 ,Bn1 ,v116
 .byte   W11
@  #02 @033   ----------------------------------------
 .byte   N42
 .byte   W84
 .byte   N04
 .byte   W12
@  #02 @034   ----------------------------------------
 .byte   N48 ,Fs1 ,v120
 .byte   W84
 .byte   N04 ,Cs2
 .byte   W12
@  #02 @035   ----------------------------------------
 .byte   N48 ,Fs1 ,v127
 .byte   W84
 .byte   N04
 .byte   W12
@  #02 @036   ----------------------------------------
 .byte   N36 ,Gs1 ,v120
 .byte   W84
 .byte   N03 ,Ds2 ,v116
 .byte   W12
@  #02 @037   ----------------------------------------
 .byte   N24 ,Gs1
 .byte   W84
 .byte   N04 ,Gs1 ,v112
 .byte   W12
@  #02 @038   ----------------------------------------
 .byte   N36 ,As1 ,v116
 .byte   W84
 .byte   N03
 .byte   W12
@  #02 @039   ----------------------------------------
 .byte   N40 ,Gs1 ,v120
 .byte   W84
 .byte   N04 ,Gs1 ,v116
 .byte   W12
@  #02 @040   ----------------------------------------
 .byte   N52 ,As1 ,v120
 .byte   W84
 .byte   N04 ,As1 ,v127
 .byte   W12
@  #02 @041   ----------------------------------------
 .byte   N44 ,Gs1 ,v080
 .byte   W84
 .byte   N04 ,Gs1 ,v068
 .byte   W12
@  #02 @042   ----------------------------------------
 .byte   N42 ,As1 ,v116
 .byte   W96
@  #02 @043   ----------------------------------------
 .byte   GOTO
  .word Label_833CE8
 .byte   FINE

@**************** Track 3 (Midi-Chn.2) ****************@

song0B_003:
@  #03 @000   ----------------------------------------
 .byte   KEYSH , song0B_key+0
 .byte   W24
Label_833E52:
 .byte   VOICE , 7
 .byte   VOL , 49*song0B_mvl/mxv
 .byte   PAN , c_v-18
 .byte   N24 ,En2 ,v092
 .byte   W36
 .byte   N06 ,Bn1
 .byte   W06
 .byte   En2
 .byte   W06
 .byte   N18 ,Gs2
 .byte   W24
@  #03 @001   ----------------------------------------
 .byte   N20 ,Bn2
 .byte   W24
 .byte   N24 ,An2
 .byte   W36
 .byte   N06 ,Fs2
 .byte   W12
 .byte   N36 ,Dn2
 .byte   W48
@  #03 @002   ----------------------------------------
 .byte   N24 ,En2
 .byte   W36
 .byte   N06 ,Bn1
 .byte   W06
 .byte   En2
 .byte   W06
 .byte   N18 ,Gs2
 .byte   W24
 .byte   N20 ,Bn2
 .byte   W24
@  #03 @003   ----------------------------------------
 .byte   N24 ,Dn3
 .byte   W36
 .byte   N06 ,En3
 .byte   W12
 .byte   N18 ,Dn3
 .byte   W24
 .byte   An2
 .byte   W24
@  #03 @004   ----------------------------------------
 .byte   N24 ,Cn3
 .byte   W36
 .byte   N06 ,An2
 .byte   W06
 .byte   Bn2
 .byte   W06
 .byte   N15 ,Cn3
 .byte   W24
 .byte   N20 ,Dn3
 .byte   W24
@  #03 @005   ----------------------------------------
 .byte   N30 ,Bn2
 .byte   W36
 .byte   N06 ,Cn3
 .byte   W12
 .byte   N18 ,Bn2
 .byte   W24
 .byte   Gn2
 .byte   W24
@  #03 @006   ----------------------------------------
 .byte   N24 ,An2
 .byte   W36
 .byte   N06 ,Bn2
 .byte   W12
 .byte   N18 ,Cn3
 .byte   W24
 .byte   An2
 .byte   W24
@  #03 @007   ----------------------------------------
 .byte   N36 ,Bn2
 .byte   W48
 .byte   Fs2
 .byte   W48
@  #03 @008   ----------------------------------------
 .byte   W96
@  #03 @009   ----------------------------------------
 .byte   W60
 .byte   N06 ,Cs4 ,v076
 .byte   W06
 .byte   Cs4 ,v032
 .byte   W06
 .byte   Bn3 ,v076
 .byte   W06
 .byte   Bn3 ,v032
 .byte   W06
 .byte   An3 ,v076
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
@  #03 @010   ----------------------------------------
 .byte   N72 ,Bn3 ,v076
 .byte   W72
 .byte   N06 ,Bn3 ,v032
 .byte   W24
@  #03 @011   ----------------------------------------
 .byte   N24 ,Fs3 ,v076
 .byte   W24
 .byte   N06 ,Fs3 ,v032
 .byte   W12
 .byte   Gs3 ,v076
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   N36 ,An3 ,v076
 .byte   W36
 .byte   N06 ,An3 ,v032
 .byte   W12
@  #03 @012   ----------------------------------------
 .byte   N24 ,Gn3 ,v076
 .byte   W24
 .byte   N06 ,Gn3 ,v032
 .byte   W12
 .byte   An3 ,v076
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   N36 ,Bn3 ,v076
 .byte   W36
 .byte   N06 ,Bn3 ,v032
 .byte   W12
@  #03 @013   ----------------------------------------
 .byte   N24 ,An3 ,v076
 .byte   W24
 .byte   N06 ,An3 ,v032
 .byte   W12
 .byte   Bn3 ,v076
 .byte   W06
 .byte   Bn3 ,v032
 .byte   W06
 .byte   N36 ,An3 ,v076
 .byte   W36
 .byte   N06 ,An3 ,v032
 .byte   W12
@  #03 @014   ----------------------------------------
 .byte   N48 ,An3 ,v076
 .byte   W48
 .byte   N06 ,An3 ,v032
 .byte   W12
 .byte   An3 ,v076
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   Bn3 ,v076
 .byte   W06
 .byte   Bn3 ,v032
 .byte   W06
 .byte   Cn4 ,v076
 .byte   W06
 .byte   Cn4 ,v032
 .byte   W06
@  #03 @015   ----------------------------------------
 .byte   N42 ,Bn3 ,v076
 .byte   W42
 .byte   N06 ,Bn3 ,v032
 .byte   W06
 .byte   N36 ,Fs3 ,v076
 .byte   W36
 .byte   N06 ,Fs3 ,v032
 .byte   W11
 .byte   VOL , 49*song0B_mvl/mxv
 .byte   W01
@  #03 @016   ----------------------------------------
 .byte   VOICE , 8
 .byte   VOL , 44*song0B_mvl/mxv
 .byte   PAN , c_v-24
 .byte   N92 ,An2 ,v064
 .byte   N96 ,Cn3 ,v080
 .byte   W96
@  #03 @017   ----------------------------------------
 .byte   N92 ,Bn2 ,v064
 .byte   N96 ,Dn3 ,v080
 .byte   W96
@  #03 @018   ----------------------------------------
 .byte   N92 ,Cn3 ,v064
 .byte   N96 ,En3 ,v080
 .byte   W96
@  #03 @019   ----------------------------------------
 .byte   N92 ,Dn3 ,v064
 .byte   N96 ,Fs3 ,v080
 .byte   W96
@  #03 @020   ----------------------------------------
 .byte   N06 ,An2 ,v096
 .byte   N06 ,Cn3
 .byte   W06
 .byte   Cn3 ,v036
 .byte   W06
 .byte   An2 ,v080
 .byte   N06 ,Cn3 ,v084
 .byte   W06
 .byte   Cn3 ,v036
 .byte   W06
 .byte   An2 ,v096
 .byte   N06 ,Cn3 ,v108
 .byte   W06
 .byte   Cn3 ,v036
 .byte   W06
 .byte   An2 ,v084
 .byte   N06 ,Cn3 ,v088
 .byte   W06
 .byte   Cn3 ,v036
 .byte   W06
 .byte   An2 ,v088
 .byte   N06 ,Cn3
 .byte   W06
 .byte   Cn3 ,v036
 .byte   W06
 .byte   An2 ,v080
 .byte   N06 ,Cn3
 .byte   W06
 .byte   Cn3 ,v036
 .byte   W06
 .byte   An2 ,v084
 .byte   N06 ,Cn3
 .byte   W06
 .byte   Cn3 ,v036
 .byte   W06
 .byte   An2 ,v084
 .byte   N06 ,Dn3
 .byte   W06
 .byte   En3 ,v088
 .byte   W06
@  #03 @021   ----------------------------------------
 .byte   Bn2 ,v096
 .byte   N06 ,Dn3
 .byte   W06
 .byte   Dn3 ,v036
 .byte   W06
 .byte   Bn2 ,v080
 .byte   N06 ,Dn3
 .byte   W06
 .byte   Dn3 ,v036
 .byte   W06
 .byte   Bn2 ,v076
 .byte   N06 ,Dn3
 .byte   W06
 .byte   Dn3 ,v036
 .byte   W06
 .byte   Bn2 ,v076
 .byte   N06 ,Dn3 ,v084
 .byte   W06
 .byte   Dn3 ,v036
 .byte   W06
 .byte   Bn2 ,v096
 .byte   N06 ,Dn3 ,v084
 .byte   W06
 .byte   Dn3 ,v036
 .byte   W06
 .byte   Bn2 ,v084
 .byte   N06 ,Dn3 ,v080
 .byte   W06
 .byte   Dn3 ,v036
 .byte   W06
 .byte   Bn2 ,v080
 .byte   N06 ,Dn3 ,v088
 .byte   W06
 .byte   Dn3 ,v036
 .byte   W06
 .byte   Bn2 ,v084
 .byte   N06 ,Dn3 ,v096
 .byte   W06
 .byte   Dn3 ,v036
 .byte   W06
@  #03 @022   ----------------------------------------
 .byte   Cn3 ,v092
 .byte   N06 ,En3 ,v084
 .byte   W06
 .byte   En3 ,v036
 .byte   W06
 .byte   Cn3 ,v080
 .byte   N06 ,En3 ,v088
 .byte   W06
 .byte   En3 ,v036
 .byte   W06
 .byte   Cn3 ,v092
 .byte   N06 ,En3
 .byte   W06
 .byte   En3 ,v036
 .byte   W06
 .byte   Cn3 ,v080
 .byte   N06 ,En3 ,v084
 .byte   W06
 .byte   En3 ,v036
 .byte   W06
 .byte   Cn3 ,v080
 .byte   N06 ,En3 ,v084
 .byte   W06
 .byte   En3 ,v036
 .byte   W06
 .byte   Cn3 ,v084
 .byte   N06 ,En3 ,v088
 .byte   W06
 .byte   En3 ,v036
 .byte   W06
 .byte   Cn3 ,v084
 .byte   N06 ,En3 ,v088
 .byte   W06
 .byte   En3 ,v036
 .byte   W06
 .byte   Cn3 ,v084
 .byte   N06 ,Fs3 ,v092
 .byte   W06
 .byte   Gn3
 .byte   W06
@  #03 @023   ----------------------------------------
 .byte   Dn3 ,v080
 .byte   N06 ,Fs3 ,v096
 .byte   W06
 .byte   Fs3 ,v036
 .byte   W06
 .byte   Dn3 ,v084
 .byte   N06 ,Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v036
 .byte   W06
 .byte   Dn3 ,v092
 .byte   N06 ,Fs3 ,v108
 .byte   W06
 .byte   Fs3 ,v036
 .byte   W06
 .byte   Dn3 ,v088
 .byte   N06 ,Fs3 ,v100
 .byte   W06
 .byte   Fs3 ,v036
 .byte   W06
 .byte   Ds3 ,v096
 .byte   N06 ,An3
 .byte   W06
 .byte   An3 ,v036
 .byte   W06
 .byte   Ds3 ,v100
 .byte   N06 ,An3 ,v088
 .byte   W06
 .byte   An3 ,v036
 .byte   W06
 .byte   Ds3 ,v116
 .byte   N06 ,An3 ,v096
 .byte   W06
 .byte   An3 ,v036
 .byte   W06
 .byte   Ds3 ,v120
 .byte   N06 ,An3 ,v112
 .byte   W06
 .byte   An3 ,v036
 .byte   W05
 .byte   VOL , 44*song0B_mvl/mxv
 .byte   W01
@  #03 @024   ----------------------------------------
 .byte   VOICE , 9
 .byte   VOL , 49*song0B_mvl/mxv
 .byte   PAN , c_v-24
 .byte   N30 ,Bn3 ,v080
 .byte   W30
 .byte   N06 ,Bn3 ,v036
 .byte   W10
 .byte   N04 ,Gn3 ,v080
 .byte   W04
 .byte   Gn3 ,v036
 .byte   W04
 .byte   N18 ,Fs3 ,v080
 .byte   W18
 .byte   N06 ,Fs3 ,v036
 .byte   W06
 .byte   N18 ,Gn3 ,v080
 .byte   W18
 .byte   N06 ,Gn3 ,v036
 .byte   W06
@  #03 @025   ----------------------------------------
 .byte   N04 ,Bn2 ,v080
 .byte   W04
 .byte   Bn2 ,v036
 .byte   W04
 .byte   Dn3 ,v080
 .byte   W04
 .byte   Dn3 ,v036
 .byte   W04
 .byte   En3 ,v080
 .byte   W04
 .byte   En3 ,v036
 .byte   W04
 .byte   N48 ,Dn3 ,v080
 .byte   W48
 .byte   N06 ,Dn3 ,v036
 .byte   W24
@  #03 @026   ----------------------------------------
 .byte   N30 ,Gs3 ,v080
 .byte   W30
 .byte   N06 ,Gs3 ,v036
 .byte   W10
 .byte   N04 ,En3 ,v080
 .byte   W04
 .byte   En3 ,v036
 .byte   W04
 .byte   N18 ,Ds3 ,v080
 .byte   W18
 .byte   N06 ,Ds3 ,v036
 .byte   W06
 .byte   N18 ,En3 ,v080
 .byte   W18
 .byte   N06 ,En3 ,v036
 .byte   W06
@  #03 @027   ----------------------------------------
 .byte   N04 ,Gs3 ,v080
 .byte   W04
 .byte   Gs3 ,v036
 .byte   W04
 .byte   Bn3 ,v080
 .byte   W04
 .byte   Bn3 ,v036
 .byte   W04
 .byte   Cs4 ,v080
 .byte   W04
 .byte   Cs4 ,v036
 .byte   W04
 .byte   N48 ,Bn3 ,v080
 .byte   W48
 .byte   N06 ,Bn3 ,v036
 .byte   W24
@  #03 @028   ----------------------------------------
 .byte   N04 ,Cs4 ,v080
 .byte   W04
 .byte   Cs4 ,v036
 .byte   W04
 .byte   Ds4 ,v080
 .byte   W04
 .byte   Ds4 ,v036
 .byte   W04
 .byte   En4 ,v080
 .byte   W04
 .byte   En4 ,v036
 .byte   W04
 .byte   N48 ,Ds4 ,v080
 .byte   W72
@  #03 @029   ----------------------------------------
 .byte   N06 ,An3
 .byte   W06
 .byte   Gs3
 .byte   W06
 .byte   Fs3
 .byte   W06
 .byte   Fs3 ,v032
 .byte   W06
 .byte   Gs3 ,v080
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   En3 ,v080
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   Fs3 ,v080
 .byte   W06
 .byte   Fs3 ,v032
 .byte   W06
 .byte   N24 ,Bn3 ,v068
 .byte   W36
@  #03 @030   ----------------------------------------
 .byte   N06 ,Bn3 ,v080
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   Gs3
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   An3 ,v080
 .byte   W06
 .byte   An3 ,v032
 .byte   W06
 .byte   Fs3 ,v080
 .byte   W06
 .byte   Fs3 ,v032
 .byte   W06
 .byte   Gs3 ,v080
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   N24 ,Ds4 ,v052
 .byte   W32
 .byte   W03
 .byte   VOL , 49*song0B_mvl/mxv
 .byte   W01
@  #03 @031   ----------------------------------------
 .byte   VOICE , 7
 .byte   VOL , 44*song0B_mvl/mxv
 .byte   PAN , c_v-24
 .byte   N06 ,Bn2 ,v104
 .byte   W06
 .byte   Bn2 ,v060
 .byte   W06
 .byte   Fs2 ,v104
 .byte   W06
 .byte   Fs2 ,v060
 .byte   W06
 .byte   Bn2 ,v104
 .byte   W06
 .byte   Bn2 ,v060
 .byte   W06
 .byte   N54 ,Bn2 ,v104
 .byte   W54
 .byte   N06 ,Bn2 ,v060
 .byte   W06
@  #03 @032   ----------------------------------------
 .byte   Bn2 ,v104
 .byte   W06
 .byte   Bn2 ,v060
 .byte   W06
 .byte   Gs2 ,v104
 .byte   W06
 .byte   Gs2 ,v060
 .byte   W06
 .byte   Bn2 ,v104
 .byte   W06
 .byte   Bn2 ,v060
 .byte   W06
 .byte   N48 ,Cs3 ,v104
 .byte   W48
 .byte   N06 ,Cs3 ,v060
 .byte   W12
@  #03 @033   ----------------------------------------
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v060
 .byte   W06
 .byte   Cs3 ,v104
 .byte   W06
 .byte   Cs3 ,v060
 .byte   W06
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v060
 .byte   W06
 .byte   N54 ,Fs3 ,v104
 .byte   W54
 .byte   N06 ,Fs3 ,v060
 .byte   W06
@  #03 @034   ----------------------------------------
 .byte   N30 ,Cs3 ,v104
 .byte   W30
 .byte   N06 ,Cs3 ,v060
 .byte   W06
 .byte   Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v060
 .byte   W06
 .byte   N36 ,Fs3 ,v104
 .byte   W36
 .byte   N06 ,Fs3 ,v060
 .byte   W12
@  #03 @035   ----------------------------------------
 .byte   Ds3 ,v104
 .byte   W06
 .byte   Ds3 ,v060
 .byte   W06
 .byte   Cs3 ,v104
 .byte   W06
 .byte   Cs3 ,v060
 .byte   W06
 .byte   Ds3 ,v104
 .byte   W06
 .byte   Ds3 ,v060
 .byte   W06
 .byte   N54 ,Fs3 ,v104
 .byte   W54
 .byte   N06 ,Fs3 ,v060
 .byte   W06
@  #03 @036   ----------------------------------------
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v060
 .byte   W06
 .byte   Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v060
 .byte   W06
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v060
 .byte   W06
 .byte   N30 ,Gs3 ,v104
 .byte   W30
 .byte   N06 ,Gs3 ,v060
 .byte   W30
@  #03 @037   ----------------------------------------
 .byte   N28 ,As2 ,v104
 .byte   W36
 .byte   N05 ,Fn2 ,v096
 .byte   W06
 .byte   As2 ,v100
 .byte   W06
 .byte   N12 ,Cs3
 .byte   W24
 .byte   N14 ,Fn3
 .byte   W24
@  #03 @038   ----------------------------------------
 .byte   N30 ,Ds3 ,v104
 .byte   W36
 .byte   N05 ,Cn3 ,v096
 .byte   W12
 .byte   N36 ,Gs2 ,v100
 .byte   W48
@  #03 @039   ----------------------------------------
 .byte   N42 ,Cs3 ,v104
 .byte   W48
 .byte   Fn3
 .byte   W48
@  #03 @040   ----------------------------------------
 .byte   Ds3
 .byte   W48
 .byte   N18 ,Gs3
 .byte   W24
 .byte   Ds3
 .byte   W24
@  #03 @041   ----------------------------------------
 .byte   N68 ,As2
 .byte   W48
 .byte   W03
 .byte   VOL , 43*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 14*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 12*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 10*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 7*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 5*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 3*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 0*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 16*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song0B_mvl/mxv
 .byte   N05 ,An2
 .byte   W06
 .byte   Bn2
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Ds3
 .byte   W06
@  #03 @042   ----------------------------------------
 .byte   GOTO
  .word Label_833E52
 .byte   FINE

@**************** Track 4 (Midi-Chn.3) ****************@

song0B_004:
@  #04 @000   ----------------------------------------
 .byte   KEYSH , song0B_key+0
 .byte   W24
Label_83425A:
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
 .byte   W96
@  #04 @006   ----------------------------------------
 .byte   W96
@  #04 @007   ----------------------------------------
 .byte   VOICE , 10
 .byte   VOL , 43*song0B_mvl/mxv
 .byte   PAN , c_v-34
 .byte   W96
@  #04 @008   ----------------------------------------
Label_834268:
 .byte   N30 ,Gs2 ,v127
 .byte   W30
 .byte   N06 ,Gs2 ,v032
 .byte   W06
 .byte   En2 ,v127
 .byte   W06
 .byte   Gs2
 .byte   W06
 .byte   N18 ,Bn2
 .byte   W18
 .byte   N06 ,Bn2 ,v032
 .byte   W06
 .byte   N18 ,En3 ,v127
 .byte   W18
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   PEND
@  #04 @009   ----------------------------------------
 .byte   N24 ,Dn3 ,v127
 .byte   W24
 .byte   N06 ,Dn3 ,v032
 .byte   W12
 .byte   An2 ,v127
 .byte   W06
 .byte   An2 ,v032
 .byte   W06
 .byte   N36 ,Fs2 ,v127
 .byte   W36
 .byte   N06 ,Fs2 ,v028
 .byte   W12
@  #04 @010   ----------------------------------------
 .byte   PATT
  .word Label_834268
@  #04 @011   ----------------------------------------
 .byte   N28 ,Fs3 ,v127
 .byte   W30
 .byte   N06 ,Fs3 ,v032
 .byte   W06
 .byte   Gs3 ,v127
 .byte   W06
 .byte   Gs3 ,v032
 .byte   W06
 .byte   N18 ,Fs3 ,v127
 .byte   W18
 .byte   N06 ,Fs3 ,v032
 .byte   W06
 .byte   N18 ,Dn3 ,v127
 .byte   W18
 .byte   N06 ,Dn3 ,v032
 .byte   W06
@  #04 @012   ----------------------------------------
 .byte   N24 ,En3 ,v127
 .byte   W30
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   Cn3 ,v127
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   N18 ,En3
 .byte   W18
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   N18 ,Fs3 ,v127
 .byte   W18
 .byte   N06 ,Fs3 ,v032
 .byte   W06
@  #04 @013   ----------------------------------------
 .byte   N28 ,Dn3 ,v127
 .byte   W30
 .byte   N06 ,Dn3 ,v032
 .byte   W06
 .byte   En3 ,v127
 .byte   W06
 .byte   En3 ,v032
 .byte   W06
 .byte   N18 ,Dn3 ,v127
 .byte   W18
 .byte   N06 ,Dn3 ,v032
 .byte   W06
 .byte   N18 ,Bn2 ,v127
 .byte   W18
 .byte   N06 ,Bn2 ,v032
 .byte   W06
@  #04 @014   ----------------------------------------
 .byte   N28 ,Cn3 ,v127
 .byte   W30
 .byte   N06 ,Cn3 ,v024
 .byte   W06
 .byte   Dn3 ,v127
 .byte   W06
 .byte   Dn3 ,v028
 .byte   W06
 .byte   N18 ,En3 ,v127
 .byte   W18
 .byte   N06 ,En3 ,v032
 .byte   W06
 .byte   N18 ,Fs3 ,v127
 .byte   W18
 .byte   N06 ,Fs3 ,v032
 .byte   W06
@  #04 @015   ----------------------------------------
 .byte   N24 ,Ds3 ,v127
 .byte   W30
 .byte   N06 ,Ds3 ,v056
 .byte   W06
 .byte   En3 ,v127
 .byte   W06
 .byte   En3 ,v028
 .byte   W06
 .byte   N32 ,Fs3 ,v127
 .byte   W36
 .byte   N06 ,Fs3 ,v028
 .byte   W12
@  #04 @016   ----------------------------------------
 .byte   VOICE , 1
 .byte   VOL , 43*song0B_mvl/mxv
 .byte   PAN , c_v-9
 .byte   W24
 .byte   N04 ,Bn2 ,v104
 .byte   W24
 .byte   N48 ,Gn3 ,v108
 .byte   W48
@  #04 @017   ----------------------------------------
 .byte   W24
 .byte   N04 ,Dn3 ,v092
 .byte   W24
 .byte   N48 ,Fs3 ,v108
 .byte   W48
@  #04 @018   ----------------------------------------
 .byte   N09 ,Fs3 ,v032
 .byte   W24
 .byte   N04 ,En3 ,v104
 .byte   W24
 .byte   N48 ,Gn3 ,v108
 .byte   W48
@  #04 @019   ----------------------------------------
 .byte   N09 ,Gn3 ,v032
 .byte   W24
 .byte   N16 ,Fs3 ,v104
 .byte   W18
 .byte   N06 ,Fs3 ,v032
 .byte   W06
 .byte   N16 ,Dn3 ,v104
 .byte   W18
 .byte   N06 ,Dn3 ,v032
 .byte   W06
 .byte   N16 ,Bn2 ,v104
 .byte   W18
 .byte   N06 ,Bn2 ,v032
 .byte   W06
@  #04 @020   ----------------------------------------
 .byte   W96
@  #04 @021   ----------------------------------------
 .byte   W96
@  #04 @022   ----------------------------------------
 .byte   W96
@  #04 @023   ----------------------------------------
 .byte   W72
 .byte   VOICE , 10
 .byte   VOL , 43*song0B_mvl/mxv
 .byte   PAN , c_v-34
 .byte   W24
@  #04 @024   ----------------------------------------
 .byte   N66 ,Bn2 ,v084
 .byte   N68 ,En3 ,v100
 .byte   W72
 .byte   N18 ,Dn3 ,v084
 .byte   N20 ,Fs3 ,v100
 .byte   W24
@  #04 @025   ----------------------------------------
 .byte   N42 ,En3 ,v088
 .byte   N44 ,Gn3 ,v100
 .byte   W48
 .byte   N04 ,Cs3 ,v076
 .byte   N04 ,En3 ,v092
 .byte   W08
 .byte   Dn3 ,v088
 .byte   N04 ,Fs3 ,v100
 .byte   W08
 .byte   En3 ,v080
 .byte   N04 ,Gn3 ,v096
 .byte   W08
 .byte   N20 ,Dn3 ,v088
 .byte   N20 ,Fs3 ,v112
 .byte   W24
@  #04 @026   ----------------------------------------
 .byte   N66 ,Gs2 ,v084
 .byte   N68 ,Cs3 ,v104
 .byte   W72
 .byte   N18 ,Bn2 ,v084
 .byte   N20 ,Ds3 ,v104
 .byte   W24
@  #04 @027   ----------------------------------------
 .byte   N42 ,Cs3 ,v088
 .byte   N44 ,En3 ,v100
 .byte   W48
 .byte   N04 ,As2 ,v076
 .byte   N04 ,Cs3 ,v092
 .byte   W08
 .byte   Bn2 ,v088
 .byte   N04 ,Ds3 ,v100
 .byte   W08
 .byte   Cs3 ,v080
 .byte   N04 ,En3 ,v092
 .byte   W08
 .byte   N20 ,Bn2 ,v096
 .byte   N20 ,Ds3 ,v112
 .byte   W24
@  #04 @028   ----------------------------------------
 .byte   N42 ,Bn2 ,v084
 .byte   N44 ,En3 ,v100
 .byte   W48
 .byte   N04 ,Bn2 ,v084
 .byte   N04 ,En3 ,v100
 .byte   W08
 .byte   Ds3 ,v076
 .byte   N04 ,Fs3 ,v092
 .byte   W08
 .byte   En3 ,v096
 .byte   N04 ,Gs3 ,v112
 .byte   W08
 .byte   N19 ,Ds3 ,v088
 .byte   N19 ,Fs3 ,v108
 .byte   W24
@  #04 @029   ----------------------------------------
 .byte   N44 ,En2 ,v084
 .byte   N44 ,Cs3
 .byte   W48
 .byte   Fs2
 .byte   N44 ,En3
 .byte   W48
@  #04 @030   ----------------------------------------
 .byte   Fs2
 .byte   N44 ,Ds3
 .byte   W48
 .byte   N21 ,Bn2
 .byte   N21 ,Fs3
 .byte   W24
 .byte   Bn2
 .byte   N21 ,En3
 .byte   W24
@  #04 @031   ----------------------------------------
 .byte   VOICE , 11
 .byte   VOL , 32*song0B_mvl/mxv
 .byte   PAN , c_v-19
 .byte   N04 ,Ds3 ,v104
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   Ds3 ,v028
 .byte   W18
 .byte   Ds3 ,v104
 .byte   W06
 .byte   Ds3 ,v028
 .byte   W18
 .byte   Ds3 ,v104
 .byte   W06
 .byte   Ds3 ,v028
 .byte   W18
 .byte   Ds3 ,v104
 .byte   W06
 .byte   Ds3 ,v028
 .byte   W06
@  #04 @032   ----------------------------------------
Label_83442E:
 .byte   N04 ,Ds3 ,v104
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   Ds3 ,v028
 .byte   W18
 .byte   Ds3 ,v104
 .byte   W06
 .byte   Ds3 ,v028
 .byte   W18
 .byte   Ds3 ,v104
 .byte   W06
 .byte   Ds3 ,v028
 .byte   W18
 .byte   Ds3 ,v104
 .byte   W06
 .byte   Ds3 ,v028
 .byte   W06
 .byte   PEND
@  #04 @033   ----------------------------------------
Label_83444A:
 .byte   N04 ,Cs3 ,v104
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   Cs3 ,v028
 .byte   W18
 .byte   Cs3 ,v104
 .byte   W06
 .byte   Cs3 ,v028
 .byte   W18
 .byte   Cs3 ,v104
 .byte   W06
 .byte   Cs3 ,v028
 .byte   W18
 .byte   Cs3 ,v104
 .byte   W06
 .byte   Cs3 ,v028
 .byte   W06
 .byte   PEND
@  #04 @034   ----------------------------------------
 .byte   PATT
  .word Label_83444A
@  #04 @035   ----------------------------------------
 .byte   PATT
  .word Label_83442E
@  #04 @036   ----------------------------------------
 .byte   PATT
  .word Label_83442E
@  #04 @037   ----------------------------------------
 .byte   PATT
  .word Label_83444A
@  #04 @038   ----------------------------------------
 .byte   PATT
  .word Label_83442E
@  #04 @039   ----------------------------------------
 .byte   PATT
  .word Label_83444A
@  #04 @040   ----------------------------------------
 .byte   PATT
  .word Label_83442E
@  #04 @041   ----------------------------------------
 .byte   N78 ,Fn3 ,v104
 .byte   W42
 .byte   VOL , 31*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 14*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 12*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 10*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 7*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 5*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 3*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 0*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 0*song0B_mvl/mxv
 .byte   W40
@  #04 @042   ----------------------------------------
 .byte   GOTO
  .word Label_83425A
 .byte   FINE

@**************** Track 5 (Midi-Chn.4) ****************@

song0B_005:
@  #05 @000   ----------------------------------------
 .byte   KEYSH , song0B_key+0
 .byte   W24
Label_8344B5:
 .byte   VOICE , 9
 .byte   VOL , 34*song0B_mvl/mxv
 .byte   PAN , c_v-29
 .byte   N32 ,Bn2 ,v052
 .byte   N32 ,En3 ,v064
 .byte   W36
 .byte   N06 ,Bn2 ,v052
 .byte   N06 ,En3 ,v060
 .byte   W06
 .byte   Dn3 ,v056
 .byte   N06 ,Fs3 ,v064
 .byte   W06
 .byte   En3 ,v056
 .byte   N06 ,Gs3 ,v068
 .byte   W12
 .byte   En3 ,v052
 .byte   N06 ,Gs3 ,v064
 .byte   W36
@  #05 @001   ----------------------------------------
 .byte   N32 ,Dn3 ,v052
 .byte   N32 ,Fs3 ,v064
 .byte   W36
 .byte   N06 ,Dn3 ,v052
 .byte   N06 ,Fs3 ,v060
 .byte   W06
 .byte   En3 ,v056
 .byte   N06 ,Gs3 ,v064
 .byte   W06
 .byte   Fs3 ,v056
 .byte   N06 ,An3 ,v068
 .byte   W12
 .byte   Fs3 ,v052
 .byte   N06 ,An3 ,v064
 .byte   W24
 .byte   Fs3 ,v052
 .byte   N06 ,An3 ,v064
 .byte   W12
@  #05 @002   ----------------------------------------
 .byte   N32 ,En3 ,v052
 .byte   N32 ,Gs3 ,v064
 .byte   W36
 .byte   N06 ,Bn2 ,v052
 .byte   N06 ,En3 ,v060
 .byte   W06
 .byte   Dn3 ,v056
 .byte   N06 ,Fs3 ,v064
 .byte   W06
 .byte   En3 ,v056
 .byte   N06 ,Gs3 ,v068
 .byte   W12
 .byte   En3 ,v052
 .byte   N06 ,Gs3 ,v064
 .byte   W36
@  #05 @003   ----------------------------------------
 .byte   N32 ,Dn3 ,v052
 .byte   N32 ,Fs3 ,v064
 .byte   W36
 .byte   N06 ,As2 ,v052
 .byte   N06 ,Dn3 ,v060
 .byte   W06
 .byte   Cn3 ,v056
 .byte   N06 ,En3 ,v064
 .byte   W06
 .byte   Dn3 ,v056
 .byte   N06 ,Fs3 ,v068
 .byte   W12
 .byte   Dn3 ,v052
 .byte   N06 ,Fs3 ,v064
 .byte   W24
 .byte   Dn3 ,v052
 .byte   N06 ,Fs3 ,v064
 .byte   W12
@  #05 @004   ----------------------------------------
 .byte   N32 ,En3 ,v052
 .byte   N32 ,Gn3 ,v064
 .byte   W36
 .byte   N06 ,Cn3 ,v052
 .byte   N06 ,En3 ,v060
 .byte   W06
 .byte   Dn3 ,v056
 .byte   N06 ,Fs3 ,v064
 .byte   W06
 .byte   En3 ,v056
 .byte   N06 ,Gn3 ,v068
 .byte   W12
 .byte   En3 ,v052
 .byte   N06 ,Gn3 ,v064
 .byte   W36
@  #05 @005   ----------------------------------------
 .byte   N32 ,Dn3 ,v052
 .byte   N32 ,Fs3 ,v064
 .byte   W36
 .byte   N06 ,Bn2 ,v052
 .byte   N06 ,Dn3 ,v060
 .byte   W06
 .byte   Cn3 ,v056
 .byte   N06 ,En3 ,v064
 .byte   W06
 .byte   Dn3 ,v056
 .byte   N06 ,Fs3 ,v068
 .byte   W12
 .byte   Dn3 ,v052
 .byte   N06 ,Fs3 ,v064
 .byte   W36
@  #05 @006   ----------------------------------------
 .byte   N32 ,En3 ,v052
 .byte   N32 ,Gn3 ,v064
 .byte   W36
 .byte   N06 ,Cn3 ,v052
 .byte   N06 ,En3 ,v060
 .byte   W06
 .byte   Dn3 ,v056
 .byte   N06 ,Fs3 ,v064
 .byte   W06
 .byte   En3 ,v056
 .byte   N06 ,Gn3 ,v068
 .byte   W12
 .byte   En3 ,v052
 .byte   N06 ,Gn3 ,v064
 .byte   W24
 .byte   En3 ,v052
 .byte   N06 ,Gn3 ,v064
 .byte   W12
@  #05 @007   ----------------------------------------
 .byte   N17 ,Ds3 ,v072
 .byte   N17 ,Fs3 ,v092
 .byte   W36
 .byte   N04 ,En3 ,v060
 .byte   N04 ,Gn3 ,v080
 .byte   W12
 .byte   N17 ,Fs3 ,v072
 .byte   N17 ,An3 ,v092
 .byte   W24
 .byte   N22 ,Ds3 ,v076
 .byte   N22 ,Fs3 ,v096
 .byte   W24
@  #05 @008   ----------------------------------------
 .byte   W24
 .byte   N76 ,En3 ,v080
 .byte   W60
 .byte   N06 ,Dn3 ,v068
 .byte   W06
 .byte   N07 ,Cs3 ,v084
 .byte   W06
@  #05 @009   ----------------------------------------
 .byte   N54 ,Bn2 ,v076
 .byte   W60
 .byte   N04 ,Bn2 ,v100
 .byte   W12
 .byte   N05 ,Cs3 ,v076
 .byte   W12
 .byte   Dn3
 .byte   W12
@  #05 @010   ----------------------------------------
 .byte   N90 ,En3
 .byte   W96
@  #05 @011   ----------------------------------------
 .byte   N32 ,Dn3 ,v092
 .byte   W36
 .byte   N05 ,Dn3 ,v084
 .byte   W06
 .byte   En3
 .byte   W06
 .byte   N42 ,Fs3 ,v080
 .byte   W48
@  #05 @012   ----------------------------------------
 .byte   N92 ,En3
 .byte   W96
@  #05 @013   ----------------------------------------
 .byte   N17 ,Fs3 ,v088
 .byte   W24
 .byte   Dn3
 .byte   W24
 .byte   Bn2
 .byte   W24
 .byte   N14 ,Dn3
 .byte   W24
@  #05 @014   ----------------------------------------
 .byte   N90 ,En3 ,v076
 .byte   W96
@  #05 @015   ----------------------------------------
 .byte   N20 ,Bn2 ,v072
 .byte   W36
 .byte   N05 ,Bn2 ,v088
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   N32 ,Ds3
 .byte   W48
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
 .byte   W96
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
 .byte   W96
@  #05 @030   ----------------------------------------
 .byte   VOICE , 12
 .byte   VOL , 43*song0B_mvl/mxv
 .byte   PAN , c_v+0
 .byte   W96
@  #05 @031   ----------------------------------------
 .byte   VOL , 43*song0B_mvl/mxv
 .byte   N80 ,Bn2 ,v127
 .byte   W84
 .byte   W01
 .byte   N04 ,Bn2 ,v116
 .byte   W11
@  #05 @032   ----------------------------------------
 .byte   N78
 .byte   W84
 .byte   N04
 .byte   W12
@  #05 @033   ----------------------------------------
 .byte   N80 ,Fs2 ,v120
 .byte   W84
 .byte   N04
 .byte   W12
@  #05 @034   ----------------------------------------
 .byte   N56 ,Fs2 ,v127
 .byte   W60
 .byte   N04
 .byte   W12
 .byte   Cs3
 .byte   W12
 .byte   Fs2
 .byte   W12
@  #05 @035   ----------------------------------------
 .byte   N80 ,Gs2 ,v120
 .byte   W84
 .byte   N03 ,Gs2 ,v116
 .byte   W12
@  #05 @036   ----------------------------------------
 .byte   N80
 .byte   W84
 .byte   N04 ,Gs2 ,v112
 .byte   W12
@  #05 @037   ----------------------------------------
 .byte   N44 ,As2 ,v116
 .byte   W48
 .byte   N32
 .byte   W36
 .byte   N03
 .byte   W12
@  #05 @038   ----------------------------------------
 .byte   N44 ,Gs2
 .byte   W48
 .byte   N32 ,Ds2
 .byte   W36
 .byte   N03 ,Gs2
 .byte   W12
@  #05 @039   ----------------------------------------
 .byte   N44 ,As2
 .byte   W48
 .byte   N32 ,Fn2
 .byte   W36
 .byte   N03 ,As2
 .byte   W12
@  #05 @040   ----------------------------------------
 .byte   N32 ,Gs2
 .byte   W36
 .byte   N03 ,As2
 .byte   W12
 .byte   N21 ,Cn3
 .byte   W24
 .byte   Ds3
 .byte   W24
@  #05 @041   ----------------------------------------
 .byte   N68 ,Cs3
 .byte   W17
 .byte   VOL , 42*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 21*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 19*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 18*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 16*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 15*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 14*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 13*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 12*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 11*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 9*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 8*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 7*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 6*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 5*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 4*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 3*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 2*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 1*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 0*song0B_mvl/mxv
 .byte   W40
 .byte   W01
@  #05 @042   ----------------------------------------
 .byte   GOTO
  .word Label_8344B5
 .byte   FINE

@**************** Track 6 (Midi-Chn.5) ****************@

song0B_006:
@  #06 @000   ----------------------------------------
 .byte   KEYSH , song0B_key+0
 .byte   W24
Label_8346D7:
 .byte   W96
@  #06 @001   ----------------------------------------
 .byte   W96
@  #06 @002   ----------------------------------------
 .byte   W96
@  #06 @003   ----------------------------------------
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
 .byte   W96
@  #06 @017   ----------------------------------------
 .byte   W96
@  #06 @018   ----------------------------------------
 .byte   W96
@  #06 @019   ----------------------------------------
 .byte   W96
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
 .byte   W96
@  #06 @028   ----------------------------------------
 .byte   W96
@  #06 @029   ----------------------------------------
 .byte   W96
@  #06 @030   ----------------------------------------
 .byte   W96
@  #06 @031   ----------------------------------------
 .byte   VOICE , 13
 .byte   VOL , 32*song0B_mvl/mxv
 .byte   PAN , c_v-37
 .byte   N04 ,Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W06
 .byte   N06 ,Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W18
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W18
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W18
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W06
@  #06 @032   ----------------------------------------
Label_83471C:
 .byte   N04 ,Gs3 ,v104
 .byte   W06
 .byte   Gs3 ,v028
 .byte   W06
 .byte   N06 ,Gs3 ,v104
 .byte   W06
 .byte   Gs3 ,v028
 .byte   W18
 .byte   Gs3 ,v104
 .byte   W06
 .byte   Gs3 ,v028
 .byte   W18
 .byte   Gs3 ,v104
 .byte   W06
 .byte   Gs3 ,v028
 .byte   W18
 .byte   Gs3 ,v104
 .byte   W06
 .byte   Gs3 ,v028
 .byte   W06
 .byte   PEND
@  #06 @033   ----------------------------------------
Label_83473D:
 .byte   N04 ,Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W06
 .byte   N06 ,Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W18
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W18
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W18
 .byte   Fs3 ,v104
 .byte   W06
 .byte   Fs3 ,v028
 .byte   W06
 .byte   PEND
@  #06 @034   ----------------------------------------
 .byte   PATT
  .word Label_83473D
@  #06 @035   ----------------------------------------
 .byte   PATT
  .word Label_83471C
@  #06 @036   ----------------------------------------
 .byte   PATT
  .word Label_83471C
@  #06 @037   ----------------------------------------
Label_83476D:
 .byte   N04 ,Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v028
 .byte   W06
 .byte   N06 ,Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v028
 .byte   W18
 .byte   Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v028
 .byte   W18
 .byte   Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v028
 .byte   W18
 .byte   Fn3 ,v104
 .byte   W06
 .byte   Fn3 ,v028
 .byte   W06
 .byte   PEND
@  #06 @038   ----------------------------------------
 .byte   PATT
  .word Label_83471C
@  #06 @039   ----------------------------------------
 .byte   PATT
  .word Label_83476D
@  #06 @040   ----------------------------------------
 .byte   PATT
  .word Label_83471C
@  #06 @041   ----------------------------------------
 .byte   N78 ,Fn3 ,v112
 .byte   W60
 .byte   VOL , 32*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 18*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 16*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 15*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 12*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 10*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 9*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 6*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 4*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 3*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 0*song0B_mvl/mxv
 .byte   W01
 .byte   VOL , 0*song0B_mvl/mxv
 .byte   W19
@  #06 @042   ----------------------------------------
 .byte   GOTO
  .word Label_8346D7
 .byte   FINE

@**************** Track 7 (Midi-Chn.6) ****************@

song0B_007:
@  #07 @000   ----------------------------------------
 .byte   KEYSH , song0B_key+0
 .byte   VOICE , 0
 .byte   VOL , 50*song0B_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N23 ,DnM1 ,v056
 .byte   W24
Label_8347D8:
 .byte   N06 ,DsM1 ,v108
 .byte   W12
 .byte   N06
 .byte   W36
 .byte   DsM1 ,v096
 .byte   W12
 .byte   DsM1 ,v108
 .byte   W36
@  #07 @001   ----------------------------------------
 .byte   DsM1 ,v092
 .byte   W12
 .byte   DsM1 ,v104
 .byte   W24
 .byte   N11 ,DnM1 ,v080
 .byte   W12
 .byte   N06 ,DsM1 ,v084
 .byte   W12
 .byte   DsM1 ,v104
 .byte   W24
 .byte   N06
 .byte   W06
 .byte   DsM1 ,v072
 .byte   W06
@  #07 @002   ----------------------------------------
 .byte   DsM1 ,v108
 .byte   W12
 .byte   DsM1 ,v088
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   DsM1 ,v084
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   DsM1 ,v088
 .byte   W12
@  #07 @003   ----------------------------------------
 .byte   DsM1 ,v104
 .byte   W12
 .byte   DsM1 ,v092
 .byte   W36
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N23 ,DnM1 ,v088
 .byte   W24
@  #07 @004   ----------------------------------------
 .byte   N06 ,DsM1 ,v096
 .byte   W12
 .byte   DsM1 ,v104
 .byte   W24
 .byte   DsM1 ,v092
 .byte   W12
 .byte   DsM1 ,v088
 .byte   W12
 .byte   DsM1 ,v092
 .byte   W24
 .byte   DsM1 ,v084
 .byte   W06
 .byte   DsM1 ,v088
 .byte   W06
@  #07 @005   ----------------------------------------
 .byte   DsM1 ,v092
 .byte   W12
 .byte   DsM1 ,v088
 .byte   W24
 .byte   DsM1 ,v084
 .byte   W12
 .byte   DsM1 ,v088
 .byte   W12
 .byte   DsM1 ,v084
 .byte   W24
 .byte   N11 ,DnM1
 .byte   W12
@  #07 @006   ----------------------------------------
 .byte   N06 ,DsM1 ,v088
 .byte   W12
 .byte   DsM1 ,v092
 .byte   W36
 .byte   DsM1 ,v088
 .byte   W12
 .byte   DsM1 ,v096
 .byte   W12
 .byte   DsM1 ,v088
 .byte   W12
 .byte   DsM1 ,v092
 .byte   W12
@  #07 @007   ----------------------------------------
 .byte   DsM1 ,v096
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N23 ,DnM1 ,v088
 .byte   W24
 .byte   N06 ,DsM1
 .byte   W12
 .byte   N06
 .byte   W12
@  #07 @008   ----------------------------------------
 .byte   DsM1 ,v096
 .byte   W36
 .byte   DsM1 ,v084
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   DsM1 ,v088
 .byte   W36
@  #07 @009   ----------------------------------------
 .byte   DsM1 ,v092
 .byte   W36
 .byte   DsM1 ,v084
 .byte   W12
 .byte   DsM1 ,v092
 .byte   W12
 .byte   DsM1 ,v088
 .byte   W24
 .byte   N11 ,DnM1
 .byte   W12
@  #07 @010   ----------------------------------------
 .byte   N06 ,DsM1 ,v084
 .byte   W36
 .byte   DsM1 ,v088
 .byte   W12
 .byte   DsM1 ,v104
 .byte   W12
 .byte   DsM1 ,v096
 .byte   W36
@  #07 @011   ----------------------------------------
 .byte   DsM1 ,v108
 .byte   W36
 .byte   DsM1 ,v088
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   DsM1 ,v096
 .byte   W12
 .byte   DsM1 ,v088
 .byte   W12
 .byte   N11 ,DnM1
 .byte   W12
@  #07 @012   ----------------------------------------
 .byte   N06 ,DsM1 ,v084
 .byte   W36
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W12
 .byte   DsM1 ,v088
 .byte   W36
@  #07 @013   ----------------------------------------
 .byte   DsM1 ,v084
 .byte   W36
 .byte   DsM1 ,v092
 .byte   W12
 .byte   DsM1 ,v080
 .byte   W24
 .byte   DsM1 ,v088
 .byte   W12
 .byte   DsM1 ,v084
 .byte   W12
@  #07 @014   ----------------------------------------
 .byte   DsM1 ,v096
 .byte   W36
 .byte   DsM1 ,v084
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   DsM1 ,v088
 .byte   W24
 .byte   DsM1 ,v092
 .byte   W06
 .byte   DsM1 ,v080
 .byte   W06
@  #07 @015   ----------------------------------------
 .byte   DsM1 ,v084
 .byte   W36
 .byte   DsM1 ,v088
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N23 ,DnM1 ,v076
 .byte   W24
@  #07 @016   ----------------------------------------
 .byte   N06 ,DsM1 ,v088
 .byte   W36
 .byte   EnM1 ,v068
 .byte   W06
 .byte   EnM1 ,v064
 .byte   W06
 .byte   N24 ,EnM1 ,v072
 .byte   W48
@  #07 @017   ----------------------------------------
 .byte   W48
 .byte   EnM1 ,v068
 .byte   W48
@  #07 @018   ----------------------------------------
 .byte   W36
 .byte   N06
 .byte   W06
 .byte   EnM1 ,v064
 .byte   W06
 .byte   N24 ,EnM1 ,v072
 .byte   W48
@  #07 @019   ----------------------------------------
 .byte   W48
 .byte   EnM1 ,v068
 .byte   W36
 .byte   N06 ,DsM1 ,v080
 .byte   W12
@  #07 @020   ----------------------------------------
 .byte   DsM1 ,v092
 .byte   W48
 .byte   DsM1 ,v072
 .byte   W36
 .byte   DsM1 ,v080
 .byte   W12
@  #07 @021   ----------------------------------------
 .byte   DsM1 ,v100
 .byte   W24
 .byte   DsM1 ,v080
 .byte   W48
 .byte   DsM1 ,v076
 .byte   W12
 .byte   DsM1 ,v084
 .byte   W12
@  #07 @022   ----------------------------------------
 .byte   DsM1 ,v100
 .byte   W36
 .byte   DsM1 ,v092
 .byte   W12
 .byte   DsM1 ,v084
 .byte   W12
 .byte   DsM1 ,v100
 .byte   W24
 .byte   DsM1 ,v112
 .byte   W12
@  #07 @023   ----------------------------------------
 .byte   N06
 .byte   W36
 .byte   DsM1 ,v084
 .byte   W06
 .byte   DsM1 ,v072
 .byte   W06
 .byte   DsM1 ,v120
 .byte   W12
 .byte   DsM1 ,v116
 .byte   W12
 .byte   N23 ,DnM1 ,v104
 .byte   W24
@  #07 @024   ----------------------------------------
 .byte   N12 ,FnM1 ,v092
 .byte   W12
 .byte   N03 ,FnM1 ,v048
 .byte   W03
 .byte   FnM1 ,v044
 .byte   W03
 .byte   FnM1 ,v040
 .byte   W03
 .byte   FnM1 ,v036
 .byte   W03
 .byte   FnM1 ,v032
 .byte   W03
 .byte   FnM1 ,v028
 .byte   W03
 .byte   FnM1 ,v024
 .byte   W03
 .byte   FnM1 ,v020
 .byte   W03
 .byte   N03
 .byte   W03
 .byte   FnM1 ,v016
 .byte   W03
 .byte   FnM1 ,v012
 .byte   W03
 .byte   FnM1 ,v008
 .byte   W48
 .byte   W03
@  #07 @025   ----------------------------------------
 .byte   W96
@  #07 @026   ----------------------------------------
 .byte   W96
@  #07 @027   ----------------------------------------
 .byte   W96
@  #07 @028   ----------------------------------------
 .byte   W72
 .byte   N06 ,DsM1 ,v112
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   DsM1 ,v064
 .byte   W06
@  #07 @029   ----------------------------------------
 .byte   DsM1 ,v076
 .byte   W24
 .byte   DsM1 ,v092
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   DsM1 ,v076
 .byte   W06
 .byte   N06
 .byte   W24
 .byte   DsM1 ,v112
 .byte   W12
 .byte   DsM1 ,v092
 .byte   W12
@  #07 @030   ----------------------------------------
 .byte   DsM1 ,v112
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   DsM1 ,v068
 .byte   W12
 .byte   DsM1 ,v112
 .byte   W24
 .byte   DsM1 ,v120
 .byte   W06
 .byte   DsM1 ,v080
 .byte   W06
 .byte   DsM1 ,v112
 .byte   W06
 .byte   DsM1 ,v100
 .byte   W06
@  #07 @031   ----------------------------------------
 .byte   N40 ,EnM1 ,v080
 .byte   W84
 .byte   N11
 .byte   W12
@  #07 @032   ----------------------------------------
 .byte   N30 ,EnM1 ,v084
 .byte   W96
@  #07 @033   ----------------------------------------
Label_83499A:
 .byte   N36 ,EnM1 ,v084
 .byte   W84
 .byte   N11 ,EnM1 ,v080
 .byte   W12
 .byte   PEND
@  #07 @034   ----------------------------------------
 .byte   N24 ,EnM1 ,v072
 .byte   W72
 .byte   N05 ,EnM1 ,v088
 .byte   W06
 .byte   EnM1 ,v072
 .byte   W06
 .byte   N11
 .byte   W12
@  #07 @035   ----------------------------------------
 .byte   N32 ,EnM1 ,v088
 .byte   W84
 .byte   N11 ,EnM1 ,v080
 .byte   W12
@  #07 @036   ----------------------------------------
 .byte   N28 ,EnM1 ,v072
 .byte   W96
@  #07 @037   ----------------------------------------
 .byte   N36 ,EnM1 ,v084
 .byte   W84
 .byte   N11
 .byte   W12
@  #07 @038   ----------------------------------------
 .byte   PATT
  .word Label_83499A
@  #07 @039   ----------------------------------------
 .byte   N40 ,EnM1 ,v084
 .byte   W72
 .byte   N05 ,EnM1 ,v080
 .byte   W06
 .byte   EnM1 ,v076
 .byte   W06
 .byte   N11 ,EnM1 ,v068
 .byte   W12
@  #07 @040   ----------------------------------------
 .byte   N32 ,EnM1 ,v072
 .byte   W84
 .byte   N11
 .byte   W12
@  #07 @041   ----------------------------------------
 .byte   N06 ,DsM1 ,v108
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   DsM1 ,v096
 .byte   W12
 .byte   DsM1 ,v108
 .byte   W12
 .byte   N23 ,DnM1 ,v056
 .byte   W24
@  #07 @042   ----------------------------------------
 .byte   GOTO
  .word Label_8347D8
 .byte   FINE

@******************************************************@
	.align	2

song0B:
	.byte	7	@ NumTrks
	.byte	0	@ NumBlks
	.byte	song0B_pri	@ Priority
	.byte	song0B_rev	@ Reverb.

	.word	song0B_grp

	.word	song0B_001
	.word	song0B_002
	.word	song0B_003
	.word	song0B_004
	.word	song0B_005
	.word	song0B_006
	.word	song0B_007

	.end
