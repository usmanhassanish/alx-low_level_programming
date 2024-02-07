#include "main.h"

/**
 * times_table - Entry point
 */
void times_table(void)
{
	int i = 0;
	int num = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			num = j * i;
			if (num > 9)
			{
				if (j == 9)
				{
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
					_putchar('\n');
					break;	
				}
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (j == 9)
				{
					_putchar('0' + num);
					_putchar('\n');
					break;
				}
				_putchar('0' + num);
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
