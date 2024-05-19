section .text
global ft_strlen

ft_strlen:
	mov rax, 0
	jmp loop_count

loop_count:
	cmp BYTE [rdi + rax], 0
	je exit
	inc rax
	jmp loop_count

exit:
	ret

section .note.GNU-stack  noexec   ; Désactive l'exécution de la pile
