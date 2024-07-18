	.include "MPlayDef.s"

	.equ	bgm_mns_FE08_03_grp, voicegroup000
	.equ	bgm_mns_FE08_03_pri, 10
	.equ	bgm_mns_FE08_03_rev, 128
	.equ	bgm_mns_FE08_03_mvl, 127
	.equ	bgm_mns_FE08_03_key, 0
	.equ	bgm_mns_FE08_03_tbs, 1
	.equ	bgm_mns_FE08_03_exg, 0
	.equ	bgm_mns_FE08_03_cmp, 1

	.section .rodata
	.global	bgm_mns_FE08_03
	.align	2


@**************** Track 1 (Midi-Chn.0) ****************@

bgm_mns_FE08_03_001:
@  #01 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE08_03_key+0
Label_88D862:
 .byte   TEMPO , 136*bgm_mns_FE08_03_tbs/2
 .byte   VOICE , 1
 .byte   VOL , 56*bgm_mns_FE08_03_mvl/mxv
 .byte   PAN , c_v+15
 .byte   N09 ,Cs4 ,v068
 .byte   W72
Label_88D86E:
 .byte   N09 ,Ds4 ,v080
 .byte   W24
@  #01 @001   ----------------------------------------
 .byte   En4 ,v064
 .byte   W24
 .byte   Cs4 ,v056
 .byte   W24
 .byte   PEND 
 .byte   Ds4 ,v076
 .byte   W72
@  #01 @002   ----------------------------------------
 .byte   W72
 .byte   En4 ,v064
 .byte   W72
@  #01 @003   ----------------------------------------
Label_88D880:
 .byte   N09 ,Fs4 ,v068
 .byte   W24
 .byte   Gs4 ,v076
 .byte   W24
 .byte   En4 ,v056
 .byte   W24
 .byte   PEND 
 .byte   Fs4 ,v084
 .byte   W72
@  #01 @004   ----------------------------------------
 .byte   W72
 .byte   En4 ,v060
 .byte   W72
@  #01 @005   ----------------------------------------
 .byte   Fs4 ,v076
 .byte   W24
 .byte   Gs4 ,v072
 .byte   W24
 .byte   An4 ,v056
 .byte   W24
 .byte   Gs4 ,v076
 .byte   W72
@  #01 @006   ----------------------------------------
 .byte   W24
 .byte   Fs4 ,v068
 .byte   W24
 .byte   En4 ,v048
 .byte   W24
 .byte   Fs4 ,v072
 .byte   W72
@  #01 @007   ----------------------------------------
 .byte   W72
 .byte   Ds4 ,v080
 .byte   W72
@  #01 @008   ----------------------------------------
 .byte   W72
 .byte   Cs4 ,v068
 .byte   W72
@  #01 @009   ----------------------------------------
 .byte   PATT
  .word Label_88D86E
@  #01 @010   ----------------------------------------
 .byte   N09 ,Ds4 ,v076
 .byte   W72
 .byte   W24
@  #01 @011   ----------------------------------------
 .byte   Cs4
 .byte   W24
 .byte   Ds4
 .byte   W24
 .byte   En4 ,v064
 .byte   W72
@  #01 @012   ----------------------------------------
 .byte   PATT
  .word Label_88D880
@  #01 @013   ----------------------------------------
 .byte   N09 ,Fs4 ,v084
 .byte   W72
 .byte   Fs4 ,v060
 .byte   W24
@  #01 @014   ----------------------------------------
 .byte   En4
 .byte   W24
 .byte   Ds4
 .byte   W24
 .byte   En4
 .byte   W48
@  #01 @015   ----------------------------------------
 .byte   En5
 .byte   W24
 .byte   W24
 .byte   Ds5
 .byte   W48
@  #01 @016   ----------------------------------------
 .byte   Cs5
 .byte   W72
 .byte   N09
 .byte   W24
@  #01 @017   ----------------------------------------
 .byte   Bn4
 .byte   W24
 .byte   An4
 .byte   W24
 .byte   Gs4
 .byte   W72
@  #01 @018   ----------------------------------------
 .byte   W24
 .byte   N09
 .byte   W24
 .byte   As4
 .byte   W24
 .byte   Cn5
 .byte   W72
