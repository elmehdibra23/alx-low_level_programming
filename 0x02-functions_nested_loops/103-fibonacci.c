#include <stdio.h>
/**
 * main - Prints the sum of even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int prev = 1;
long int curr = 2;
long int next;
long int sum = 0;
while (curr <= 4000000)
{
if (curr % 2 == 0)
{
sum += curr;
}
next = prev + curr;
prev = curr;
curr = next;
}
printf("%ld\n", sum);
return (0);
}
