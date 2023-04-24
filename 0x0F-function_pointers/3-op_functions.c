#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of the two integers
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of the two integers
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of the two integers
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of the two integers
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - finds the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of the two integers
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
