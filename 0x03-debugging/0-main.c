#include <stdio.h>
/**
 * positive_or_negative - Entry Point
 * @i: argument
 */
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is either positiv or negative\n", i);
	}
}