@  #01 @019   ----------------------------------------
 .byte   W24
 .byte   Gs4
 .byte   W48
 .byte   En4 ,v064
 .byte   W24
@  #01 @020   ----------------------------------------
 .byte   Ds4 ,v068
 .byte   W24
 .byte   Cs4 ,v076
 .byte   W24
 .byte   Bn3
 .byte   W24
 .byte   An3 ,v068
 .byte   W24
@  #01 @021   ----------------------------------------
 .byte   Gs3 ,v080
 .byte   W24
 .byte   An3 ,v068
 .byte   W72
@  #01 @022   ----------------------------------------
 .byte   W24
 .byte   Gs4 ,v092
 .byte   W48
 .byte   Fs4 ,v088
 .byte   W72
@  #01 @023   ----------------------------------------
 .byte   W24
 .byte   En4 ,v076
 .byte   W48
 .byte   Ds4 ,v092
 .byte   W72
@  #01 @024   ----------------------------------------
 .byte   W24
 .byte   Cs4 ,v084
 .byte   W24
 .byte   Ds4 ,v076
 .byte   W24
 .byte   En4 ,v084
 .byte   W72
@  #01 @025   ----------------------------------------
 .byte   En4 ,v064
 .byte   W24
 .byte   Fs4 ,v080
 .byte   W24
 .byte   Gs4 ,v076
 .byte   W24
 .byte   An4
 .byte   W48
@  #01 @026   ----------------------------------------
 .byte   Bn4 ,v088
 .byte   W24
 .byte   W24
 .byte   Cs5 ,v084
 .byte   W48
@  #01 @027   ----------------------------------------
 .byte   Cs5 ,v080
 .byte   W72
 .byte   W24
@  #01 @028   ----------------------------------------
 .byte   Ds5 ,v076
 .byte   W48
 .byte   Cn5 ,v072
 .byte   W48
@  #01 @029   ----------------------------------------
 .byte   Gs4 ,v084
 .byte   W24
 .byte   W72
@  #01 @030   ----------------------------------------
 .byte   GOTO
  .word Label_88D862
 .byte   FINE

@**************** Track 2 (Midi-Chn.1) ****************@

bgm_mns_FE08_03_002:
@  #02 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE08_03_key+0
Label_88D940:
 .byte   VOICE , 1
 .byte   VOL , 11*bgm_mns_FE08_03_mvl/mxv
 .byte   PAN , c_v+63
 .byte   W08
 .byte   N09 ,Cs4 ,v068
 .byte   W64
Label_88D94B:
 .byte   W08
 .byte   N09 ,Ds4 ,v080
 .byte   W24
@  #02 @001   ----------------------------------------
 .byte   En4 ,v064
 .byte   W24
 .byte   Cs4 ,v056
 .byte   W16
 .byte   PEND 
 .byte   W08
 .byte   Ds4 ,v076
 .byte   W64
@  #02 @002   ----------------------------------------
 .byte   W72
 .byte   W08
 .byte   En4 ,v064
 .byte   W64
@  #02 @003   ----------------------------------------
Label_88D960:
 .byte   W08
 .byte   N09 ,Fs4 ,v068
 .byte   W24
 .byte   Gs4 ,v076
 .byte   W24
 .byte   En4 ,v056
 .byte   W16
 .byte   PEND 
 .byte   W08
 .byte   Fs4 ,v084
 .byte   W64
@  #02 @004   ----------------------------------------
 .byte   W72
 .byte   W08
 .byte   En4 ,v060
 .byte   W64
@  #02 @005   ----------------------------------------
 .byte   W08
 .byte   Fs4 ,v076
 .byte   W24
 .byte   Gs4 ,v072
 .byte   W24
 .byte   An4 ,v056
 .byte   W16
 .byte   W08
 .byte   Gs4 ,v076
 .byte   W64
@  #02 @006   ----------------------------------------
 .byte   W32
 .byte   Fs4 ,v068
 .byte   W24
 .byte   En4 ,v048
 .byte   W16
 .byte   W08
 .byte   Fs4 ,v072
 .byte   W64
