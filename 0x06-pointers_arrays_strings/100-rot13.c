#include "main.h"
/**
 * rot13 - Encoding in Rot13
 * @s: string argument
 * Return: s;
 */
char *rot13(char *s)
{
	int j;
	char find = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char replace = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s
	while(*s)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*s == find[j])
			{
				*s = replace[j];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
