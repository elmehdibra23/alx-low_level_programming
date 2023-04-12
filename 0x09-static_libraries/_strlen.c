#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: The string to find the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s++)
    {
        length++;
    }

    return length;
}
