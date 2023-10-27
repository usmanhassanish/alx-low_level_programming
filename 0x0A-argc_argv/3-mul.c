#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts number of arguments
 * @argv: array that hold arguments
 * Return: return 0 if program is successful
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
