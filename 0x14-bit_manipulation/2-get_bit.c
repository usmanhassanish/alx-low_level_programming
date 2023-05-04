#include <stdio.h>
#include "main.h"
/**
 * get_bit - return the bit at a certain position
 * @n: number to be converted
 * @index: index to be returned
 * Return: returns -1 or value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
