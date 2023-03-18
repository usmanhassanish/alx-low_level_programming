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
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
	char small;
	small = tolower(x);

		putchar(small);
	}
	printf("\n");
	return (0);
}
