	.include "MPlayDef.s"

	.equ	song05_grp, voicegroup000
	.equ	song05_pri, 10
	.equ	song05_rev, 128
	.equ	song05_mvl, 127
	.equ	song05_key, 0
	.equ	song05_tbs, 1
	.equ	song05_exg, 0
	.equ	song05_cmp, 1

	.section .rodata
	.global	song05
	.align	2


@**************** Track 1 (Midi-Chn.0) ****************@

song05_001:
@  #01 @000   ----------------------------------------
 .byte   KEYSH , song05_key+0
Label_8AED96:
 .byte   TEMPO , 122*song05_tbs/2
 .byte   VOICE , 1
 .byte   VOL , 51*song05_mvl/mxv
 .byte   PAN , c_v-1
 .byte   N07 ,Gn2 ,v116
 .byte   W08
 .byte   An2 ,v104
 .byte   W08
 .byte   As2 ,v072
 .byte   W08
 .byte   Cn3 ,v096
 .byte   W08
 .byte   As2 ,v076
 .byte   W08
 .byte   An2 ,v088
 .byte   W08
 .byte   Gn2 ,v092
 .byte   W08
 .byte   An2 ,v100
 .byte   W08
 .byte   As2 ,v076
 .byte   W08
 .byte   Cn3 ,v104
 .byte   W08
 .byte   As2 ,v080
 .byte   W08
 .byte   An2 ,v092
 .byte   W08
@  #01 @001   ----------------------------------------
 .byte   Gn2 ,v104
 .byte   W08
 .byte   An2 ,v100
 .byte   W08
 .byte   As2 ,v072
 .byte   W08
 .byte   Cn3 ,v104
 .byte   W08
 .byte   As2 ,v088
 .byte   W08
 .byte   An2 ,v084
 .byte   W08
 .byte   Gn2 ,v092
 .byte   W08
 .byte   An2 ,v100
 .byte   W08
 .byte   As2 ,v076
 .byte   W08
 .byte   Cn3 ,v100
 .byte   W08
 .byte   As2 ,v072
 .byte   W08
 .byte   An2 ,v088
 .byte   W08
@  #01 @002   ----------------------------------------
 .byte   As2 ,v092
 .byte   W08
 .byte   Cn3 ,v104
 .byte   W08
 .byte   Cs3 ,v092
 .byte   W08
 .byte   Ds3 ,v084
 .byte   W08
 .byte   Cs3 ,v080
 .byte   W08
 .byte   Cn3 ,v096
 .byte   W08
 .byte   As2 ,v092
 .byte   W08
 .byte   Cn3 ,v080
 .byte   W08
 .byte   Cs3 ,v084
 .byte   W08
 .byte   Ds3 ,v076
 .byte   W08
 .byte   Cs3 ,v092
 .byte   W08
 .byte   Cn3
 .byte   W08
@  #01 @003   ----------------------------------------
 .byte   N07
 .byte   W08
 .byte   Cs3 ,v096
 .byte   W08
 .byte   Ds3 ,v084
 .byte   W08
 .byte   Fn3
 .byte   W08
 .byte   Ds3 ,v088
 .byte   W08
 .byte   Cs3 ,v092
 .byte   W08
 .byte   Cs3 ,v084
 .byte   W08
 .byte   Ds3 ,v092
 .byte   W08
 .byte   En3 ,v088
 .byte   W08
 .byte   Fn3 ,v084
 .byte   W08
 .byte   Fs3 ,v088
 .byte   W08
 .byte   Gs3
 .byte   W08
@  #01 @004   ----------------------------------------
 .byte   VOICE , 2
 .byte   N07 ,An3 ,v100
 .byte   W08
 .byte   Gs3 ,v084
 .byte   W08
 .byte   N54 ,An3 ,v096
 .byte   W56
 .byte   N07 ,Gn3 ,v072
 .byte   W08
 .byte   Fn3
 .byte   W08
 .byte   En3 ,v088
 .byte   W08
@  #01 @005   ----------------------------------------
 .byte   N23 ,Fn3 ,v092
 .byte   W24
 .byte   Dn3
 .byte   W24
 .byte   En3
 .byte   W24
 .byte   Fn3 ,v088
 .byte   W24
@  #01 @006   ----------------------------------------
 .byte   N11 ,Gn3 ,v080
 .byte   W12
 .byte   Fn3 ,v068
 .byte   W12
 .byte   N44 ,Gn3 ,v076
 .byte   W48
 .byte   N23 ,Ds3 ,v080
 .byte   W24
@  #01 @007   ----------------------------------------
 .byte   N56 ,Fn3 ,v092
 .byte   W60
 .byte   N11 ,Cs3 ,v072
 .byte   W12
 .byte   Ds3 ,v076
 .byte   W12
 .byte   Fn3 ,v068
 .byte   W12
@  #01 @008   ----------------------------------------
 .byte   Fs3 ,v080
 .byte   W12
 .byte   Fn3 ,v076
 .byte   W12
 .byte   En3 ,v084
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   N68 ,En3 ,v068
 .byte   W48
@  #01 @009   ----------------------------------------
 .byte   W24
 .byte   N23 ,Cn3 ,v084
 .byte   W24
 .byte   Bn2 ,v072
 .byte   W24
 .byte   Cn3 ,v076
 .byte   W24
@  #01 @010   ----------------------------------------
 .byte   N44 ,As2 ,v064
 .byte   W48
 .byte   Gs2 ,v076
 .byte   W48
@  #01 @011   ----------------------------------------
 .byte   N76 ,As2 ,v080
 .byte   W96
@  #01 @012   ----------------------------------------
 .byte   VOICE , 1
 .byte   N07 ,Gn2 ,v104
 .byte   W08
 .byte   An2 ,v080
 .byte   W08
 .byte   As2 ,v060
 .byte   W08
 .byte   Cn3 ,v084
 .byte   W08
 .byte   As2 ,v064
 .byte   W08
 .byte   An2 ,v068
 .byte   W08
 .byte   Gn2 ,v072
 .byte   W08
 .byte   An2 ,v088
 .byte   W08
 .byte   As2 ,v072
 .byte   W08
 .byte   Cn3 ,v104
 .byte   W08
 .byte   As2 ,v080
 .byte   W08
 .byte   An2 ,v084
 .byte   W08
@  #01 @013   ----------------------------------------
 .byte   Gn2 ,v092
 .byte   W08
 .byte   An2
 .byte   W08
 .byte   As2 ,v072
 .byte   W08
 .byte   Cn3 ,v096
 .byte   W08
 .byte   As2 ,v076
 .byte   W08
 .byte   An2
 .byte   W08
 .byte   Gn2 ,v088
 .byte   W08
 .byte   An2 ,v092
 .byte   W08
 .byte   As2 ,v072
 .byte   W08
 .byte   Cn3 ,v096
 .byte   W08
 .byte   As2 ,v076
 .byte   W08
 .byte   An2 ,v088
 .byte   W08
