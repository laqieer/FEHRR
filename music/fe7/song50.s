	.include "MPlayDef.s"

	.equ	song50_grp, voicegroup000
	.equ	song50_pri, 10
	.equ	song50_rev, 128
	.equ	song50_mvl, 127
	.equ	song50_key, 0
	.equ	song50_tbs, 1
	.equ	song50_exg, 0
	.equ	song50_cmp, 1

	.section .rodata
	.global	song50
	.align	2


@**************** Track 1 (Midi-Chn.0) ****************@

song50_001:
@  #01 @000   ----------------------------------------
 .byte   KEYSH , song50_key+0
 .byte   TEMPO , 66*song50_tbs/2
 .byte   W84
Label_8CE8C1:
 .byte   W84
@  #01 @001   ----------------------------------------
 .byte   W84
 .byte   W72
@  #01 @002   ----------------------------------------
 .byte   VOICE , 1
 .byte   W12
 .byte   VOL , 48*song50_mvl/mxv
 .byte   W12
 .byte   PAN , c_v+18
 .byte   W12
 .byte   N24 ,Fn4 ,v104
 .byte   W24
 .byte   Ds4
 .byte   W24
 .byte   N12 ,Cn4
 .byte   W12
@  #01 @003   ----------------------------------------
 .byte   N24 ,Cs4
 .byte   W24
 .byte   N12 ,Cn4
 .byte   W12
 .byte   Gs3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Gs3
 .byte   W12
 .byte   Fs3
 .byte   W12
 .byte   N21 ,Fn3
 .byte   W24
@  #01 @004   ----------------------------------------
 .byte   N24 ,Fn4
 .byte   W24
 .byte   Ds4
 .byte   W24
 .byte   N12 ,Cn4
 .byte   W12
 .byte   N21 ,Cs4
 .byte   W24
 .byte   N12 ,Cn4
 .byte   W12
@  #01 @005   ----------------------------------------
 .byte   Gs3
 .byte   W12
 .byte   As3
 .byte   W12
 .byte   Gs3
 .byte   W12
 .byte   Fn3
 .byte   W12
 .byte   N24 ,Gn3
 .byte   W24
 .byte   VOICE , 2
 .byte   VOL , 52*song50_mvl/mxv
 .byte   PAN , c_v-25
 .byte   N24 ,Dn4 ,v092
 .byte   W24
@  #01 @006   ----------------------------------------
 .byte   Ds4
 .byte   W24
 .byte   N12 ,Cn4
 .byte   W12
 .byte   N21 ,Dn4
 .byte   W24
 .byte   N12 ,As3
 .byte   W12
 .byte   Gn3
 .byte   W12
 .byte   N24 ,Gs3
 .byte   W24
@  #01 @007   ----------------------------------------
 .byte   N12 ,Fn3
 .byte   W12
 .byte   N18 ,Gn3
 .byte   W24
 .byte   N24 ,Dn4
 .byte   W24
 .byte   Ds4
 .byte   W24
 .byte   N12 ,Cn4
 .byte   W12
@  #01 @008   ----------------------------------------
 .byte   N21 ,Dn4
 .byte   W24
 .byte   N32 ,As3
 .byte   W36
 .byte   N06 ,Gs3
 .byte   W06
 .byte   As3
 .byte   W06
 .byte   Cn4
 .byte   W06
 .byte   Cs4
 .byte   W06
Label_8CE937:
 .byte   N24 ,Fn4 ,v092
 .byte   W24
@  #01 @009   ----------------------------------------
 .byte   N12 ,As3
 .byte   W12
 .byte   Fn4
 .byte   W12
 .byte   Ds4
 .byte   W12
 .byte   Cs4
 .byte   W12
 .byte   Cn4
 .byte   W12
 .byte   PEND 
 .byte   N24 ,Cs4
 .byte   W24
 .byte   N12 ,As3
 .byte   W12
