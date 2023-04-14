#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate memory
 * @ptr: argument 1
 * @old_size: argument 2
 * @new_size: argument 3
 * Return: return null or ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);

}
