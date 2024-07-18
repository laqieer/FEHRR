	.include "MPlayDef.s"

	.equ	bgm_mns_FE07_08_grp, voicegroup000
	.equ	bgm_mns_FE07_08_pri, 10
	.equ	bgm_mns_FE07_08_rev, 128
	.equ	bgm_mns_FE07_08_mvl, 127
	.equ	bgm_mns_FE07_08_key, 0
	.equ	bgm_mns_FE07_08_tbs, 1
	.equ	bgm_mns_FE07_08_exg, 0
	.equ	bgm_mns_FE07_08_cmp, 1

	.section .rodata
	.global	bgm_mns_FE07_08
	.align	2


@**************** Track 1 (Midi-Chn.0) ****************@

bgm_mns_FE07_08_001:
@  #01 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_08_key+0
 .byte   TEMPO , 140*bgm_mns_FE07_08_tbs/2
 .byte   W48
Label_8CE411:
 .byte   W72
@  #01 @001   ----------------------------------------
 .byte   VOICE , 1
 .byte   W24
 .byte   VOL , 49*bgm_mns_FE07_08_mvl/mxv
 .byte   W24
 .byte   PAN , c_v-14
 .byte   N20 ,Cs2 ,v104
 .byte   W24
 .byte   Ds2
 .byte   W24
@  #01 @002   ----------------------------------------
 .byte   En2
 .byte   W24
 .byte   TIE ,Gn2 ,v096
 .byte   W96
@  #01 @003   ----------------------------------------
 .byte   W12
 .byte   EOT
 .byte   W12
 .byte   N20 ,En2 ,v104
 .byte   W24
 .byte   Fs2
 .byte   W24
 .byte   Gn2
 .byte   W24
@  #01 @004   ----------------------------------------
 .byte   N96 ,As2 ,v096
 .byte   W96
@  #01 @005   ----------------------------------------
 .byte   N11 ,As2 ,v028
 .byte   W24
 .byte   N20 ,Gn2 ,v104
 .byte   W24
 .byte   An2
 .byte   W24
 .byte   As2
 .byte   W24
@  #01 @006   ----------------------------------------
 .byte   N44 ,As2 ,v100
 .byte   W48
 .byte   Gs2 ,v108
 .byte   W48
@  #01 @007   ----------------------------------------
 .byte   Gn2
 .byte   W48
 .byte   N42 ,Fn2 ,v104
 .byte   W48
@  #01 @008   ----------------------------------------
 .byte   N84 ,En2 ,v092
 .byte   W96
@  #01 @009   ----------------------------------------
 .byte   N90 ,Fn2 ,v088
 .byte   W96
@  #01 @010   ----------------------------------------
 .byte   TIE ,Gn2 ,v096
 .byte   W96
@  #01 @011   ----------------------------------------
 .byte   W12
 .byte   EOT
 .byte   W12
 .byte   N20 ,En2 ,v112
 .byte   W24
 .byte   Fs2
 .byte   W24
 .byte   Gn2
 .byte   W24
@  #01 @012   ----------------------------------------
 .byte   TIE ,As2
 .byte   W96
@  #01 @013   ----------------------------------------
 .byte   W11
 .byte   EOT
 .byte   W01
 .byte   N08 ,As2 ,v028
 .byte   W12
 .byte   N20 ,Gn2 ,v112
 .byte   W24
 .byte   An2
 .byte   W24
 .byte   As2
 .byte   W24
@  #01 @014   ----------------------------------------
 .byte   N92 ,Cs3 ,v096
 .byte   W96
@  #01 @015   ----------------------------------------
 .byte   N88 ,Cn3 ,v092
 .byte   W96
@  #01 @016   ----------------------------------------
 .byte   N44 ,Gs2
 .byte   W48
 .byte   As2 ,v104
 .byte   W48
@  #01 @017   ----------------------------------------
 .byte   Cn3
 .byte   W48
 .byte   Cs3 ,v108
 .byte   W48
@  #01 @018   ----------------------------------------
 .byte   GOTO
  .word Label_8CE411
 .byte   FINE

@**************** Track 2 (Midi-Chn.1) ****************@

bgm_mns_FE07_08_002:
@  #02 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_08_key+0
 .byte   VOICE , 2
 .byte   W24
 .byte   VOL , 56*bgm_mns_FE07_08_mvl/mxv
 .byte   W24
Label_8CE498:
 .byte   PAN , c_v-17
 .byte   W48
