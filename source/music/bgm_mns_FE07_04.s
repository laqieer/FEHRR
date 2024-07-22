	.include "MPlayDef.s"

	.equ	bgm_mns_FE07_04_grp, voicegroup000
	.equ	bgm_mns_FE07_04_pri, 10
	.equ	bgm_mns_FE07_04_rev, 128
	.equ	bgm_mns_FE07_04_mvl, 127
	.equ	bgm_mns_FE07_04_key, 0
	.equ	bgm_mns_FE07_04_tbs, 1
	.equ	bgm_mns_FE07_04_exg, 0
	.equ	bgm_mns_FE07_04_cmp, 1

	.section .rodata
	.global	bgm_mns_FE07_04
	.align	2


@**************** Track 1 (Midi-Chn.0) ****************@

bgm_mns_FE07_04_001:
@  #01 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_04_key+0
 .byte   TEMPO , 84*bgm_mns_FE07_04_tbs/2
 .byte   VOICE , 1
 .byte   VOL , 41*bgm_mns_FE07_04_mvl/mxv
 .byte   PAN , c_v+15
 .byte   N72 ,An3 ,v100
 .byte   W01
 .byte   VOL , 42*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 45*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 45*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 46*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 46*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 47*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 47*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 49*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 49*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 50*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 50*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 51*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 51*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 52*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 52*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 53*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 54*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 54*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 55*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 56*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 56*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 57*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 57*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 58*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 58*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 59*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 60*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 60*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 61*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 61*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 62*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 63*bgm_mns_FE07_04_mvl/mxv
 .byte   W36
 .byte   N21 ,Bn3
 .byte   W24
@  #01 @001   ----------------------------------------
Label_8B64BA:
 .byte   N24 ,Cn4 ,v100
 .byte   W24
 .byte   N44 ,Bn3
 .byte   W48
 .byte   N24 ,Gn3
 .byte   W24
@  #01 @002   ----------------------------------------
 .byte   N44 ,An3
 .byte   W48
 .byte   TIE ,Dn3
 .byte   W48
@  #01 @003   ----------------------------------------
 .byte   W40
 .byte   VOL , 62*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 61*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 60*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 58*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 57*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 56*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 55*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 54*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 52*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 51*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 50*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 49*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 47*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 46*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 45*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   EOT
 .byte   VOL , 30*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 14*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 13*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 12*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 10*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 9*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 8*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 6*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 5*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 4*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 3*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 2*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 1*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 0*bgm_mns_FE07_04_mvl/mxv
 .byte   W05
@  #01 @004   ----------------------------------------
 .byte   VOL , 44*bgm_mns_FE07_04_mvl/mxv
 .byte   N72 ,An3
 .byte   W02
 .byte   VOL , 44*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 45*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 45*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 46*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 46*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 47*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 47*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 48*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 49*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 49*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 50*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 50*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 51*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 51*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 52*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 52*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 53*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 54*bgm_mns_FE07_04_mvl/mxv
 .byte   W02
 .byte   VOL , 54*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 55*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 55*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 56*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 56*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 57*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 57*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 58*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 58*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 59*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 60*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 60*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 61*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 61*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 62*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 62*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 63*bgm_mns_FE07_04_mvl/mxv
 .byte   W32
 .byte   W03
 .byte   N24 ,Gn3
 .byte   W24
@  #01 @005   ----------------------------------------
 .byte   N44 ,Fn3
 .byte   W48
 .byte   N24 ,En3
 .byte   W24
 .byte   N21 ,Dn3
 .byte   W24
@  #01 @006   ----------------------------------------
 .byte   N72 ,En3
 .byte   W72
 .byte   N21 ,Fn3
 .byte   W24
@  #01 @007   ----------------------------------------
 .byte   N72 ,En3
 .byte   W48
 .byte   W02
 .byte   VOL , 62*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 60*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 58*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 56*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 54*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 52*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 50*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 48*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 46*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 41*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 14*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 12*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 11*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 8*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 6*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 4*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 2*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 0*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 0*bgm_mns_FE07_04_mvl/mxv
 .byte   W13
 .byte   VOL , 58*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