@  #01 @010   ----------------------------------------
 .byte   N06 ,Cs4
 .byte   W06
 .byte   Fn4
 .byte   W06
 .byte   Gs4
 .byte   W06
 .byte   Fs4
 .byte   W06
 .byte   Fn4
 .byte   W06
 .byte   Ds4
 .byte   W06
 .byte   Cs4
 .byte   W06
 .byte   Ds4
 .byte   W06
@  #01 @011   ----------------------------------------
 .byte   PATT
  .word Label_8CE937
@  #01 @012   ----------------------------------------
 .byte   N24 ,Cs4 ,v092
 .byte   W24
 .byte   N12 ,As3
 .byte   W12
 .byte   N06 ,Cs4
 .byte   W06
 .byte   Fn4
 .byte   W06
 .byte   Gs4
 .byte   W06
 .byte   Gn4
 .byte   W06
 .byte   Ds4
 .byte   W06
 .byte   Fn4
 .byte   W06
 .byte   Ds4
 .byte   W06
 .byte   Cn4
 .byte   W06
 .byte   N32 ,Dn4
 .byte   W84
@  #01 @013   ----------------------------------------
 .byte   GOTO
  .word Label_8CE8C1
 .byte   FINE

@**************** Track 2 (Midi-Chn.1) ****************@

song50_002:
@  #02 @000   ----------------------------------------
 .byte   KEYSH , song50_key+0
 .byte   VOICE , 3
 .byte   VOL , 49*song50_mvl/mxv
 .byte   PAN , c_v+5
 .byte   N06 ,As2 ,v092
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   Gn2
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   An2
 .byte   W06
Label_8CE9AA:
 .byte   N06 ,As2 ,v092
 .byte   W06
 .byte   An2
 .byte   W06
@  #02 @001   ----------------------------------------
 .byte   Gn2
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Gs2
 .byte   W06
 .byte   Ds3
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   PEND 
Label_8CE9C9:
 .byte   N06 ,As2 ,v092
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   Gn2
 .byte   W06
 .byte   An2
 .byte   W06
@  #02 @002   ----------------------------------------
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   PEND 
@  #02 @003   ----------------------------------------
 .byte   PATT
  .word Label_8CE9AA
@  #02 @004   ----------------------------------------
Label_8CE9ED:
 .byte   N06 ,Cs3 ,v092
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Ds3
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Ds3
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   Ds3
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   PEND 
Label_8CEA0C:
 .byte   N06 ,Cs3 ,v092
 .byte   W06
 .byte   Cn3
 .byte   W06
@  #02 @005   ----------------------------------------
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Ds3
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Ds3
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Bn2
 .byte   W06
 .byte   Fs3
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   Ds3
 .byte   W06
 .byte   PEND 
@  #02 @006   ----------------------------------------
 .byte   PATT
  .word Label_8CE9ED
@  #02 @007   ----------------------------------------
Label_8CEA30:
 .byte   N06 ,Cs3 ,v092
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Ds3
 .byte   W06
 .byte   Fn3
 .byte   W06
 .byte   Cs3
 .byte   W06
 .byte   Ds3
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   PEND 
 .byte   VOL , 44*song50_mvl/mxv
 .byte   N06 ,As2
 .byte   W06
 .byte   An2
 .byte   W06
@  #02 @008   ----------------------------------------
 .byte   Gn2
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   An2
 .byte   W06
@  #02 @009   ----------------------------------------
 .byte   PATT
  .word Label_8CE9AA
@  #02 @010   ----------------------------------------
 .byte   PATT
  .word Label_8CE9C9
@  #02 @011   ----------------------------------------
 .byte   PATT
  .word Label_8CE9AA
@  #02 @012   ----------------------------------------
 .byte   PATT
  .word Label_8CE9ED
@  #02 @013   ----------------------------------------
 .byte   PATT
  .word Label_8CEA0C
