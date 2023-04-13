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
	void *ptr = malloc(size * nmemb + 1);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