@  #01 @008   ----------------------------------------
 .byte   VOICE , 2
 .byte   VOL , 63*bgm_mns_FE07_04_mvl/mxv
 .byte   W23
 .byte   VOL , 63*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 60*bgm_mns_FE07_04_mvl/mxv
 .byte   W12
 .byte   PAN , c_v-30
 .byte   W60
@  #01 @009   ----------------------------------------
 .byte   N36 ,Dn3 ,v084
 .byte   W96
@  #01 @010   ----------------------------------------
Label_8B65ED:
 .byte   W92
 .byte   W03
 .byte   VOL , 60*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   PEND
@  #01 @011   ----------------------------------------
 .byte   N36 ,Dn3 ,v084
 .byte   W24
 .byte   VOICE , 0
 .byte   VOL , 64*bgm_mns_FE07_04_mvl/mxv
 .byte   PAN , c_v+0
 .byte   W12
 .byte   TIE ,DsM2 ,v060
 .byte   W60
@  #01 @012   ----------------------------------------
 .byte   W40
 .byte   W01
 .byte   EOT
 .byte   W06
 .byte   VOL , 64*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOICE , 2
 .byte   VOL , 60*bgm_mns_FE07_04_mvl/mxv
 .byte   PAN , c_v-30
 .byte   W48
@  #01 @013   ----------------------------------------
 .byte   N36 ,EnM2 ,v084
 .byte   W96
@  #01 @014   ----------------------------------------
 .byte   W96
@  #01 @015   ----------------------------------------
 .byte   N36
 .byte   W96
@  #01 @016   ----------------------------------------
 .byte   W96
@  #01 @017   ----------------------------------------
 .byte   N36
 .byte   W96
@  #01 @018   ----------------------------------------
 .byte   W96
@  #01 @019   ----------------------------------------
 .byte   PATT
  .word Label_8B65ED
@  #01 @020   ----------------------------------------
 .byte   VOICE , 1
 .byte   VOL , 37*bgm_mns_FE07_04_mvl/mxv
 .byte   PAN , c_v+15
 .byte   N72 ,FnM2 ,v100
 .byte   W01
 .byte   VOL , 38*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 6*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 7*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 7*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 8*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 8*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 9*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 9*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 10*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 10*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 11*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 12*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 13*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 13*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 14*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 14*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 15*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 16*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 3*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 3*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 23*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 26*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 4*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 4*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_mns_FE07_04_mvl/mxv
 .byte   W28
 .byte   N24 ,Fs0
 .byte   W24
@  #01 @021   ----------------------------------------
 .byte   GOTO
  .word Label_8B64BA
 .byte   FINE

@**************** Track 2 (Midi-Chn.1) ****************@

bgm_mns_FE07_04_002:
@  #02 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_04_key+0
Label_8B668E:
 .byte   VOICE , 27
 .byte   VOL , 47*bgm_mns_FE07_04_mvl/mxv
 .byte   PAN , c_v-18
 .byte   N05 ,An2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   An2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   An2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   An2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   PEND
@  #02 @001   ----------------------------------------
Label_8B66B6:
 .byte   N05 ,Gn2 ,v084
 .byte   N05 ,En3
 .byte   W06
 .byte   En3 ,v024
 .byte   W18
 .byte   Gn2 ,v084
 .byte   N05 ,En3
 .byte   W06
 .byte   En3 ,v024
 .byte   W18
 .byte   Gn2 ,v084
 .byte   N05 ,En3
 .byte   W06
 .byte   En3 ,v024
 .byte   W18
 .byte   Gn2 ,v084
 .byte   N05 ,En3
 .byte   W06
 .byte   En3 ,v024
 .byte   W18
 .byte   PEND
@  #02 @002   ----------------------------------------
 .byte   An2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   An2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   An2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   An2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
@  #02 @003   ----------------------------------------
 .byte   An2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   An2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   An2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   Gn2 ,v084
 .byte   N05 ,En3
 .byte   W06
 .byte   En3 ,v024
 .byte   W18
@  #02 @004   ----------------------------------------
 .byte   As2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   As2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   As2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
 .byte   As2 ,v084
 .byte   N05 ,Fn3
 .byte   W06
 .byte   Fn3 ,v024
 .byte   W18
