#include "main.h"
/**
 * _puts_recursion - print the characters in a string
 * @s: strring argument
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
