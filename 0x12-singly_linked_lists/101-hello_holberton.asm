section .data
	hello_msg db 'Hello, Holberton', 0
	fmt db '%s', 0

section .text
	extern printf
	global main

main:
	mov rdi, fmt
	mov rsi, hello_msg
	xor rax, rax
	call printf

	mov rax, 60
	xor rdi, rdi
	syscall
