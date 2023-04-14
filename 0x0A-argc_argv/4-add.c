#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Check if a character is a digit
 * @c: Character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments passed to the program
 *
 * Return: 1 if there is a non-digit character in the arguments, 0 otherwise
 */
int main(int argc, char *argv[])
{
    int i, j, sum = 0;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }
    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j]; j++)
        {
            if (!_isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (1);
            }
        }
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);

    return (0);
}

