section .text
global ft_strcmp

ft_strcmp:
    xor rax, rax
    jmp loop_strcmp

loop_strcmp:
    mov cl, byte [rsi + rax]
    cmp cl, byte [rdi + rax]
    jne exit
    cmp byte [rsi + rax], 0
    je exit_equal
    inc rax
    jmp loop_strcmp

exit:
    mov dl, byte [rdi + rax]
    sub dl, cl
    movsx rax, dl
    ret

exit_equal:
    xor rax, rax
    ret

section .note.GNU-stack  noexec   ; Désactive l'exécution de la pile