@  #02 @001   ----------------------------------------
 .byte   N48 ,Cs4 ,v096
 .byte   W48
 .byte   Ds4 ,v084
 .byte   W48
@  #02 @002   ----------------------------------------
 .byte   N72 ,En4
 .byte   W48
 .byte   W24
 .byte   N12 ,En4 ,v020
 .byte   W24
@  #02 @003   ----------------------------------------
 .byte   N48 ,En4 ,v084
 .byte   W48
 .byte   Fs4 ,v080
 .byte   W48
@  #02 @004   ----------------------------------------
 .byte   N72 ,Gn4 ,v092
 .byte   W48
 .byte   W24
 .byte   N12 ,Gn4 ,v020
 .byte   W24
@  #02 @005   ----------------------------------------
 .byte   N48 ,Gn4 ,v084
 .byte   W48
 .byte   An4 ,v088
 .byte   W48
@  #02 @006   ----------------------------------------
 .byte   As4 ,v092
 .byte   W48
 .byte   TIE ,Cs5 ,v100
 .byte   W96
@  #02 @007   ----------------------------------------
 .byte   W48
 .byte   EOT
 .byte   N96 ,Cn5 ,v084
 .byte   W48
@  #02 @008   ----------------------------------------
 .byte   W48
 .byte   Bn4 ,v080
 .byte   W48
@  #02 @009   ----------------------------------------
 .byte   W48
 .byte   N72 ,As4 ,v076
 .byte   W48
@  #02 @010   ----------------------------------------
 .byte   W24
 .byte   N12 ,As4 ,v020
 .byte   W24
 .byte   N48 ,En4 ,v084
 .byte   W48
@  #02 @011   ----------------------------------------
 .byte   Fs4 ,v080
 .byte   W48
 .byte   N72 ,Gn4 ,v084
 .byte   W48
@  #02 @012   ----------------------------------------
 .byte   W24
 .byte   N12 ,Gn4 ,v020
 .byte   W24
 .byte   N48 ,Gn4 ,v088
 .byte   W48
@  #02 @013   ----------------------------------------
 .byte   An4 ,v076
 .byte   W48
 .byte   As4 ,v088
 .byte   W48
@  #02 @014   ----------------------------------------
 .byte   N72 ,Cs5 ,v092
 .byte   W72
 .byte   N48 ,Cn5 ,v084
 .byte   W24
@  #02 @015   ----------------------------------------
 .byte   W24
 .byte   N24 ,As4 ,v076
 .byte   W24
 .byte   Cn5 ,v080
 .byte   W24
 .byte   Cs5 ,v084
 .byte   W24
@  #02 @016   ----------------------------------------
 .byte   TIE ,Cn5 ,v088
 .byte   W96
@  #02 @017   ----------------------------------------
 .byte   W48
 .byte   EOT
 .byte   N12 ,Cn5 ,v020
 .byte   W48
@  #02 @018   ----------------------------------------
 .byte   GOTO
  .word Label_8CE498
 .byte   FINE

@**************** Track 3 (Midi-Chn.2) ****************@

bgm_mns_FE07_08_003:
@  #03 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_08_key+0
 .byte   W12
 .byte   VOICE , 3
 .byte   W24
 .byte   VOL , 56*bgm_mns_FE07_08_mvl/mxv
 .byte   W12
Label_8CE522:
 .byte   W12
 .byte   PAN , c_v+20
 .byte   W36
@  #03 @001   ----------------------------------------
 .byte   N48 ,Cs3 ,v080
 .byte   W48
 .byte   Ds3 ,v084
 .byte   W48
@  #03 @002   ----------------------------------------
 .byte   N72 ,En3 ,v088
 .byte   W48
 .byte   W24
 .byte   N12 ,En3 ,v028
 .byte   W24
@  #03 @003   ----------------------------------------
 .byte   N48 ,En3 ,v088
 .byte   W48
 .byte   Fs3 ,v084
 .byte   W48
@  #03 @004   ----------------------------------------
 .byte   N72 ,Gn3 ,v096
 .byte   W48
 .byte   W24
 .byte   N12 ,Gn3 ,v028
 .byte   W24
@  #03 @005   ----------------------------------------
 .byte   N48 ,Gn3 ,v084
 .byte   W48
 .byte   An3 ,v088
 .byte   W48
@  #03 @006   ----------------------------------------
 .byte   As3
 .byte   W48
 .byte   TIE ,Cs4 ,v076
 .byte   W96
