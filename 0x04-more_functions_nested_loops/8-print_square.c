#include "main.h"
/**
 * print_square - prints a square based on the size
 * @size: size of square
 */
void print_square(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
				if (j == size - 1)
					_putchar('\n');
			}
			i++;
		}
	}
}
