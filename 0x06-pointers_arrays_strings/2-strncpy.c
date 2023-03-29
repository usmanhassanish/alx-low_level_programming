#include "main.h"
/**
 * _strncpy - copy one string to another
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: dest(result)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
