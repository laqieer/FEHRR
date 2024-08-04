	.include "MPlayDef.s"

	.equ	song09_grp, voicegroup000
	.equ	song09_pri, 10
	.equ	song09_rev, 128
	.equ	song09_mvl, 127
	.equ	song09_key, 0
	.equ	song09_tbs, 1
	.equ	song09_exg, 0
	.equ	song09_cmp, 1

	.section .rodata
	.global	song09
	.align	2


@**************** Track 1 (Midi-Chn.0) ****************@

song09_001:
@  #01 @000   ----------------------------------------
 .byte   KEYSH , song09_key+0
 .byte   TEMPO , 120*song09_tbs/2
 .byte   VOICE , 1
 .byte   VOL , 50*song09_mvl/mxv
 .byte   PAN , c_v-8
 .byte   N06 ,Ds3 ,v092
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   Gn3
 .byte   W06
 .byte   An3
 .byte   W06
Label_88134C:
 .byte   N60 ,As3 ,v092
 .byte   W60
 .byte   N12 ,Fn3
 .byte   W12
@  #01 @001   ----------------------------------------
 .byte   As3
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   VOL , 50*song09_mvl/mxv
 .byte   N24 ,An3
 .byte   W24
 .byte   N12 ,Fn3
 .byte   W12
 .byte   N54 ,Cn3
 .byte   W11
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W02
@  #01 @002   ----------------------------------------
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 27*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 25*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 21*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 18*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 50*song09_mvl/mxv
 .byte   N48 ,As3
 .byte   W48
 .byte   N23 ,Fn3
 .byte   W24
 .byte   N12 ,As3
 .byte   W12
@  #01 @003   ----------------------------------------
 .byte   Cn4
 .byte   W12
 .byte   N24 ,An3
 .byte   W24
 .byte   N12 ,As3
 .byte   W12
 .byte   N32 ,Cn4
 .byte   W24
 .byte   W02
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   N24 ,Fn4
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W02
@  #01 @004   ----------------------------------------
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W10
 .byte   N48 ,Ds4
 .byte   W48
 .byte   As3
 .byte   W48
@  #01 @005   ----------------------------------------
 .byte   Dn4
 .byte   W48
 .byte   N24 ,As3
 .byte   W24
 .byte   Fn3
 .byte   W24
@  #01 @006   ----------------------------------------
 .byte   N60 ,Cs4
 .byte   W60
 .byte   N12 ,Gs3
 .byte   W12
 .byte   N21 ,Cs4
 .byte   W16
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song09_mvl/mxv
 .byte   W02
@  #01 @007   ----------------------------------------
 .byte   VOL , 29*song09_mvl/mxv
 .byte   N90 ,Ds4
 .byte   W01
 .byte   VOL , 30*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W24
 .byte   W02
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 32*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 30*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 29*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 28*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 27*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 25*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 24*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 23*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 22*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 20*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 19*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 18*song09_mvl/mxv
 .byte   W03
@  #01 @008   ----------------------------------------
 .byte   VOICE , 2
 .byte   VOL , 53*song09_mvl/mxv
 .byte   N48 ,As3
 .byte   W48
 .byte   N06 ,As3 ,v032
 .byte   W12
 .byte   Fn3 ,v092
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   As3 ,v092
 .byte   W06
 .byte   As3 ,v032
 .byte   W06
 .byte   Cn4 ,v092
 .byte   W06
 .byte   Cn4 ,v032
 .byte   W06
@  #01 @009   ----------------------------------------
 .byte   N23 ,An3 ,v092
 .byte   W24
 .byte   N06 ,Fn3
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W06
 .byte   N54 ,Cn3 ,v092
 .byte   W60
@  #01 @010   ----------------------------------------
 .byte   N48 ,As3
 .byte   W48
 .byte   N18 ,Fn3
 .byte   W18
 .byte   N06 ,Fn3 ,v032
 .byte   W06
 .byte   As3 ,v092
 .byte   W06
 .byte   As3 ,v032
 .byte   W06
 .byte   Cn4 ,v092
 .byte   W06
 .byte   Cn4 ,v032
 .byte   W06
@  #01 @011   ----------------------------------------
 .byte   N18 ,An3 ,v092
 .byte   W24
 .byte   N06 ,As3
 .byte   W06
 .byte   As3 ,v032
 .byte   W06
 .byte   N24 ,Cn4 ,v092
 .byte   W24
 .byte   N06 ,Cn4 ,v032
 .byte   W09
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W02
 .byte   VOICE , 1
 .byte   VOL , 25*song09_mvl/mxv
 .byte   N24 ,Fn4 ,v064
 .byte   W01
 .byte   VOL , 28*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 31*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W09
@  #01 @012   ----------------------------------------
 .byte   N48 ,Ds4
 .byte   W48
 .byte   N24 ,Fn4
 .byte   W24
 .byte   Ds4
 .byte   W24
@  #01 @013   ----------------------------------------
 .byte   N48 ,Dn4
 .byte   W06
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 52*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 52*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W02
 .byte   N24 ,Ds4
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W14
 .byte   N24 ,Dn4
 .byte   W24
@  #01 @014   ----------------------------------------
 .byte   N60 ,Cs4
 .byte   W60
 .byte   N12 ,Gs3
 .byte   W12
 .byte   N24 ,Cs4
 .byte   W24
@  #01 @015   ----------------------------------------
 .byte   N48 ,Ds4
 .byte   W48
 .byte   N24 ,Fn4
 .byte   W14
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 52*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   N24 ,Ds4
 .byte   W02
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
@  #01 @016   ----------------------------------------
 .byte   N23 ,Cs4 ,v068
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W04
 .byte   N23 ,Gs3
 .byte   W24
 .byte   Gn3
 .byte   W24
 .byte   Ds3
 .byte   W24
@  #01 @017   ----------------------------------------
 .byte   N44 ,Cn4 ,v060
 .byte   W48
 .byte   N23 ,Gs3 ,v068
 .byte   W24
 .byte   Ds4 ,v060
 .byte   W24
@  #01 @018   ----------------------------------------
 .byte   N32 ,Cn4
 .byte   W36
 .byte   N44 ,As3 ,v052
 .byte   W28
 .byte   VOL , 52*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOICE , 3
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 53*song09_mvl/mxv
 .byte   N05 ,Ds4 ,v056
 .byte   N05 ,Gn4 ,v068
 .byte   W06
 .byte   Fn4 ,v056
 .byte   N05 ,Gs4 ,v068
 .byte   W06
@  #01 @019   ----------------------------------------
 .byte   N36 ,Ds4 ,v060
 .byte   N36 ,Gn4 ,v072
 .byte   W36
 .byte   N05 ,Cn4 ,v056
 .byte   N05 ,Ds4 ,v068
 .byte   W06
 .byte   Dn4 ,v056
 .byte   N05 ,Fn4 ,v068
 .byte   W06
 .byte   N42 ,Cn4 ,v060
 .byte   N42 ,Ds4 ,v072
 .byte   W42
 .byte   N05 ,Ds4 ,v040
 .byte   W06
@  #01 @020   ----------------------------------------
 .byte   VOICE , 1
 .byte   N23 ,Cs3 ,v064
 .byte   W24
 .byte   Gs3
 .byte   W24
 .byte   Gn3
 .byte   W24
 .byte   Ds3
 .byte   W24
@  #01 @021   ----------------------------------------
 .byte   N44 ,Cn4
 .byte   W48
 .byte   N23 ,Gs3
 .byte   W24
 .byte   N20 ,Ds4
 .byte   W24
@  #01 @022   ----------------------------------------
 .byte   N32
 .byte   W36
 .byte   N05
 .byte   W06
 .byte   Fn4
 .byte   W06
 .byte   N32 ,Ds4
 .byte   W36
 .byte   N11 ,Cs4
 .byte   W12
@  #01 @023   ----------------------------------------
 .byte   N44 ,Cn4
 .byte   W48
 .byte   N23 ,Gn3 ,v084
 .byte   W24
 .byte   N05 ,En3
 .byte   W06
 .byte   Gn3
 .byte   W06
 .byte   Cn4
 .byte   W06
 .byte   En4
 .byte   W06
@  #01 @024   ----------------------------------------
 .byte   N04 ,Fn2 ,v064
 .byte   N04 ,Cn3 ,v072
 .byte   N06 ,Fn4 ,v092
 .byte   W06
 .byte   N04 ,Cn3 ,v016
 .byte   N06 ,Fn4
 .byte   W06
 .byte   VOICE , 4
 .byte   N04 ,Fn2 ,v056
 .byte   N04 ,Cn3 ,v064
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v052
 .byte   N04 ,Cn3 ,v064
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v044
 .byte   N04 ,Cn3 ,v048
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v040
 .byte   N04 ,Cn3 ,v056
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v056
 .byte   N04 ,Cn3 ,v060
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v060
 .byte   N04 ,Cn3 ,v072
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v052
 .byte   N04 ,Cn3 ,v064
 .byte   W12
@  #01 @025   ----------------------------------------
 .byte   Gn2 ,v076
 .byte   N04 ,Ds3
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v056
 .byte   N04 ,Ds3 ,v072
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v052
 .byte   N04 ,Ds3 ,v068
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v052
 .byte   N04 ,Ds3 ,v080
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v052
 .byte   N04 ,Ds3 ,v076
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v056
 .byte   N04 ,Ds3 ,v076
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v048
 .byte   N04 ,Ds3 ,v068
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v044
 .byte   N04 ,Ds3
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
@  #01 @026   ----------------------------------------
 .byte   Fn2 ,v060
 .byte   N04 ,Cn3 ,v076
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v056
 .byte   N04 ,Cn3 ,v068
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v052
 .byte   N04 ,Cn3 ,v064
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v048
 .byte   N04 ,Cn3 ,v060
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v048
 .byte   N04 ,Cn3 ,v064
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v044
 .byte   N04 ,Cn3 ,v060
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v048
 .byte   N04 ,Cn3 ,v056
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Fn2 ,v052
 .byte   N04 ,Cn3 ,v056
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
@  #01 @027   ----------------------------------------
 .byte   Gn2 ,v072
 .byte   N04 ,Ds3 ,v080
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v044
 .byte   N04 ,Ds3 ,v068
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v044
 .byte   N04 ,Ds3 ,v052
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v052
 .byte   N04 ,Ds3 ,v076
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v056
 .byte   N04 ,Ds3 ,v076
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v052
 .byte   N04 ,Ds3 ,v076
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v056
 .byte   N04 ,Ds3 ,v076
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
 .byte   Gn2 ,v052
 .byte   N04 ,Ds3 ,v056
 .byte   W06
 .byte   Ds3 ,v016
 .byte   W06
@  #01 @028   ----------------------------------------
 .byte   Fn2 ,v068
 .byte   N04 ,As2 ,v084
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v048
 .byte   N04 ,As2 ,v076
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v040
 .byte   N04 ,As2 ,v036
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v048
 .byte   N04 ,As2 ,v076
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v052
 .byte   N04 ,As2 ,v076
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v048
 .byte   N04 ,As2 ,v072
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v052
 .byte   N04 ,As2 ,v068
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v052
 .byte   N04 ,As2 ,v084
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
@  #01 @029   ----------------------------------------
 .byte   Gs2 ,v064
 .byte   N04 ,Cn3 ,v072
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Gs2 ,v060
 .byte   N04 ,Cn3 ,v064
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Gs2 ,v052
 .byte   N04 ,Cn3 ,v056
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Gs2 ,v040
 .byte   N04 ,Cn3 ,v064
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Gs2 ,v040
 .byte   N04 ,Cn3 ,v060
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Gs2 ,v060
 .byte   N04 ,Cn3
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Gs2 ,v064
 .byte   N04 ,Cn3
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
 .byte   Gs2 ,v060
 .byte   N04 ,Cn3 ,v064
 .byte   W06
 .byte   Cn3 ,v016
 .byte   W06
