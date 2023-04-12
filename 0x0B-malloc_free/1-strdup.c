#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
{
return (NULL);
}
for (i = 0; i <= len; i++)
{
dup[i] = str[i];
}
return (dup);
}
