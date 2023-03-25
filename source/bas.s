    .thumb
    .text
    .global BasCmd07HandlerNew
BasCmd07HandlerNew:
    mov r0, r7
    bl StartAttackVoiceCaller
    ldr r0,=BasCmd07Handler
    bx r0
StartAttackVoiceCaller:
    ldr r1,=StartAttackVoice
    bx r1
