#include "main.h

/**
 * print_sign - Entry point
 *
 * @n: input from user
 *
 * Return: returns 0 is number is zero, -1 is number is negative
 */
int print_sign(int n)
{
	if (n > 0)
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

