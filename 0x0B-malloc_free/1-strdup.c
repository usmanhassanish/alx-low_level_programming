#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate
 * @str: string argument
 * Return: 0 or Null
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int len, j;

	/* check is str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < len; j++)
	{
		p[j] = str[j];
	}
	p[len] = '\0';
	return (p);
}
