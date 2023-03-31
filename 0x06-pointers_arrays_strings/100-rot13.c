#include "main.h"
/**
 * rot13 - Encoding in Rot13
 * @s: string argument
 * Return: s;
 */
char *rot13(char *s)
{
	int i, j;
	char *find = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *replace = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == find[j])
			{
				s[i] = replace[j];
			}
		}
	}
	return (s);
}
