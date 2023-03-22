#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
    unsigned long int i, num1 = 1, num2 = 2, res;

    printf("%lu, %lu, ", num1, num2); /* print the first two Fibonacci numbers */

    for (i = 3; i <= 98; i++)
    {
        res = num1 + num2; /* calculate the next number in the sequence */
        num1 = num2; /* shift the values of the variables for the next iteration */
        num2 = res;

        /* print the next number in the sequence */
        if (i != 98)
            printf("%lu, ", res);
        else
            printf("%lu\n", res);
    }

    return (0);
}

