#include "main.h"
#include <stdlib.h>

/**
 * array_range - array function
 * @min: parameter one
 * @max: parameter two
 * Return: NUll or POINTER
 */
int *array_range(int min, int max)
{
	int i, k;
	int *ptr;

	if (min > max)
		return (NULL);
	k = max - min + 1;
	ptr = malloc(sizeof(int) * k);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < k; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
