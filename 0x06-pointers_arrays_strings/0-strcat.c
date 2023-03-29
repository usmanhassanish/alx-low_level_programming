#include "main.h"
/**
 * _strcat - contatenate two strings
 * @dest: argument one
 * @src: argument two
 * Return: return dest(the result)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
		dest[i] = '\0';
		return (dest);
}
