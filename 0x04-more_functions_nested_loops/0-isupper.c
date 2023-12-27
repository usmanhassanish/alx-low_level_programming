#include "main.h"
/**
 * _isupper - checks wether argument is uppercase
 * @c: argument in upper function
 * Return: returns 1 or 0 is if argument is lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
