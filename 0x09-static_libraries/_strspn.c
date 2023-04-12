#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to search
 * @accept: The prefix substring
 *
 * Return: The number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    char *p, *q;

    for (p = s; *p; p++)
    {
        for (q = accept; *q; q++)
        {
            if (*p == *q)
            {
                count++;
                break;
            }
        }

        if (!*q)
        {
            break;
        }
    }

    return count;
}
