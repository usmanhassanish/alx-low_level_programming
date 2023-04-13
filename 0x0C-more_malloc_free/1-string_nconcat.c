#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concantenate string
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters from string 2
 * Return: returns pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int k = 0;
	unsigned int j = 0;
	char *ptr;

	while (s1[k] != '\0')
	{
		k++;
	}
	ptr = malloc((sizeof(char) * k) + n);
	if (!ptr)
		return (NULL);
	for (i = 0; i < (k + n); i++)
	{
		if (i >= k)
		{
			ptr[i] = s2[j];
			j++;
		}
		else
		{
			ptr[i] = s1[i];
		}

	}
	ptr[k + n] = '\0';
	return (ptr);
}