@  #01 @014   ----------------------------------------
 .byte   As2 ,v092
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   Cs3 ,v096
 .byte   W08
 .byte   Ds3 ,v084
 .byte   W08
 .byte   Cs3 ,v080
 .byte   W08
 .byte   Cn3 ,v092
 .byte   W08
 .byte   As2 ,v088
 .byte   W08
 .byte   Cn3 ,v096
 .byte   W08
 .byte   Cs3 ,v076
 .byte   W08
 .byte   Ds3 ,v084
 .byte   W08
 .byte   Cs3
 .byte   W08
 .byte   Cn3
 .byte   W08
@  #01 @015   ----------------------------------------
 .byte   As2 ,v096
 .byte   W08
 .byte   Cn3 ,v100
 .byte   W08
 .byte   Cs3 ,v088
 .byte   W08
 .byte   Ds3 ,v084
 .byte   W08
 .byte   Cs3 ,v088
 .byte   W08
 .byte   Cn3 ,v092
 .byte   W08
 .byte   As2 ,v100
 .byte   W08
 .byte   Cn3 ,v096
 .byte   W08
 .byte   Cs3 ,v088
 .byte   W08
 .byte   Ds3
 .byte   W08
 .byte   Fn3 ,v084
 .byte   W08
 .byte   Fs3
 .byte   W08
@  #01 @016   ----------------------------------------
 .byte   VOICE , 2
 .byte   VOL , 51*song05_mvl/mxv
 .byte   N07 ,Gs3 ,v096
 .byte   W08
 .byte   Fs3 ,v088
 .byte   W08
 .byte   Gs3 ,v084
 .byte   W08
 .byte   N44 ,Fs3 ,v080
 .byte   W24
 .byte   VOL , 51*song05_mvl/mxv
 .byte   W24
 .byte   N23 ,Gs3 ,v076
 .byte   W24
@  #01 @017   ----------------------------------------
 .byte   N44 ,An3
 .byte   W48
 .byte   As3 ,v068
 .byte   W48
@  #01 @018   ----------------------------------------
 .byte   Bn3 ,v096
 .byte   W48
 .byte   N23 ,Cn4 ,v080
 .byte   W24
 .byte   En4 ,v076
 .byte   W24
@  #01 @019   ----------------------------------------
 .byte   N44 ,Ds4 ,v080
 .byte   W48
 .byte   Dn4
 .byte   W48
@  #01 @020   ----------------------------------------
 .byte   Cn2 ,v072
 .byte   W48
 .byte   Bn1 ,v096
 .byte   W48
@  #01 @021   ----------------------------------------
 .byte   As1 ,v080
 .byte   W48
 .byte   An1 ,v068
 .byte   W48
@  #01 @022   ----------------------------------------
 .byte   Cn2 ,v080
 .byte   W48
 .byte   Bn1 ,v096
 .byte   W48
@  #01 @023   ----------------------------------------
 .byte   As1 ,v076
 .byte   W48
 .byte   An1 ,v052
 .byte   W48
@  #01 @024   ----------------------------------------
 .byte   N92 ,Gs1 ,v080
 .byte   W96
@  #01 @025   ----------------------------------------
 .byte   Gn1
 .byte   W96
@  #01 @026   ----------------------------------------
 .byte   Gs1 ,v084
 .byte   W96
@  #01 @027   ----------------------------------------
 .byte   N72 ,An1 ,v072
 .byte   W96
@  #01 @028   ----------------------------------------
 .byte   W96
@  #01 @029   ----------------------------------------
 .byte   W96
@  #01 @030   ----------------------------------------
 .byte   W96
@  #01 @031   ----------------------------------------
 .byte   W96
@  #01 @032   ----------------------------------------
 .byte   W96
@  #01 @033   ----------------------------------------
 .byte   W96
@  #01 @034   ----------------------------------------
 .byte   W96
@  #01 @035   ----------------------------------------
 .byte   W96
@  #01 @036   ----------------------------------------
 .byte   W96
@  #01 @037   ----------------------------------------
 .byte   W96
@  #01 @038   ----------------------------------------
 .byte   GOTO
  .word Label_8AED96
 .byte   FINE

@**************** Track 2 (Midi-Chn.1) ****************@

song05_002:
@  #02 @000   ----------------------------------------
 .byte   KEYSH , song05_key+0
Label_8AEF80:
 .byte   VOICE , 3
 .byte   VOL , 48*song05_mvl/mxv
 .byte   PAN , c_v-11
 .byte   N06 ,Gn2 ,v092
 .byte   W08
 .byte   An2
 .byte   W08
 .byte   As2
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   As2
 .byte   W08
 .byte   An2
 .byte   W08
 .byte   Gn2
 .byte   W08
 .byte   An2
 .byte   W08
 .byte   As2
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   As2
 .byte   W08
 .byte   An2
 .byte   W08
@  #02 @001   ----------------------------------------
 .byte   Gn2
 .byte   W08
 .byte   An2
 .byte   W08
 .byte   As2
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   As2
 .byte   W08
 .byte   An2
 .byte   W08
 .byte   Gn2
 .byte   W08
 .byte   An2
 .byte   W08
 .byte   As2
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   As2
 .byte   W08
 .byte   An2
 .byte   W08
@  #02 @002   ----------------------------------------
 .byte   As2
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   Cs3
 .byte   W08
 .byte   Ds3
 .byte   W08
 .byte   Cs3
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   As2
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   Cs3
 .byte   W08
 .byte   Ds3
 .byte   W08
 .byte   Cs3
 .byte   W08
 .byte   Cn3
 .byte   W08
@  #02 @003   ----------------------------------------
 .byte   N06
 .byte   W08
 .byte   Cs3
 .byte   W08
 .byte   Ds3
 .byte   W08
 .byte   Fn3
 .byte   W08
 .byte   Ds3
 .byte   W08
 .byte   Cs3
 .byte   W08
 .byte   N06
 .byte   W08
 .byte   Ds3
 .byte   W08
 .byte   En3
 .byte   W08
 .byte   Fn3
 .byte   W08
 .byte   Fs3
 .byte   W08
 .byte   Gs3
 .byte   W08
@  #02 @004   ----------------------------------------
 .byte   W96
@  #02 @005   ----------------------------------------
 .byte   W96
@  #02 @006   ----------------------------------------
 .byte   VOICE , 4
 .byte   MOD 1
 .byte   TIE ,As2 ,v096
 .byte   W96
