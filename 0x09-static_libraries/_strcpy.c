#include "main.h"
/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *temp = dest;

    while (*src)
    {
        *temp++ = *src++;
    }

    *temp = '\0';

    return dest;
}
