#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
    char *temp = dest;

    while (*temp)
    {
        temp++;
    }

    while (*src)
    {
        *temp++ = *src++;
    }

    *temp = '\0';

    return dest;
}
