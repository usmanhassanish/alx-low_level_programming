#include "main.h"
#include <stdlib.h>
/**
 * _calloc - memory allocation of an array
 * @nmemb: number of elemenent in the array
 * @size: size of array
 * Return: ptr - ponter to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *dptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	dptr = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		dptr[i] = 0;
	}
	return (ptr);
}