@  #02 @007   ----------------------------------------
 .byte   W68
 .byte   EOT
 .byte   W04
 .byte   N20 ,As2 ,v020
 .byte   W17
 .byte   BEND , c_v-1
 .byte   W01
 .byte   BEND , c_v-2
 .byte   W01
 .byte   BEND , c_v-8
 .byte   W01
 .byte   BEND , c_v-10
 .byte   W01
 .byte   BEND , c_v-13
 .byte   W01
 .byte   BEND , c_v-15
 .byte   W01
 .byte   BEND , c_v-17
 .byte   W01
@  #02 @008   ----------------------------------------
 .byte   W03
 .byte   BEND , c_v-37
 .byte   W01
 .byte   MOD 0
 .byte   W02
 .byte   BEND , c_v-36
 .byte   W01
 .byte   BEND , c_v-35
 .byte   W01
 .byte   BEND , c_v-31
 .byte   W01
 .byte   BEND , c_v-26
 .byte   W01
 .byte   BEND , c_v-21
 .byte   W01
 .byte   BEND , c_v-14
 .byte   W02
 .byte   BEND , c_v+0
 .byte   W80
 .byte   W03
@  #02 @009   ----------------------------------------
 .byte   W96
@  #02 @010   ----------------------------------------
 .byte   W48
 .byte   N44 ,As2 ,v084
 .byte   W06
 .byte   BEND , c_v-1
 .byte   W01
 .byte   BEND , c_v-19
 .byte   W01
 .byte   BEND , c_v-24
 .byte   W01
 .byte   BEND , c_v-30
 .byte   W01
 .byte   BEND , c_v-28
 .byte   W01
 .byte   BEND , c_v-24
 .byte   W01
 .byte   BEND , c_v-12
 .byte   W01
 .byte   BEND , c_v+0
 .byte   W32
 .byte   W03
@  #02 @011   ----------------------------------------
 .byte   N44 ,Gs2 ,v080
 .byte   W03
 .byte   BEND , c_v-31
 .byte   W01
 .byte   BEND , c_v-33
 .byte   W01
 .byte   BEND , c_v-30
 .byte   W02
 .byte   BEND , c_v-29
 .byte   W02
 .byte   BEND , c_v-22
 .byte   W01
 .byte   BEND , c_v-12
 .byte   W01
 .byte   BEND , c_v+0
 .byte   W36
 .byte   W01
 .byte   N44 ,Fn2
 .byte   W48
@  #02 @012   ----------------------------------------
 .byte   VOICE , 3
 .byte   N06 ,Gn1 ,v092
 .byte   W08
 .byte   An1
 .byte   W08
 .byte   As1
 .byte   W08
 .byte   Cn2
 .byte   W08
 .byte   As1
 .byte   W08
 .byte   An1
 .byte   W08
 .byte   Gn1
 .byte   W08
 .byte   An1
 .byte   W08
 .byte   As1
 .byte   W08
 .byte   Cn2
 .byte   W08
 .byte   As1
 .byte   W08
 .byte   An1
 .byte   W08
@  #02 @013   ----------------------------------------
 .byte   Gn1
 .byte   W08
 .byte   An1
 .byte   W08
 .byte   As1
 .byte   W08
 .byte   Cn2
 .byte   W08
 .byte   As1
 .byte   W08
 .byte   An1
 .byte   W08
 .byte   Gn1
 .byte   W08
 .byte   An1
 .byte   W08
 .byte   As1
 .byte   W08
 .byte   Cn2
 .byte   W08
 .byte   As1
 .byte   W08
 .byte   An1
 .byte   W08
@  #02 @014   ----------------------------------------
 .byte   As1
 .byte   W08
 .byte   Cn2
 .byte   W08
 .byte   Cs2
 .byte   W08
 .byte   Ds2
 .byte   W08
 .byte   Cs2
 .byte   W08
 .byte   Cn2
 .byte   W08
 .byte   As1
 .byte   W08
 .byte   Cn2
 .byte   W08
 .byte   Cs2
 .byte   W08
 .byte   Ds2
 .byte   W08
 .byte   Cs2
 .byte   W08
 .byte   Cn2
 .byte   W08
@  #02 @015   ----------------------------------------
 .byte   As1
 .byte   W08
 .byte   Cn2
 .byte   W08
 .byte   Cs2
 .byte   W08
 .byte   Ds2
 .byte   W08
 .byte   Cs2
 .byte   W08
 .byte   Cn2
 .byte   W08
 .byte   As1
 .byte   W08
 .byte   Cn2
 .byte   W08
 .byte   Cs2
 .byte   W08
 .byte   Ds2
 .byte   W08
 .byte   Fn2
 .byte   W08
 .byte   Fs2
 .byte   W08
@  #02 @016   ----------------------------------------
 .byte   W96
@  #02 @017   ----------------------------------------
 .byte   W96
@  #02 @018   ----------------------------------------
 .byte   W96
@  #02 @019   ----------------------------------------
 .byte   W96
@  #02 @020   ----------------------------------------
 .byte   VOICE , 4
 .byte   N92 ,Bn1 ,v080
 .byte   N92 ,En2 ,v092
 .byte   W96
@  #02 @021   ----------------------------------------
Label_8AF0BE:
 .byte   N92 ,As1 ,v080
 .byte   N92 ,Ds2 ,v084
 .byte   W96
 .byte   PEND 
@  #02 @022   ----------------------------------------
 .byte   Bn1 ,v080
 .byte   N92 ,En2 ,v092
 .byte   W96
@  #02 @023   ----------------------------------------
 .byte   PATT
  .word Label_8AF0BE
@  #02 @024   ----------------------------------------
 .byte   N44 ,Gs1 ,v076
 .byte   N44 ,Cs2 ,v084
 .byte   W48
 .byte   Gn1 ,v068
 .byte   N44 ,Cn2 ,v064
 .byte   W48
@  #02 @025   ----------------------------------------
 .byte   Fs1 ,v040
 .byte   N44 ,Bn1 ,v068
 .byte   W48
 .byte   Fn1 ,v084
 .byte   N44 ,As1 ,v088
 .byte   W48
@  #02 @026   ----------------------------------------
 .byte   N92 ,Gs1 ,v084
 .byte   N92 ,Cs2 ,v080
 .byte   W96
@  #02 @027   ----------------------------------------
 .byte   N80 ,An1 ,v044
 .byte   N90 ,Dn2 ,v056
 .byte   W96
@  #02 @028   ----------------------------------------
 .byte   TIE ,As1 ,v084
 .byte   TIE ,Ds2 ,v080
 .byte   W96
@  #02 @029   ----------------------------------------
 .byte   W92
 .byte   W03
 .byte   EOT
 .byte   As1 ,v051
 .byte   W01
@  #02 @030   ----------------------------------------
 .byte   W96
@  #02 @031   ----------------------------------------
 .byte   W96
@  #02 @032   ----------------------------------------
 .byte   W96