@  #02 @007   ----------------------------------------
 .byte   W72
 .byte   W08
 .byte   Ds4 ,v080
 .byte   W64
@  #02 @008   ----------------------------------------
 .byte   W72
 .byte   W08
 .byte   Cs4 ,v068
 .byte   W64
@  #02 @009   ----------------------------------------
 .byte   PATT
  .word Label_88D94B
@  #02 @010   ----------------------------------------
 .byte   W08
 .byte   N09 ,Ds4 ,v076
 .byte   W64
 .byte   W32
@  #02 @011   ----------------------------------------
 .byte   Cs4
 .byte   W24
 .byte   Ds4
 .byte   W16
 .byte   W08
 .byte   En4 ,v064
 .byte   W64
@  #02 @012   ----------------------------------------
 .byte   PATT
  .word Label_88D960
@  #02 @013   ----------------------------------------
 .byte   W08
 .byte   N09 ,Fs4 ,v084
 .byte   W64
 .byte   W08
 .byte   Fs4 ,v060
 .byte   W24
@  #02 @014   ----------------------------------------
 .byte   En4
 .byte   W24
 .byte   Ds4
 .byte   W16
 .byte   W08
 .byte   En4
 .byte   W48
@  #02 @015   ----------------------------------------
 .byte   En5
 .byte   W16
 .byte   W32
 .byte   Ds5
 .byte   W40
 .byte   W08
@  #02 @016   ----------------------------------------
 .byte   Cs5
 .byte   W64
 .byte   W08
 .byte   N09
 .byte   W24
@  #02 @017   ----------------------------------------
 .byte   Bn4
 .byte   W24
 .byte   An4
 .byte   W16
 .byte   W08
 .byte   Gs4
 .byte   W64
@  #02 @018   ----------------------------------------
 .byte   W32
 .byte   N09
 .byte   W24
 .byte   As4
 .byte   W16
 .byte   W08
 .byte   Cn5
 .byte   W64
@  #02 @019   ----------------------------------------
 .byte   W32
 .byte   Gs4
 .byte   W40
 .byte   W08
 .byte   En4 ,v064
 .byte   W24
@  #02 @020   ----------------------------------------
 .byte   Ds4 ,v068
 .byte   W24
 .byte   Cs4 ,v076
 .byte   W16
 .byte   W08
 .byte   Bn3
 .byte   W24
 .byte   An3 ,v068
 .byte   W24
@  #02 @021   ----------------------------------------
 .byte   Gs3 ,v080
 .byte   W16
 .byte   W08
 .byte   An3 ,v068
 .byte   W64
 .byte   W32
@  #02 @022   ----------------------------------------
 .byte   Gs4 ,v092
 .byte   W40
 .byte   W08
 .byte   Fs4 ,v088
 .byte   W64
@  #02 @023   ----------------------------------------
 .byte   W32
 .byte   En4 ,v076
 .byte   W40
 .byte   W08
 .byte   Ds4 ,v092
 .byte   W64
@  #02 @024   ----------------------------------------
 .byte   W32
 .byte   Cs4 ,v084
 .byte   W24
 .byte   Ds4 ,v076
 .byte   W16
 .byte   W08
 .byte   En4 ,v084
 .byte   W64
@  #02 @025   ----------------------------------------
 .byte   W08
 .byte   En4 ,v064
 .byte   W24
 .byte   Fs4 ,v080
 .byte   W24
 .byte   Gs4 ,v076
 .byte   W16
 .byte   W08
 .byte   An4
 .byte   W48
@  #02 @026   ----------------------------------------
 .byte   Bn4 ,v088
 .byte   W16
 .byte   W32
 .byte   Cs5 ,v084
 .byte   W40
 .byte   W08
@  #02 @027   ----------------------------------------
 .byte   Cs5 ,v080
 .byte   W64
 .byte   W32
@  #02 @028   ----------------------------------------
 .byte   Ds5 ,v076
 .byte   W40
 .byte   W08
 .byte   Cn5 ,v072
 .byte   W48
@  #02 @029   ----------------------------------------
 .byte   Gs4 ,v084
 .byte   W16
 .byte   W72
 .byte   GOTO
  .word Label_88D940
 .byte   FINE

