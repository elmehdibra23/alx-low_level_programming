#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The difference of the first non-matching character pair
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}
