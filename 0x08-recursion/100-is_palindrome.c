#include "main.h"
/**
 * _strlen - Computes the length of a null-terminated string.
 *
 * @s: A pointer to a string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen(s + 1));
}
/**
 * is_palindrome_helper - Checks if a string is a palindrome recursively.
 *
 * @s: A pointer to a string.
 * @len: The length of the string.
 * @i: The current index.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome_helper(char *s, int len, int i)
{
if (i >= len / 2)
return (1);
else if (*(s + i) != *(s + len - i - 1))
return (0);
else
return (is_palindrome_helper(s, len, i + 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: A pointer to a string.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
int len = _strlen(s);
return (is_palindrome_helper(s, len, 0));
}
