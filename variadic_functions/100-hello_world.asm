section .data:
        message: db "Hello, World", 0xA
        message_length: equ $ - message

global main

section .text

main:
	mov eax, 0x1
	mov ebx, 0x1
	mov ecx, message
	mov edx, message_length
	SYSCALL

	mov eax, 0x3C
	mov ebx, 0x0
	SYSCALL
