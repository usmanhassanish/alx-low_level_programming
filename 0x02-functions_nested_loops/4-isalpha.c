#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: 'the program's description'
 * @parameter: c is the argument taken by the function
 * Return: 1 if c is alphabet but 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65  && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}