@  #02 @014   ----------------------------------------
 .byte   PATT
  .word Label_8CE9ED
@  #02 @015   ----------------------------------------
 .byte   PATT
  .word Label_8CEA30
@  #02 @016   ----------------------------------------
 .byte   VOICE , 3
 .byte   VOL , 51*song50_mvl/mxv
 .byte   PAN , c_v+5
 .byte   N06 ,As2 ,v092
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   Gn2
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   As2
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   Dn3
 .byte   W06
 .byte   Cn3
 .byte   W06
 .byte   An2
 .byte   W06
 .byte   GOTO
  .word Label_8CE9AA
 .byte   FINE

@**************** Track 3 (Midi-Chn.2) ****************@

song50_003:
@  #03 @000   ----------------------------------------
 .byte   KEYSH , song50_key+0
 .byte   VOICE , 4
 .byte   VOL , 49*song50_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N21 ,Gn2 ,v104
 .byte   W24
 .byte   N21
 .byte   W24
 .byte   N21
 .byte   W24
 .byte   N09 ,Dn2
 .byte   W12
Label_8CEACE:
 .byte   N21 ,Gn2 ,v104
 .byte   W24
@  #03 @001   ----------------------------------------
 .byte   N21
 .byte   W24
 .byte   Ds2
 .byte   W24
 .byte   N09
 .byte   W12
 .byte   PEND 
Label_8CEAD9:
 .byte   N21 ,Gn2 ,v104
 .byte   W24
 .byte   N21
 .byte   W24
@  #03 @002   ----------------------------------------
 .byte   N21
 .byte   W24
 .byte   N09 ,Dn2
 .byte   W12
 .byte   PEND 
@  #03 @003   ----------------------------------------
 .byte   PATT
  .word Label_8CEACE
@  #03 @004   ----------------------------------------
Label_8CEAEA:
 .byte   N21 ,As2 ,v104
 .byte   W24
 .byte   N21
 .byte   W24
 .byte   N21
 .byte   W24
 .byte   N09 ,Fn2
 .byte   W12
 .byte   PEND 
Label_8CEAF6:
 .byte   N21 ,As2 ,v104
 .byte   W24
@  #03 @005   ----------------------------------------
 .byte   N21
 .byte   W24
 .byte   Fs2
 .byte   W24
 .byte   N09
 .byte   W12
 .byte   PEND 
@  #03 @006   ----------------------------------------
 .byte   PATT
  .word Label_8CEAEA
@  #03 @007   ----------------------------------------
Label_8CEB06:
 .byte   N21 ,As2 ,v104
 .byte   W24
 .byte   N21
 .byte   W24
 .byte   Gs2
 .byte   W24
 .byte   N09
 .byte   W12
 .byte   PEND 
@  #03 @008   ----------------------------------------
 .byte   PATT
  .word Label_8CEAD9
@  #03 @009   ----------------------------------------
 .byte   PATT
  .word Label_8CEACE
@  #03 @010   ----------------------------------------
 .byte   PATT
  .word Label_8CEAD9
@  #03 @011   ----------------------------------------
 .byte   PATT
  .word Label_8CEACE
@  #03 @012   ----------------------------------------
 .byte   PATT
  .word Label_8CEAEA
@  #03 @013   ----------------------------------------
 .byte   PATT
  .word Label_8CEAF6
@  #03 @014   ----------------------------------------
 .byte   PATT
  .word Label_8CEAEA
@  #03 @015   ----------------------------------------
 .byte   PATT
  .word Label_8CEB06
@  #03 @016   ----------------------------------------
 .byte   VOICE , 4
 .byte   VOL , 51*song50_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N21 ,Gn2 ,v104
 .byte   W24
 .byte   N21
 .byte   W24
 .byte   N21
 .byte   W24
 .byte   N09 ,Dn2
 .byte   W12
 .byte   GOTO
  .word Label_8CEACE
 .byte   FINE