@  #02 @005   ----------------------------------------
 .byte   Cn3 ,v084
 .byte   N05 ,Gn3
 .byte   W06
 .byte   Gn3 ,v024
 .byte   W18
 .byte   Cn3 ,v084
 .byte   N05 ,Gn3
 .byte   W06
 .byte   Gn3 ,v024
 .byte   W18
 .byte   Cn3 ,v084
 .byte   N05 ,Gn3
 .byte   W06
 .byte   Gn3 ,v024
 .byte   W18
 .byte   Cn3 ,v084
 .byte   N05 ,Gn3
 .byte   W06
 .byte   Gn3 ,v024
 .byte   W18
@  #02 @006   ----------------------------------------
 .byte   PATT
  .word Label_8B66B6
@  #02 @007   ----------------------------------------
 .byte   N05 ,Gn2 ,v084
 .byte   N05 ,En3
 .byte   W06
 .byte   En3 ,v024
 .byte   W18
 .byte   Gn2 ,v084
 .byte   N05 ,En3
 .byte   W06
 .byte   En3 ,v024
 .byte   W18
 .byte   An2 ,v084
 .byte   N05 ,En3
 .byte   W06
 .byte   En3 ,v024
 .byte   W18
 .byte   N11 ,Dn3 ,v080
 .byte   W12
 .byte   En3 ,v088
 .byte   W12
@  #02 @008   ----------------------------------------
Label_8B677D:
 .byte   N08 ,An2 ,v068
 .byte   N08 ,Dn3 ,v076
 .byte   N08 ,Fn3 ,v084
 .byte   W09
 .byte   Fn3 ,v024
 .byte   W15
 .byte   An2 ,v068
 .byte   N08 ,Dn3 ,v076
 .byte   N08 ,Fn3 ,v084
 .byte   W09
 .byte   Fn3 ,v024
 .byte   W15
 .byte   An2 ,v068
 .byte   N08 ,Dn3 ,v076
 .byte   N08 ,Fn3 ,v084
 .byte   W09
 .byte   Fn3 ,v024
 .byte   W15
 .byte   An2 ,v068
 .byte   N08 ,Dn3 ,v076
 .byte   N08 ,Fn3 ,v084
 .byte   W09
 .byte   Fn3 ,v024
 .byte   W15
 .byte   PEND
@  #02 @009   ----------------------------------------
 .byte   Gn2 ,v068
 .byte   N08 ,Cn3 ,v076
 .byte   N08 ,En3 ,v084
 .byte   W09
 .byte   En3 ,v024
 .byte   W15
 .byte   Gn2 ,v068
 .byte   N08 ,Cn3 ,v076
 .byte   N08 ,En3 ,v084
 .byte   W09
 .byte   En3 ,v024
 .byte   W15
 .byte   Gn2 ,v068
 .byte   N08 ,Cn3 ,v076
 .byte   N08 ,En3 ,v084
 .byte   W09
 .byte   En3 ,v024
 .byte   W15
 .byte   Gn2 ,v068
 .byte   N08 ,Cn3 ,v076
 .byte   N08 ,En3 ,v084
 .byte   W09
 .byte   En3 ,v024
 .byte   W15
@  #02 @010   ----------------------------------------
 .byte   PATT
  .word Label_8B677D
@  #02 @011   ----------------------------------------
 .byte   N08 ,Cn3 ,v068
 .byte   N08 ,En3 ,v076
 .byte   N08 ,Gn3 ,v084
 .byte   W09
 .byte   Gn3 ,v024
 .byte   W15
 .byte   Cn3 ,v068
 .byte   N08 ,En3 ,v076
 .byte   N08 ,Gn3 ,v084
 .byte   W09
 .byte   Gn3 ,v024
 .byte   W15
 .byte   Cn3 ,v068
 .byte   N08 ,En3 ,v076
 .byte   N08 ,Gn3 ,v084
 .byte   W09
 .byte   Gn3 ,v024
 .byte   W15
 .byte   Cn3 ,v068
 .byte   N08 ,En3 ,v076
 .byte   N08 ,Gn3 ,v084
 .byte   W09
 .byte   Gn3 ,v024
 .byte   W15