@**************** Track 3 (Midi-Chn.2) ****************@

bgm_mns_FE08_03_003:
@  #03 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE08_03_key+0
Label_88DA3B:
 .byte   VOICE , 1
 .byte   VOL , 56*bgm_mns_FE08_03_mvl/mxv
 .byte   PAN , c_v-15
 .byte   N09 ,Cs3 ,v084
 .byte   W24
 .byte   Gs3
 .byte   W24
 .byte   Cs4 ,v068
 .byte   W24
 .byte   W72
@  #03 @001   ----------------------------------------
Label_88DA4B:
 .byte   N09 ,Cs3 ,v048
 .byte   W24
 .byte   An3 ,v056
 .byte   W24
 .byte   Cs4 ,v068
 .byte   W24
 .byte   PEND 
 .byte   W72
@  #03 @002   ----------------------------------------
Label_88DA57:
 .byte   N09 ,Cs3 ,v080
 .byte   W24
 .byte   Gs3 ,v092
 .byte   W24
 .byte   Cs4 ,v060
 .byte   W24
 .byte   PEND 
 .byte   W72
@  #03 @003   ----------------------------------------
Label_88DA63:
 .byte   N09 ,Cs3 ,v048
 .byte   W24
 .byte   An3 ,v064
 .byte   W24
 .byte   Cs4 ,v068
 .byte   W24
 .byte   PEND 
 .byte   W72
@  #03 @004   ----------------------------------------
Label_88DA6F:
 .byte   N09 ,An2 ,v068
 .byte   W24
 .byte   En3
 .byte   W24
 .byte   An3 ,v056
 .byte   W24
 .byte   PEND 
 .byte   W72
@  #03 @005   ----------------------------------------
 .byte   An2 ,v064
 .byte   W24
 .byte   En3 ,v072
 .byte   W24
 .byte   An3 ,v064
 .byte   W24
 .byte   W72
@  #03 @006   ----------------------------------------
Label_88DA84:
 .byte   N09 ,Gs2 ,v092
 .byte   W24
 .byte   Ds3 ,v076
 .byte   W24
 .byte   Gs3
 .byte   W24
 .byte   PEND 
 .byte   W72
@  #03 @007   ----------------------------------------
Label_88DA8F:
 .byte   N09 ,Gs2 ,v084
 .byte   W24
 .byte   Ds3 ,v060
 .byte   W24
 .byte   Gs3 ,v064
 .byte   W24
 .byte   PEND 
 .byte   Cn4 ,v052
 .byte   W24
@  #03 @008   ----------------------------------------
 .byte   Ds4 ,v076
 .byte   W24
 .byte   Gs4 ,v056
 .byte   W24
 .byte   Cs3 ,v084
 .byte   W24
 .byte   Gs3
 .byte   W24
@  #03 @009   ----------------------------------------
 .byte   Cs4 ,v068
 .byte   W24
Label_88DAAB:
 .byte   N09 ,Gs3 ,v068
 .byte   W24
 .byte   Cs3
 .byte   W48
 .byte   PEND 
@  #03 @010   ----------------------------------------
 .byte   PATT
  .word Label_88DA4B
@  #03 @011   ----------------------------------------
 .byte   N09 ,An3 ,v068
 .byte   W24
 .byte   Cs3
 .byte   W48
@  #03 @012   ----------------------------------------
 .byte   PATT
  .word Label_88DA57
@  #03 @013   ----------------------------------------
 .byte   PATT
  .word Label_88DAAB
@  #03 @014   ----------------------------------------
 .byte   PATT
  .word Label_88DA63
@  #03 @015   ----------------------------------------
 .byte   N09 ,An3 ,v068
 .byte   W24
 .byte   Cs3
 .byte   W24
 .byte   Bn2
 .byte   W24
@  #03 @016   ----------------------------------------
 .byte   PATT
  .word Label_88DA6F
@  #03 @017   ----------------------------------------
 .byte   N09 ,En3 ,v068
 .byte   W24
 .byte   An2
 .byte   W24
 .byte   En2
 .byte   W24
 .byte   Fs2 ,v064
 .byte   W24
