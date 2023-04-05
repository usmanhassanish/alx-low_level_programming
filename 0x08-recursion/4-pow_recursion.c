#include "main.h"
/**
 * _pow_recursion - get x to the power of y
 * @x: first paramenter
 * @y: second parameter
 * Return: return result of x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
