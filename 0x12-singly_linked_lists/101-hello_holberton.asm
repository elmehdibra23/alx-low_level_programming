; 101-hello_holberton.asm
global main
extern printf
section .data
hello db 'Hello, Holberton', 10, 0 ; Add 10 for newline character and 0 for null terminator
section .text
main:
; Prepare arguments for printf
mov rax, 0                  ; Zero out rax
lea rdi, [rel hello]        ; Address of the string
call printf                 ; Call printf function
; Exit the program
mov rax, 60                 ; System call: exit
xor rdi, rdi                ; Exit status: 0
syscall
