#include <stdlib.h>
#include <time.h
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
	int n;
	int Last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	Last = n % 10;
	if (Last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Last);
	}
	else if (Last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Last);
	}
	else if (Last < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last);
	}
	return (0);
}
