#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: pointer to array of arguments
 *
 * Return: pointer to the concatenated string, or NULL if failed
 */
char *argstostr(int ac, char **av)
{
int i, j, k, len = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
len += strlen(av[i]) + 1;
str = malloc(sizeof(char) * len + 1);
if (str == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