@  #01 @030   ----------------------------------------
 .byte   Fn2 ,v068
 .byte   N04 ,As2 ,v084
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v056
 .byte   N04 ,As2 ,v084
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v056
 .byte   N04 ,As2 ,v068
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v060
 .byte   N04 ,As2 ,v076
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v056
 .byte   N04 ,As2 ,v080
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v056
 .byte   N04 ,As2 ,v076
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v056
 .byte   N04 ,As2 ,v076
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
 .byte   Fn2 ,v048
 .byte   N04 ,As2 ,v076
 .byte   W06
 .byte   As2 ,v016
 .byte   W06
@  #01 @031   ----------------------------------------
 .byte   Gs2 ,v076
 .byte   W06
 .byte   Gs2 ,v016
 .byte   W06
 .byte   Gs2 ,v076
 .byte   W06
 .byte   Gs2 ,v016
 .byte   W06
 .byte   Gs2 ,v080
 .byte   W06
 .byte   Gs2 ,v016
 .byte   W06
 .byte   Gs2 ,v080
 .byte   W06
 .byte   Gs2 ,v016
 .byte   W06
 .byte   Gs2 ,v084
 .byte   W06
 .byte   Gs2 ,v016
 .byte   W06
 .byte   Gs2 ,v076
 .byte   W06
 .byte   Gs2 ,v016
 .byte   W28
 .byte   W01
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W01
@  #01 @032   ----------------------------------------
 .byte   VOICE , 5
 .byte   PAN , c_v+0
 .byte   N18 ,Gs3 ,v104
 .byte   W18
 .byte   N06 ,Gn3
 .byte   W09
 .byte   Gn3 ,v024
 .byte   W09
 .byte   N36 ,Ds3 ,v100
 .byte   W36
 .byte   N06 ,Ds3 ,v024
 .byte   W12
 .byte   N03 ,Ds3 ,v100
 .byte   W06
 .byte   Fn3
 .byte   W06
@  #01 @033   ----------------------------------------
 .byte   N18 ,Fs3 ,v104
 .byte   W18
 .byte   N06 ,Fn3
 .byte   W09
 .byte   Fn3 ,v024
 .byte   W09
 .byte   N36 ,Cs3 ,v100
 .byte   W36
 .byte   N06 ,Cs3 ,v024
 .byte   W12
 .byte   N03 ,Cs3 ,v100
 .byte   W06
 .byte   Ds3
 .byte   W06
@  #01 @034   ----------------------------------------
 .byte   N18 ,En3 ,v104
 .byte   W18
 .byte   N06 ,Ds3
 .byte   W09
 .byte   Ds3 ,v024
 .byte   W09
 .byte   N36 ,Bn2 ,v100
 .byte   W36
 .byte   W03
 .byte   N06 ,Bn2 ,v024
 .byte   W09
 .byte   N03 ,Cs3 ,v100
 .byte   W06
 .byte   Ds3
 .byte   W06
@  #01 @035   ----------------------------------------
 .byte   N18 ,Fs3 ,v104
 .byte   W18
 .byte   N06 ,Fs3 ,v024
 .byte   W06
 .byte   N18 ,Fn3 ,v104
 .byte   W18
 .byte   N06 ,Fn3 ,v024
 .byte   W06
 .byte   N18 ,Ds3 ,v104
 .byte   W18
 .byte   N06 ,Ds3 ,v024
 .byte   W06
 .byte   N18 ,Cs3 ,v104
 .byte   W18
 .byte   N06 ,Cs3 ,v024
 .byte   W06
@  #01 @036   ----------------------------------------
 .byte   VOICE , 2
 .byte   VOL , 37*song09_mvl/mxv
 .byte   PAN , c_v+0
 .byte   W12
 .byte   N06 ,Fn3 ,v080
 .byte   N06 ,As3 ,v084
 .byte   W06
 .byte   Ds3 ,v080
 .byte   N06 ,Gs3 ,v084
 .byte   W06
 .byte   N60 ,Fn3
 .byte   N60 ,As3 ,v088
 .byte   W60
 .byte   N12 ,Fn3 ,v060
 .byte   W12
@  #01 @037   ----------------------------------------
 .byte   W12
 .byte   N06 ,Gs3 ,v080
 .byte   N06 ,Cn4 ,v084
 .byte   W06
 .byte   Gn3 ,v080
 .byte   N06 ,As3 ,v084
 .byte   W06
 .byte   N66 ,Gs3
 .byte   N60 ,Cn4 ,v088
 .byte   W66
 .byte   N06 ,Gs3 ,v040
 .byte   W06
@  #01 @038   ----------------------------------------
 .byte   W12
 .byte   As3 ,v080
 .byte   N06 ,Dn4 ,v084
 .byte   W06
 .byte   Gs3 ,v080
 .byte   N06 ,Cn4 ,v084
 .byte   W06
 .byte   N66 ,As3 ,v072
 .byte   N60 ,Dn4 ,v088
 .byte   W66
 .byte   N06 ,As3 ,v040
 .byte   W06
@  #01 @039   ----------------------------------------
 .byte   W12
 .byte   Cn4 ,v080
 .byte   N06 ,Ds4 ,v084
 .byte   W06
 .byte   As3 ,v080
 .byte   N06 ,Dn4 ,v084
 .byte   W06
 .byte   N66 ,Cn4 ,v072
 .byte   N60 ,Ds4 ,v088
 .byte   W66
 .byte   N06 ,Cn4 ,v040
 .byte   W06
@  #01 @040   ----------------------------------------
 .byte   W12
 .byte   Fn3 ,v080
 .byte   N06 ,As3 ,v084
 .byte   W06
 .byte   Ds3 ,v080
 .byte   N06 ,Gs3 ,v084
 .byte   W06
 .byte   N44 ,Fn3
 .byte   N36 ,As3 ,v088
 .byte   W48
 .byte   N17 ,As2
 .byte   N17 ,Fn3
 .byte   W18
 .byte   N06 ,Fn3 ,v040
 .byte   W06
@  #01 @041   ----------------------------------------
 .byte   W12
 .byte   As3 ,v080
 .byte   N06 ,Dn4 ,v084
 .byte   W06
 .byte   Gs3 ,v080
 .byte   N06 ,Cn4 ,v084
 .byte   W06
 .byte   N44 ,As3
 .byte   N36 ,Dn4 ,v088
 .byte   W48
 .byte   N17 ,Fn3
 .byte   N17 ,As3
 .byte   W18
 .byte   N06 ,As3 ,v040
 .byte   W06
@  #01 @042   ----------------------------------------
 .byte   W12
 .byte   Cn4 ,v080
 .byte   N06 ,Ds4 ,v084
 .byte   W06
 .byte   As3 ,v080
 .byte   N06 ,Dn4 ,v084
 .byte   W06
 .byte   N42 ,Cn4 ,v072
 .byte   N36 ,Ds4 ,v088
 .byte   W42
 .byte   N06 ,Cn4 ,v040
 .byte   W06
 .byte   N12 ,As3 ,v076
 .byte   N12 ,Dn4 ,v088
 .byte   W12
 .byte   Cn4 ,v076
 .byte   N12 ,Ds4 ,v088
 .byte   W12
@  #01 @043   ----------------------------------------
 .byte   N06 ,Ds4 ,v040
 .byte   W12
 .byte   Dn4 ,v080
 .byte   N06 ,Fn4 ,v084
 .byte   W06
 .byte   Cn4 ,v080
 .byte   N06 ,Ds4 ,v084
 .byte   W06
 .byte   N66 ,Dn4 ,v072
 .byte   N60 ,Fn4 ,v088
 .byte   W66
 .byte   N06 ,Dn4 ,v040
 .byte   W06
@  #01 @044   ----------------------------------------
 .byte   W96
@  #01 @045   ----------------------------------------
 .byte   W96
@  #01 @046   ----------------------------------------
 .byte   W96
@  #01 @047   ----------------------------------------
 .byte   W96
@  #01 @048   ----------------------------------------
 .byte   VOICE , 2
 .byte   VOL , 47*song09_mvl/mxv
 .byte   PAN , c_v+0
 .byte   W24
 .byte   N18 ,Gn2 ,v104
 .byte   W18
 .byte   N06 ,Gn2 ,v056
 .byte   W06
 .byte   N18 ,An2 ,v104
 .byte   W18
 .byte   N06 ,An2 ,v056
 .byte   W06
 .byte   N18 ,As2 ,v104
 .byte   W18
 .byte   N06 ,As2 ,v056
 .byte   W06
@  #01 @049   ----------------------------------------
 .byte   N18 ,Cn3 ,v104
 .byte   W18
 .byte   N06 ,Cn3 ,v056
 .byte   W06
 .byte   N18 ,As2 ,v104
 .byte   W18
 .byte   N06 ,As2 ,v056
 .byte   W06
 .byte   N18 ,Dn3 ,v104
 .byte   W18
 .byte   N06 ,Dn3 ,v056
 .byte   W06
 .byte   N09 ,Cn3 ,v096
 .byte   W12
 .byte   As2
 .byte   W12
@  #01 @050   ----------------------------------------
 .byte   N48 ,An2
 .byte   W48
 .byte   Cn3
 .byte   W48
@  #01 @051   ----------------------------------------
 .byte   N42 ,Dn3
 .byte   W48
 .byte   VOICE , 1
 .byte   W12
 .byte   N05 ,An3 ,v076
 .byte   N05 ,Cn4
 .byte   W12
 .byte   Gn3
 .byte   N05 ,As3
 .byte   W12
 .byte   Fn3
 .byte   N05 ,An3
 .byte   W12
@  #01 @052   ----------------------------------------
 .byte   GOTO
  .word Label_88134C
 .byte   FINE

@**************** Track 2 (Midi-Chn.1) ****************@

song09_002:
@  #02 @000   ----------------------------------------
 .byte   KEYSH , song09_key+0
 .byte   W24
Label_8819C1:
 .byte   VOICE , 6
 .byte   VOL , 43*song09_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N06 ,Fn2 ,v127
 .byte   W12
 .byte   N16
 .byte   W24
 .byte   N05
 .byte   W12
 .byte   N05
 .byte   W12
 .byte   N16
 .byte   W24
@  #02 @001   ----------------------------------------
 .byte   N05
 .byte   W12
Label_8819D5:
 .byte   N24 ,Fn2 ,v127
 .byte   W36
 .byte   N04
 .byte   W12
 .byte   N04
 .byte   W12
 .byte   N10
 .byte   W24
@  #02 @002   ----------------------------------------
 .byte   N04
 .byte   W12
 .byte   PEND
Label_8819E2:
 .byte   N23 ,Fn2 ,v127
 .byte   W36
 .byte   N04
 .byte   W12
 .byte   N24
 .byte   W36
@  #02 @003   ----------------------------------------
 .byte   N05
 .byte   W12
 .byte   PEND
Label_8819ED:
 .byte   N24 ,Fn2 ,v127
 .byte   W36
 .byte   N04
 .byte   W12
 .byte   N04
 .byte   W12
 .byte   N13
 .byte   W24