@  #02 @033   ----------------------------------------
 .byte   W96
@  #02 @034   ----------------------------------------
 .byte   W96
@  #02 @035   ----------------------------------------
 .byte   W96
@  #02 @036   ----------------------------------------
 .byte   W96
@  #02 @037   ----------------------------------------
 .byte   W96
@  #02 @038   ----------------------------------------
 .byte   GOTO
  .word Label_8AEF80
 .byte   FINE

@**************** Track 3 (Midi-Chn.2) ****************@

song05_003:
@  #03 @000   ----------------------------------------
 .byte   KEYSH , song05_key+0
Label_8AF115:
 .byte   VOICE , 5
 .byte   VOL , 43*song05_mvl/mxv
 .byte   PAN , c_v-4
 .byte   N68 ,Gn1 ,v104
 .byte   N68 ,Dn2
 .byte   W72
 .byte   N04 ,An1
 .byte   N06 ,En2 ,v112
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,En2 ,v028
 .byte   W12
@  #03 @001   ----------------------------------------
 .byte   N80 ,As1 ,v092
 .byte   N80 ,Fn2 ,v108
 .byte   W84
 .byte   N04 ,As1 ,v020
 .byte   N06 ,Fn2 ,v028
 .byte   W12
@  #03 @002   ----------------------------------------
 .byte   N54 ,As1 ,v096
 .byte   N54 ,Fn2 ,v100
 .byte   W60
 .byte   N04 ,As1 ,v020
 .byte   N06 ,Fn2 ,v028
 .byte   W12
 .byte   N04 ,Cn2 ,v116
 .byte   N06 ,Gn2 ,v104
 .byte   W12
 .byte   N04 ,Cn2 ,v020
 .byte   N06 ,Gn2 ,v028
 .byte   W12
@  #03 @003   ----------------------------------------
 .byte   N80 ,Cs2 ,v092
 .byte   N80 ,Gs2 ,v104
 .byte   W84
 .byte   N04 ,Cs2 ,v020
 .byte   N06 ,Gs2 ,v028
 .byte   W12
@  #03 @004   ----------------------------------------
 .byte   TIE ,Dn2 ,v108
 .byte   TIE ,An2 ,v084
 .byte   W96
@  #03 @005   ----------------------------------------
 .byte   W92
 .byte   W03
 .byte   EOT
 .byte   Dn2 ,v057
 .byte   W01
@  #03 @006   ----------------------------------------
 .byte   TIE ,Cs2
 .byte   TIE ,Gs2 ,v080
 .byte   W96
@  #03 @007   ----------------------------------------
 .byte   W92
 .byte   EOT
 .byte   Cs2 ,v056
 .byte   W04
@  #03 @008   ----------------------------------------
 .byte   TIE ,Cn2 ,v100
 .byte   TIE ,Gn2 ,v076
 .byte   W96
@  #03 @009   ----------------------------------------
 .byte   W90
 .byte   W01
 .byte   EOT
 .byte   Cn2
 .byte   W01
 .byte   Gn2
 .byte   W04
@  #03 @010   ----------------------------------------
 .byte   N88 ,Bn1 ,v104
 .byte   N92 ,Fs2 ,v064
 .byte   W96
@  #03 @011   ----------------------------------------
 .byte   N68 ,As1 ,v080
 .byte   N68 ,Fn2 ,v064
 .byte   W78
 .byte   N04 ,As1 ,v020
 .byte   N06 ,Fn2 ,v028
 .byte   W18
@  #03 @012   ----------------------------------------
 .byte   N66 ,Gn1 ,v116
 .byte   N66 ,Dn2 ,v092
 .byte   W72
 .byte   N03 ,An1 ,v108
 .byte   N05 ,En2 ,v104
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,En2 ,v028
 .byte   W12
@  #03 @013   ----------------------------------------
 .byte   N88 ,As1 ,v096
 .byte   N88 ,Fn2 ,v104
 .byte   W96
@  #03 @014   ----------------------------------------
 .byte   N54 ,As1
 .byte   N56 ,Fn2 ,v112
 .byte   W60
 .byte   N04 ,As1 ,v020
 .byte   N06 ,Fn2 ,v028
 .byte   W12
 .byte   N04 ,Cn2 ,v120
 .byte   N07 ,Gn2 ,v108
 .byte   W12
 .byte   N04 ,Cn2 ,v020
 .byte   N06 ,Gn2 ,v028
 .byte   W12
@  #03 @015   ----------------------------------------
 .byte   N90 ,Cs2 ,v104
 .byte   N92 ,Gs2 ,v108
 .byte   W96
@  #03 @016   ----------------------------------------
 .byte   TIE ,Ds2 ,v084
 .byte   TIE ,As2
 .byte   W96
@  #03 @017   ----------------------------------------
 .byte   W76
 .byte   W01
 .byte   EOT
 .byte   Ds2 ,v058
 .byte   W07
 .byte   N04 ,Ds2 ,v020
 .byte   N06 ,As2 ,v028
 .byte   W12
@  #03 @018   ----------------------------------------
 .byte   TIE ,Dn2 ,v096
 .byte   TIE ,An2 ,v064
 .byte   W96
@  #03 @019   ----------------------------------------
 .byte   W88
 .byte   W01
 .byte   EOT
 .byte   Dn2 ,v057
 .byte   W01
 .byte   N04 ,Dn2 ,v020
 .byte   N06 ,An2 ,v028
 .byte   W06
@  #03 @020   ----------------------------------------
 .byte   TIE ,Gn1 ,v084
 .byte   W96
@  #03 @021   ----------------------------------------
 .byte   W92
 .byte   W03
 .byte   EOT
 .byte   W01
@  #03 @022   ----------------------------------------
 .byte   TIE
 .byte   W96
@  #03 @023   ----------------------------------------
 .byte   W96
@  #03 @024   ----------------------------------------
 .byte   EOT
 .byte   W96
@  #03 @025   ----------------------------------------
 .byte   W96
@  #03 @026   ----------------------------------------
 .byte   TIE ,Fs1
 .byte   W96
@  #03 @027   ----------------------------------------
 .byte   W96
@  #03 @028   ----------------------------------------
 .byte   EOT
 .byte   W06
 .byte   TIE ,Fn1
 .byte   W90
@  #03 @029   ----------------------------------------
 .byte   W92
 .byte   W03
 .byte   EOT
 .byte   W01
@  #03 @030   ----------------------------------------
 .byte   N09 ,An1 ,v096
 .byte   N09 ,En2 ,v108
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,En2 ,v028
 .byte   W60
 .byte   N09 ,An1 ,v120
 .byte   N09 ,En2 ,v104
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,En2 ,v028
 .byte   W12
