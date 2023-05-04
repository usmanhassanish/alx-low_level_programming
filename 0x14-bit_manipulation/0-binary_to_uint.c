#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string argument
 * Return: returns 0 or converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, power;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (power = 1, sum = 0, length--; length >= 0; length--, power *= 2)
	{
		if (b[length] == '1')
			sum += power;
	}

	return (sum);
}
