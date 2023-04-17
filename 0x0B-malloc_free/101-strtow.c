#include "main.h"
#include <stdlib.h>
#include <stdbool.h>
/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
static int count_words(char *str)
{
int count = 0;
bool in_word = false;
for (; *str; ++str)
{
if (*str != ' ' && !in_word)
{
in_word = true;
++count;
}
else if (*str == ' ' && in_word)
{
in_word = false;
}
}
return count;
}
/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
int words, i, word_len, j;
char **result;
if (!str || !*str)
return NULL;
words = count_words(str);
result = malloc((words + 1) * sizeof(char *));
if (!result)
return (NULL);
i = 0;
while (i < words)
{
while (*str == ' ')
++str;
word_len = 0;
while (str[word_len] != ' ' && str[word_len] != '\0')
++word_len;
result[i] = malloc((word_len + 1) * sizeof(char));
if (!result[i])
{
while (i >= 0)
free(result[i--]);
free(result);
return (NULL);
}
for (j = 0; j < word_len; ++j)
result[i][j] = str[j];
result[i][word_len] = '\0';
str += word_len;
++i;
}
result[i] = NULL;
return (result);
}
