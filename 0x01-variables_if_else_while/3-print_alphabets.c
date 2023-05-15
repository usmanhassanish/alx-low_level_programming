#include <stdio.h
#include <ctype.h>
/**
 * main - Entry Point
 *
 * Description: Prints out alphabet in lower and upper case
 * Return: Always 0 (Success)
**/
int main(void)
{
	int x;
	int i;
	char small;

	for (x = 'A'; x <= 'Z'; x++)
	{
		small = tolower(x);
		putchar(small);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	printf("\n");
	return (0);
}
