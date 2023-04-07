#include "main.h"

/**
 * _puts - prints chaacters in a string using putchar
 * @str: arguement
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
