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
	int i = 1, mul = i;

	if (argc > 1 && argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