@  #03 @031   ----------------------------------------
 .byte   N09 ,An1 ,v124
 .byte   N09 ,Fn2 ,v127
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,Fn2 ,v028
 .byte   W60
 .byte   N09 ,An1 ,v096
 .byte   N09 ,Fn2 ,v104
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,Fn2 ,v028
 .byte   W12
@  #03 @032   ----------------------------------------
 .byte   N09 ,An1 ,v104
 .byte   N09 ,En2 ,v108
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,En2 ,v028
 .byte   W60
 .byte   N09 ,An1 ,v100
 .byte   N09 ,En2 ,v108
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,En2 ,v028
 .byte   W12
@  #03 @033   ----------------------------------------
Label_8AF275:
 .byte   N09 ,An1 ,v116
 .byte   N09 ,Fn2
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,Fn2 ,v028
 .byte   W84
 .byte   PEND 
@  #03 @034   ----------------------------------------
 .byte   N07 ,An1 ,v100
 .byte   N07 ,En2 ,v104
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,En2 ,v028
 .byte   W60
 .byte   An1 ,v112
 .byte   N07 ,En2 ,v124
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,En2 ,v028
 .byte   W12
@  #03 @035   ----------------------------------------
 .byte   PATT
  .word Label_8AF275
@  #03 @036   ----------------------------------------
 .byte   N06 ,An1 ,v116
 .byte   N07 ,En2 ,v124
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,En2 ,v028
 .byte   W60
 .byte   N08 ,An1 ,v120
 .byte   N08 ,En2
 .byte   W12
 .byte   N04 ,An1 ,v020
 .byte   N06 ,En2 ,v028
 .byte   W12
@  #03 @037   ----------------------------------------
 .byte   N88 ,An1 ,v116
 .byte   N88 ,Fn2 ,v124
 .byte   W90
 .byte   N04 ,An1 ,v020
 .byte   N05 ,Fn2 ,v028
 .byte   W06
@  #03 @038   ----------------------------------------
 .byte   GOTO
  .word Label_8AF115
 .byte   FINE

@**************** Track 4 (Midi-Chn.3) ****************@

song05_004:
@  #04 @000   ----------------------------------------
 .byte   KEYSH , song05_key+0
Label_8AF2D4:
 .byte   VOICE , 6
 .byte   VOL , 61*song05_mvl/mxv
 .byte   PAN , c_v+7
 .byte   W72
 .byte   N11 ,Gn2 ,v092
 .byte   W12
 .byte   Gn2 ,v024
 .byte   W12
@  #04 @001   ----------------------------------------
 .byte   N80 ,Dn3 ,v104
 .byte   W84
 .byte   N11 ,Dn3 ,v024
 .byte   W12
@  #04 @002   ----------------------------------------
 .byte   W72
 .byte   As2 ,v092
 .byte   W12
 .byte   As2 ,v024
 .byte   W12
@  #04 @003   ----------------------------------------
 .byte   N80 ,Fn3 ,v096
 .byte   W84
 .byte   N11 ,Fn3 ,v024
 .byte   W12
@  #04 @004   ----------------------------------------
 .byte   N44 ,En3 ,v088
 .byte   W48
 .byte   N23 ,Fn3 ,v092
 .byte   W24
 .byte   Cs3 ,v060
 .byte   W24
@  #04 @005   ----------------------------------------
 .byte   Dn3 ,v068
 .byte   W24
 .byte   En3
 .byte   W24
 .byte   Fn3
 .byte   W24
 .byte   N18 ,An3
 .byte   W24
@  #04 @006   ----------------------------------------
 .byte   W48
 .byte   N11 ,Gn2 ,v080
 .byte   W12
 .byte   Fn2 ,v088
 .byte   W12
 .byte   N44 ,Gn2
 .byte   W24
@  #04 @007   ----------------------------------------
 .byte   W24
 .byte   N11 ,Gs2 ,v068
 .byte   W12
 .byte   As2 ,v080
 .byte   W12
 .byte   Cn3 ,v072
 .byte   W12
 .byte   Cs3 ,v076
 .byte   W12
 .byte   Ds3 ,v064
 .byte   W12
 .byte   Fn3 ,v088
 .byte   W12
@  #04 @008   ----------------------------------------
 .byte   N56 ,Gn3 ,v084
 .byte   W60
 .byte   N11 ,Fn3 ,v092
 .byte   W12
 .byte   En3 ,v064
 .byte   W12
 .byte   Fn3 ,v092
 .byte   W12
@  #04 @009   ----------------------------------------
 .byte   En3
 .byte   W12
 .byte   Cn3 ,v076
 .byte   W12
 .byte   Gn2 ,v096
 .byte   W12
 .byte   Fn2 ,v044
 .byte   W12
 .byte   Gn2 ,v096
 .byte   W12
 .byte   Fn2 ,v072
 .byte   W12
 .byte   En2 ,v096
 .byte   W12
 .byte   Cn2 ,v072
 .byte   W12
@  #04 @010   ----------------------------------------
 .byte   N23 ,Ds2 ,v080
 .byte   W24
 .byte   Fn2 ,v076
 .byte   W24
 .byte   Fs2 ,v084
 .byte   W24
 .byte   As2
 .byte   W24
@  #04 @011   ----------------------------------------
 .byte   N90 ,Ds3 ,v072
 .byte   W96
@  #04 @012   ----------------------------------------
 .byte   W96
@  #04 @013   ----------------------------------------
 .byte   W24
 .byte   N23 ,Gn2 ,v076
 .byte   W24
 .byte   N68 ,Dn3 ,v092
 .byte   W48
@  #04 @014   ----------------------------------------
 .byte   W96
@  #04 @015   ----------------------------------------
 .byte   W24
 .byte   N23 ,As2 ,v084
 .byte   W24
 .byte   N42 ,Fn3 ,v096
 .byte   W48
@  #04 @016   ----------------------------------------
 .byte   N68 ,Fs3 ,v080
 .byte   W72
 .byte   N23 ,Gs3
 .byte   W24
@  #04 @017   ----------------------------------------
 .byte   N40 ,An3 ,v084
 .byte   W48
 .byte   N48 ,As3 ,v100
 .byte   W48
@  #04 @018   ----------------------------------------
 .byte   W96
@  #04 @019   ----------------------------------------
 .byte   W96
@  #04 @020   ----------------------------------------
 .byte   W96
@  #04 @021   ----------------------------------------
 .byte   W96
@  #04 @022   ----------------------------------------
 .byte   W96
@  #04 @023   ----------------------------------------
 .byte   W96
@  #04 @024   ----------------------------------------
 .byte   W96
@  #04 @025   ----------------------------------------
 .byte   W96
@  #04 @026   ----------------------------------------
 .byte   W96
@  #04 @027   ----------------------------------------
 .byte   W96
@  #04 @028   ----------------------------------------
 .byte   W96
