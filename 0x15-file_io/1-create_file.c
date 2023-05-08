#include <fcntl.h>
#include <aio.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * create_file - Creates a file.
 * @filename: argument 1
 * @text_content: argument 2
 * Return: file or -1
 */
int create_file(const char *filename, char *text_content)
{
	int op, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(op, text_content, length);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}
