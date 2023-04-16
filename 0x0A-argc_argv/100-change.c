#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: argument 1
 * @argv: argument 2
 * Return: returns 0 always
 */
int main(int argc, char **argv)
{
	int number;
	int count = 0;

	if (argc != 2)/* A */
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	while (number > 0)
	{
		while (number >= 25)
		{
			number -= 25;
			count++;
		}
		while (number >= 10)
		{
			number -= 10;
			count++;
		}
		while (number >= 5)
		{
			number -= 5;
			count++;
		}
		while (number >= 2)
		{
			number -= 2;
			count++;
		}
		while (number >= 1)
		{
			number -= 1;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
