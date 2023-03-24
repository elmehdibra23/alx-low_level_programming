#include "stdio.h"
/**
 * main - Fizz-Buzz test
 *
 * Description: Fizz-Buzz test
 * Return: 0
 */

int main(void)
{
	int  i = 1;

	while (i < 101)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;

	}
	printf("\n");
	return (0);
}
