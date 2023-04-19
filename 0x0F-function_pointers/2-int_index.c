#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - compare function
 * @array: array of intgers
 * @size: size of the array
 * @cmp: compare function 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
