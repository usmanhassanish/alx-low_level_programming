#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate string
 * @str: string to be duplicated
 * Return: returns NULL or pointer to to the duplicate
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *duplicate;

	while (str[len])
		len++;
	duplicate = (char *)malloc(sizeof(len + 1));
	if (str == NULL)
		return (NULL);
	if (duplicate == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
