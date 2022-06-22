#include "main.h"

/**
 * _pow_recursion - value of x raised to the power of y
 * @x: value of x
 * @y: raise to the power of y
 * Return: -1 if the y is lower than x
 */

int _pow_recursion(int x, int y)
{
	if (y > x)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
