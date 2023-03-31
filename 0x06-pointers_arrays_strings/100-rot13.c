#include "main.h"
/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
char *c = s;
int i;
while (*c)
{
if ((*c >= 'a' && *c <= 'm') || (*c >= 'A' && *c <= 'M'))
{
for (i = 0; i < 13; i++)
(*c)++;
}
else if ((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z'))
{
for (i = 0; i < 13; i++)
(*c)--;
}
c++;
}
return (s);
}