@  #02 @004   ----------------------------------------
 .byte   N04
 .byte   W12
 .byte   PEND
Label_8819FA:
 .byte   N23 ,Ds2 ,v127
 .byte   W36
 .byte   N04
 .byte   W12
 .byte   N15 ,Ds3
 .byte   W24
 .byte   N16 ,Ds2
 .byte   W24
 .byte   PEND
@  #02 @005   ----------------------------------------
Label_881A07:
 .byte   N30 ,Dn2 ,v127
 .byte   W36
 .byte   N05
 .byte   W12
 .byte   N16 ,Dn3
 .byte   W24
 .byte   N13 ,Dn2
 .byte   W24
 .byte   PEND
@  #02 @006   ----------------------------------------
Label_881A14:
 .byte   N28 ,Cs2 ,v127
 .byte   W36
 .byte   N04
 .byte   W12
 .byte   N05
 .byte   W12
 .byte   N19 ,Gs1
 .byte   W24
 .byte   N05 ,Cs2
 .byte   W12
 .byte   PEND
@  #02 @007   ----------------------------------------
Label_881A23:
 .byte   N19 ,Ds2 ,v127
 .byte   W36
 .byte   N04
 .byte   W12
 .byte   N20 ,Ds3
 .byte   W24
 .byte   N05 ,Ds2
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   PEND
@  #02 @008   ----------------------------------------
 .byte   Fn2
 .byte   W12
 .byte   N16
 .byte   W24
 .byte   N05
 .byte   W12
 .byte   N05
 .byte   W12
 .byte   N16
 .byte   W24
 .byte   N05
 .byte   W12
@  #02 @009   ----------------------------------------
 .byte   PATT
  .word Label_8819D5
@  #02 @010   ----------------------------------------
 .byte   PATT
  .word Label_8819E2
@  #02 @011   ----------------------------------------
 .byte   PATT
  .word Label_8819ED
@  #02 @012   ----------------------------------------
 .byte   PATT
  .word Label_8819FA
@  #02 @013   ----------------------------------------
 .byte   PATT
  .word Label_881A07
@  #02 @014   ----------------------------------------
 .byte   PATT
  .word Label_881A14
@  #02 @015   ----------------------------------------
 .byte   PATT
  .word Label_881A23
@  #02 @016   ----------------------------------------
Label_881A61:
 .byte   N06 ,Cs2 ,v120
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
@  #02 @017   ----------------------------------------
 .byte   PATT
  .word Label_881A61
@  #02 @018   ----------------------------------------
Label_881A75:
 .byte   N06 ,Cn2 ,v120
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
@  #02 @019   ----------------------------------------
 .byte   PATT
  .word Label_881A75
@  #02 @020   ----------------------------------------
 .byte   PATT
  .word Label_881A61
@  #02 @021   ----------------------------------------
 .byte   N06 ,As1 ,v120
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
@  #02 @022   ----------------------------------------
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
@  #02 @023   ----------------------------------------
 .byte   PATT
  .word Label_881A75
@  #02 @024   ----------------------------------------
 .byte   VOICE , 7
 .byte   VOL , 53*song09_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N18 ,Fn2 ,v076
 .byte   W84
 .byte   N09
 .byte   W12
@  #02 @025   ----------------------------------------
Label_881AB9:
 .byte   N18 ,Cn2 ,v076
 .byte   W84
 .byte   N12
 .byte   W12
 .byte   PEND
@  #02 @026   ----------------------------------------
 .byte   N18 ,Fn2
 .byte   W84
 .byte   N09
 .byte   W12
@  #02 @027   ----------------------------------------
 .byte   PATT
  .word Label_881AB9
@  #02 @028   ----------------------------------------
 .byte   N18 ,As1 ,v076
 .byte   W84
 .byte   N12
 .byte   W12
@  #02 @029   ----------------------------------------
 .byte   N18 ,Fn2
 .byte   W84
 .byte   N12
 .byte   W12
@  #02 @030   ----------------------------------------
 .byte   VOICE , 6
 .byte   VOL , 53*song09_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N18 ,As1
 .byte   W84
 .byte   N12
 .byte   W12
@  #02 @031   ----------------------------------------
 .byte   N18 ,Fn2 ,v088
 .byte   W84
 .byte   N12 ,Fn2 ,v096
 .byte   W12
@  #02 @032   ----------------------------------------
 .byte   Cs2 ,v112
 .byte   W18
 .byte   N06 ,Ds2
 .byte   W18
 .byte   N36 ,Gs2
 .byte   W60
@  #02 @033   ----------------------------------------
 .byte   N12 ,Bn1
 .byte   W18
 .byte   N06 ,Cs2
 .byte   W18
 .byte   N36 ,Fs2
 .byte   W60
@  #02 @034   ----------------------------------------
 .byte   N12 ,An1
 .byte   W18
 .byte   N06 ,Bn1
 .byte   W18
 .byte   N36 ,En2
 .byte   W60
@  #02 @035   ----------------------------------------
 .byte   N18 ,Ds2
 .byte   W24
 .byte   Fn2
 .byte   W24
 .byte   Fs2
 .byte   W24
 .byte   Fn2
 .byte   W24
@  #02 @036   ----------------------------------------
 .byte   N92 ,As1 ,v096
 .byte   W96
@  #02 @037   ----------------------------------------
 .byte   Gs1
 .byte   W96
@  #02 @038   ----------------------------------------
 .byte   Gn1
 .byte   W96
@  #02 @039   ----------------------------------------
 .byte   Gs1
 .byte   W96
@  #02 @040   ----------------------------------------
 .byte   Ds2
 .byte   W96
@  #02 @041   ----------------------------------------
 .byte   Dn2
 .byte   W96
@  #02 @042   ----------------------------------------
 .byte   Cn2
 .byte   W96
@  #02 @043   ----------------------------------------
 .byte   As1
 .byte   W96
@  #02 @044   ----------------------------------------
Label_881B1E:
 .byte   N09 ,Ds2 ,v120
 .byte   W36
 .byte   As2 ,v108
 .byte   W12
 .byte   Ds2 ,v112
 .byte   W36
 .byte   N09
 .byte   W12
 .byte   PEND
@  #02 @045   ----------------------------------------
 .byte   Dn2 ,v120
 .byte   W36
 .byte   An2 ,v108
 .byte   W12
 .byte   N21 ,Gn2 ,v092
 .byte   W36
 .byte   N09 ,Dn2 ,v120
 .byte   W12
@  #02 @046   ----------------------------------------
 .byte   PATT
  .word Label_881B1E
@  #02 @047   ----------------------------------------
 .byte   N09 ,Dn2 ,v112
 .byte   W36
 .byte   N09
 .byte   W12
 .byte   N21 ,Gn2 ,v092
 .byte   W36
 .byte   N09
 .byte   W12
@  #02 @048   ----------------------------------------
 .byte   N90 ,Ds2 ,v100
 .byte   W96
@  #02 @049   ----------------------------------------
 .byte   N90
 .byte   W96
@  #02 @050   ----------------------------------------
 .byte   N72 ,Dn2
 .byte   W84
 .byte   N06 ,Dn2 ,v108
 .byte   W12
@  #02 @051   ----------------------------------------
 .byte   N30 ,Dn2 ,v104
 .byte   W36
 .byte   N06 ,Dn2 ,v108
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N18 ,Dn2 ,v104
 .byte   W24
 .byte   N06 ,Ds2 ,v116
 .byte   W12
@  #02 @052   ----------------------------------------
 .byte   GOTO
  .word Label_8819C1
 .byte   FINE

@**************** Track 3 (Midi-Chn.2) ****************@

song09_003:
@  #03 @000   ----------------------------------------
 .byte   KEYSH , song09_key+0
 .byte   W24
Label_881B72:
 .byte   VOICE , 8
 .byte   VOL , 50*song09_mvl/mxv
 .byte   PAN , c_v-24
 .byte   W96
@  #03 @001   ----------------------------------------
 .byte   N12 ,Fn2 ,v108
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   N06 ,Fn2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   As3
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   Cn4
 .byte   W06
 .byte   Fn4
 .byte   W06
 .byte   As4 ,v084
 .byte   W06
@  #03 @002   ----------------------------------------
 .byte   W96
@  #03 @003   ----------------------------------------
 .byte   N12 ,Fn2 ,v108
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   An3
 .byte   W12
 .byte   N06 ,An4
 .byte   W06
 .byte   As4
 .byte   W06
 .byte   An4
 .byte   W06
 .byte   Fn4
 .byte   W06
 .byte   Cn4
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   Cn3
 .byte   W06
@  #03 @004   ----------------------------------------
 .byte   N12 ,Ds2
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Ds3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   Ds3
 .byte   W12
 .byte   As2
 .byte   W12
@  #03 @005   ----------------------------------------
 .byte   Dn2
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   As2
 .byte   W12
@  #03 @006   ----------------------------------------
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
 .byte   Fn3
 .byte   W12
 .byte   Cs3
 .byte   W12
 .byte   Gs2
 .byte   W12
@  #03 @007   ----------------------------------------
 .byte   Ds2
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Ds3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   N06 ,As4
 .byte   W06
 .byte   Ds5
 .byte   W06
 .byte   As4
 .byte   W06
 .byte   Gn4
 .byte   W06
 .byte   Ds4
 .byte   W06
 .byte   As3
 .byte   W06
 .byte   Gn3
 .byte   W06
 .byte   Ds3
 .byte   W06
@  #03 @008   ----------------------------------------
 .byte   W96
@  #03 @009   ----------------------------------------
 .byte   N12 ,Ds2
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   N09 ,Cn3
 .byte   W12
 .byte   N12 ,Fn3
 .byte   W12
 .byte   N06 ,Fn2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   Cn4
 .byte   W06
 .byte   Fn4
 .byte   W06
@  #03 @010   ----------------------------------------
 .byte   W96
@  #03 @011   ----------------------------------------
 .byte   N12 ,Ds2
 .byte   W12
 .byte   An2
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   N06 ,An4
 .byte   W06
 .byte   As4
 .byte   W06
 .byte   An4
 .byte   W06
 .byte   Fn4
 .byte   W06
 .byte   Cn4
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   Cn3
 .byte   W06
@  #03 @012   ----------------------------------------
 .byte   W96
@  #03 @013   ----------------------------------------
 .byte   W96
@  #03 @014   ----------------------------------------
 .byte   W96
@  #03 @015   ----------------------------------------
 .byte   W96
@  #03 @016   ----------------------------------------
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W48
 .byte   N11 ,Gs4 ,v096
 .byte   W12
 .byte   Fn4
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   Gs3
 .byte   W12
@  #03 @017   ----------------------------------------
Label_881C44:
 .byte   N11 ,Cs3 ,v096
 .byte   W12
 .byte   Gs3
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   Fn4
 .byte   W12
 .byte   Gs4
 .byte   W12
 .byte   Fn4
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   Gs3
 .byte   W12
 .byte   PEND
@  #03 @018   ----------------------------------------
Label_881C57:
 .byte   N11 ,Cn3 ,v096
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   Ds4
 .byte   W12
 .byte   Gn4
 .byte   W12
 .byte   Ds4
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   PEND
@  #03 @019   ----------------------------------------
 .byte   PATT
  .word Label_881C57
@  #03 @020   ----------------------------------------
 .byte   PATT
  .word Label_881C44
@  #03 @021   ----------------------------------------
 .byte   N11 ,As2 ,v096
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Cs4
 .byte   W12
 .byte   Fn4
 .byte   W12
 .byte   Cs4
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Fn3
 .byte   W12
