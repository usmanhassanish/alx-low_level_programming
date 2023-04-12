#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: 'the program's description'
 *
 */
void times_table(void)
{
	int i;
	int j;
	int multi;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if(j > 9)
			{
				_putcar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
	}
	_putchar('\n');
	}
}
