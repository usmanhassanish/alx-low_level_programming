#include "main.h"

/**
 * _isdigit- checks is input is a digit
 * @c: input taken in
 * Return: return 1 if input is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