@  #02 @012   ----------------------------------------
Label_8B6815:
 .byte   N08 ,Fn3 ,v084
 .byte   W09
 .byte   Fn3 ,v024
 .byte   W15
 .byte   Fn3 ,v084
 .byte   W09
 .byte   Fn3 ,v024
 .byte   W15
 .byte   Fn3 ,v084
 .byte   W09
 .byte   Fn3 ,v024
 .byte   W15
 .byte   Fn3 ,v084
 .byte   W09
 .byte   Fn3 ,v024
 .byte   W15
 .byte   PEND
@  #02 @013   ----------------------------------------
 .byte   PATT
  .word Label_8B6815
@  #02 @014   ----------------------------------------
Label_8B6834:
 .byte   N08 ,En3 ,v084
 .byte   W09
 .byte   En3 ,v024
 .byte   W15
 .byte   En3 ,v084
 .byte   W09
 .byte   En3 ,v024
 .byte   W15
 .byte   En3 ,v084
 .byte   W09
 .byte   En3 ,v024
 .byte   W15
 .byte   En3 ,v084
 .byte   W09
 .byte   En3 ,v024
 .byte   W15
 .byte   PEND
@  #02 @015   ----------------------------------------
 .byte   En3 ,v084
 .byte   W09
 .byte   En3 ,v024
 .byte   W15
 .byte   En3 ,v084
 .byte   W09
 .byte   En3 ,v024
 .byte   W15
 .byte   En3 ,v084
 .byte   W09
 .byte   En3 ,v024
 .byte   W15
 .byte   En3 ,v084
 .byte   W24
@  #02 @016   ----------------------------------------
 .byte   PATT
  .word Label_8B6815
@  #02 @017   ----------------------------------------
 .byte   N08 ,Fn3 ,v084
 .byte   W09
 .byte   Fn3 ,v024
 .byte   W15
 .byte   Fn3 ,v084
 .byte   W09
 .byte   Fn3 ,v024
 .byte   W15
 .byte   Fn3 ,v084
 .byte   W09
 .byte   Fn3 ,v024
 .byte   W15
 .byte   Fn3 ,v084
 .byte   W24
@  #02 @018   ----------------------------------------
 .byte   Dn3
 .byte   W09
 .byte   Dn3 ,v024
 .byte   W15
 .byte   Dn3 ,v084
 .byte   W09
 .byte   Dn3 ,v024
 .byte   W15
 .byte   Dn3 ,v084
 .byte   W09
 .byte   Dn3 ,v024
 .byte   W15
 .byte   Dn3 ,v084
 .byte   W24
@  #02 @019   ----------------------------------------
 .byte   PATT
  .word Label_8B6834
@  #02 @020   ----------------------------------------
 .byte   PATT
  .word Label_8B668E
@  #02 @021   ----------------------------------------
 .byte   GOTO
  .word Label_8B66B6
 .byte   FINE

@**************** Track 3 (Midi-Chn.2) ****************@

bgm_mns_FE07_04_003:
@  #03 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_04_key+0
Label_8B68A4:
 .byte   VOICE , 33
 .byte   VOL , 67*bgm_mns_FE07_04_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N24 ,Dn2 ,v100
 .byte   W24
 .byte   N18 ,Dn2 ,v032
 .byte   W72
 .byte   PEND
@  #03 @001   ----------------------------------------
Label_8B68B3:
 .byte   N24 ,Dn2 ,v100
 .byte   W24
 .byte   N18 ,Dn2 ,v032
 .byte   W72
 .byte   PEND
@  #03 @002   ----------------------------------------
 .byte   PATT
  .word Label_8B68B3
@  #03 @003   ----------------------------------------
 .byte   N24 ,Dn2 ,v100
 .byte   W24
 .byte   N18 ,Dn2 ,v032
 .byte   W48
 .byte   N21 ,Cn2 ,v100
 .byte   W24
@  #03 @004   ----------------------------------------
 .byte   N24 ,As1
 .byte   W24
 .byte   N18 ,As1 ,v032
 .byte   W72
@  #03 @005   ----------------------------------------
 .byte   N24 ,Cn2 ,v100
 .byte   W24
 .byte   N18 ,Cn2 ,v032
 .byte   W72
