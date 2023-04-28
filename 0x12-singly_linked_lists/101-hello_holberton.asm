; 101-hello_holberton.asm

section .data
    ; Define the string 'Hello, Holberton', followed by a newline (ASCII 10) and a null terminator (ASCII 0)
hello:  db "Hello, Holberton", 10, 0
    ; Define the format string for printf
format: db "%s", 0

section .text
    ; Define the global 'main' symbol so the linker knows where the program entry point is
    global main
    ; Import the printf function from the C library
    extern printf

main:
    ; Save the current stack frame
    push rbp
    mov rbp, rsp

    ; Prepare arguments for printf function call
    mov rsi, hello                      ; Load the 'hello' string into rsi (2nd argument)
    mov rdi, format                     ; Load the format string into rdi (1st argument)
    ; Call printf function to print the 'hello' string
    call printf

    ; Restore the previous stack frame
    pop rbp

    ; Exit the program
    mov rax, 0                          ; Set the return value to 0
    ret                                 ; Return from the 'main' function

