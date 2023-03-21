#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c < 0) 
	{
		c = c * (-1);
		return c;
	}
	else
	{
		return c;
	}
	
}
