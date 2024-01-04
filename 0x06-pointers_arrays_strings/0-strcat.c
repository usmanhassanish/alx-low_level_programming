#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination
 * @src: source
 * Return: returns a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;
	int l = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		j++;
	}
	for (k = j; k < j + i; k++)
	{
		dest[k] = src[l];
		l++;
	}
	dest[k] = '\0';

	return (dest);
}
