section .data
    hello db 'Hello, Holberton', 10, 0

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov rdi, hello ; The format string to print
    xor rax, rax   ; We need to zero out rax, according to ABI
    ; Call printf
    call printf

    ; Prepare to end the program
    mov eax, 60    ; syscall number for exit
    xor edi, edi   ; return 0
    syscall
