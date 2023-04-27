section .data
    message db "Hello, Holberton", 10, 0   ; the string to be printed
    format db "%s", 10, 0                  ; the format string for printf

section .text
    global main
    extern printf

main:
    push rbp            ; save the base pointer
    mov rbp, rsp        ; set the base pointer to the current stack pointer
    sub rsp, 8          ; allocate space on the stack for two 32-bit arguments
    lea rdi, [rel message]  ; load the address of the message into the first argument register
    mov qword [rbp-8], format    ; load the address of the format string into the second argument
    xor eax, eax        ; zero out the return value register
    call printf         ; call the printf function
    add rsp, 8          ; restore the stack pointer
    xor eax, eax        ; zero out the return value register
    leave               ; restore the base pointer and stack pointer
    ret                 ; return from main

