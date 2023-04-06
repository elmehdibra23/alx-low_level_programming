#include "main.h"
/**
 * sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 * @i: The divisor to test if it is a square root.
 *
 * Return: The natural square root of the number.
 *         If n does not have a natural square root, return -1.
 */
int sqrt_helper(int n, int i);
int _sqrt_recursion(int n)
{
return (sqrt_helper(n, 1));
}
int sqrt_helper(int n, int i)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (sqrt_helper(n, i + 1));
}

