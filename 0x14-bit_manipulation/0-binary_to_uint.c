#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is an error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;
	int i;

	if (b == NULL)
	{
		/* Return 0 if input is NULL */
		return (0);
	}

	/* Iterate through the string to check for non-binary characters */
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			/* Return 0 if input contains non-binary characters */
			return (0);
		}
	}

	/* Convert the binary string to decimal using bitwise operations */
	for (i = 0; b[i] != '\0'; i++)
	{
		decimal_value <<= 1;
		if (b[i] == '1')
		{
			decimal_value |= 1;
		}
	}

	return (decimal_value);
}