@  #03 @022   ----------------------------------------
 .byte   Ds3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Ds4
 .byte   W12
 .byte   Gn4
 .byte   W12
 .byte   As4
 .byte   W12
 .byte   Gn4
 .byte   W12
 .byte   Ds4
 .byte   W12
 .byte   As3
 .byte   W12
@  #03 @023   ----------------------------------------
 .byte   Cn3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   En4
 .byte   W12
 .byte   Gn4
 .byte   W12
 .byte   En4
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   Gn3
 .byte   W12
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
 .byte   W92
 .byte   W03
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W01
@  #03 @030   ----------------------------------------
 .byte   VOICE , 9
 .byte   VOL , 47*song09_mvl/mxv
 .byte   N36 ,Dn3 ,v088
 .byte   W36
 .byte   N12 ,Ds3
 .byte   W12
 .byte   N36 ,Fn3
 .byte   W36
 .byte   N12 ,Gn3
 .byte   W12
@  #03 @031   ----------------------------------------
 .byte   N30 ,Gs3 ,v092
 .byte   W30
 .byte   N06 ,Gn3 ,v088
 .byte   W06
 .byte   Gs3
 .byte   W06
 .byte   As3 ,v096
 .byte   W06
 .byte   N44 ,Cn4
 .byte   W48
@  #03 @032   ----------------------------------------
 .byte   N17 ,Fn4 ,v084
 .byte   W18
 .byte   N06 ,Ds4
 .byte   W18
 .byte   N36 ,As3 ,v064
 .byte   W60
@  #03 @033   ----------------------------------------
 .byte   N17 ,Ds4 ,v076
 .byte   W18
 .byte   N06 ,Cs4
 .byte   W18
 .byte   N36 ,Gs3 ,v064
 .byte   W48
 .byte   N05 ,Cs3 ,v080
 .byte   W06
 .byte   Ds3
 .byte   W06
@  #03 @034   ----------------------------------------
 .byte   N17 ,Cs4 ,v076
 .byte   W18
 .byte   N06 ,Bn3
 .byte   W18
 .byte   N36 ,Fs3 ,v048
 .byte   W48
 .byte   N05 ,Fs3 ,v060
 .byte   W06
 .byte   Gs3 ,v076
 .byte   W06
@  #03 @035   ----------------------------------------
 .byte   N21 ,As3 ,v060
 .byte   W24
 .byte   Gs3
 .byte   W24
 .byte   Fs3
 .byte   W24
 .byte   Fn3
 .byte   W24
@  #03 @036   ----------------------------------------
 .byte   VOICE , 9
 .byte   VOL , 27*song09_mvl/mxv
 .byte   PAN , c_v+21
 .byte   N44 ,Fn3 ,v124
 .byte   W01
 .byte   VOL , 27*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W06
 .byte   N23 ,Ds3
 .byte   W24
 .byte   Dn3
 .byte   W24
@  #03 @037   ----------------------------------------
 .byte   N64 ,Ds3
 .byte   W32
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   N11 ,Dn3
 .byte   W01
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   N11 ,Ds3
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
@  #03 @038   ----------------------------------------
 .byte   VOL , 47*song09_mvl/mxv
 .byte   N32 ,Fn3
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W32
 .byte   TIE ,As2
 .byte   W60
@  #03 @039   ----------------------------------------
 .byte   W10
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   EOT
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 34*song09_mvl/mxv
 .byte   N11 ,Gs3
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   N11 ,Gn3
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   N11 ,Fn3
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   N11 ,Ds3
 .byte   W12
@  #03 @040   ----------------------------------------
 .byte   N44 ,Fn3
 .byte   W48
 .byte   N23 ,Ds3
 .byte   W24
 .byte   Dn3
 .byte   W24
@  #03 @041   ----------------------------------------
 .byte   N64
 .byte   W32
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   N11 ,Cn3
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   N11 ,Dn3
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W07
@  #03 @042   ----------------------------------------
 .byte   N32 ,Ds3
 .byte   W36
 .byte   N76 ,As2
 .byte   W44
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
@  #03 @043   ----------------------------------------
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   N23 ,Dn3
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   N23 ,Ds3
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W20
 .byte   N24 ,Fn3
 .byte   W24
@  #03 @044   ----------------------------------------
 .byte   N09 ,Fn3 ,v040
 .byte   W12
 .byte   N11 ,Dn3 ,v084
 .byte   W12
 .byte   N06 ,Cn3
 .byte   W36
 .byte   N11 ,Dn3
 .byte   W12
 .byte   N06 ,Cn3
 .byte   W24
@  #03 @045   ----------------------------------------
 .byte   W12
 .byte   N11
 .byte   W12
 .byte   N06 ,An2
 .byte   W36
 .byte   N11 ,Gn2
 .byte   W12
 .byte   N06 ,Gn3 ,v052
 .byte   W24
@  #03 @046   ----------------------------------------
 .byte   W12
 .byte   N11 ,Dn3 ,v084
 .byte   W12
 .byte   N06 ,Cn3
 .byte   W36
 .byte   N11 ,Dn3
 .byte   W12
 .byte   N06 ,Cn3
 .byte   W24
@  #03 @047   ----------------------------------------
 .byte   W12
 .byte   N11
 .byte   W12
 .byte   N06 ,Dn3
 .byte   W36
 .byte   N11 ,Gn2
 .byte   W12
 .byte   N06 ,Gn3 ,v052
 .byte   W24
@  #03 @048   ----------------------------------------
 .byte   VOICE , 10
 .byte   W24
 .byte   N23 ,Gn3 ,v084
 .byte   W24
 .byte   An3
 .byte   W24
 .byte   As3
 .byte   W24
@  #03 @049   ----------------------------------------
 .byte   Cn4
 .byte   W24
 .byte   As3
 .byte   W24
 .byte   N17 ,Dn4
 .byte   W18
 .byte   N05 ,Dn4 ,v032
 .byte   W06
 .byte   Cn4 ,v084
 .byte   W06
 .byte   Cn4 ,v032
 .byte   W06
 .byte   As3 ,v084
 .byte   W06
 .byte   As3 ,v032
 .byte   W06
@  #03 @050   ----------------------------------------
 .byte   N68 ,An3 ,v072
 .byte   W72
 .byte   N11 ,An3 ,v080
 .byte   W12
 .byte   As3 ,v076
 .byte   W12
@  #03 @051   ----------------------------------------
 .byte   N44 ,Cn4 ,v064
 .byte   W28
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W20
 .byte   VOICE , 8
 .byte   VOL , 47*song09_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N06 ,Dn2 ,v108
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   Gn3
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   An3
 .byte   W06
 .byte   Dn4
 .byte   W06
 .byte   An4 ,v084
 .byte   W06
@  #03 @052   ----------------------------------------
 .byte   GOTO
  .word Label_881B72
 .byte   FINE

@**************** Track 4 (Midi-Chn.3) ****************@

song09_004:
@  #04 @000   ----------------------------------------
 .byte   KEYSH , song09_key+0
 .byte   W24
Label_882043:
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
 .byte   W96
@  #04 @008   ----------------------------------------
 .byte   VOICE , 11
 .byte   VOL , 37*song09_mvl/mxv
 .byte   PAN , c_v+17
 .byte   N48 ,As2 ,v096
 .byte   W60
 .byte   N12 ,Fn2
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Cn3
 .byte   W12
@  #04 @009   ----------------------------------------
 .byte   N24 ,An2
 .byte   W24
 .byte   N12 ,Fn2
 .byte   W12
 .byte   N54 ,Cn2
 .byte   W60
@  #04 @010   ----------------------------------------
 .byte   N42 ,As2
 .byte   W48
 .byte   N24 ,Fn2
 .byte   W24
 .byte   N12 ,As2
 .byte   W12
 .byte   Cn3
 .byte   W12
@  #04 @011   ----------------------------------------
 .byte   N24 ,An2
 .byte   W24
 .byte   N12 ,As2
 .byte   W12
 .byte   N30 ,Cn3
 .byte   W36
 .byte   N24 ,Fn3 ,v072
 .byte   W24
@  #04 @012   ----------------------------------------
 .byte   N48 ,Ds3 ,v096
 .byte   W48
 .byte   As2
 .byte   W48
@  #04 @013   ----------------------------------------
 .byte   N42 ,Dn3
 .byte   W48
 .byte   N21 ,As2
 .byte   W24
 .byte   N06 ,Gn2
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
@  #04 @014   ----------------------------------------
 .byte   N56 ,Cs3
 .byte   W60
 .byte   N12 ,Gs2
 .byte   W12
 .byte   N21 ,Cs3
 .byte   W24
@  #04 @015   ----------------------------------------
 .byte   N48 ,Ds3
 .byte   W48
 .byte   N18 ,As2
 .byte   W23
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOICE , 10
 .byte   VOL , 53*song09_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N05
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Ds3
 .byte   W06
@  #04 @016   ----------------------------------------
 .byte   N23 ,Fn3
 .byte   W24
 .byte   Cn4 ,v092
 .byte   W24
 .byte   As3 ,v096
 .byte   W24
 .byte   Gs3
 .byte   W24
@  #04 @017   ----------------------------------------
 .byte   Ds4 ,v076
 .byte   W24
 .byte   N20 ,Cn4 ,v084
 .byte   W24
 .byte   N23 ,Cn4 ,v080
 .byte   W24
 .byte   As3 ,v076
 .byte   W24
@  #04 @018   ----------------------------------------
 .byte   VOL , 36*song09_mvl/mxv
 .byte   TIE ,Gn3 ,v092
 .byte   W10
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W08
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W07
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W05
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W06
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W05
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W05
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W06
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W05
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W01
@  #04 @019   ----------------------------------------
 .byte   W01
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W03
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 52*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 52*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 21*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 19*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 16*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 15*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 13*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 11*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 10*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 8*song09_mvl/mxv
 .byte   W01
 .byte   EOT
 .byte   VOL , 6*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 5*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 3*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 0*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 0*song09_mvl/mxv
 .byte   W10
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W04
@  #04 @020   ----------------------------------------
 .byte   VOICE , 11
 .byte   N23 ,Fn2 ,v116
 .byte   W24
 .byte   Cn3 ,v104
 .byte   W24
 .byte   As2 ,v116
 .byte   W24
 .byte   Gs2 ,v108
 .byte   W24
@  #04 @021   ----------------------------------------
 .byte   N44 ,Ds3 ,v104
 .byte   W48
 .byte   N23 ,Cn3
 .byte   W24
 .byte   Gs3 ,v084
 .byte   W24
@  #04 @022   ----------------------------------------
 .byte   N88 ,Gn3 ,v092
 .byte   W90
 .byte   N06 ,Gn3 ,v040
 .byte   W06
@  #04 @023   ----------------------------------------
 .byte   N90 ,En3 ,v104
 .byte   W90
 .byte   N06 ,En3 ,v040
 .byte   W06
@  #04 @024   ----------------------------------------
 .byte   W48
 .byte   VOICE , 1
 .byte   MOD , 0
 .byte   VOL , 53*song09_mvl/mxv
 .byte   PAN , c_v+0
 .byte   W12
 .byte   N12 ,Fn4 ,v052
 .byte   W12
 .byte   Ds4 ,v064
 .byte   W12
 .byte   Dn4 ,v072
 .byte   W12