@  #03 @007   ----------------------------------------
 .byte   W48
 .byte   EOT
 .byte   N96 ,Cn4 ,v080
 .byte   W48
@  #03 @008   ----------------------------------------
 .byte   W48
 .byte   Bn3 ,v084
 .byte   W48
@  #03 @009   ----------------------------------------
 .byte   W48
 .byte   N72 ,As3 ,v088
 .byte   W48
@  #03 @010   ----------------------------------------
 .byte   W24
 .byte   N12 ,As3 ,v028
 .byte   W24
 .byte   N48 ,En3 ,v084
 .byte   W48
@  #03 @011   ----------------------------------------
 .byte   Fs3 ,v080
 .byte   W48
 .byte   N72 ,Gn3 ,v088
 .byte   W48
@  #03 @012   ----------------------------------------
 .byte   W24
 .byte   N12 ,Gn3 ,v028
 .byte   W24
 .byte   N48 ,Gn3 ,v092
 .byte   W48
@  #03 @013   ----------------------------------------
 .byte   An3 ,v088
 .byte   W48
 .byte   As3 ,v100
 .byte   W48
@  #03 @014   ----------------------------------------
 .byte   N72 ,Cs4 ,v096
 .byte   W72
 .byte   N48 ,Cn4
 .byte   W24
@  #03 @015   ----------------------------------------
 .byte   W24
 .byte   N24 ,As3
 .byte   W24
 .byte   Cn4 ,v092
 .byte   W24
 .byte   Cs4 ,v096
 .byte   W24
@  #03 @016   ----------------------------------------
 .byte   TIE ,Cn4 ,v084
 .byte   W96
@  #03 @017   ----------------------------------------
 .byte   W48
 .byte   EOT
 .byte   N12 ,Cn4 ,v028
 .byte   W48
@  #03 @018   ----------------------------------------
 .byte   GOTO
  .word Label_8CE522
 .byte   FINE

@**************** Track 4 (Midi-Chn.3) ****************@

bgm_mns_FE07_08_004:
@  #04 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_08_key+0
 .byte   VOICE , 4
 .byte   W12
 .byte   VOL , 52*bgm_mns_FE07_08_mvl/mxv
 .byte   W12
 .byte   PAN , c_v-9
 .byte   W24
Label_8CE5AD:
 .byte   TIE ,Cs2 ,v092
 .byte   W96
@  #04 @001   ----------------------------------------
 .byte   W92
 .byte   W02
 .byte   EOT
 .byte   W02
@  #04 @002   ----------------------------------------
 .byte   TIE ,En2 ,v088
 .byte   W96
@  #04 @003   ----------------------------------------
 .byte   W96
@  #04 @004   ----------------------------------------
 .byte   EOT
 .byte   TIE ,Gn2
 .byte   W96
@  #04 @005   ----------------------------------------
 .byte   W92
 .byte   W03
 .byte   EOT
 .byte   W01
@  #04 @006   ----------------------------------------
 .byte   TIE ,As2
 .byte   W96
@  #04 @007   ----------------------------------------
 .byte   W92
 .byte   W02
 .byte   EOT
 .byte   W02
@  #04 @008   ----------------------------------------
 .byte   TIE ,Cs2
 .byte   W96
@  #04 @009   ----------------------------------------
 .byte   W92
 .byte   W02
 .byte   EOT
 .byte   W02
@  #04 @010   ----------------------------------------
 .byte   TIE ,En2
 .byte   W96
@  #04 @011   ----------------------------------------
 .byte   W96
@  #04 @012   ----------------------------------------
 .byte   EOT
 .byte   TIE ,Gn2
 .byte   W96
@  #04 @013   ----------------------------------------
 .byte   W92
 .byte   W03
 .byte   EOT
 .byte   W01
@  #04 @014   ----------------------------------------
 .byte   TIE ,As2
 .byte   W96
@  #04 @015   ----------------------------------------
 .byte   W96
@  #04 @016   ----------------------------------------
 .byte   W96
@  #04 @017   ----------------------------------------
 .byte   W92
 .byte   W03
 .byte   EOT
 .byte   W01
@  #04 @018   ----------------------------------------
 .byte   GOTO
  .word Label_8CE5AD
 .byte   FINE

@**************** Track 5 (Midi-Chn.4) ****************@

bgm_mns_FE07_08_005:
@  #05 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_08_key+0
 .byte   W48
Label_8CE5EE:
 .byte   W96
