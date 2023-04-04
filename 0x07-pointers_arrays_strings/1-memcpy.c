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
	char *p = dest;
	unsigned int I = 0;

	while (n != I)
	{
		*p++ = *src++;
		I++;
	}
	return (dest);
}
