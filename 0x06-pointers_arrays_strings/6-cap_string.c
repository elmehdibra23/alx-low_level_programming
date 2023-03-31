#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: Pointer to the capitalized string.
 */
char *cap_string(char *s)
{
int i;
int cap_next = 1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
|| s[i] == ',' || s[i] == ';' || s[i] == '.'
|| s[i] == '!' || s[i] == '?' || s[i] == '"'
|| s[i] == '(' || s[i] == ')' || s[i] == '{'
|| s[i] == '}')
cap_next = 1;
else if (cap_next)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
cap_next = 0;
}
else
{
if (s[i] >= 'A' && s[i] <= 'Z')
s[i] += 32;
}
}
return (s);
}