@  #03 @018   ----------------------------------------
 .byte   Cs3 ,v072
 .byte   W24
 .byte   An3 ,v064
 .byte   W24
 .byte   Cs3
 .byte   W24
 .byte   An2
 .byte   W24
@  #03 @019   ----------------------------------------
 .byte   En2
 .byte   W24
@  #03 @020   ----------------------------------------
 .byte   PATT
  .word Label_88DA84
@  #03 @021   ----------------------------------------
 .byte   N09 ,Ds3 ,v064
 .byte   W24
 .byte   Gs2
 .byte   W24
 .byte   Ds3
 .byte   W24
@  #03 @022   ----------------------------------------
 .byte   PATT
  .word Label_88DA8F
@  #03 @023   ----------------------------------------
 .byte   N09 ,Ds3 ,v052
 .byte   W24
 .byte   Cn3 ,v076
 .byte   W24
 .byte   Gs2 ,v056
 .byte   W24
 .byte   Cs3 ,v076
 .byte   W24
@  #03 @024   ----------------------------------------
 .byte   En3 ,v084
 .byte   W24
 .byte   Gs3
 .byte   W24
 .byte   W72
@  #03 @025   ----------------------------------------
 .byte   Fs2 ,v092
 .byte   W24
 .byte   Cs3
 .byte   W24
 .byte   Gs3
 .byte   W24
 .byte   W24
@  #03 @026   ----------------------------------------
 .byte   Fs3 ,v080
 .byte   W48
 .byte   Bn2
 .byte   W24
 .byte   Fs3 ,v076
 .byte   W24
@  #03 @027   ----------------------------------------
 .byte   Bn3 ,v072
 .byte   W24
 .byte   W72
@  #03 @028   ----------------------------------------
 .byte   Gs2 ,v092
 .byte   W24
 .byte   Ds3 ,v064
 .byte   W24
 .byte   Gs3 ,v072
 .byte   W24
 .byte   W72
@  #03 @029   ----------------------------------------
 .byte   An2
 .byte   W24
 .byte   En3 ,v080
 .byte   W24
 .byte   An3 ,v072
 .byte   W24
 .byte   W24
@  #03 @030   ----------------------------------------
 .byte   En3
 .byte   W24
 .byte   Cs3 ,v060
 .byte   W24
 .byte   Fs2 ,v092
 .byte   W24
 .byte   Cs3 ,v076
 .byte   W24
@  #03 @031   ----------------------------------------
 .byte   An3
 .byte   W24
 .byte   Cs3
 .byte   W24
 .byte   Fs2 ,v092
 .byte   W24
 .byte   Cs3 ,v076
 .byte   W24
@  #03 @032   ----------------------------------------
 .byte   Ds2 ,v084
 .byte   W24
 .byte   Gn2 ,v064
 .byte   W24
 .byte   Cs3
 .byte   W24
 .byte   Ds3
 .byte   W24
@  #03 @033   ----------------------------------------
 .byte   Gn3
 .byte   W24
 .byte   Ds3 ,v076
 .byte   W24
 .byte   Gs2 ,v084
 .byte   W24
 .byte   Ds3 ,v076
 .byte   W24
@  #03 @034   ----------------------------------------
 .byte   Cn4 ,v068
 .byte   W24
 .byte   Gs3 ,v076
 .byte   W24
 .byte   Ds3
 .byte   W24
 .byte   Gs2
 .byte   W24
@  #03 @035   ----------------------------------------
 .byte   GOTO
  .word Label_88DA3B
 .byte   FINE

@**************** Track 4 (Midi-Chn.3) ****************@

bgm_mns_FE08_03_004:
@  #04 @000   ----------------------------------------
 .byte   KEYSH , bgm_mns_FE08_03_key+0
Label_88DB78:
 .byte   VOICE , 1
 .byte   VOL , 11*bgm_mns_FE08_03_mvl/mxv
 .byte   PAN , c_v-64
 .byte   W08
 .byte   N09 ,Cs3 ,v084
 .byte   W24
 .byte   Gs3
 .byte   W24
 .byte   Cs4 ,v068
 .byte   W16
 .byte   W72
