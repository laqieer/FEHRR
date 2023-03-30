    .thumb

    .set CHAPTER_TITLE_ID_OFFSET, 0x68

    // func_fe6_08088870:
    .section .text.expand_chapter_title_id_1
    add r0, #CHAPTER_TITLE_ID_OFFSET // 080888A0:  3037     	add r0, #55
    .section .text.expand_chapter_title_id_2
    ldrh r1, [r2] // 080888B8:  7811     	ldrb r1, [r2, #0]

    // func_fe6_080898F0:
    .section .text.expand_chapter_title_id_3
    add r0, #CHAPTER_TITLE_ID_OFFSET // 0808991E:  3037     	add r0, #55
    .section .text.expand_chapter_title_id_4
    ldrh r1, [r1] // 08089934:  7809     	ldrb r1, [r1, #0]

    // func_fe6_0808A918:
    .section .text.expand_chapter_title_id_5
    @ bl func_fe6_08070E0C // 0808A940:  F7E6 FA64	bl func_fe6_08070E0COld
	add r1, r5, #0
	add r1, #CHAPTER_TITLE_ID_OFFSET // 0808A946:  3137     	add r1, #55
	add r1, r1, r4
	strh r0, [r1] // 0808A94A:  7008     	strb r0, [r1, #0]
    .section .text.expand_chapter_title_id_6
	add r0, r5, #0 // 0808A98C:  1C28     	mov r0, r5
	add r0, #CHAPTER_TITLE_ID_OFFSET // 0808A98E:  3037     	add r0, #55
	add r0, r0, r6
	mov r1, #0xff // FIXME: mov r1, #0xffff
	strh r1, [r0] // 0808A994:  7001     	strb r1, [r0, #0]
