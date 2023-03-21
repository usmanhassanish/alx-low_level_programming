#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * Description: 'the program's description'
 * @n: n is the number inserted
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98");
		printf("\n");
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98");
		printf("\n");
	}
	else
	{
		printf("%d", n);
		printf("\n");
	}
}
