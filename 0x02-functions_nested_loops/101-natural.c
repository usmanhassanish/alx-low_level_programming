#include <stdio.h>
/**
 * main - entry point of the program
 * Return: returns 0
 */
int main(void)
{
	int i = 1;
	int sum = 0;

	while (i < 10)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
