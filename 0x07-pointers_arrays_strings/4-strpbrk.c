#include "main.h"
#include <unistd.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    char *start = accept;

    while (*s)
    {
        while (*accept)
        {
            if (*s == *accept)
            {
                return s;
            }
            accept++;
        }
        s++;
        accept = start;
    }

    return NULL;
}

