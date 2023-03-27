#include "main.h"
/**
 * print_rev - print rversed string
 * @s: string argument
 */
void print_rev(char *s)
{
	int i;

	for (i = s['\0']; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
