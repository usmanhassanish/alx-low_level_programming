#include <stdio.h>
/**
 * main - program entry point
 * @argc: count number of arguments
 * @argv: array holding program arguments
 * Return: returns 0 on sucess
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
