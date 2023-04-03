#include "main.h"
/**
 * _memcpy - starting point
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = (int) n;
	int i = 0;

	while (i <= b)
	{
		dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return (dest);
}
