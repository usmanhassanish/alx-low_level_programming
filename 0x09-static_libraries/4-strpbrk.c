#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: argument 1
 * @accept: argument 2
 * Return: return s or null
 */
char *_strpbrk(char *s, char *accept)
{
	int k, l;

	for (k = 0; *s != '\0'; k++)
	{
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (*s == accept[l])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
