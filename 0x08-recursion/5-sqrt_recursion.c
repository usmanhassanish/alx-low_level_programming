#include "main.h"
/**
 * _sqrt_recursion - find the square root of a number
 * @n: the number
 * @i: iterator
 * Return: the square root
 */
int square_function(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_function(n, 0));
}

/**
 * square_function - find square root recursively
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: the resulting square root
 */
int square_function(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (square_function(n, i + 1));
}
