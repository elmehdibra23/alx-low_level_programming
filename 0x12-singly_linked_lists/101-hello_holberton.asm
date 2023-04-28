; 101-hello_holberton.asm

; Define the global 'main' symbol so the linker knows where the program entry point is
global main

; Import the printf function from the C library
extern printf

section .data
    ; Define the string 'Hello, Holberton', followed by a newline (ASCII 10) and a null terminator (ASCII 0)
    hello db 'Hello, Holberton', 10, 0

section .text
main:
    ; Prepare arguments for printf function call
    mov rax, 0                             ; Clear rax register (printf requires rax to be 0 for non-SSE calls)
    lea rdi, [rel hello]                   ; Load the effective address of the 'hello' string into rdi (1st argument)

    ; Call printf function to print the 'hello' string
    call printf

    ; Exit the program
    mov rax, 60                            ; Load the 'sys_exit' system call number (60) into rax
    xor rdi, rdi                           ; Clear rdi register (set it to 0, the exit status of the program)
    syscall                                ; Make the system call to exit the program

