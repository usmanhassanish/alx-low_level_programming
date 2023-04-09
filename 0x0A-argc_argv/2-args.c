#include "main.h"
#include <stdio.h>
/**
 * main - the main function
 * @argc: it counts the number of parameters
 * @argv: an array of the names of paramaetrs
 * Return: returns zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