@  #03 @006   ----------------------------------------
 .byte   PATT
  .word Label_8B68B3
@  #03 @007   ----------------------------------------
 .byte   N24 ,En2 ,v100
 .byte   W24
 .byte   N18 ,En2 ,v032
 .byte   W24
 .byte   N24 ,An1 ,v100
 .byte   W24
 .byte   N18 ,An1 ,v032
 .byte   W24
@  #03 @008   ----------------------------------------
Label_8B68F1:
 .byte   N48 ,Dn2 ,v100
 .byte   W48
 .byte   N18 ,Dn2 ,v028
 .byte   W48
 .byte   PEND
@  #03 @009   ----------------------------------------
 .byte   PATT
  .word Label_8B68F1
@  #03 @010   ----------------------------------------
 .byte   PATT
  .word Label_8B68F1
@  #03 @011   ----------------------------------------
 .byte   PATT
  .word Label_8B68F1
@  #03 @012   ----------------------------------------
 .byte   N90 ,Dn2 ,v100
 .byte   W96
@  #03 @013   ----------------------------------------
 .byte   N66
 .byte   W72
 .byte   N21
 .byte   W24
@  #03 @014   ----------------------------------------
 .byte   N90
 .byte   W96
@  #03 @015   ----------------------------------------
 .byte   N66
 .byte   W72
 .byte   N21 ,Cn2
 .byte   W24
@  #03 @016   ----------------------------------------
 .byte   N92 ,As1
 .byte   W96
@  #03 @017   ----------------------------------------
 .byte   N92
 .byte   W96
@  #03 @018   ----------------------------------------
 .byte   N68 ,Gn2
 .byte   W72
 .byte   N24
 .byte   W24
@  #03 @019   ----------------------------------------
 .byte   N42 ,An2
 .byte   W48
 .byte   An1
 .byte   W48
@  #03 @020   ----------------------------------------
 .byte   PATT
  .word Label_8B68A4
@  #03 @021   ----------------------------------------
 .byte   GOTO
  .word Label_8B68B3
 .byte   FINE

@**************** Track 4 (Midi-Chn.3) ****************@

bgm_mns_FE07_04_004:
@  #04 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_04_key+0
 .byte   W96
@  #04 @001   ----------------------------------------
Label_8B6935:
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
 .byte   W96
@  #04 @008   ----------------------------------------
 .byte   W96
@  #04 @009   ----------------------------------------
 .byte   W96
@  #04 @010   ----------------------------------------
 .byte   W96
@  #04 @011   ----------------------------------------
 .byte   W96
@  #04 @012   ----------------------------------------
 .byte   VOICE , 33
 .byte   VOL , 57*bgm_mns_FE07_04_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N48 ,Dn3 ,v088
 .byte   W48
 .byte   En3
 .byte   W48
@  #04 @013   ----------------------------------------
 .byte   N54 ,Fn3
 .byte   W60
 .byte   N11 ,Dn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Fn3
 .byte   W12
@  #04 @014   ----------------------------------------
 .byte   N44 ,An3
 .byte   W48
 .byte   N96 ,Gn3
 .byte   W48
@  #04 @015   ----------------------------------------
 .byte   W32
 .byte   VOL , 57*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 55*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 52*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 49*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 46*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 16*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 14*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 11*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 8*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 6*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 3*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 0*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 0*bgm_mns_FE07_04_mvl/mxv
 .byte   W06
 .byte   VOL , 57*bgm_mns_FE07_04_mvl/mxv
 .byte   N11 ,Fn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Dn3
 .byte   W12
@  #04 @016   ----------------------------------------
 .byte   N92 ,Cn3
 .byte   W96
@  #04 @017   ----------------------------------------
 .byte   N54 ,As2
 .byte   W60
 .byte   N11 ,An2
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Cn3
 .byte   W12
@  #04 @018   ----------------------------------------
 .byte   N72 ,Dn3
 .byte   W72
 .byte   N11 ,Cn3 ,v084
 .byte   W12
 .byte   As2 ,v080
 .byte   W12
@  #04 @019   ----------------------------------------
 .byte   N72 ,An2
 .byte   W60
 .byte   W03
 .byte   VOL , 56*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 53*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 51*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 48*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 45*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 19*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 13*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 11*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 8*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 5*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 2*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 0*bgm_mns_FE07_04_mvl/mxv
 .byte   W12
 .byte   VOL , 66*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
