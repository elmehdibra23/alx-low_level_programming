#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The set of bytes to search for
 *
 * Return: The pointer to the byte in s that matches one of the bytes in accept, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
    char *p;

    while (*s)
    {
        for (p = accept; *p; p++)
        {
            if (*s == *p)
            {
                return s;
            }
        }
        s++;
    }

    return NULL;
}
