#include "main.h"
#include <stdio.h>
/**
 * _strstr - starting point
 * @haystack: first argument
 * @needle: second argument
 * Return: haystack or null
 */
char *_strstr(char *haystack, char *needle)
{
	int k, l;

	for (k = 0; haystack[k] != '\0'; k++)
	{
		for (l = 0; needle[l] != '\0'; l++)
		{
			if (haystack[k + l] != needle[l])
				break;
		}
		if (!needle[l])
			return (&haystack[l]);
	}
	return (NULL);
}
