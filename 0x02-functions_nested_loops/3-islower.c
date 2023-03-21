#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: 'the program's description'
 * @parameter: c is the argument taken by the function
 * Return: 1 if c is lowercase but 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
