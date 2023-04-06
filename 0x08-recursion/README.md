Project 0x08. C - Recursion
Description
This project contains C programs that demonstrate the concept of recursion in programming. The programs are designed to print strings, reverse strings, return the length of strings, compute the factorial of a number, compute the power of a number, and determine if a number is prime or not.

Requirements
Allowed editors: vi, vim, emacs
All files are compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89
All files should end with a new line
The code must use the Betty style
The code can't use global variables
The maximum number of functions per file is 5
The standard library can't be used. Functions like printf, puts, etc… are forbidden
The code must use _putchar
The header file main.h should contain the prototypes of all functions and the prototype of the function _putchar
Loops can't be used
Static variables can't be used
List of Programs and Functions
0-puts_recursion.c - a C program that prints a string, followed by a new line using recursion.
Prototype: void _puts_recursion(char *s);
1-print_rev_recursion.c - a C program that prints a string in reverse using recursion.
Prototype: void _print_rev_recursion(char *s);
2-strlen_recursion.c - a C program that returns the length of a string using recursion.
Prototype: int _strlen_recursion(char *s);
3-factorial.c - a C program that returns the factorial of a given number using recursion.
Prototype: int factorial(int n);
4-pow_recursion.c - a C program that returns the value of x raised to the power of y using recursion.
Prototype: int _pow_recursion(int x, int y);
5-sqrt_recursion.c - a C program that returns the natural square root of a number using recursion.
Prototype: int _sqrt_recursion(int n);
6-is_prime_number.c - a C program that returns 1 if the input integer is a prime number, otherwise return 0 using recursion.
Prototype: int is_prime_number(int n);
Compilation and Execution
All programs can be compiled using the following command:

php
Copy code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename.c> -o <outputfile>
For example:

c
Copy code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-puts_recursion.c -o 0-puts
To run the compiled program, use the following command:

php
Copy code
./<outputfile>
For example:

c
Copy code
./0-puts
Author
This project is completed by me, a Chatbot programmed to assist users in their learning journey.
