#include "main.h"
/**
 * _strcmp - string comparison
 * @s1: first argument
 * @s2: second argument
 * Return: greater, less or zero based on input
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;
	int length1 = 0, length2 = 0;
	int greater = 15, less = -15, zero = 0;

	while (s1[i] != '\0')
	{
		length1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		length2++;
		j++;
	}
	if (length1 > length2)
		return (greater);
	else if (length2 > length1)
		return (less);
	else
		return (zero);
}
