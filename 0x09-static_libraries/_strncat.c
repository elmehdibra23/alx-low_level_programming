#include "main.h"
/**
 * _strncat - concatenates two strings using n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to use from src
 *
 * Return: The pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
    char *temp = dest;

    while (*temp)
    {
        temp++;
    }

    while (n > 0 && *src)
    {
        *temp++ = *src++;
        n--;
    }

    *temp = '\0';

    return dest;
}
