#include "main.h"
/**
 * _memset - starting point
 * @s: first argument
 * @b: second argument
 * @n: third argument
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
		return (s);
}