@  #04 @025   ----------------------------------------
 .byte   N30 ,Cn4
 .byte   W36
 .byte   N06 ,Cn4 ,v076
 .byte   W06
 .byte   Dn4 ,v072
 .byte   W03
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song09_mvl/mxv
 .byte   N24 ,Ds4 ,v060
 .byte   W01
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W11
 .byte   N12 ,Dn4 ,v064
 .byte   W12
 .byte   N06 ,Cn4 ,v060
 .byte   W12
@  #04 @026   ----------------------------------------
 .byte   W60
 .byte   N12 ,Fn4 ,v052
 .byte   W12
 .byte   Ds4 ,v064
 .byte   W12
 .byte   Dn4 ,v068
 .byte   W12
@  #04 @027   ----------------------------------------
 .byte   N30 ,Cn4 ,v064
 .byte   W36
 .byte   N06 ,Cn4 ,v072
 .byte   W06
 .byte   Dn4
 .byte   W02
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   N24 ,Ds4 ,v064
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W07
 .byte   N12 ,Fn4
 .byte   W12
 .byte   Ds4 ,v052
 .byte   W12
@  #04 @028   ----------------------------------------
 .byte   Dn4 ,v044
 .byte   W60
 .byte   As4 ,v028
 .byte   W12
 .byte   Gs4 ,v048
 .byte   W12
 .byte   Gn4 ,v064
 .byte   W12
@  #04 @029   ----------------------------------------
 .byte   N30 ,Fn4
 .byte   W36
 .byte   N06
 .byte   W06
 .byte   Gn4
 .byte   W03
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   N24 ,Gs4
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W06
 .byte   N12 ,Gn4 ,v060
 .byte   W12
 .byte   Fn4
 .byte   W12
@  #04 @030   ----------------------------------------
 .byte   VOICE , 10
 .byte   VOL , 53*song09_mvl/mxv
 .byte   PAN , c_v+0
 .byte   W60
 .byte   N12 ,As4
 .byte   W12
 .byte   Gs4 ,v072
 .byte   W12
 .byte   Gn4 ,v064
 .byte   W12
@  #04 @031   ----------------------------------------
 .byte   N30 ,Fn4 ,v068
 .byte   W30
 .byte   N06 ,Fn4 ,v032
 .byte   W06
 .byte   Fn4 ,v064
 .byte   W06
 .byte   Gn4
 .byte   W06
 .byte   N21 ,Gs4
 .byte   W24
 .byte   N06 ,As3 ,v052
 .byte   N06 ,Cs4 ,v068
 .byte   W06
 .byte   Cn4 ,v056
 .byte   N06 ,Ds4 ,v076
 .byte   W06
 .byte   Cs4 ,v060
 .byte   N06 ,Fn4 ,v080
 .byte   W06
 .byte   Ds4 ,v064
 .byte   N06 ,Gn4 ,v084
 .byte   W06
@  #04 @032   ----------------------------------------
 .byte   N18 ,Gs4 ,v092
 .byte   W18
 .byte   N06 ,Gn4
 .byte   W06
 .byte   Gn4 ,v032
 .byte   W12
 .byte   N36 ,Ds4 ,v088
 .byte   W36
 .byte   N06 ,Ds4 ,v032
 .byte   W12
 .byte   N03 ,Ds4 ,v088
 .byte   W06
 .byte   Fn4
 .byte   W06
@  #04 @033   ----------------------------------------
 .byte   N18 ,Fs4 ,v092
 .byte   W18
 .byte   N06 ,Fn4
 .byte   W06
 .byte   Fn4 ,v032
 .byte   W12
 .byte   N36 ,Cs4 ,v088
 .byte   W36
 .byte   N06 ,Cs4 ,v032
 .byte   W12
 .byte   N03 ,Cs4 ,v088
 .byte   W06
 .byte   Ds4
 .byte   W06
@  #04 @034   ----------------------------------------
 .byte   N18 ,En4 ,v092
 .byte   W18
 .byte   N06 ,Ds4
 .byte   W06
 .byte   Ds4 ,v032
 .byte   W12
 .byte   N36 ,Bn3 ,v088
 .byte   W36
 .byte   W03
 .byte   N06 ,Bn3 ,v032
 .byte   W09
 .byte   N03 ,Cs4 ,v088
 .byte   W06
 .byte   Ds4
 .byte   W06
@  #04 @035   ----------------------------------------
 .byte   N18 ,Fs4 ,v092
 .byte   W18
 .byte   N06 ,Fs4 ,v032
 .byte   W06
 .byte   N18 ,Fn4 ,v092
 .byte   W18
 .byte   N06 ,Fn4 ,v032
 .byte   W06
 .byte   N18 ,Ds4 ,v092
 .byte   W18
 .byte   N06 ,Ds4 ,v032
 .byte   W06
 .byte   N18 ,Cs4 ,v092
 .byte   W18
 .byte   N06 ,Cs4 ,v032
 .byte   W06
@  #04 @036   ----------------------------------------
 .byte   W96
@  #04 @037   ----------------------------------------
 .byte   W96
@  #04 @038   ----------------------------------------
 .byte   W96
@  #04 @039   ----------------------------------------
 .byte   W96
@  #04 @040   ----------------------------------------
 .byte   W96
@  #04 @041   ----------------------------------------
 .byte   W96
@  #04 @042   ----------------------------------------
 .byte   W96
@  #04 @043   ----------------------------------------
 .byte   W96
@  #04 @044   ----------------------------------------
 .byte   VOICE , 10
 .byte   VOL , 53*song09_mvl/mxv
 .byte   PAN , c_v+0
 .byte   W12
 .byte   N12 ,Gn3 ,v104
 .byte   W12
 .byte   N06 ,Fn3
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W30
 .byte   N12 ,As3 ,v104
 .byte   W12
 .byte   N06 ,Gn3
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W18
@  #04 @045   ----------------------------------------
 .byte   W12
 .byte   N12 ,An3 ,v104
 .byte   W12
 .byte   N06 ,Dn3
 .byte   W06
 .byte   Dn3 ,v032
 .byte   W30
 .byte   N12 ,Gn3 ,v104
 .byte   W36
@  #04 @046   ----------------------------------------
 .byte   W12
 .byte   N12
 .byte   W12
 .byte   N06 ,Fn3
 .byte   W06
 .byte   Fn3 ,v032
 .byte   W30
 .byte   N12 ,As3 ,v104
 .byte   W12
 .byte   N06 ,Gn3
 .byte   W06
 .byte   Gn3 ,v032
 .byte   W18
@  #04 @047   ----------------------------------------
 .byte   W12
 .byte   N12 ,An3 ,v104
 .byte   W12
 .byte   N06 ,As3
 .byte   W06
 .byte   As3 ,v032
 .byte   W30
 .byte   N12 ,Gn3 ,v104
 .byte   W36
@  #04 @048   ----------------------------------------
 .byte   W96
@  #04 @049   ----------------------------------------
 .byte   W96
@  #04 @050   ----------------------------------------
 .byte   W96
@  #04 @051   ----------------------------------------
 .byte   W96
@  #04 @052   ----------------------------------------
 .byte   GOTO
  .word Label_882043
 .byte   FINE

@**************** Track 5 (Midi-Chn.4) ****************@

song09_005:
@  #05 @000   ----------------------------------------
 .byte   KEYSH , song09_key+0
 .byte   W24
Label_88239D:
 .byte   VOICE , 12
 .byte   VOL , 53*song09_mvl/mxv
 .byte   PAN , c_v+20
 .byte   N52 ,Fn3 ,v096
 .byte   W60
 .byte   N05 ,Cn3
 .byte   W12
@  #05 @001   ----------------------------------------
 .byte   Fn3
 .byte   W12
 .byte   N05
 .byte   W12
 .byte   N23
 .byte   W24
 .byte   N05 ,Cn3
 .byte   W12
 .byte   N44 ,An2
 .byte   W60
@  #05 @002   ----------------------------------------
Label_8823B6:
 .byte   N40 ,Fn3 ,v096
 .byte   W48
 .byte   N17 ,Cn3
 .byte   W24
 .byte   N05 ,Fn3
 .byte   W12
 .byte   N05
 .byte   W12
 .byte   PEND
@  #05 @003   ----------------------------------------
 .byte   N23
 .byte   W24
 .byte   N05 ,Gn3
 .byte   W12
 .byte   N28 ,An3
 .byte   W36
 .byte   N23 ,Cn4 ,v080
 .byte   W24
@  #05 @004   ----------------------------------------
 .byte   N44 ,As3
 .byte   W48
 .byte   N28 ,Gn3
 .byte   W36
 .byte   N05 ,An3
 .byte   W12
@  #05 @005   ----------------------------------------
 .byte   N40 ,As3
 .byte   W48
 .byte   N17 ,Fn3
 .byte   W24
 .byte   Dn3
 .byte   W24
@  #05 @006   ----------------------------------------
 .byte   N56 ,Gs3
 .byte   W60
 .byte   N05 ,Fn3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   Gs3
 .byte   W12
@  #05 @007   ----------------------------------------
 .byte   N11 ,As3
 .byte   W24
 .byte   N17 ,Gn3 ,v100
 .byte   N17 ,As3
 .byte   W24
 .byte   Ds3 ,v088
 .byte   N17 ,Gn3
 .byte   W24
 .byte   As2 ,v096
 .byte   N17 ,Ds3
 .byte   W24
@  #05 @008   ----------------------------------------
 .byte   N52 ,Fn3
 .byte   W60
 .byte   N05 ,Cn3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   N05
 .byte   W12
@  #05 @009   ----------------------------------------
 .byte   N20
 .byte   W24
 .byte   N05 ,Cn3
 .byte   W12
 .byte   N44 ,An2
 .byte   W60
@  #05 @010   ----------------------------------------
 .byte   PATT
  .word Label_8823B6
@  #05 @011   ----------------------------------------
 .byte   N20 ,Fn3 ,v096
 .byte   W24
 .byte   N05 ,Cn3
 .byte   W12
 .byte   N28 ,An2
 .byte   W36
 .byte   N23 ,Cn4 ,v080
 .byte   W24
@  #05 @012   ----------------------------------------
 .byte   N40 ,As3 ,v096
 .byte   W48
 .byte   N32 ,Fs3
 .byte   W36
 .byte   N05 ,Gs3
 .byte   W12
@  #05 @013   ----------------------------------------
 .byte   N40 ,As3
 .byte   W48
 .byte   N11 ,Fn3
 .byte   W24
 .byte   N05 ,Dn3
 .byte   W06
 .byte   Ds3
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   Gn3
 .byte   W06
@  #05 @014   ----------------------------------------
 .byte   N52 ,Gs3
 .byte   W60
 .byte   N05 ,Fn3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   Gs3
 .byte   W12
@  #05 @015   ----------------------------------------
 .byte   N40 ,As3
 .byte   W48
 .byte   N20 ,Fn3
 .byte   N20 ,Gs3
 .byte   W24
 .byte   Ds3
 .byte   N20 ,Fs3
 .byte   W24
@  #05 @016   ----------------------------------------
 .byte   N92 ,Fn3
 .byte   W13
 .byte   VOL , 53*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 52*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 52*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 51*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 50*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 49*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 48*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 47*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 46*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 45*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 44*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 43*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 42*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 41*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 40*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 39*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 38*song09_mvl/mxv
 .byte   W02
 .byte   VOL , 37*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 36*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 35*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 34*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 33*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 32*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 31*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 30*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 29*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 28*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 27*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 26*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 25*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 24*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 23*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 22*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 21*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 20*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 19*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 18*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 17*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 16*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 15*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 14*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 13*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 12*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 11*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 10*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 8*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 7*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 6*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 4*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 3*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 2*song09_mvl/mxv
 .byte   W01
 .byte   VOL , 0*song09_mvl/mxv
 .byte   W06
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
 .byte   W92
 .byte   W03
 .byte   VOL , 0*song09_mvl/mxv
 .byte   W01
