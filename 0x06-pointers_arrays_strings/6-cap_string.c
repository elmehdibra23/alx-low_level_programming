#include "main.h"
#include "string.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: Input string.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
int i, cap_next = 1;
char *separators = " \t\n,;.!?\"(){}";
for (i = 0; str[i] != '\0'; i++)
{
if (cap_next && (str[i] >= 'a' && str[i] <= 'z'))
str[i] -= 'a' - 'A';
cap_next = 0;
if (strchr(separators, str[i]) != NULL)
cap_next = 1;
}
return (str);
}

