section		.text
	global	main
	extern	printf

main:
	mov	edi, msg
	mov	eax, 0
	call	prinf

section		.data
	msg db 'Hello, holberton', 0xa, 0
