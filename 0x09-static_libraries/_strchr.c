#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: The string to search
 * @c: The character to search for
 *
 * Return: The pointer to the first occurrence of the character, or NULL if not found
 */
char *_strchr(char *s, char c)
{
    while (*s && *s != c)
    {
        s++;
    }

    return (*s == c ? s : NULL);
}
