#include <stdlib.h
#include <time.h>
#include <stdio.h>
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
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
	}
	for (j = 'a'; j < 'g'; j++)
	{
		putchar (j);
	}
	putchar ('\n');
	return (0);
}
