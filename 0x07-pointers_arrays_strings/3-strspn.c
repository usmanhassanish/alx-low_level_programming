#include "main.h"
/**
 * _strspn - length of string in accept
 * @s: first argument
 * @accept: second argument
 * Return: returns s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i,j,final;
	final = 0;
	int k = 0;
    while (accept[k] != '\0')
    {
        k++;
    }
    int count = k;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (count == final)
			{
				break;
			}
			if (s[i] == accept[j])
			{
				final++;
			}
		}
	}
	return (final);
}
