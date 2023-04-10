#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main method
 * @argc: argument 1
 * @argv: argument 2
 * Return: return 1 or 0
 */
int main(int argc, char **argv)
{
	int cents = atoi(argv[1]);
	int coins = 0;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents;

	printf("%d\n", coins);
	return (0);
	}
}

