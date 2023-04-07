#include "main.h"

/**
 * _isupper - checks is input is uppercase
 * @c: input taken in
 * Return: return 1 if input is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
