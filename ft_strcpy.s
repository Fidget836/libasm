section .text
global ft_strcpy

ft_strcpy:
    mov rax, 0
    jmp loop_strcpy

loop_strcpy:
    cmp BYTE [rsi + rax], 0
    je exit
    mov cl, [rsi + rax]         ; cl = rsi[rax]
    mov [rdi + rax], cl         ; rdi[rax] = cl
    inc rax
    jmp loop_strcpy

exit:
    mov cl, 0
    mov [rdi + rax], cl
    mov rax, rdi
    ret

section .note.GNU-stack  noexec   ; Désactive l'exécution de la pile