@**************** Track 4 (Midi-Chn.3) ****************@

song50_004:
@  #04 @000   ----------------------------------------
 .byte   KEYSH , song50_key+0
 .byte   VOICE , 5
 .byte   VOL , 46*song50_mvl/mxv
 .byte   PAN , c_v-20
 .byte   N80 ,Gn2 ,v076
 .byte   N80 ,Dn3
 .byte   W84
Label_8CEB5E:
 .byte   N44 ,Gn2 ,v076
 .byte   N44 ,Dn3
 .byte   W48
@  #04 @001   ----------------------------------------
 .byte   N32 ,Gs2
 .byte   N32 ,Ds3
 .byte   W36
 .byte   PEND 
 .byte   N80 ,Gn2
 .byte   N80 ,Dn3
 .byte   W84
@  #04 @002   ----------------------------------------
 .byte   PATT
  .word Label_8CEB5E
@  #04 @003   ----------------------------------------
 .byte   N80 ,As2 ,v076
 .byte   N80 ,Fn3
 .byte   W84
 .byte   N44 ,As2
 .byte   N44 ,Fn3
 .byte   W48
@  #04 @004   ----------------------------------------
 .byte   N32 ,Bn2
 .byte   N32 ,Fs3
 .byte   W36
 .byte   N80 ,As2
 .byte   N80 ,Fn3
 .byte   W84
@  #04 @005   ----------------------------------------
 .byte   N44 ,As2
 .byte   N44 ,Fn3
 .byte   W48
 .byte   N32 ,Gs2
 .byte   N32 ,Ds3
 .byte   W36
 .byte   VOICE , 6
 .byte   VOL , 35*song50_mvl/mxv
 .byte   PAN , c_v+22
 .byte   N23 ,Dn3 ,v108
 .byte   W24
@  #04 @006   ----------------------------------------
 .byte   N23
 .byte   W24
 .byte   N32
 .byte   W36
Label_8CEBA1:
 .byte   N23 ,Dn3 ,v108
 .byte   W24
 .byte   N23
 .byte   W24
@  #04 @007   ----------------------------------------
 .byte   N32 ,Ds3
 .byte   W36
 .byte   PEND 
 .byte   N23 ,Dn3
 .byte   W24
 .byte   N23
 .byte   W24
 .byte   N32
 .byte   W36
@  #04 @008   ----------------------------------------
 .byte   PATT
  .word Label_8CEBA1
@  #04 @009   ----------------------------------------
Label_8CEBB7:
 .byte   N23 ,Fn3 ,v108
 .byte   W24
 .byte   N23
 .byte   W24
 .byte   N32
 .byte   W36
 .byte   PEND 
 .byte   N23
 .byte   W24
@  #04 @010   ----------------------------------------
 .byte   N23
 .byte   W24
 .byte   N32 ,Fs3
 .byte   W36
@  #04 @011   ----------------------------------------
 .byte   PATT
  .word Label_8CEBB7
@  #04 @012   ----------------------------------------
 .byte   N23 ,Fn3 ,v108
 .byte   W24
 .byte   N23
 .byte   W24
 .byte   N32 ,Ds3
 .byte   W36
 .byte   VOICE , 5
 .byte   VOL , 48*song50_mvl/mxv
 .byte   PAN , c_v-20
 .byte   N80 ,Gn2 ,v076
 .byte   N80 ,Dn3
 .byte   W84
@  #04 @013   ----------------------------------------
 .byte   GOTO
  .word Label_8CEB5E
 .byte   FINE

@**************** Track 5 (Midi-Chn.4) ****************@

song50_005:
@  #05 @000   ----------------------------------------
 .byte   KEYSH , song50_key+0
 .byte   VOICE , 7
 .byte   VOL , 52*song50_mvl/mxv
 .byte   PAN , c_v+20
 .byte   N12 ,Gn2 ,v116
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
Label_8CEBFB:
 .byte   N12 ,Gn2 ,v116
 .byte   W24
