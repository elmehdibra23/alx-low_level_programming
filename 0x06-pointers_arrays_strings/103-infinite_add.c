#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: pointer to result or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, n1_len, n2_len, max_len, sum, remainder = 0;

    for (n1_len = 0; n1[n1_len]; n1_len++)
        ;
    for (n2_len = 0; n2[n2_len]; n2_len++)
        ;

    max_len = n1_len > n2_len ? n1_len : n2_len;
    if (size_r <= max_len + 1)
        return (0);

    r[max_len + 1] = '\0';
    for (i = n1_len - 1, j = n2_len - 1; i >= 0 || j >= 0 || remainder; i--, j--)
    {
        sum = remainder;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';
        r[max_len--] = sum % 10 + '0';
        remainder = sum / 10;
    }
    if (max_len == 0)
        return (r + 1);
    r[max_len] = remainder + '0';
    return (r);
}
