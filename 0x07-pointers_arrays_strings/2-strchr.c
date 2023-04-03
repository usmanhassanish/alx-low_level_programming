#include "main.h"
/**
 * _strchr - copy a string
 * @s: argument 1
 * @c: argument 2
 * Return: returns 0;
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);

}
