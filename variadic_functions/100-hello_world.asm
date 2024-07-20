section .data:
        message: db "Hello, World", 0xA
        message_length: equ $ - message

global main

section .text

main:
	mov rax, 0x1
	mov rdi, 0x1
	mov rsi, message
	mov rdx, message_length
	SYSCALL

	mov rax, 0x3C
	mov rdi, 0x0
	SYSCALL