@  #04 @029   ----------------------------------------
 .byte   W96
@  #04 @030   ----------------------------------------
 .byte   W96
@  #04 @031   ----------------------------------------
 .byte   W96
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
 .byte   GOTO
  .word Label_8AF2D4
 .byte   FINE

@**************** Track 5 (Midi-Chn.4) ****************@

song05_005:
@  #05 @000   ----------------------------------------
 .byte   KEYSH , song05_key+0
Label_8AF3A1:
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
 .byte   W72
 .byte   VOICE , 7
 .byte   VOL , 57*song05_mvl/mxv
 .byte   PAN , c_v+0
 .byte   W24
@  #05 @006   ----------------------------------------
 .byte   W48
 .byte   N07 ,Gn4 ,v092
 .byte   W08
 .byte   Dn4 ,v072
 .byte   W08
 .byte   Cn4 ,v084
 .byte   W08
 .byte   Gn3 ,v072
 .byte   W08
 .byte   Dn3
 .byte   W08
 .byte   Cn3
 .byte   W08
@  #05 @007   ----------------------------------------
 .byte   Gn2
 .byte   W08
 .byte   Fn2 ,v080
 .byte   W08
 .byte   Dn2 ,v072
 .byte   W08
 .byte   Cn2 ,v092
 .byte   W08
 .byte   Dn2 ,v072
 .byte   W08
 .byte   Fn2 ,v084
 .byte   W08
 .byte   Gn2 ,v072
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   Dn3
 .byte   W08
 .byte   Gn3
 .byte   W08
 .byte   Cn4 ,v080
 .byte   W08
 .byte   N19 ,Dn4
 .byte   W08
@  #05 @008   ----------------------------------------
 .byte   W48
 .byte   N07 ,En4 ,v084
 .byte   W08
 .byte   Cn4
 .byte   W08
 .byte   Gn3 ,v072
 .byte   W08
 .byte   En3
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   Gn2
 .byte   W08
@  #05 @009   ----------------------------------------
 .byte   N24 ,Cn2
 .byte   W96
@  #05 @010   ----------------------------------------
 .byte   W48
 .byte   N07 ,Ds4 ,v096
 .byte   W08
 .byte   As3 ,v072
 .byte   W08
 .byte   Gs3
 .byte   W08
 .byte   Ds3
 .byte   W08
 .byte   As2
 .byte   W08
 .byte   Gs2
 .byte   W08
@  #05 @011   ----------------------------------------
 .byte   As3
 .byte   W08
 .byte   Gs3
 .byte   W08
 .byte   Ds3
 .byte   W08
 .byte   As2 ,v080
 .byte   W08
 .byte   Gs2 ,v072
 .byte   W08
 .byte   Ds2
 .byte   W08
 .byte   Ds3
 .byte   W08
 .byte   As2
 .byte   W08
 .byte   Gs2
 .byte   W08
 .byte   Ds2
 .byte   W08
 .byte   As1
 .byte   W08
 .byte   Fs1 ,v100
 .byte   W08
@  #05 @012   ----------------------------------------
 .byte   W96
@  #05 @013   ----------------------------------------
 .byte   W96
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
 .byte   W48
 .byte   As4 ,v072
 .byte   W08
 .byte   Ds4 ,v084
 .byte   W08
 .byte   Bn3 ,v080
 .byte   W08
 .byte   As3 ,v072
 .byte   W08
 .byte   Ds3 ,v092
 .byte   W08
 .byte   N10 ,Bn2
 .byte   W08
@  #05 @022   ----------------------------------------
 .byte   W96
@  #05 @023   ----------------------------------------
 .byte   W96
@  #05 @024   ----------------------------------------
 .byte   W96
@  #05 @025   ----------------------------------------
 .byte   N07 ,Bn4 ,v088
 .byte   W08
 .byte   En4 ,v084
 .byte   W08
 .byte   Dn4 ,v092
 .byte   W08
 .byte   An3 ,v072
 .byte   W08
 .byte   Gn3
 .byte   W08
 .byte   N15 ,Cn3 ,v088
 .byte   W56
@  #05 @026   ----------------------------------------
 .byte   W96
@  #05 @027   ----------------------------------------
 .byte   N07 ,An4 ,v092
 .byte   W08
 .byte   En4 ,v080
 .byte   W08
 .byte   Dn4 ,v084
 .byte   W08
 .byte   Bn3 ,v072
 .byte   W08
 .byte   An3
 .byte   W08
 .byte   En3 ,v080
 .byte   W08
 .byte   An2 ,v084
 .byte   W08
 .byte   Gn2 ,v080
 .byte   W08
 .byte   En2 ,v072
 .byte   W08
 .byte   Cn2 ,v092
 .byte   W08
 .byte   An1
 .byte   W08
 .byte   N10 ,En1
 .byte   W08
@  #05 @028   ----------------------------------------
 .byte   W96
@  #05 @029   ----------------------------------------
 .byte   W96
@  #05 @030   ----------------------------------------
 .byte   An2 ,v104
 .byte   W08
 .byte   Bn2 ,v088
 .byte   W08
 .byte   Cn3 ,v084
 .byte   W08
 .byte   Dn3 ,v100
 .byte   W08
 .byte   Cn3 ,v080
 .byte   W08
 .byte   Bn2 ,v092
 .byte   W08
 .byte   An2 ,v088
 .byte   W08
 .byte   Bn2
 .byte   W08
 .byte   Cn3 ,v092
 .byte   W08
 .byte   Dn3 ,v100
 .byte   W08
 .byte   Cn3 ,v084
 .byte   W08
 .byte   Bn2 ,v076
 .byte   W08
@  #05 @031   ----------------------------------------
 .byte   An2 ,v104
 .byte   W08
 .byte   Bn2 ,v092
 .byte   W08
 .byte   Cn3 ,v088
 .byte   W08
 .byte   Dn3 ,v104
 .byte   W08
 .byte   Cn3 ,v084
 .byte   W08
 .byte   Bn2 ,v088
 .byte   W08
 .byte   An2 ,v092
 .byte   W08
 .byte   Bn2
 .byte   W08
 .byte   Cn3 ,v088
 .byte   W08
 .byte   Dn3 ,v108
 .byte   W08
 .byte   Cn3 ,v084
 .byte   W08
 .byte   Bn2 ,v088
 .byte   W08
@  #05 @032   ----------------------------------------
 .byte   An2 ,v100
 .byte   W08
 .byte   Bn2 ,v088
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   Dn3 ,v104
 .byte   W08
 .byte   Cn3 ,v088
 .byte   W08
 .byte   Bn2
 .byte   W08
 .byte   An2 ,v084
 .byte   W08
 .byte   Bn2 ,v088
 .byte   W08
 .byte   Cn3 ,v092
 .byte   W08
 .byte   Dn3 ,v104
 .byte   W08
 .byte   Cn3 ,v088
 .byte   W08
 .byte   Bn2 ,v084
 .byte   W08
