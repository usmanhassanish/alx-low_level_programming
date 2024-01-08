#include "main.h"
/**
 * _memset - replace a certain part of memory
 * @s: original characters
 * @b: characters used to replace
 * @n: number of bytes to replace
 * Return: returns a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