@  #04 @001   ----------------------------------------
Label_88DB89:
 .byte   W08
 .byte   N09 ,Cs3 ,v048
 .byte   W24
 .byte   An3 ,v056
 .byte   W24
 .byte   Cs4 ,v068
 .byte   W16
 .byte   PEND 
 .byte   W72
@  #04 @002   ----------------------------------------
Label_88DB96:
 .byte   W08
 .byte   N09 ,Cs3 ,v080
 .byte   W24
 .byte   Gs3 ,v092
 .byte   W24
 .byte   Cs4 ,v060
 .byte   W16
 .byte   PEND 
 .byte   W72
@  #04 @003   ----------------------------------------
Label_88DBA3:
 .byte   W08
 .byte   N09 ,Cs3 ,v048
 .byte   W24
 .byte   An3 ,v064
 .byte   W24
 .byte   Cs4 ,v068
 .byte   W16
 .byte   PEND 
 .byte   W72
@  #04 @004   ----------------------------------------
Label_88DBB0:
 .byte   W08
 .byte   N09 ,An2 ,v068
 .byte   W24
 .byte   En3
 .byte   W24
 .byte   An3 ,v056
 .byte   W16
 .byte   PEND 
 .byte   W72
@  #04 @005   ----------------------------------------
 .byte   W08
 .byte   An2 ,v064
 .byte   W24
 .byte   En3 ,v072
 .byte   W24
 .byte   An3 ,v064
 .byte   W16
 .byte   W72
@  #04 @006   ----------------------------------------
Label_88DBC7:
 .byte   W08
 .byte   N09 ,Gs2 ,v092
 .byte   W24
 .byte   Ds3 ,v076
 .byte   W24
 .byte   Gs3
 .byte   W16
 .byte   PEND 
 .byte   W72
@  #04 @007   ----------------------------------------
Label_88DBD3:
 .byte   W08
 .byte   N09 ,Gs2 ,v084
 .byte   W24
 .byte   Ds3 ,v060
 .byte   W24
 .byte   Gs3 ,v064
 .byte   W16
 .byte   PEND 
 .byte   W08
 .byte   Cn4 ,v052
 .byte   W24
@  #04 @008   ----------------------------------------
 .byte   Ds4 ,v076
 .byte   W24
 .byte   Gs4 ,v056
 .byte   W16
 .byte   W08
 .byte   Cs3 ,v084
 .byte   W24
 .byte   Gs3
 .byte   W24
@  #04 @009   ----------------------------------------
 .byte   Cs4 ,v068
 .byte   W16
Label_88DBF2:
 .byte   W08
 .byte   N09 ,Gs3 ,v068
 .byte   W24
 .byte   Cs3
 .byte   W40
 .byte   PEND 
@  #04 @010   ----------------------------------------
 .byte   PATT
  .word Label_88DB89
@  #04 @011   ----------------------------------------
 .byte   W08
 .byte   N09 ,An3 ,v068
 .byte   W24
 .byte   Cs3
 .byte   W40
@  #04 @012   ----------------------------------------
 .byte   PATT
  .word Label_88DB96
@  #04 @013   ----------------------------------------
 .byte   PATT
  .word Label_88DBF2
@  #04 @014   ----------------------------------------
 .byte   PATT
  .word Label_88DBA3
@  #04 @015   ----------------------------------------
 .byte   W08
 .byte   N09 ,An3 ,v068
 .byte   W24
 .byte   Cs3
 .byte   W24
 .byte   Bn2
 .byte   W16
@  #04 @016   ----------------------------------------
 .byte   PATT
  .word Label_88DBB0
@  #04 @017   ----------------------------------------
 .byte   W08
 .byte   N09 ,En3 ,v068
 .byte   W24
 .byte   An2
 .byte   W24
 .byte   En2
 .byte   W16
 .byte   W08
 .byte   Fs2 ,v064
 .byte   W24
@  #04 @018   ----------------------------------------
 .byte   Cs3 ,v072
 .byte   W24
 .byte   An3 ,v064
 .byte   W16
 .byte   W08
 .byte   Cs3
 .byte   W24
 .byte   An2
 .byte   W24
