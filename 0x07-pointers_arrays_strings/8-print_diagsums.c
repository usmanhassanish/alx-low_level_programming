#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diagonals
 * @a: first argument
 * @size: second argument
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int total, total1
		;
	total = 0;
	total1 = 0;

	for (i = 0; i < size; i++)
	{
		total += a[(size * i) + i];
		total1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%i, %i\n", total, total1);
}
