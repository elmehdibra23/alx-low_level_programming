#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer represented by the string
 */
int _atoi(char *s)
{
    int num = 0, sign = 1;
    unsigned int digit;
    char *p = s;

    while (*p && (*p < '0' || *p > '9'))
    {
        if (*p == '-')
            sign *= -1;
        p++;
    }

    while (*p && *p >= '0' && *p <= '9')
    {
        digit = *p - '0';
        num = num * 10 + digit;
        p++;
    }

    return (num * sign);
}
