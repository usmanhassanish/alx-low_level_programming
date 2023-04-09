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
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
