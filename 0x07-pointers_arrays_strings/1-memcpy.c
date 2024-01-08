#include "main.h"
/**
 * _memcpy - copies some data to another address
 * @dest: distination for replacing data
 * @src: source of data
 * @n: number to of bytes to be copied
 * Return: returns a pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
