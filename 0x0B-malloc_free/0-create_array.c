#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that uses malloc
 * @size: size of the array
 * @c: character to put int array
 * Return: return NULL or pointer to array;
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	return (arr);
}