@  #05 @024   ----------------------------------------
 .byte   VOICE , 13
 .byte   VOL , 48*song09_mvl/mxv
 .byte   PAN , c_v+10
 .byte   W36
 .byte   N12 ,Dn3 ,v084
 .byte   W12
 .byte   N24 ,Cn3 ,v080
 .byte   W36
 .byte   N09 ,Bn2
 .byte   W12
@  #05 @025   ----------------------------------------
 .byte   N24 ,Cn3 ,v084
 .byte   W24
 .byte   N66 ,Gn2 ,v076
 .byte   W72
@  #05 @026   ----------------------------------------
 .byte   W36
 .byte   N12 ,Dn3 ,v084
 .byte   W12
 .byte   N24 ,Cn3 ,v080
 .byte   W36
 .byte   N09 ,Bn2
 .byte   W12
@  #05 @027   ----------------------------------------
 .byte   N24 ,Cn3 ,v084
 .byte   W24
 .byte   N42 ,Gn2 ,v076
 .byte   W48
 .byte   N09
 .byte   W12
 .byte   An2
 .byte   W12
@  #05 @028   ----------------------------------------
 .byte   N12 ,As2
 .byte   W36
 .byte   Fn3 ,v084
 .byte   W12
 .byte   N24 ,Ds3 ,v080
 .byte   W36
 .byte   N12 ,Dn3
 .byte   W12
@  #05 @029   ----------------------------------------
 .byte   N24 ,Ds3 ,v084
 .byte   W24
 .byte   N66 ,Gs2 ,v076
 .byte   W72
@  #05 @030   ----------------------------------------
 .byte   W36
 .byte   N12 ,Fn3 ,v084
 .byte   W12
 .byte   N24 ,Ds3 ,v080
 .byte   W36
 .byte   N12 ,Dn3
 .byte   W12
@  #05 @031   ----------------------------------------
 .byte   N24 ,Ds3 ,v092
 .byte   W24
 .byte   N66 ,Gs2 ,v084
 .byte   W72
@  #05 @032   ----------------------------------------
 .byte   VOICE , 14
 .byte   N06 ,Gs3 ,v104
 .byte   W18
 .byte   N06
 .byte   W18
 .byte   N36 ,Ds3
 .byte   W36
 .byte   N06 ,Ds3 ,v032
 .byte   W24
@  #05 @033   ----------------------------------------
 .byte   Gs3 ,v104
 .byte   W18
 .byte   N06
 .byte   W18
 .byte   N36 ,Cs3
 .byte   W36
 .byte   N06 ,Cs3 ,v032
 .byte   W24
@  #05 @034   ----------------------------------------
 .byte   Fs3 ,v104
 .byte   W18
 .byte   N06
 .byte   W18
 .byte   N36 ,Bn2
 .byte   W36
 .byte   N06 ,Bn2 ,v032
 .byte   W24
@  #05 @035   ----------------------------------------
 .byte   N21 ,Ds3 ,v104
 .byte   W24
 .byte   Fn3
 .byte   W24
 .byte   Fs3
 .byte   W24
 .byte   Fn3
 .byte   W24
@  #05 @036   ----------------------------------------
Label_88257D:
 .byte   N06 ,Fn3 ,v100
 .byte   W12
 .byte   Fn3 ,v028
 .byte   W12
 .byte   Fn3 ,v100
 .byte   W12
 .byte   Fn3 ,v028
 .byte   W12
 .byte   Fn3 ,v100
 .byte   W12
 .byte   Fn3 ,v028
 .byte   W12
 .byte   Fn3 ,v100
 .byte   W12
 .byte   Fn3 ,v028
 .byte   W12
 .byte   PEND
@  #05 @037   ----------------------------------------
 .byte   PATT
  .word Label_88257D
@  #05 @038   ----------------------------------------
Label_88259C:
 .byte   N06 ,Dn3 ,v100
 .byte   W12
 .byte   Dn3 ,v028
 .byte   W12
 .byte   Dn3 ,v100
 .byte   W12
 .byte   Dn3 ,v028
 .byte   W12
 .byte   Dn3 ,v100
 .byte   W12
 .byte   Dn3 ,v028
 .byte   W12
 .byte   Dn3 ,v100
 .byte   W12
 .byte   Dn3 ,v028
 .byte   W12
 .byte   PEND
@  #05 @039   ----------------------------------------
Label_8825B6:
 .byte   N06 ,Ds3 ,v100
 .byte   W12
 .byte   Ds3 ,v028
 .byte   W12
 .byte   Ds3 ,v100
 .byte   W12
 .byte   Ds3 ,v028
 .byte   W12
 .byte   Ds3 ,v100
 .byte   W12
 .byte   Ds3 ,v028
 .byte   W12
 .byte   Ds3 ,v100
 .byte   W12
 .byte   Ds3 ,v028
 .byte   W12
 .byte   PEND
@  #05 @040   ----------------------------------------
 .byte   PATT
  .word Label_88257D
@  #05 @041   ----------------------------------------
 .byte   PATT
  .word Label_88259C
@  #05 @042   ----------------------------------------
 .byte   PATT
  .word Label_8825B6
@  #05 @043   ----------------------------------------
 .byte   PATT
  .word Label_88259C
@  #05 @044   ----------------------------------------
 .byte   VOICE , 13
 .byte   W12
 .byte   N12 ,Gn2 ,v084
 .byte   W12
 .byte   N06 ,Fn2
 .byte   W06
 .byte   Fn2 ,v040
 .byte   W30
 .byte   N12 ,As2 ,v084
 .byte   W12
 .byte   N06 ,Gn2
 .byte   W06
 .byte   Gn2 ,v040
 .byte   W18
@  #05 @045   ----------------------------------------
 .byte   W12
 .byte   N12 ,An2 ,v084
 .byte   W12
 .byte   N06 ,Dn2
 .byte   W06
 .byte   Dn2 ,v040
 .byte   W30
 .byte   N12 ,Gn2 ,v084
 .byte   W12
 .byte   N06 ,Gn3 ,v056
 .byte   W12
 .byte   Gn3 ,v008
 .byte   W12
@  #05 @046   ----------------------------------------
 .byte   W12
 .byte   N12 ,Gn2 ,v084
 .byte   W12
 .byte   N06 ,Fn2
 .byte   W06
 .byte   Fn2 ,v040
 .byte   W30
 .byte   N12 ,As2 ,v084
 .byte   W12
 .byte   N06 ,Gn2
 .byte   W06
 .byte   Gn2 ,v040
 .byte   W18
@  #05 @047   ----------------------------------------
 .byte   W12
 .byte   N12 ,An2 ,v084
 .byte   W12
 .byte   N06 ,As2
 .byte   W06
 .byte   As2 ,v040
 .byte   W30
 .byte   N12 ,Gn2 ,v084
 .byte   W12
 .byte   N06 ,Gn3 ,v056
 .byte   W12
 .byte   Gn3 ,v008
 .byte   W12
@  #05 @048   ----------------------------------------
 .byte   N78 ,Ds3 ,v084
 .byte   W84
 .byte   N06
 .byte   W12
@  #05 @049   ----------------------------------------
 .byte   N90
 .byte   W96
@  #05 @050   ----------------------------------------
 .byte   N48 ,Dn3
 .byte   W48
 .byte   N24 ,Cn3
 .byte   W24
 .byte   Ds3
 .byte   W24
@  #05 @051   ----------------------------------------
 .byte   N48 ,Dn3
 .byte   W48
 .byte   N09 ,Dn3 ,v040
 .byte   W12
 .byte   N06 ,An2 ,v084
 .byte   W12
 .byte   Dn3
 .byte   W12
 .byte   Ds3
 .byte   W12
@  #05 @052   ----------------------------------------
 .byte   GOTO
  .word Label_88239D
 .byte   FINE

@**************** Track 6 (Midi-Chn.5) ****************@

song09_006:
@  #06 @000   ----------------------------------------
 .byte   KEYSH , song09_key+0
 .byte   W24
Label_882664:
 .byte   VOICE , 14
 .byte   VOL , 47*song09_mvl/mxv
 .byte   PAN , c_v-14
 .byte   N06 ,Fn3 ,v084
 .byte   W12
 .byte   N06
 .byte   W36
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
@  #06 @001   ----------------------------------------
 .byte   N06
 .byte   W12
Label_882676:
 .byte   N06 ,Fn3 ,v084
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W36
 .byte   PEND
@  #06 @002   ----------------------------------------
Label_882683:
 .byte   N06 ,Fn3 ,v084
 .byte   W12
 .byte   N06
 .byte   W36
 .byte   Cn3
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   PEND
@  #06 @003   ----------------------------------------
Label_882690:
 .byte   N06 ,Fn3 ,v084
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   Cn3
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   PEND
@  #06 @004   ----------------------------------------
Label_88269F:
 .byte   N06 ,Ds3 ,v084
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
@  #06 @005   ----------------------------------------
Label_8826AE:
 .byte   N06 ,Fn3 ,v084
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
 .byte   PEND
@  #06 @006   ----------------------------------------
Label_8826BF:
 .byte   N06 ,Cs3 ,v084
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
@  #06 @007   ----------------------------------------
Label_8826CE:
 .byte   N06 ,Ds3 ,v084
 .byte   W12
 .byte   N06
 .byte   W36
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   PEND
@  #06 @008   ----------------------------------------
 .byte   Fn3
 .byte   W12
 .byte   N06
 .byte   W36
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
@  #06 @009   ----------------------------------------
 .byte   PATT
  .word Label_882676
@  #06 @010   ----------------------------------------
 .byte   PATT
  .word Label_882683
@  #06 @011   ----------------------------------------
 .byte   PATT
  .word Label_882690
@  #06 @012   ----------------------------------------
 .byte   PATT
  .word Label_88269F
@  #06 @013   ----------------------------------------
 .byte   PATT
  .word Label_8826AE
@  #06 @014   ----------------------------------------
 .byte   PATT
  .word Label_8826BF
@  #06 @015   ----------------------------------------
 .byte   PATT
  .word Label_8826CE
@  #06 @016   ----------------------------------------
Label_88270A:
 .byte   N06 ,Gs3 ,v084
 .byte   W06
 .byte   Gs3 ,v040
 .byte   W06
 .byte   Gs3 ,v084
 .byte   W06
 .byte   Gs3 ,v040
 .byte   W18
 .byte   Gs3 ,v084
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   Gs3 ,v040
 .byte   W06
 .byte   Gs3 ,v084
 .byte   W06
 .byte   Gs3 ,v040
 .byte   W18
 .byte   Gs3 ,v084
 .byte   W12
 .byte   PEND
@  #06 @017   ----------------------------------------
 .byte   PATT
  .word Label_88270A
@  #06 @018   ----------------------------------------
Label_88272E:
 .byte   N06 ,Gn3 ,v084
 .byte   W06
 .byte   Gn3 ,v040
 .byte   W06
 .byte   Gn3 ,v084
 .byte   W06
 .byte   Gn3 ,v040
 .byte   W18
 .byte   Gn3 ,v084
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   Gn3 ,v040
 .byte   W06
 .byte   Gn3 ,v084
 .byte   W06
 .byte   Gn3 ,v040
 .byte   W18
 .byte   Gn3 ,v084
 .byte   W12
 .byte   PEND
