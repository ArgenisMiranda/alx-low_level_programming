#include "main.h"

/**
 * binary_to_uint - convert the binary number to a decimal
 * @b: points to a string of 0's and 1's
 * Return: decimal format of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result * 2) + (b[i] - '0');
		i++;
	}

	return (result);
}
