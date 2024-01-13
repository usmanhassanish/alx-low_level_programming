#include "main.h"
#include <stdlib.h>
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument count vector
 * Return: returns 0 or 1
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
