#include "main.h"
/**
 * print_times_table - prints the times table
 * @n: number of times table
 */
void print_times_table(int n)
{
	int i = 0;
	int num = 0;

	while (i <= n)
	{
		int j = 0;

		while (j <= n)
		{
			num = i * j;
			if (j == n)
			{
				if (num > 9)
				{
					_putchar(' ');
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
					_putchar('\n');
					break;
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + num);
					_putchar('\n');
					break;
				}
			}
			else if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else
			{
				if (num > 9)
				{
					_putchar(' ');
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + num);
					_putchar(',');
				}
			}
			j++;
		}
		i++;
	}
}