@  #04 @019   ----------------------------------------
 .byte   En2
 .byte   W16
@  #04 @020   ----------------------------------------
 .byte   PATT
  .word Label_88DBC7
@  #04 @021   ----------------------------------------
 .byte   W08
 .byte   N09 ,Ds3 ,v064
 .byte   W24
 .byte   Gs2
 .byte   W24
 .byte   Ds3
 .byte   W16
@  #04 @022   ----------------------------------------
 .byte   PATT
  .word Label_88DBD3
@  #04 @023   ----------------------------------------
 .byte   W08
 .byte   N09 ,Ds3 ,v052
 .byte   W24
 .byte   Cn3 ,v076
 .byte   W24
 .byte   Gs2 ,v056
 .byte   W16
 .byte   W08
 .byte   Cs3 ,v076
 .byte   W24
@  #04 @024   ----------------------------------------
 .byte   En3 ,v084
 .byte   W24
 .byte   Gs3
 .byte   W16
 .byte   W72
@  #04 @025   ----------------------------------------
 .byte   W08
 .byte   Fs2 ,v092
 .byte   W24
 .byte   Cs3
 .byte   W24
 .byte   Gs3
 .byte   W16
 .byte   W32
@  #04 @026   ----------------------------------------
 .byte   Fs3 ,v080
 .byte   W40
 .byte   W08
 .byte   Bn2
 .byte   W24
 .byte   Fs3 ,v076
 .byte   W24
@  #04 @027   ----------------------------------------
 .byte   Bn3 ,v072
 .byte   W16
 .byte   W72
 .byte   W08
@  #04 @028   ----------------------------------------
 .byte   Gs2 ,v092
 .byte   W24
 .byte   Ds3 ,v064
 .byte   W24
 .byte   Gs3 ,v072
 .byte   W16
 .byte   W72
@  #04 @029   ----------------------------------------
 .byte   W08
 .byte   An2
 .byte   W24
 .byte   En3 ,v080
 .byte   W24
 .byte   An3 ,v072
 .byte   W16
 .byte   W32
@  #04 @030   ----------------------------------------
 .byte   En3
 .byte   W24
 .byte   Cs3 ,v060
 .byte   W16
 .byte   W08
 .byte   Fs2 ,v092
 .byte   W24
 .byte   Cs3 ,v076
 .byte   W24
@  #04 @031   ----------------------------------------
 .byte   An3
 .byte   W16
 .byte   W08
 .byte   Cs3
 .byte   W24
 .byte   Fs2 ,v092
 .byte   W24
 .byte   Cs3 ,v076
 .byte   W16
 .byte   W08
@  #04 @032   ----------------------------------------
 .byte   Ds2 ,v084
 .byte   W24
 .byte   Gn2 ,v064
 .byte   W24
 .byte   Cs3
 .byte   W16
 .byte   W08
 .byte   Ds3
 .byte   W24
@  #04 @033   ----------------------------------------
 .byte   Gn3
 .byte   W24
 .byte   Ds3 ,v076
 .byte   W16
 .byte   W08
 .byte   Gs2 ,v084
 .byte   W24
 .byte   Ds3 ,v076
 .byte   W24
@  #04 @034   ----------------------------------------
 .byte   Cn4 ,v068
 .byte   W16
 .byte   W08
 .byte   Gs3 ,v076
 .byte   W24
 .byte   Ds3
 .byte   W24
 .byte   Gs2
 .byte   W16
 .byte   GOTO
  .word Label_88DB78
 .byte   FINE

@******************************************************@
	.align	2

bgm_mns_FE08_03:
	.byte	4	@ NumTrks
	.byte	0	@ NumBlks
	.byte	bgm_mns_FE08_03_pri	@ Priority
	.byte	bgm_mns_FE08_03_rev	@ Reverb.
    
	.word	bgm_mns_FE08_03_grp
    
	.word	bgm_mns_FE08_03_001
	.word	bgm_mns_FE08_03_002
	.word	bgm_mns_FE08_03_003
	.word	bgm_mns_FE08_03_004

	.end
