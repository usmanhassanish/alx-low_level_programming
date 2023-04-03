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
	int i = 0;
	int nCasted = (int) n;

	while (s[i] < nCasted)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
