#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		int j;
		for (j = 1; j <= 9; j++)
		{
			int k;
			k = i * j;
			_putchar((k/10)+'0');
    			_putchar((k%10)+'0');
		        	
			
		}
		_putchar('\n');
		
	}
}