@  #05 @001   ----------------------------------------
 .byte   N12
 .byte   W24
 .byte   As2
 .byte   W24
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
 .byte   PEND 
Label_8CEC08:
 .byte   N12 ,Gn2 ,v116
 .byte   W24
 .byte   N12
 .byte   W24
@  #05 @002   ----------------------------------------
 .byte   N12
 .byte   W24
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
 .byte   PEND 
@  #05 @003   ----------------------------------------
 .byte   PATT
  .word Label_8CEBFB
@  #05 @004   ----------------------------------------
Label_8CEC1A:
 .byte   N12 ,As2 ,v116
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
 .byte   PEND 
 .byte   N12
 .byte   W24
@  #05 @005   ----------------------------------------
 .byte   N12
 .byte   W24
 .byte   Cs3
 .byte   W24
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
@  #05 @006   ----------------------------------------
 .byte   PATT
  .word Label_8CEC1A
@  #05 @007   ----------------------------------------
 .byte   N12 ,As2 ,v116
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   Gs2
 .byte   W24
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
@  #05 @008   ----------------------------------------
 .byte   PATT
  .word Label_8CEC08
@  #05 @009   ----------------------------------------
 .byte   N12 ,Gn2 ,v116
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   As2
 .byte   W24
 .byte   N03 ,As2 ,v068
 .byte   W03
 .byte   As2 ,v080
 .byte   W03
 .byte   As2 ,v092
 .byte   W03
 .byte   As2 ,v104
 .byte   W03
@  #05 @010   ----------------------------------------
 .byte   PATT
  .word Label_8CEC08
@  #05 @011   ----------------------------------------
 .byte   N12 ,Gn2 ,v116
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   As2
 .byte   W12
 .byte   N03 ,As2 ,v048
 .byte   W03
 .byte   As2 ,v056
 .byte   W03
 .byte   As2 ,v064
 .byte   W03
 .byte   As2 ,v072
 .byte   W03
 .byte   As2 ,v080
 .byte   W03
 .byte   As2 ,v088
 .byte   W03
 .byte   As2 ,v096
 .byte   W03
 .byte   As2 ,v104
 .byte   W03
@  #05 @012   ----------------------------------------
 .byte   PATT
  .word Label_8CEC1A
@  #05 @013   ----------------------------------------
 .byte   N12 ,As2 ,v116
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   Cs3
 .byte   W24
 .byte   N03 ,Cs3 ,v068
 .byte   W03
 .byte   Cs3 ,v080
 .byte   W03
 .byte   Cs3 ,v092
 .byte   W03
 .byte   Cs3 ,v104
 .byte   W03
@  #05 @014   ----------------------------------------
 .byte   PATT
  .word Label_8CEC1A
@  #05 @015   ----------------------------------------
 .byte   N12 ,As2 ,v116
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   Gs2
 .byte   W12
 .byte   N03 ,Gs2 ,v056
 .byte   W03
 .byte   Gs2 ,v060
 .byte   W03
 .byte   Gs2 ,v068
 .byte   W03
 .byte   Gs2 ,v076
 .byte   W03
 .byte   Gs2 ,v080
 .byte   W03
 .byte   Gs2 ,v088
 .byte   W03
 .byte   Gs2 ,v096
 .byte   W03
 .byte   Gs2 ,v100
 .byte   W03
 .byte   VOICE , 7
 .byte   VOL , 51*song50_mvl/mxv
 .byte   PAN , c_v-7
 .byte   N12 ,Gn2 ,v116
 .byte   W24
@  #05 @016   ----------------------------------------
 .byte   N12
 .byte   W24
 .byte   N12
 .byte   W24
 .byte   N06
 .byte   W06
 .byte   N06
 .byte   W06
 .byte   GOTO
  .word Label_8CEBFB
 .byte   FINE

