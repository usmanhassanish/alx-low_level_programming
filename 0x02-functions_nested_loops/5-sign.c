#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: returns 0 is number is zero, -1 is number is negative, else the return is 1;
 */
int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

