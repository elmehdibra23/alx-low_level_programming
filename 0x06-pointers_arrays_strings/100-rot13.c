#include "main.h"
#define ROT 13
/**
 * rot13 - Encodes a string using rot13.
 *
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
for (i = 0; ((*c >= 'a' && *c <= 'm') || (*c >= 'A' && *c <= 'M')) && i < ROT; i++)
*c += 1;
for (i = 0; ((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z')) && i < ROT; i++)
*c -= 1;
c++;
}
return s;
}
