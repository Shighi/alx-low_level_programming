section .data
	message db "Hello, Holberton", 10, 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, message
	xor eax, eax
	call printf
	pop rbp
	mov eax, 0
	ret