@  #05 @001   ----------------------------------------
 .byte   W24
 .byte   VOICE , 5
 .byte   W24
 .byte   VOL , 51*bgm_mns_FE07_08_mvl/mxv
 .byte   W24
 .byte   PAN , c_v+15
 .byte   W24
@  #05 @002   ----------------------------------------
 .byte   TIE ,As2 ,v076
 .byte   W96
@  #05 @003   ----------------------------------------
 .byte   W84
 .byte   EOT
 .byte   N12 ,As2 ,v020
 .byte   W12
@  #05 @004   ----------------------------------------
 .byte   TIE ,Gn2 ,v080
 .byte   W96
@  #05 @005   ----------------------------------------
 .byte   W72
 .byte   EOT
 .byte   N12 ,Gn2 ,v020
 .byte   W24
@  #05 @006   ----------------------------------------
 .byte   W96
@  #05 @007   ----------------------------------------
 .byte   W48
 .byte   N36 ,As1 ,v072
 .byte   W36
 .byte   W03
 .byte   N09 ,As1 ,v020
 .byte   W09
@  #05 @008   ----------------------------------------
 .byte   N96 ,An1 ,v088
 .byte   W96
@  #05 @009   ----------------------------------------
 .byte   As1 ,v084
 .byte   W96
@  #05 @010   ----------------------------------------
 .byte   TIE ,Cs2
 .byte   W96
@  #05 @011   ----------------------------------------
 .byte   W96
@  #05 @012   ----------------------------------------
 .byte   EOT
 .byte   TIE ,Dn2 ,v100
 .byte   W96
@  #05 @013   ----------------------------------------
 .byte   W36
 .byte   W03
 .byte   EOT
 .byte   N09 ,Dn2 ,v020
 .byte   W09
 .byte   N24 ,Ds2 ,v088
 .byte   W24
 .byte   En2
 .byte   W24
@  #05 @014   ----------------------------------------
 .byte   N96 ,Fn2
 .byte   W96
@  #05 @015   ----------------------------------------
 .byte   En2 ,v084
 .byte   W96
@  #05 @016   ----------------------------------------
 .byte   N48 ,Cs2 ,v092
 .byte   W48
 .byte   Ds2 ,v096
 .byte   W48
@  #05 @017   ----------------------------------------
 .byte   Fn2 ,v104
 .byte   W48
 .byte   Fs2 ,v100
 .byte   W48
@  #05 @018   ----------------------------------------
 .byte   GOTO
  .word Label_8CE5EE
 .byte   FINE

@**************** Track 6 (Midi-Chn.5) ****************@

bgm_mns_FE07_08_006:
@  #06 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_08_key+0
 .byte   VOICE , 6
 .byte   W24
 .byte   VOL , 66*bgm_mns_FE07_08_mvl/mxv
 .byte   W12
 .byte   PAN , c_v-10
 .byte   W12
Label_8CE659:
 .byte   N48 ,Cs3 ,v108
 .byte   W96
@  #06 @001   ----------------------------------------
 .byte   W24
 .byte   N24 ,Gs2
 .byte   W24
 .byte   Cs3
 .byte   W24
 .byte   Gs2
 .byte   W24
@  #06 @002   ----------------------------------------
 .byte   W72
 .byte   N48 ,Gn2
 .byte   W24
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
 .byte   W48
 .byte   N23 ,Cs3
 .byte   W24
 .byte   Gs2
 .byte   W24
@  #06 @012   ----------------------------------------
 .byte   W96
@  #06 @013   ----------------------------------------
 .byte   W48
 .byte   N03 ,As2 ,v040
 .byte   W04
 .byte   As2 ,v044
 .byte   W04
 .byte   As2 ,v048
 .byte   W04
 .byte   As2 ,v052
 .byte   W04
 .byte   As2 ,v056
 .byte   W04
 .byte   As2 ,v060
 .byte   W04
 .byte   As2 ,v064
 .byte   W04
 .byte   As2 ,v068
 .byte   W04
 .byte   As2 ,v072
 .byte   W04
 .byte   As2 ,v076
 .byte   W04
 .byte   As2 ,v080
 .byte   W04
 .byte   As2 ,v084
 .byte   W04
@  #06 @014   ----------------------------------------
 .byte   N23 ,As2 ,v088
 .byte   W96
@  #06 @015   ----------------------------------------
 .byte   W96
@  #06 @016   ----------------------------------------
 .byte   W96