@  #06 @019   ----------------------------------------
 .byte   PATT
  .word Label_88272E
@  #06 @020   ----------------------------------------
 .byte   PATT
  .word Label_88270A
@  #06 @021   ----------------------------------------
 .byte   PATT
  .word Label_88270A
@  #06 @022   ----------------------------------------
 .byte   PATT
  .word Label_88272E
@  #06 @023   ----------------------------------------
 .byte   PATT
  .word Label_88272E
@  #06 @024   ----------------------------------------
 .byte   VOICE , 15
 .byte   VOL , 33*song09_mvl/mxv
 .byte   PAN , c_v-24
 .byte   N03 ,Cn3 ,v088
 .byte   N03 ,Fn3
 .byte   W06
 .byte   Cn3
 .byte   N03 ,Fn3
 .byte   W06
 .byte   Cn3
 .byte   N03 ,Fn3
 .byte   W06
 .byte   Cn3 ,v040
 .byte   N03 ,Fn3
 .byte   W78
@  #06 @025   ----------------------------------------
 .byte   Ds3 ,v088
 .byte   N03 ,Gn3
 .byte   W06
 .byte   Ds3
 .byte   N03 ,Gn3
 .byte   W06
 .byte   Ds3
 .byte   N03 ,Gn3
 .byte   W06
 .byte   Ds3 ,v040
 .byte   N03 ,Gn3
 .byte   W54
 .byte   N24 ,Gn3 ,v088
 .byte   W24
@  #06 @026   ----------------------------------------
 .byte   N03 ,Cn3
 .byte   N03 ,Fn3
 .byte   W06
 .byte   Cn3
 .byte   N03 ,Fn3
 .byte   W06
 .byte   Cn3
 .byte   N03 ,Fn3
 .byte   W06
 .byte   Cn3 ,v040
 .byte   N03 ,Fn3
 .byte   W54
 .byte   N06 ,Fn2 ,v084
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Fn3
 .byte   W06
@  #06 @027   ----------------------------------------
 .byte   N03 ,Ds3
 .byte   N03 ,Gn3
 .byte   W06
 .byte   Ds3
 .byte   N03 ,Gn3
 .byte   W06
 .byte   Ds3
 .byte   N03 ,Gn3
 .byte   W06
 .byte   Ds3 ,v040
 .byte   N03 ,Gn3
 .byte   W54
 .byte   N09 ,Gn2 ,v088
 .byte   W12
 .byte   An2
 .byte   W12
@  #06 @028   ----------------------------------------
 .byte   N03 ,Fn2
 .byte   N03 ,As2
 .byte   W06
 .byte   Fn2
 .byte   N03 ,As2
 .byte   W06
 .byte   Fn2
 .byte   N03 ,As2
 .byte   W06
 .byte   As2 ,v040
 .byte   W78
@  #06 @029   ----------------------------------------
 .byte   Gs2 ,v088
 .byte   N03 ,Cn3
 .byte   W06
 .byte   Gs2
 .byte   N03 ,Cn3
 .byte   W06
 .byte   Gs2
 .byte   N03 ,Cn3
 .byte   W06
 .byte   Gs2 ,v040
 .byte   N03 ,Cn3
 .byte   W54
 .byte   N24 ,Cn3 ,v088
 .byte   W24
@  #06 @030   ----------------------------------------
 .byte   N03 ,Fn2
 .byte   N03 ,As2
 .byte   W06
 .byte   Fn2
 .byte   N03 ,As2
 .byte   W06
 .byte   Fn2
 .byte   N03 ,As2
 .byte   W06
 .byte   Fn2 ,v040
 .byte   N03 ,As2
 .byte   W54
 .byte   N06 ,As1 ,v084
 .byte   W06
 .byte   Dn2
 .byte   W06
 .byte   Fn2
 .byte   W06
 .byte   As2
 .byte   W06
@  #06 @031   ----------------------------------------
 .byte   N03 ,Gs2 ,v088
 .byte   N03 ,Cn3 ,v084
 .byte   W06
 .byte   Gs2 ,v088
 .byte   N03 ,Cn3 ,v084
 .byte   W06
 .byte   Gs2 ,v088
 .byte   N03 ,Cn3 ,v084
 .byte   W06
 .byte   Gs2 ,v040
 .byte   N03 ,Cn3
 .byte   W54
 .byte   N21 ,Fn2 ,v100
 .byte   W24
@  #06 @032   ----------------------------------------
 .byte   VOICE , 13
 .byte   VOL , 47*song09_mvl/mxv
 .byte   PAN , c_v-4
 .byte   W36
 .byte   N36 ,Gs3 ,v084
 .byte   W36
 .byte   W03
 .byte   N06 ,Gs3 ,v032
 .byte   W21
@  #06 @033   ----------------------------------------
 .byte   Ds3 ,v084
 .byte   W18
 .byte   N06
 .byte   W18
 .byte   N36 ,Fs3
 .byte   W36
 .byte   W03
 .byte   N06 ,Fs3 ,v032
 .byte   W21
@  #06 @034   ----------------------------------------
 .byte   Bn2 ,v084
 .byte   W18
 .byte   N06
 .byte   W18
 .byte   N36 ,En3
 .byte   W36
 .byte   N06 ,En3 ,v032
 .byte   W24
@  #06 @035   ----------------------------------------
 .byte   N21 ,As3 ,v084
 .byte   W24
 .byte   Gs3
 .byte   W24
 .byte   Fs3
 .byte   W24
 .byte   Gs3
 .byte   W24
@  #06 @036   ----------------------------------------
Label_88285A:
 .byte   N44 ,As2 ,v072
 .byte   W48
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   Gs2
 .byte   W06
 .byte   N21 ,As2
 .byte   W24
 .byte   PEND
@  #06 @037   ----------------------------------------
 .byte   N44
 .byte   W48
 .byte   N06
 .byte   W12
 .byte   Cn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   N21 ,Cn3
 .byte   W24
@  #06 @038   ----------------------------------------
Label_882873:
 .byte   N44 ,As2 ,v072
 .byte   W48
 .byte   N06
 .byte   W12
 .byte   Dn3
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   N21 ,Dn3
 .byte   W24
 .byte   PEND
@  #06 @039   ----------------------------------------
 .byte   N44 ,As2
 .byte   W48
 .byte   N06
 .byte   W12
 .byte   Ds3
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   N21 ,Ds3
 .byte   W24
@  #06 @040   ----------------------------------------
 .byte   PATT
  .word Label_88285A
@  #06 @041   ----------------------------------------
 .byte   PATT
  .word Label_882873
@  #06 @042   ----------------------------------------
 .byte   N44 ,Cn3 ,v072
 .byte   W48
 .byte   N06
 .byte   W12
 .byte   Ds3
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   N21 ,Ds3
 .byte   W24
@  #06 @043   ----------------------------------------
 .byte   N06 ,As2
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   Fn3
 .byte   W06
 .byte   Ds3
 .byte   W06
 .byte   N21 ,Fn3
 .byte   W24
@  #06 @044   ----------------------------------------
 .byte   VOICE , 9
 .byte   VOL , 42*song09_mvl/mxv
 .byte   PAN , c_v+16
 .byte   W12
 .byte   N12 ,Gn2 ,v084
 .byte   W12
 .byte   N06 ,Fn2
 .byte   W36
 .byte   N12 ,As2
 .byte   W12
 .byte   N06 ,Gn2
 .byte   W24
@  #06 @045   ----------------------------------------
 .byte   W12
 .byte   N12 ,An2
 .byte   W12
 .byte   N06 ,Dn2
 .byte   W36
 .byte   N12 ,Gn2
 .byte   W12
 .byte   N09 ,Gn3 ,v056
 .byte   W09
 .byte   Gn3 ,v024
 .byte   W15
@  #06 @046   ----------------------------------------
 .byte   W12
 .byte   N12 ,Gn2 ,v084
 .byte   W12
 .byte   N06 ,Fn2
 .byte   W36
 .byte   N12 ,As2
 .byte   W12
 .byte   N06 ,Gn2
 .byte   W24
@  #06 @047   ----------------------------------------
 .byte   W12
 .byte   N12 ,An2
 .byte   W12
 .byte   N06 ,As2
 .byte   W36
 .byte   N12 ,Gn2
 .byte   W12
 .byte   N09 ,Gn3 ,v056
 .byte   W09
 .byte   Gn3 ,v024
 .byte   W15
@  #06 @048   ----------------------------------------
 .byte   VOICE , 13
 .byte   VOL , 47*song09_mvl/mxv
 .byte   PAN , c_v-4
 .byte   N90 ,As2 ,v084
 .byte   W96
@  #06 @049   ----------------------------------------
 .byte   N66 ,Gn2
 .byte   W72
 .byte   N06 ,An2
 .byte   W12
 .byte   As2
 .byte   W12
@  #06 @050   ----------------------------------------
 .byte   N42 ,Cn3
 .byte   W48
 .byte   N30 ,An2
 .byte   W36
 .byte   N06 ,As2
 .byte   W12
@  #06 @051   ----------------------------------------
 .byte   N48 ,An2
 .byte   W60
 .byte   N06
 .byte   W12
 .byte   As2
 .byte   W12
 .byte   Cn3
 .byte   W12
@  #06 @052   ----------------------------------------
 .byte   GOTO
  .word Label_882664
 .byte   FINE

@**************** Track 7 (Midi-Chn.6) ****************@

song09_007:
@  #07 @000   ----------------------------------------
 .byte   KEYSH , song09_key+0
 .byte   W24
Label_882923:
 .byte   VOICE , 0
 .byte   VOL , 41*song09_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N06 ,EnM1 ,v064
 .byte   W36
 .byte   N06
 .byte   W12
 .byte   EnM1 ,v068
 .byte   W36
@  #07 @001   ----------------------------------------
 .byte   EnM1 ,v048
 .byte   W12
 .byte   EnM1 ,v056
 .byte   W36
 .byte   EnM1 ,v052
 .byte   W12
 .byte   EnM1 ,v036
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   EnM1 ,v056
 .byte   W06
 .byte   EnM1 ,v052
 .byte   W06
@  #07 @002   ----------------------------------------
 .byte   N11 ,FnM1 ,v072
 .byte   W12
 .byte   N06 ,EnM1 ,v060
 .byte   W36
 .byte   EnM1 ,v072
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   EnM1 ,v076
 .byte   W24
@  #07 @003   ----------------------------------------
 .byte   EnM1 ,v072
 .byte   W12
 .byte   EnM1 ,v080
 .byte   W36
 .byte   EnM1 ,v072
 .byte   W12
 .byte   EnM1 ,v076
 .byte   W12
 .byte   EnM1 ,v040
 .byte   W12
 .byte   EnM1 ,v076
 .byte   W12
@  #07 @004   ----------------------------------------
 .byte   N11 ,FnM1 ,v068
 .byte   W12
 .byte   N06 ,EnM1 ,v060
 .byte   W36
 .byte   EnM1 ,v068
 .byte   W12
 .byte   EnM1 ,v060
 .byte   W12
 .byte   EnM1 ,v048
 .byte   W24
@  #07 @005   ----------------------------------------
 .byte   N06
 .byte   W12
 .byte   EnM1 ,v076
 .byte   W36
 .byte   EnM1 ,v068
 .byte   W12
 .byte   EnM1 ,v072
 .byte   W24
 .byte   N06
 .byte   W12