@  #05 @033   ----------------------------------------
 .byte   An2 ,v096
 .byte   W08
 .byte   Bn2 ,v084
 .byte   W08
 .byte   Cn3 ,v088
 .byte   W08
 .byte   Dn3 ,v100
 .byte   W08
 .byte   Cn3 ,v092
 .byte   W08
 .byte   Bn2 ,v088
 .byte   W08
 .byte   An2 ,v084
 .byte   W08
 .byte   Bn2 ,v088
 .byte   W08
 .byte   Cn3 ,v092
 .byte   W08
 .byte   Dn3 ,v104
 .byte   W08
 .byte   Cn3 ,v092
 .byte   W08
 .byte   Bn2
 .byte   W08
@  #05 @034   ----------------------------------------
 .byte   An2 ,v088
 .byte   W08
 .byte   Bn2
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   Dn3 ,v100
 .byte   W08
 .byte   Cn3 ,v084
 .byte   W08
 .byte   Bn2 ,v076
 .byte   W08
 .byte   An2 ,v080
 .byte   W08
 .byte   Bn2 ,v084
 .byte   W08
 .byte   Cn3 ,v080
 .byte   W08
 .byte   Dn3 ,v104
 .byte   W08
 .byte   Cn3 ,v088
 .byte   W08
 .byte   Bn2 ,v080
 .byte   W08
@  #05 @035   ----------------------------------------
 .byte   An2 ,v100
 .byte   W08
 .byte   Bn2 ,v088
 .byte   W08
 .byte   Cn3 ,v076
 .byte   W08
 .byte   Dn3 ,v104
 .byte   W08
 .byte   Cn3 ,v092
 .byte   W08
 .byte   Bn2 ,v084
 .byte   W08
 .byte   An2 ,v080
 .byte   W08
 .byte   Bn2 ,v088
 .byte   W08
 .byte   Cn3
 .byte   W08
 .byte   Dn3 ,v096
 .byte   W08
 .byte   Cn3 ,v084
 .byte   W08
 .byte   Bn2
 .byte   W08
@  #05 @036   ----------------------------------------
 .byte   An2 ,v096
 .byte   W08
 .byte   Bn2 ,v092
 .byte   W08
 .byte   Cn3 ,v088
 .byte   W08
 .byte   Dn3 ,v100
 .byte   W08
 .byte   Cn3 ,v088
 .byte   W08
 .byte   Bn2 ,v072
 .byte   W08
 .byte   An2 ,v084
 .byte   W08
 .byte   Bn2 ,v080
 .byte   W08
 .byte   Cn3 ,v096
 .byte   W08
 .byte   Dn3 ,v104
 .byte   W08
 .byte   Cn3 ,v092
 .byte   W08
 .byte   Bn2 ,v088
 .byte   W08
@  #05 @037   ----------------------------------------
 .byte   An2 ,v092
 .byte   W08
 .byte   Bn2
 .byte   W08
 .byte   Cn3 ,v096
 .byte   W08
 .byte   Dn3 ,v104
 .byte   W08
 .byte   Cn3 ,v088
 .byte   W08
 .byte   Bn2 ,v084
 .byte   W08
 .byte   An2 ,v088
 .byte   W08
 .byte   Bn2
 .byte   W08
 .byte   Cn3 ,v076
 .byte   W08
 .byte   Dn3 ,v100
 .byte   W08
 .byte   En3 ,v088
 .byte   W08
 .byte   Fn3 ,v096
 .byte   W08
@  #05 @038   ----------------------------------------
 .byte   GOTO
  .word Label_8AF3A1
@  #05 @039   ----------------------------------------
 .byte   W02
 .byte   FINE

@**************** Track 6 (Midi-Chn.5) ****************@

song05_006:
@  #06 @000   ----------------------------------------
 .byte   KEYSH , song05_key+0
Label_8AF594:
 .byte   VOICE , 1
 .byte   VOL , 51*song05_mvl/mxv
 .byte   PAN , c_v+0
 .byte   W10
 .byte   VOL , 50*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 50*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 49*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 49*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 48*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 48*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 47*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 47*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 46*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 46*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 45*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 45*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 44*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 44*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 43*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 42*song05_mvl/mxv
 .byte   W03
@  #06 @001   ----------------------------------------
 .byte   W02
 .byte   VOL , 42*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 41*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 41*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 40*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 40*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 39*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 39*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 38*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 38*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 37*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 37*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 36*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 36*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 35*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 35*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 34*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 34*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 33*song05_mvl/mxv
 .byte   W01
@  #06 @002   ----------------------------------------
 .byte   W05
 .byte   VOL , 33*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 32*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 32*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 31*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 31*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 30*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 30*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 29*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 29*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 28*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 28*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 27*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 27*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 26*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 26*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 25*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 25*song05_mvl/mxv
 .byte   W04
@  #06 @003   ----------------------------------------
 .byte   W02
 .byte   VOL , 24*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 24*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 23*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 23*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 22*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 22*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 21*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 20*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 20*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 19*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 19*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 18*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 18*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 17*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 17*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 16*song05_mvl/mxv
 .byte   W05
 .byte   VOL , 16*song05_mvl/mxv
 .byte   W06
 .byte   VOL , 15*song05_mvl/mxv
 .byte   W01
@  #06 @004   ----------------------------------------
 .byte   N07 ,An4 ,v080
 .byte   W01
 .byte   VOL , 16*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 16*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*song05_mvl/mxv
 .byte   N07 ,Gs4 ,v084
 .byte   W01
 .byte   VOL , 22*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song05_mvl/mxv
 .byte   N54 ,An4 ,v096
 .byte   W01
 .byte   VOL , 27*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 51*song05_mvl/mxv
 .byte   W23
 .byte   N07 ,Gn4 ,v072
 .byte   W08
 .byte   Fn4
 .byte   W08
 .byte   En4 ,v088
 .byte   W08
@  #06 @005   ----------------------------------------
 .byte   N23 ,Fn4 ,v092
 .byte   W24
 .byte   Dn4
 .byte   W24
 .byte   En4
 .byte   W24
 .byte   Fn4 ,v088
 .byte   W24
@  #06 @006   ----------------------------------------
 .byte   N11 ,Gn4 ,v080
 .byte   W12
 .byte   Fn4 ,v068
 .byte   W12
 .byte   N44 ,Gn4 ,v076
 .byte   W48
 .byte   N23 ,Ds4 ,v080
 .byte   W24