@  #04 @020   ----------------------------------------
 .byte   W96
@  #04 @021   ----------------------------------------
 .byte   GOTO
  .word Label_8B6935
 .byte   FINE

@**************** Track 5 (Midi-Chn.4) ****************@

bgm_mns_FE07_04_005:
@  #05 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_04_key+0
 .byte   W72
 .byte   VOICE , 0
 .byte   W06
 .byte   VOL , 64*bgm_mns_FE07_04_mvl/mxv
 .byte   W06
 .byte   PAN , c_v+0
 .byte   W12
@  #05 @001   ----------------------------------------
Label_8B69EF:
 .byte   W48
 .byte   N23 ,As0 ,v076
 .byte   W48
@  #05 @002   ----------------------------------------
 .byte   W96
@  #05 @003   ----------------------------------------
 .byte   W48
 .byte   N23
 .byte   W48
@  #05 @004   ----------------------------------------
 .byte   W96
@  #05 @005   ----------------------------------------
 .byte   W48
 .byte   N23
 .byte   W48
@  #05 @006   ----------------------------------------
 .byte   W96
@  #05 @007   ----------------------------------------
 .byte   W48
 .byte   N23
 .byte   W48
@  #05 @008   ----------------------------------------
 .byte   VOICE , 34
 .byte   VOL , 60*bgm_mns_FE07_04_mvl/mxv
 .byte   PAN , c_v+16
 .byte   N96 ,FsM1 ,v060
 .byte   W96
@  #05 @009   ----------------------------------------
 .byte   N96
 .byte   W96
@  #05 @010   ----------------------------------------
 .byte   N96
 .byte   W96
@  #05 @011   ----------------------------------------
 .byte   N96
 .byte   W96
@  #05 @012   ----------------------------------------
 .byte   FsM1 ,v076
 .byte   W96
@  #05 @013   ----------------------------------------
 .byte   N96
 .byte   W96
@  #05 @014   ----------------------------------------
 .byte   N96
 .byte   W96
@  #05 @015   ----------------------------------------
 .byte   N72
 .byte   W72
 .byte   N21 ,EnM1
 .byte   W24
@  #05 @016   ----------------------------------------
 .byte   N96 ,DnM1
 .byte   W96
@  #05 @017   ----------------------------------------
 .byte   N92
 .byte   W96
@  #05 @018   ----------------------------------------
 .byte   BnM2
 .byte   W96
@  #05 @019   ----------------------------------------
 .byte   N42 ,CsM1
 .byte   W42
 .byte   VOICE , 0
 .byte   VOL , 64*bgm_mns_FE07_04_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N92 ,DsM2 ,v048
 .byte   W54
@  #05 @020   ----------------------------------------
 .byte   W96
@  #05 @021   ----------------------------------------
 .byte   GOTO
  .word Label_8B69EF
 .byte   FINE

@**************** Track 6 (Midi-Chn.5) ****************@

bgm_mns_FE07_04_006:
@  #06 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_04_key+0
 .byte   W96
@  #06 @001   ----------------------------------------
Label_8B6A3A:
 .byte   W96
@  #06 @002   ----------------------------------------
 .byte   VOICE , 36
 .byte   W24
 .byte   VOL , 41*bgm_mns_FE07_04_mvl/mxv
 .byte   W24
 .byte   PAN , c_v+20
 .byte   W48
@  #06 @003   ----------------------------------------
 .byte   W48
 .byte   N09 ,An3 ,v100
 .byte   N09 ,Dn4
 .byte   W10
 .byte   An3 ,v056
 .byte   N09 ,Dn4
 .byte   W10
 .byte   An3 ,v044
 .byte   N09 ,Dn4
 .byte   W10
 .byte   An3 ,v032
 .byte   N09 ,Dn4
 .byte   W10
 .byte   N07 ,An3 ,v020
 .byte   N07 ,Dn4
 .byte   W08
@  #06 @004   ----------------------------------------
 .byte   W96
@  #06 @005   ----------------------------------------
 .byte   W96