@  #06 @017   ----------------------------------------
 .byte   W96
@  #06 @018   ----------------------------------------
 .byte   GOTO
  .word Label_8CE659
 .byte   FINE

@**************** Track 7 (Midi-Chn.6) ****************@

bgm_mns_FE07_08_007:
@  #07 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_08_key+0
 .byte   VOICE , 0
 .byte   VOL , 64*bgm_mns_FE07_08_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N48 ,GnM2 ,v100
 .byte   W48
Label_8CE6B7:
 .byte   N48 ,GsM2 ,v108
 .byte   W96
@  #07 @001   ----------------------------------------
 .byte   W96
@  #07 @002   ----------------------------------------
 .byte   W96
@  #07 @003   ----------------------------------------
 .byte   TIE ,GnM2 ,v076
 .byte   W96
@  #07 @004   ----------------------------------------
 .byte   W44
 .byte   W03
 .byte   EOT
 .byte   W01
 .byte   N23 ,AnM2 ,v100
 .byte   W24
 .byte   AsM2
 .byte   W24
@  #07 @005   ----------------------------------------
Label_8CE6CB:
 .byte   W24
 .byte   N23 ,AnM2 ,v100
 .byte   W24
 .byte   AsM2
 .byte   W24
 .byte   BnM2
 .byte   W24
 .byte   PEND 
@  #07 @006   ----------------------------------------
 .byte   N48 ,GsM2 ,v104
 .byte   W96
@  #07 @007   ----------------------------------------
 .byte   W48
 .byte   N23 ,AsM2 ,v100
 .byte   W24
 .byte   BnM2
 .byte   W24
@  #07 @008   ----------------------------------------
 .byte   N24 ,CnM1 ,v108
 .byte   W72
 .byte   N11 ,CnM1 ,v092
 .byte   W12
 .byte   CnM1 ,v076
 .byte   W12
@  #07 @009   ----------------------------------------
Label_8CE6EB:
 .byte   N24 ,CnM1 ,v108
 .byte   W48
 .byte   N23 ,AnM2 ,v100
 .byte   W24
 .byte   AsM2
 .byte   W24
 .byte   PEND 
@  #07 @010   ----------------------------------------
 .byte   BnM2
 .byte   W72
 .byte   N11 ,CnM1 ,v108
 .byte   W12
 .byte   CnM1 ,v104
 .byte   W12
@  #07 @011   ----------------------------------------
 .byte   N24 ,CnM1 ,v108
 .byte   W24
 .byte   N24
 .byte   W72
@  #07 @012   ----------------------------------------
 .byte   PATT
  .word Label_8CE6EB
@  #07 @013   ----------------------------------------
 .byte   PATT
  .word Label_8CE6CB
@  #07 @014   ----------------------------------------
 .byte   N24 ,CnM1 ,v108
 .byte   W72
 .byte   N11
 .byte   W12
 .byte   CnM1 ,v096
 .byte   W12
@  #07 @015   ----------------------------------------
 .byte   N23 ,CnM1 ,v108
 .byte   W24
 .byte   N24
 .byte   W48
 .byte   N11 ,CnM1 ,v100
 .byte   W12
 .byte   CnM1 ,v104
 .byte   W12
@  #07 @016   ----------------------------------------
 .byte   N23 ,CnM1 ,v108
 .byte   W24
 .byte   N24
 .byte   W48
 .byte   N11
 .byte   W12
 .byte   N11
 .byte   W12
@  #07 @017   ----------------------------------------
 .byte   N23
 .byte   W24
 .byte   N16
 .byte   N68 ,GnM2 ,v080
 .byte   W72
@  #07 @018   ----------------------------------------
 .byte   GOTO
  .word Label_8CE6B7
 .byte   FINE

@******************************************************@
	.align	2

bgm_mns_FE07_08:
	.byte	7	@ NumTrks
	.byte	0	@ NumBlks
	.byte	bgm_mns_FE07_08_pri	@ Priority
	.byte	bgm_mns_FE07_08_rev	@ Reverb.
    
	.word	bgm_mns_FE07_08_grp
    
	.word	bgm_mns_FE07_08_001
	.word	bgm_mns_FE07_08_002
	.word	bgm_mns_FE07_08_003
	.word	bgm_mns_FE07_08_004
	.word	bgm_mns_FE07_08_005
	.word	bgm_mns_FE07_08_006
	.word	bgm_mns_FE07_08_007

	.end
