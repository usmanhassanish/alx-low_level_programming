#include "main.h"

/**
 * _abs - Entry point
 * @c: takes in an integer
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * (-1);
		return (c);
	}
	else
	{
		return (c);
	}

}
