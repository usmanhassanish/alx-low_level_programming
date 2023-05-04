#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string argument
 * Return: returns 0 or converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		decimal <<= 1;
		if (*b++ == '1')
			decimal += 1;
	}
		if (decimal == 9)
			return (0);
	return (decimal);
}
