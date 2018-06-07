;;; Segment page_1 (00000000)
00000000 9D EF 00 F0 12 00 00 00 7E EF 00 F0 12 00       ........~..... 

;; fn00000E: 00000E
fn00000E proc
	MOVLW	0x06
	MOVWF	TBLPTRL,ACCESS
	MOVLW	0x00
	MOVWF	TBLPTRH,ACCESS
	MOVLW	0x00
	MOVWF	TBLPTRU,ACCESS
	MOVLB	0x00
	TBLRD*+
	MOVF	TABLAT,W,ACCESS
	MOVWF	0xC5
	TBLRD*+
	MOVF	TABLAT,W,ACCESS
	MOVWF	0xC6

l000028:
	BNZ	0x00000030

l00002A:
	TSTFSZ	0xC5

l00002C:
	BRA	0x00000030

l00002E:
	BRA	0x000000AA

l000030:
	TBLRD*+
	MOVF	TABLAT,W,ACCESS
	MOVWF	0xC0
	TBLRD*+
	MOVF	TABLAT,W,ACCESS
	MOVWF	0xC1
	TBLRD*+
	MOVF	TABLAT,W,ACCESS
	MOVWF	0xC2
	TBLRD*+
	TBLRD*+
	MOVF	TABLAT,W,ACCESS
	MOVWF	FSR0L,ACCESS
	TBLRD*+
	MOVF	TABLAT,W,ACCESS
	MOVWF	FSR0H,ACCESS
	TBLRD*+
	TBLRD*+
	TBLRD*+
	MOVF	TABLAT,W,ACCESS
	MOVWF	0xC3
	TBLRD*+
	MOVF	TABLAT,W,ACCESS
	MOVWF	0xC4
	TBLRD*+
	TBLRD*+
	MOVFF	TBLPTRL,0x00C7
	MOVFF	TBLPTRH,0x00C8
	MOVFF	TBLPTRU,0x00C9
	MOVFF	0x00C0,TBLPTRL
	MOVFF	0x00C1,TBLPTRH
	MOVFF	0x00C2,TBLPTRU
	MOVLB	0x00
	MOVF	0xC3,F

l000080:
	BNZ	0x00000086

l000082:
	MOVF	0xC4,F
	BZ	0x00000094

l000086:
	TBLRD*+
	MOVF	TABLAT,W,ACCESS
	MOVWF	POSTINC0,ACCESS
	DECF	0xC3,F
	BC	0x00000080

l000090:
	DECF	0xC4,F
	BRA	0x00000086

l000094:
	MOVFF	0x00C7,TBLPTRL
	MOVFF	0x00C8,TBLPTRH
	MOVFF	0x00C9,TBLPTRU
	MOVLB	0x00
	DECF	0xC5,F
	MOVLW	0x00
	SUBWFB	0xC6,F
	BRA	0x00000028

l0000AA:
	RETURN
0000AC                                     00 01 CA 6B             ...k
0000B0 20 0E F2 6E 84 0E F1 6E D0 8E D7 6A D6 6A 82 0E  ..n...n...j.j..
0000C0 D5 6E F2 8E 93 6A 01 0E E6 6E 02 D8 41 E9 12 00 .n...j...n..A...
0000D0 D9 CF E6 FF E1 CF D9 FF 82 E9 00 50 0B E0 00 01 ...........P....
0000E0 CA A1 07 D0 CA 91 8A 50 01 0B 02 E0 8A 8E 01 D0 .......P........
0000F0 8A 9E F3 D7 41 E9 E7 CF D9 FF 12 00 DA CF E4 FF ....A...........
000100 E2 CF DA FF E6 52 F2 A4 04 D0 F2 94 00 01 CA 81 .....R..........
000110 8A 70 E5 52 E5 CF DA FF 11 00 00 0E F3 6E 00 EE .p.R.........n..
000120 00 F0 01 0E 01 D8 12 00 EA 60 02 D0 EE 6A FC D7 .........`...j..
000130 F3 50 E9 60 12 00 EE 6A FC D7                   .P.`...j..     

;; fn0000013A: 0000013A
fn0000013A proc
	LFSR	FSR1,0x0080
	LFSR	FSR2,0x0080
	CLRF	TBLPTRU,ACCESS
	CALL	0x0000000E
	CALL	0x00000154
	CALL	0x000000AC
	BRA	0x00000148
	RETURN
	RETURN
;;; Segment config_1 (00300001)
00300001    02                                            .             
;;; Segment config_2 (00300006)
00300006                   C1                                  .        
