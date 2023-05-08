#include <fcntl.h>
#include <aio.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * append_text_to_file - append text
 * @filename: filename
 * @text_content: argument 2
 * Return: appended text
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, text_content, length);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}
