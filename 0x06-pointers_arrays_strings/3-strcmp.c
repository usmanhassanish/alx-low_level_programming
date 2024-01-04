#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: returns the difference between strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if ((i - j) < 0)
		return (-15);
	if ((i - j) > 0)
		return (15);
	else
		return (0);
}
