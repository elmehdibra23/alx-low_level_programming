# 0x09. Static Libraries

This project focuses on creating a static library with a set of C functions. The static library includes the following functions:

- _putchar
- _islower
- _isalpha
- _abs
- _isupper
- _isdigit
- _strlen
- _puts
- _strcpy
- _atoi
- _strcat
- _strncat
- _strncpy
- _strcmp
- _memset
- _memcpy
- _strchr
- _strspn
- _strpbrk
- _strstr

## Usage

To compile and use the static library, run the following commands:

```bash
gcc -c *.c
ar -rc libmy.a *.o
gcc main.c -L. -lmy -o output
./output
Replace main.c and output with your specific main file and output file names, respectively.
