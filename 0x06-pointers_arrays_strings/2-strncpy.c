#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy from src
 *
 * Description: Copies at most n bytes from the src string to the dest string.
 * If the length of src is less than n, the remaining characters in dest are
 * filled with null bytes.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return dest;
}