@  #06 @006   ----------------------------------------
 .byte   W96
@  #06 @007   ----------------------------------------
 .byte   N09 ,An3 ,v100
 .byte   N09 ,Dn4
 .byte   W10
 .byte   An3 ,v056
 .byte   N09 ,Dn4
 .byte   W10
 .byte   An3 ,v044
 .byte   N09 ,Dn4
 .byte   W10
 .byte   An3 ,v032
 .byte   N09 ,Dn4
 .byte   W10
 .byte   N07 ,An3 ,v020
 .byte   N07 ,Dn4
 .byte   W08
 .byte   N09 ,An3 ,v100
 .byte   N09 ,Cs4
 .byte   W10
 .byte   An3 ,v056
 .byte   N09 ,Cs4
 .byte   W10
 .byte   An3 ,v044
 .byte   N09 ,Cs4
 .byte   W10
 .byte   An3 ,v032
 .byte   N09 ,Cs4
 .byte   W10
 .byte   N07 ,An3 ,v020
 .byte   N07 ,Cs4
 .byte   W08
@  #06 @008   ----------------------------------------
 .byte   W96
@  #06 @009   ----------------------------------------
 .byte   W96
@  #06 @010   ----------------------------------------
 .byte   W96
@  #06 @011   ----------------------------------------
 .byte   W23
 .byte   VOL , 41*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 52*bgm_mns_FE07_04_mvl/mxv
 .byte   W24
 .byte   PAN , c_v+20
 .byte   W48
@  #06 @012   ----------------------------------------
 .byte   N44 ,Dn5 ,v064
 .byte   W48
 .byte   N23 ,An4
 .byte   W24
 .byte   N20 ,Dn5
 .byte   W24
@  #06 @013   ----------------------------------------
 .byte   N23 ,Cn5
 .byte   W24
 .byte   As4
 .byte   W24
 .byte   An4
 .byte   W24
 .byte   Fn4
 .byte   W24
@  #06 @014   ----------------------------------------
 .byte   N44 ,En4
 .byte   W48
 .byte   N68 ,Cn4
 .byte   W48
@  #06 @015   ----------------------------------------
 .byte   W24
 .byte   N23 ,Dn4
 .byte   W24
 .byte   En4
 .byte   W48
@  #06 @016   ----------------------------------------
 .byte   W48
 .byte   N44 ,Fn4
 .byte   W48
@  #06 @017   ----------------------------------------
 .byte   Dn4
 .byte   W48
 .byte   N23 ,As3
 .byte   W24
 .byte   Cn4
 .byte   W24
@  #06 @018   ----------------------------------------
 .byte   N44 ,Dn4
 .byte   W48
 .byte   N20 ,Cn4
 .byte   W24
 .byte   Dn4
 .byte   W24
@  #06 @019   ----------------------------------------
 .byte   N68 ,Cn4
 .byte   W44
 .byte   W01
 .byte   VOL , 52*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 51*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 50*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 49*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 47*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 46*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 44*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 43*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 42*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 40*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 39*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 38*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 36*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 35*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 34*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 33*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 31*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 30*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 29*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 28*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 27*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 25*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 24*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 22*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 21*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 20*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 18*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 17*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 16*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 14*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 13*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 12*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 11*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 9*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 8*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 7*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 6*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 4*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 3*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 2*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 0*bgm_mns_FE07_04_mvl/mxv
 .byte   W01
 .byte   VOL , 0*bgm_mns_FE07_04_mvl/mxv
 .byte   W10
@  #06 @020   ----------------------------------------
 .byte   VOICE , 36
 .byte   VOL , 52*bgm_mns_FE07_04_mvl/mxv
 .byte   W48
 .byte   PAN , c_v+20
 .byte   W48
@  #06 @021   ----------------------------------------
 .byte   GOTO
  .word Label_8B6A3A
 .byte   FINE

@**************** Track 7 (Midi-Chn.6) ****************@

bgm_mns_FE07_04_007:
@  #07 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE07_04_key+0
 .byte   VOICE , 33
 .byte   VOL , 58*bgm_mns_FE07_04_mvl/mxv
 .byte   PAN , c_v+30
 .byte   N12 ,Dn2 ,v080
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   An2
 .byte   W12
