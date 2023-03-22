#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers, separated by a comma
 *              and a space, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    unsigned long int a = 1, b = 2, next;

    printf("%lu, %lu", a, b); /* print the first two Fibonacci numbers */

    for (i = 3; i <= 98; i++)
    {
        next = a + b; /* calculate the next Fibonacci number */
        a = b; /* update a to be the previous b */
        b = next; /* update b to be the current next */
        printf(", %lu", next); /* print the next Fibonacci number */
    }

    printf("\n"); /* print a newline character at the end */

    return (0);
}