@**************** Track 6 (Midi-Chn.5) ****************@

song50_006:
@  #06 @000   ----------------------------------------
 .byte   KEYSH , song50_key+0
 .byte   VOICE , 0
 .byte   VOL , 36*song50_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N12 ,GsM2 ,v108
 .byte   W12
 .byte   AnM2 ,v044
 .byte   W12
 .byte   AnM2 ,v068
 .byte   W12
 .byte   AnM2 ,v044
 .byte   W12
 .byte   AnM2 ,v068
 .byte   W12
 .byte   AnM2 ,v044
 .byte   W12
 .byte   N12
 .byte   W12
Label_8CECF7:
 .byte   N12 ,AnM2 ,v060
 .byte   W12
@  #06 @001   ----------------------------------------
 .byte   AnM2 ,v036
 .byte   W12
 .byte   N12
 .byte   W12
 .byte   N12
 .byte   W12
 .byte   AnM2 ,v060
 .byte   W12
 .byte   N06 ,AnM2 ,v024
 .byte   W06
 .byte   AnM2 ,v032
 .byte   W06
 .byte   AnM2 ,v048
 .byte   W06
 .byte   AnM2 ,v060
 .byte   W06
Label_8CED12:
 .byte   N12 ,AnM2 ,v068
 .byte   W12
 .byte   AnM2 ,v044
 .byte   W12
@  #06 @002   ----------------------------------------
 .byte   AnM2 ,v068
 .byte   W12
 .byte   AnM2 ,v044
 .byte   W12
 .byte   AnM2 ,v068
 .byte   W12
 .byte   AnM2 ,v044
 .byte   W12
 .byte   N12
 .byte   W12
 .byte   PEND 
Label_8CED28:
 .byte   N12 ,AnM2 ,v060
 .byte   W12
 .byte   AnM2 ,v036
 .byte   W12
 .byte   N12
 .byte   W12
@  #06 @003   ----------------------------------------
 .byte   N12
 .byte   W12
 .byte   AnM2 ,v060
 .byte   W12
 .byte   N06 ,GsM2 ,v068
 .byte   W06
 .byte   GsM2 ,v084
 .byte   W06
 .byte   GsM2 ,v096
 .byte   W06
 .byte   GsM2 ,v112
 .byte   W06
 .byte   PEND 
Label_8CED44:
 .byte   N12 ,GsM2 ,v108
 .byte   W12
 .byte   AnM2 ,v044
 .byte   W12
 .byte   AnM2 ,v068
 .byte   W12
 .byte   AnM2 ,v044
 .byte   W12
@  #06 @004   ----------------------------------------
 .byte   AnM2 ,v068
 .byte   W12
 .byte   AnM2 ,v044
 .byte   W12
 .byte   N12
 .byte   W12
 .byte   PEND 
Label_8CED5A:
 .byte   N12 ,AnM2 ,v060
 .byte   W12
 .byte   AnM2 ,v036
 .byte   W12
 .byte   N12
 .byte   W12
 .byte   N12
 .byte   W12
 .byte   AnM2 ,v060
 .byte   W12
@  #06 @005   ----------------------------------------
 .byte   N06 ,AnM2 ,v028
 .byte   W06
 .byte   AnM2 ,v032
 .byte   W06
 .byte   AnM2 ,v048
 .byte   W06
 .byte   AnM2 ,v060
 .byte   W06
 .byte   PEND 
@  #06 @006   ----------------------------------------
 .byte   PATT
  .word Label_8CED12
@  #06 @007   ----------------------------------------
 .byte   PATT
  .word Label_8CED28
@  #06 @008   ----------------------------------------
 .byte   PATT
  .word Label_8CED44
@  #06 @009   ----------------------------------------
 .byte   PATT
  .word Label_8CED5A
