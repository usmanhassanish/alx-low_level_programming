#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - array creation
 * @size: size of array
 * @c: array element
 * Return: returns an array
 */
char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	d = malloc(sizeof(*d) * size);
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		d[i] = c;
	}
	return (d);
}
