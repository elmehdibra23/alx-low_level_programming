#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to concatenate from s2.
 *
 * Return: A pointer to the concatenated string, NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len_s1, len_s2, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len_s1 = strlen(s1);
    len_s2 = strlen(s2);

    if (n >= len_s2)
        n = len_s2;

    concat = malloc((len_s1 + n + 1) * sizeof(char));
    if (concat == NULL)
        return (NULL);

    for (i = 0; i < len_s1; i++)
        concat[i] = s1[i];

    for (j = 0; j < n; j++, i++)
        concat[i] = s2[j];

    concat[i] = '\0';

    return (concat);
}