@  #06 @010   ----------------------------------------
 .byte   PATT
  .word Label_8CED12
@  #06 @011   ----------------------------------------
 .byte   PATT
  .word Label_8CED28
@  #06 @012   ----------------------------------------
 .byte   PATT
  .word Label_8CED44
@  #06 @013   ----------------------------------------
 .byte   PATT
  .word Label_8CED5A
@  #06 @014   ----------------------------------------
 .byte   PATT
  .word Label_8CED12
@  #06 @015   ----------------------------------------
 .byte   PATT
  .word Label_8CED28
@  #06 @016   ----------------------------------------
 .byte   VOICE , 0
 .byte   VOL , 39*song50_mvl/mxv
 .byte   PAN , c_v+0
 .byte   N12 ,GsM2 ,v108
 .byte   W12
 .byte   AnM2 ,v044
 .byte   W12
 .byte   AnM2 ,v068
 .byte   W12
 .byte   AnM2 ,v044
 .byte   W12
 .byte   AnM2 ,v068
 .byte   W12
 .byte   AnM2 ,v044
 .byte   W12
 .byte   N12
 .byte   W12
 .byte   GOTO
  .word Label_8CECF7
 .byte   FINE

@**************** Track 7 (Midi-Chn.6) ****************@

song50_007:
@  #07 @000   ----------------------------------------
 .byte   KEYSH , song50_key+0
 .byte   W84
Label_8CEDCC:
 .byte   W84
@  #07 @001   ----------------------------------------
 .byte   W84
 .byte   W84
@  #07 @002   ----------------------------------------
 .byte   W84
 .byte   W84
@  #07 @003   ----------------------------------------
 .byte   W84
 .byte   VOICE , 10
 .byte   W12
@  #07 @004   ----------------------------------------
 .byte   VOL , 35*song50_mvl/mxv
 .byte   W12
 .byte   PAN , c_v-20
 .byte   W60
Label_8CEDDB:
 .byte   N23 ,Gn2 ,v080
 .byte   W24
@  #07 @005   ----------------------------------------
 .byte   N23
 .byte   W24
 .byte   N32
 .byte   W36
 .byte   PEND 
Label_8CEDE4:
 .byte   N23 ,Gn2 ,v080
 .byte   W24
 .byte   N23
 .byte   W24
@  #07 @006   ----------------------------------------
 .byte   N32 ,Gs2
 .byte   W36
 .byte   PEND 
@  #07 @007   ----------------------------------------
 .byte   PATT
  .word Label_8CEDDB
@  #07 @008   ----------------------------------------
 .byte   PATT
  .word Label_8CEDE4
@  #07 @009   ----------------------------------------
Label_8CEDF8:
 .byte   N23 ,As2 ,v080
 .byte   W24
 .byte   N23
 .byte   W24
 .byte   N32
 .byte   W36
 .byte   PEND 
 .byte   N23
 .byte   W24
@  #07 @010   ----------------------------------------
 .byte   N23
 .byte   W24
 .byte   N32 ,Bn2
 .byte   W36
@  #07 @011   ----------------------------------------
 .byte   PATT
  .word Label_8CEDF8
@  #07 @012   ----------------------------------------
 .byte   N23 ,As2 ,v080
 .byte   W24
 .byte   N23
 .byte   W24
 .byte   N36 ,Gs2
 .byte   W36
 .byte   W84
@  #07 @013   ----------------------------------------
 .byte   GOTO
  .word Label_8CEDCC
 .byte   FINE

@******************************************************@
	.align	2

song50:
	.byte	7	@ NumTrks
	.byte	0	@ NumBlks
	.byte	song50_pri	@ Priority
	.byte	song50_rev	@ Reverb.
    
	.word	song50_grp
    
	.word	song50_001
	.word	song50_002
	.word	song50_003
	.word	song50_004
	.word	song50_005
	.word	song50_006
	.word	song50_007

	.end