@  #07 @006   ----------------------------------------
 .byte   N10 ,FnM1 ,v068
 .byte   W12
 .byte   N06 ,EnM1 ,v056
 .byte   W36
 .byte   EnM1 ,v068
 .byte   W12
 .byte   EnM1 ,v076
 .byte   W36
@  #07 @007   ----------------------------------------
 .byte   EnM1 ,v072
 .byte   W12
 .byte   EnM1 ,v068
 .byte   W12
 .byte   N06
 .byte   W24
 .byte   EnM1 ,v076
 .byte   W12
 .byte   EnM1 ,v052
 .byte   W12
 .byte   N10 ,FnM1 ,v076
 .byte   W12
 .byte   N06 ,EnM1 ,v060
 .byte   W12
@  #07 @008   ----------------------------------------
 .byte   EnM1 ,v076
 .byte   W06
 .byte   EnM1 ,v060
 .byte   W06
 .byte   EnM1 ,v064
 .byte   W36
 .byte   N06
 .byte   W12
 .byte   EnM1 ,v068
 .byte   W24
 .byte   N08 ,FsM1 ,v120
 .byte   W12
@  #07 @009   ----------------------------------------
 .byte   N06 ,EnM1 ,v048
 .byte   W12
 .byte   EnM1 ,v056
 .byte   W36
 .byte   EnM1 ,v052
 .byte   W12
 .byte   EnM1 ,v036
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   EnM1 ,v056
 .byte   W06
 .byte   EnM1 ,v052
 .byte   W06
@  #07 @010   ----------------------------------------
 .byte   N11 ,FnM1 ,v084
 .byte   W12
 .byte   N06 ,EnM1 ,v060
 .byte   W36
 .byte   EnM1 ,v072
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   EnM1 ,v076
 .byte   W12
 .byte   N08 ,FsM1 ,v120
 .byte   W12
@  #07 @011   ----------------------------------------
 .byte   N06 ,EnM1 ,v072
 .byte   W12
 .byte   EnM1 ,v080
 .byte   W36
 .byte   EnM1 ,v072
 .byte   W12
 .byte   EnM1 ,v076
 .byte   W12
 .byte   EnM1 ,v040
 .byte   W12
 .byte   FsM1 ,v112
 .byte   W12
@  #07 @012   ----------------------------------------
 .byte   N11 ,FnM1 ,v068
 .byte   W12
 .byte   N07 ,FsM1 ,v116
 .byte   W36
 .byte   N05
 .byte   W12
 .byte   N06 ,EnM1 ,v060
 .byte   W12
 .byte   EnM1 ,v048
 .byte   W24
@  #07 @013   ----------------------------------------
 .byte   N06
 .byte   W12
 .byte   FsM1 ,v120
 .byte   W36
 .byte   N07 ,FsM1 ,v116
 .byte   W12
 .byte   N06 ,EnM1 ,v072
 .byte   W24
 .byte   N06
 .byte   W12
@  #07 @014   ----------------------------------------
 .byte   N05 ,FsM1 ,v116
 .byte   W12
 .byte   N06
 .byte   W36
 .byte   N07
 .byte   W12
 .byte   N06 ,EnM1 ,v076
 .byte   W24
 .byte   N06
 .byte   W12
@  #07 @015   ----------------------------------------
 .byte   N04 ,FsM1 ,v100
 .byte   W12
 .byte   N05
 .byte   W12
 .byte   FsM1 ,v120
 .byte   W24
 .byte   FsM1 ,v116
 .byte   W24
 .byte   N04
 .byte   W12
 .byte   N05 ,FsM1 ,v120
 .byte   W24
@  #07 @016   ----------------------------------------
 .byte   N44 ,GnM1 ,v080
 .byte   W12
 .byte   N05 ,FsM1 ,v092
 .byte   W36
 .byte   FsM1 ,v116
 .byte   W12
 .byte   N06 ,FsM1 ,v100
 .byte   W24
 .byte   N04 ,FsM1 ,v112
 .byte   W12
@  #07 @017   ----------------------------------------
 .byte   N05 ,FsM1 ,v092
 .byte   W12
 .byte   FsM1 ,v112
 .byte   W36
 .byte   N06 ,FsM1 ,v092
 .byte   W12
 .byte   N05 ,FsM1 ,v100
 .byte   W36
@  #07 @018   ----------------------------------------
 .byte   FsM1 ,v112
 .byte   W12
 .byte   FsM1 ,v084
 .byte   W36
 .byte   FsM1 ,v116
 .byte   W12
 .byte   FsM1 ,v084
 .byte   W24
 .byte   N04 ,FsM1 ,v112
 .byte   W12
@  #07 @019   ----------------------------------------
 .byte   N05 ,FsM1 ,v100
 .byte   W12
 .byte   FsM1 ,v080
 .byte   W24
 .byte   FsM1 ,v072
 .byte   W12
 .byte   FsM1 ,v100
 .byte   W12
 .byte   FsM1 ,v092
 .byte   W24
 .byte   N03 ,FsM1 ,v084
 .byte   W06
 .byte   FsM1 ,v068
 .byte   W06
@  #07 @020   ----------------------------------------
 .byte   N05 ,FsM1 ,v076
 .byte   W12
 .byte   FsM1 ,v092
 .byte   W36
 .byte   FsM1 ,v100
 .byte   W12
 .byte   N06 ,FsM1 ,v080
 .byte   W24
 .byte   N04 ,FsM1 ,v092
 .byte   W12
@  #07 @021   ----------------------------------------
 .byte   N05 ,FsM1 ,v084
 .byte   W12
 .byte   FsM1 ,v080
 .byte   W36
 .byte   N04 ,FsM1 ,v116
 .byte   W12
 .byte   N05 ,FsM1 ,v092
 .byte   W36
@  #07 @022   ----------------------------------------
 .byte   N04 ,FsM1 ,v100
 .byte   W12
 .byte   N05 ,FsM1 ,v084
 .byte   W36
 .byte   N04 ,FsM1 ,v100
 .byte   W12
 .byte   N05
 .byte   W24
 .byte   N04 ,FsM1 ,v084
 .byte   W12
@  #07 @023   ----------------------------------------
 .byte   FsM1 ,v092
 .byte   W12
 .byte   FsM1 ,v112
 .byte   W24
 .byte   FsM1 ,v080
 .byte   W12
 .byte   FsM1 ,v092
 .byte   W12
 .byte   N04
 .byte   W12
 .byte   FsM1 ,v100
 .byte   W12
 .byte   N03
 .byte   W06
 .byte   FsM1 ,v072
 .byte   W06
@  #07 @024   ----------------------------------------
 .byte   N05 ,FsM1 ,v084
 .byte   W96
@  #07 @025   ----------------------------------------
 .byte   W96
@  #07 @026   ----------------------------------------
 .byte   W96
@  #07 @027   ----------------------------------------
 .byte   W96
@  #07 @028   ----------------------------------------
 .byte   W96
@  #07 @029   ----------------------------------------
 .byte   W96
@  #07 @030   ----------------------------------------
 .byte   W96
@  #07 @031   ----------------------------------------
 .byte   W18
 .byte   TIE ,GsM1 ,v127
 .byte   W54
 .byte   N24 ,AnM1 ,v100
 .byte   W24
@  #07 @032   ----------------------------------------
 .byte   N12 ,FsM1 ,v108
 .byte   W60
 .byte   EOT
 .byte   GsM1
 .byte   N04 ,FsM1 ,v056
 .byte   W04
 .byte   FsM1 ,v084
 .byte   W04
 .byte   N04
 .byte   W04
 .byte   N12 ,FsM1 ,v108
 .byte   W24
@  #07 @033   ----------------------------------------
Label_882AF0:
 .byte   W60
 .byte   N04 ,FsM1 ,v084
 .byte   W04
 .byte   N04
 .byte   W04
 .byte   N04
 .byte   W04
 .byte   N12 ,FsM1 ,v108
 .byte   W24
 .byte   PEND
@  #07 @034   ----------------------------------------
 .byte   PATT
  .word Label_882AF0
@  #07 @035   ----------------------------------------
 .byte   N12 ,FsM1 ,v108
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   N12
 .byte   W12
 .byte   N12
 .byte   W12
 .byte   N12
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
@  #07 @036   ----------------------------------------
 .byte   N12
 .byte   W24
 .byte   N06 ,EnM1 ,v056
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
@  #07 @037   ----------------------------------------
Label_882B1D:
 .byte   N06 ,EnM1 ,v056
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W12
 .byte   PEND
@  #07 @038   ----------------------------------------
Label_882B2A:
 .byte   N06 ,EnM1 ,v056
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   PEND
@  #07 @039   ----------------------------------------
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W06
 .byte   EnM1 ,v024
 .byte   W06
 .byte   N12 ,FnM1 ,v052
 .byte   W12
@  #07 @040   ----------------------------------------
 .byte   PATT
  .word Label_882B2A
@  #07 @041   ----------------------------------------
 .byte   PATT
  .word Label_882B1D
@  #07 @042   ----------------------------------------
 .byte   PATT
  .word Label_882B2A
@  #07 @043   ----------------------------------------
 .byte   N06 ,EnM1 ,v056
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W24
 .byte   N06
 .byte   W12
 .byte   N06
 .byte   W06
 .byte   EnM1 ,v024
 .byte   W06
@  #07 @044   ----------------------------------------
Label_882B62:
 .byte   W12
 .byte   N12 ,FnM1 ,v032
 .byte   W12
 .byte   N06 ,EnM1 ,v056
 .byte   W36
 .byte   N12 ,FnM1 ,v032
 .byte   W12
 .byte   N06 ,EnM1 ,v056
 .byte   W12
 .byte   EnM1 ,v028
 .byte   W12
 .byte   PEND
@  #07 @045   ----------------------------------------
Label_882B77:
 .byte   W12
 .byte   N12 ,FnM1 ,v032
 .byte   W12
 .byte   N06 ,EnM1 ,v056
 .byte   W36
 .byte   N04 ,AsM1 ,v048
 .byte   W04
 .byte   AsM1 ,v056
 .byte   W04
 .byte   AsM1 ,v068
 .byte   W04
 .byte   N06 ,AsM1 ,v080
 .byte   W12
 .byte   AsM1 ,v028
 .byte   W12
 .byte   PEND
@  #07 @046   ----------------------------------------
 .byte   PATT
  .word Label_882B62
@  #07 @047   ----------------------------------------
 .byte   PATT
  .word Label_882B77
@  #07 @048   ----------------------------------------
 .byte   W24
 .byte   N42 ,BnM1 ,v076
 .byte   W60
 .byte   N12
 .byte   W12
@  #07 @049   ----------------------------------------
 .byte   N24
 .byte   W24
 .byte   N24
 .byte   W48
 .byte   N24
 .byte   W24
@  #07 @050   ----------------------------------------
 .byte   N42
 .byte   W84
 .byte   N12
 .byte   W12
@  #07 @051   ----------------------------------------
 .byte   N42
 .byte   W48
 .byte   N42
 .byte   W48
@  #07 @052   ----------------------------------------
 .byte   GOTO
  .word Label_882923
 .byte   FINE

@******************************************************@
	.align	2

song09:
	.byte	7	@ NumTrks
	.byte	0	@ NumBlks
	.byte	song09_pri	@ Priority
	.byte	song09_rev	@ Reverb.

	.word	song09_grp

	.word	song09_001
	.word	song09_002
	.word	song09_003
	.word	song09_004
	.word	song09_005
	.word	song09_006
	.word	song09_007

	.end