@  #07 @001   ----------------------------------------
Label_8B6B5A:
 .byte   N12 ,Dn2 ,v080
 .byte   W12
 .byte   Gn2
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   Gn2
 .byte   W12
 .byte   PEND
@  #07 @002   ----------------------------------------
Label_8B6B6D:
 .byte   N12 ,Dn2 ,v080
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   PEND
@  #07 @003   ----------------------------------------
 .byte   PATT
  .word Label_8B6B6D
@  #07 @004   ----------------------------------------
 .byte   N12 ,As1 ,v080
 .byte   W12
 .byte   Fn2
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Fn2
 .byte   W12
@  #07 @005   ----------------------------------------
 .byte   Cn2
 .byte   W12
 .byte   Gn2
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   Gn2
 .byte   W12
@  #07 @006   ----------------------------------------
 .byte   Dn2
 .byte   W12
 .byte   Gn2
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   N09 ,Gn2
 .byte   W12
@  #07 @007   ----------------------------------------
 .byte   N12 ,En2
 .byte   W12
 .byte   N09 ,Gn2
 .byte   W12
 .byte   N12 ,Bn2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Cs3
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   N09 ,Gn2
 .byte   W12
@  #07 @008   ----------------------------------------
 .byte   N12 ,Dn2
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   An3
 .byte   W12
@  #07 @009   ----------------------------------------
 .byte   Dn2
 .byte   W12
 .byte   Gn2
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Gn3
 .byte   W12
@  #07 @010   ----------------------------------------
 .byte   Dn2
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   N09 ,An3
 .byte   W12
@  #07 @011   ----------------------------------------
 .byte   N12 ,Dn2
 .byte   W12
 .byte   Gn2
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   En4
 .byte   W12
 .byte   Gn4
 .byte   W12
@  #07 @012   ----------------------------------------
 .byte   PATT
  .word Label_8B6B6D
@  #07 @013   ----------------------------------------
 .byte   N12 ,Dn2 ,v080
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   N09 ,Fn3
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   An2
 .byte   W12
@  #07 @014   ----------------------------------------
 .byte   PATT
  .word Label_8B6B5A
@  #07 @015   ----------------------------------------
 .byte   N12 ,Dn2 ,v080
 .byte   W12
 .byte   Gn2
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   N09 ,En3
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   Gn2
 .byte   W12
@  #07 @016   ----------------------------------------
 .byte   N12 ,As1
 .byte   W12
 .byte   Fn2
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   Fn2
 .byte   W12
@  #07 @017   ----------------------------------------
 .byte   As1
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   N09 ,Fn3
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   As2
 .byte   W12
@  #07 @018   ----------------------------------------
 .byte   N12 ,Gn2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Dn4
 .byte   W12
 .byte   N09 ,As3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   Dn3
 .byte   W12
@  #07 @019   ----------------------------------------
 .byte   N12 ,An2
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   En3
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   N08 ,Cn3
 .byte   W08
 .byte   En3
 .byte   W08
 .byte   An3
 .byte   W08
 .byte   Cn4
 .byte   W08
 .byte   En4
 .byte   W08
 .byte   An4
 .byte   W08
@  #07 @020   ----------------------------------------
 .byte   VOL , 58*bgm_mns_FE07_04_mvl/mxv
 .byte   PAN , c_v+15
 .byte   N12 ,Dn2
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   An2
 .byte   W12
@  #07 @021   ----------------------------------------
 .byte   GOTO
  .word Label_8B6B5A
 .byte   FINE

@******************************************************@
	.align	2

bgm_mns_FE07_04:
	.byte	7	@ NumTrks
	.byte	0	@ NumBlks
	.byte	bgm_mns_FE07_04_pri	@ Priority
	.byte	bgm_mns_FE07_04_rev	@ Reverb.

	.word	bgm_mns_FE07_04_grp

	.word	bgm_mns_FE07_04_001
	.word	bgm_mns_FE07_04_002
	.word	bgm_mns_FE07_04_003
	.word	bgm_mns_FE07_04_004
	.word	bgm_mns_FE07_04_005
	.word	bgm_mns_FE07_04_006
	.word	bgm_mns_FE07_04_007

	.end
