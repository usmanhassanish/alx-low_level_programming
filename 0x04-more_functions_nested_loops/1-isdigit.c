#include "main.h"
/**
 * _isdigit - function to check for single digit
 * @c: number to be checked
 * Return: returns 1 or 0 if number is non-digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
