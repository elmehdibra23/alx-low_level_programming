#include "main.h"
/**
 * infinite_add - Adds two numbers.
 *
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: A buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result. If the result cannot be stored in the buffer,
 *         return 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, len, i, j, k, carryover;
	char digit;

	len1 = len2 = len = 0;
	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (len1 > size_r || len2 > size_r)
		return (0);

	i = len1 - 1, j = len2 - 1, k = 0, carryover = 0;
	while (1)
	{
		if (i < 0 && j < 0 && carryover == 0)
			break;
		digit = carryover;
		if (i >= 0)
			digit += n1[i--] - '0';
		if (j >= 0)
			digit += n2[j--] - '0';
		if (k >= size_r)
			return (0);
		carryover = digit > 9 ? 1 : 0;
		r[k++] = digit % 10 + '0';
	}

	if (k >= size_r)
		return (0);

	for (i = k - 1; i >= 0; i--)
		_putchar(r[i]);
	_putchar('\n');

	return (r);
}

