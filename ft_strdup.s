section .text
global ft_strdup
extern __errno_location
extern malloc
extern ft_strlen
extern ft_strcpy

ft_strdup:
    cmp rdi, 0
    je exit
    call ft_strlen
    push rdi
    inc rax
    mov rdi, rax
    call malloc WRT ..plt
    cmp rax, 0
    jz error
    mov rdi, rax
    pop rsi
    call ft_strcpy
    ret

exit:
    mov rax, 0
    ret

error:
    neg rax
    mov rdi, rax
    call __errno_location WRT ..plt
    ;mov [rax], rdi
    mov rax, -1
    ret

section .note.GNU-stack  noexec