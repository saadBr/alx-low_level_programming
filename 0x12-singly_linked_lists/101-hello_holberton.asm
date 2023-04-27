section .text;
default rel;
extern printf;
global main;
main;
push rbp;
mov rdi, format;
mov rsi, string;
mov rax, 0;
call printf wrt ..plt;
pop rbp;
mov rax, 0;
ret;
section .data;
string: db "Hello, Holberton", 10, 0
format: db "%s", 0