@  #06 @007   ----------------------------------------
 .byte   N56 ,Fn4 ,v092
 .byte   W60
 .byte   N11 ,Cs4 ,v072
 .byte   W12
 .byte   Ds4 ,v076
 .byte   W12
 .byte   Fn4 ,v068
 .byte   W12
@  #06 @008   ----------------------------------------
 .byte   Fs4 ,v080
 .byte   W12
 .byte   Fn4 ,v076
 .byte   W12
 .byte   En4 ,v084
 .byte   W12
 .byte   Fn4
 .byte   W12
 .byte   N68 ,En4 ,v068
 .byte   W48
@  #06 @009   ----------------------------------------
 .byte   W24
 .byte   N23 ,Cn4 ,v084
 .byte   W24
 .byte   Bn3 ,v072
 .byte   W24
 .byte   Cn4 ,v076
 .byte   W24
@  #06 @010   ----------------------------------------
 .byte   N44 ,As3 ,v064
 .byte   W48
 .byte   Gs3 ,v076
 .byte   W48
@  #06 @011   ----------------------------------------
 .byte   N76 ,As3 ,v080
 .byte   W84
 .byte   N11 ,As3 ,v020
 .byte   W12
@  #06 @012   ----------------------------------------
 .byte   W96
@  #06 @013   ----------------------------------------
 .byte   W96
@  #06 @014   ----------------------------------------
 .byte   W96
@  #06 @015   ----------------------------------------
 .byte   W84
 .byte   W01
 .byte   VOL , 47*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 16*song05_mvl/mxv
 .byte   W02
 .byte   VOL , 17*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 18*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 19*song05_mvl/mxv
 .byte   W01
@  #06 @016   ----------------------------------------
 .byte   VOL , 20*song05_mvl/mxv
 .byte   N07 ,Gs3 ,v096
 .byte   N07 ,Gs4
 .byte   W01
 .byte   VOL , 20*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 21*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song05_mvl/mxv
 .byte   N07 ,Fs3 ,v084
 .byte   N07 ,Fs4 ,v088
 .byte   W01
 .byte   VOL , 25*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song05_mvl/mxv
 .byte   N07 ,Gs3 ,v092
 .byte   N07 ,Gs4 ,v084
 .byte   W01
 .byte   VOL , 29*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song05_mvl/mxv
 .byte   N44 ,Fs3 ,v096
 .byte   N44 ,Fs4 ,v080
 .byte   W01
 .byte   VOL , 33*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song05_mvl/mxv
 .byte   W01
 .byte   VOL , 51*song05_mvl/mxv
 .byte   W12
 .byte   N23 ,Fn3 ,v092
 .byte   N23 ,Gs4 ,v076
 .byte   W24
@  #06 @017   ----------------------------------------
 .byte   N44 ,En3 ,v072
 .byte   N44 ,An4 ,v076
 .byte   W48
 .byte   N23 ,Ds3 ,v080
 .byte   N44 ,As4 ,v068
 .byte   W24
 .byte   N23 ,Dn3 ,v096
 .byte   W24
@  #06 @018   ----------------------------------------
 .byte   N44 ,Cs3 ,v084
 .byte   N44 ,Bn4 ,v096
 .byte   W48
 .byte   Cn3 ,v084
 .byte   N23 ,Cn5 ,v076
 .byte   W24
 .byte   En5
 .byte   W24
@  #06 @019   ----------------------------------------
 .byte   N44 ,Bn2 ,v072
 .byte   N44 ,Ds5 ,v080
 .byte   W48
 .byte   N23 ,An2
 .byte   N44 ,Dn5
 .byte   W24
 .byte   N23 ,Gs2 ,v072
 .byte   W24
@  #06 @020   ----------------------------------------
 .byte   N92 ,Gn2
 .byte   N17 ,Dn5 ,v028
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
 .byte   VOICE , 1
 .byte   W72
 .byte   N13 ,An3 ,v092
 .byte   W18
 .byte   N04 ,An3 ,v024
 .byte   W06
@  #06 @031   ----------------------------------------
 .byte   N88 ,An3 ,v092
 .byte   N56 ,En4 ,v100
 .byte   W66
 .byte   N04 ,En4 ,v024
 .byte   W06
 .byte   Fn4 ,v116
 .byte   W06
 .byte   Fn4 ,v024
 .byte   W06
 .byte   Gn4 ,v108
 .byte   W06
 .byte   Gn4 ,v024
 .byte   W06
@  #06 @032   ----------------------------------------
 .byte   N72 ,An3 ,v068
 .byte   N64 ,En4 ,v104
 .byte   W72
 .byte   N04 ,En4 ,v024
 .byte   W12
 .byte   N05 ,An3 ,v080
 .byte   W06
 .byte   N04 ,An3 ,v024
 .byte   W06
@  #06 @033   ----------------------------------------
 .byte   N92 ,An3 ,v080
 .byte   N80 ,Cn4 ,v092
 .byte   W90
 .byte   N04 ,Cn4 ,v024
 .byte   W06
@  #06 @034   ----------------------------------------
 .byte   W24
 .byte   N14 ,An3 ,v076
 .byte   W18
 .byte   N04 ,An3 ,v024
 .byte   W06
 .byte   N32 ,An3 ,v088
 .byte   N32 ,En4 ,v104
 .byte   W42
 .byte   N04 ,En4 ,v024
 .byte   W06
@  #06 @035   ----------------------------------------
 .byte   N84 ,An3 ,v072
 .byte   W24
 .byte   N04 ,Dn4 ,v108
 .byte   W06
 .byte   Dn4 ,v024
 .byte   W06
 .byte   N05 ,En4 ,v108
 .byte   W06
 .byte   N04 ,En4 ,v024
 .byte   W06
 .byte   N11 ,Fn4 ,v100
 .byte   W18
 .byte   N04 ,Fn4 ,v024
 .byte   W06
 .byte   N11 ,Gn4 ,v100
 .byte   W18
 .byte   N04 ,Gn4 ,v024
 .byte   W06
@  #06 @036   ----------------------------------------
 .byte   TIE ,An3 ,v076
 .byte   TIE ,En4 ,v092
 .byte   W96
@  #06 @037   ----------------------------------------
 .byte   W64
 .byte   W01
 .byte   EOT
 .byte   W06
 .byte   EOT
 .byte   An3
 .byte   W01
 .byte   N04 ,En4 ,v024
 .byte   W24
@  #06 @038   ----------------------------------------
 .byte   GOTO
  .word Label_8AF594
 .byte   FINE

@******************************************************@
	.align	2

song05:
	.byte	6	@ NumTrks
	.byte	0	@ NumBlks
	.byte	song05_pri	@ Priority
	.byte	song05_rev	@ Reverb.
    
	.word	song05_grp
    
	.word	song05_001
	.word	song05_002
	.word	song05_003
	.word	song05_004
	.word	song05_005
	.word	song05_006

	.end
