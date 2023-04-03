#include "main.h"
#include <unistd.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *p_haystack;
    char *p_needle;

    if (*needle == '\0')
    {
        return haystack;
    }

    while (*haystack)
    {
        p_haystack = haystack;
        p_needle = needle;

        while (*p_needle && *p_haystack == *p_needle)
        {
            p_haystack++;
            p_needle++;
        }

        if (*p_needle == '\0')
        {
            return haystack;
        }

        haystack++;
    }

    return NULL;
}

