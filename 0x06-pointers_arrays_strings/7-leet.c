#include "main.h"

/**
 * leet - Encoding letters
 * @s: string argument
 * Return: s;
 */
char *leet(char *s)
{
	int i, j;

	char *find = "aAeEoOtTlL";
	char *replace = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == find[j])
			{
				s[i] = replace[j];
			}
		}
	}

	return (s);
}
