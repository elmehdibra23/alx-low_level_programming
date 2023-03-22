#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 * Return: Always 0.
 */

int main(void)
{
    unsigned long int fib1 = 1, fib2 = 2, next_fib;
    int count = 2; /* start at 2 since we already have 1 and 2 */

    printf("%lu, %lu, ", fib1, fib2);

    while (count < 98)
    {
        next_fib = fib1 + fib2;
        printf("%lu, ", next_fib);

        fib1 = fib2;
        fib2 = next_fib;
        count++;
    }
    next_fib = fib1 + fib2;
    printf("%lu\n", next_fib);

    return (0);
}
