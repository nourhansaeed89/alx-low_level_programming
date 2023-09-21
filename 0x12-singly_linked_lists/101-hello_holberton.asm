section		.text
	global	main
	extern	printf

main:
	mov	edi, msg
	mov	eax, 0
	call	prinf
	push	rdi

section		.data
	msg db 'Hello, Ahmed', 0xa, 0
