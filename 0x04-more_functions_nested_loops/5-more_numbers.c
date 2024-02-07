#include "main.h"
/**
 * more_numbers - print 10 rows number(1-10)
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int k = 0;

		while (k <= 14)
		{
			if (k > 9)
			{
				if (k == 14)
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
					_putchar('\n');
				}
				else
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			else
			{
				_putchar('0' + k);
			}
			k++;
		}
	i++;
	}
}
