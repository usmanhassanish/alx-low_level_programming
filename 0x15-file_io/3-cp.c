#include "main.h"
#include <sys/types.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * file_from - open and read file
 * @arg1: argument 1
 * @ran: argument 2
 *
 * Return: pointer to buffer
 */

char *file_from(char *arg1, char *ran)
{
	int aa, bc;
	ssize_t r, tb = 0;

	aa = open(arg1, O_RDONLY);
	if (aa == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
		exit(98);
	}
	while ((r = read(aa, ran + tb, 1024)) > 0)
	{
		tb = tb + r;
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
		exit(98);
	}
	bc = close(aa);
	if (bc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", aa);
		exit(100);
	}
	return (ran);
}

/**
 * main - copy contents
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 1 if successful, -1 otherwise
 */

int main(int argc, char **argv)
{
	int tt, uu, count;
	ssize_t w;
	char *reading;
	char ran[4096];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	reading = file_from(argv[1], ran);
	tt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (tt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (reading[count])
		count++;

	w = write(tt, reading, count);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	uu = close(tt);
	if (uu == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tt);
		exit(100);
	}
	return (1);
}
