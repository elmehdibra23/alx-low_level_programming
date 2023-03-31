#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Description: Appends at most n bytes from the src string to the dest string.
 * The src string does not need to be null-terminated if it contains n or more bytes.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i;
while (dest[dest_len] != '\0')
dest_len++;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return dest;
}
