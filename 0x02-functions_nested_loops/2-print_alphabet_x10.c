#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x;
	int i = 1;

	while (i <= 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	i++;
	}
}
