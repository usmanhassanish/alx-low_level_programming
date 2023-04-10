#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: argument 1
 * @argv: argument 2
 * Return: return 0 as success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int k = 0;
	char j[] = "Error";

	if (argc <= 1)
	{
		printf("%d\n", k);
		exit(0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (*argv[i] >= 'a' && *argv[i] <= 'z')
			{
				printf("%s\n",j);
				exit(1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
