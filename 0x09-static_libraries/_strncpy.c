#include "main.h"
/**
 * _strncpy - copies n bytes of the string pointed to by src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to use from src
 *
 * Return: The pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *temp = dest;

    while (n > 0 && *src)
    {
        *temp++ = *src++;
        n--;
    }

    while (n > 0)
    {
        *temp++ = '\0';
        n--;
    }

    return dest;
}
