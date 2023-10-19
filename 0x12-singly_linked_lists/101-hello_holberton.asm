section .data
    hello db "Hello, Holberton", 0    ; Null-terminated string

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello           ; Format string
    call printf
    add rsp, 8
    pop rbp
    ret
