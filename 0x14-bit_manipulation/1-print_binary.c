#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary
 * @n: argument
 */
void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int present;

	for (i = 63; i >= 0; i--)
	{
		present = n >> i;

		if (present & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
