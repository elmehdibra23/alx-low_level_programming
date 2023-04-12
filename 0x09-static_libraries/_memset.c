#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: The memory area to fill
 * @b: The constant byte
 * @n: The number of bytes to fill
 *
 * Return: The pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *temp = s;

    while (n--)
    {
        *temp++ = b;
    }


    return s;
}
