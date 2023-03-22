#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i;
long int prev = 1;
long int curr = 2;
long int next;
printf("%ld, %ld", prev, curr);
for (i = 3; i <= 50; i++)
{
next = prev + curr;
printf(", %ld", next);
prev = curr;
curr = next;
}
printf("\n");
return (0);
}
