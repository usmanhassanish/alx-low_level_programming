#include "main.h"
/**
 * _strchr - finds the first appearance of a character
 * @s: source to find character
 * @c: charcater to find
 * Return: returns null or first position
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	bool check = false;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			check = true;
			break;
		}
		i++;
	}

	if (check == true)
		return (s + i);
	else
		return (NULL);
}
