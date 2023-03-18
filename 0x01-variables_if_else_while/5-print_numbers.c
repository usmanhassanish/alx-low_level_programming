#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/*more headers goes there*/
/*betty style do for function main goes there */
/**
 * main -Entry Point
 *
 * Description: Print negative and positive numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i++);
	}
	printf("\n");
	return (0);
}
