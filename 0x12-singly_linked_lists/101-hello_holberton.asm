section .text
    global main
    extern printf

main:
    mov edi, msg
    mov eax, 0
    call printf

    ; Exit the program
    mov eax, 60
    xor edi, edi
    syscall

section .data
    msg db 'Hello, Holberton', 0xa, 0
