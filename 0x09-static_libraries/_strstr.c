#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: The string to search
 * @needle: The substring to search for
 *
 * Return: The pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
    char *p, *q;

    if (!*needle)
    {
        return haystack;
    }

    while (*haystack)
    {
        p = haystack;
        q = needle;

        while (*q && *p == *q)
        {
            p++;
            q++;
        }

        if (!*q)
        {
            return haystack;
        }

        haystack++;
    }

    return NULL;
}
