section .data
    format db "Hello, Holberton", 10, 0 ; The message with a new line

section .text
    global main
    extern printf

main:
    push format         ; Push the address of the format string
    call printf        ; Call printf function
    add rsp, 8         ; Clean up the stack

    ; Exit the program
    mov rax, 60         ; syscall number for exit (60)
    xor rdi, rdi        ; Status code 0
    syscall
