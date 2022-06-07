#include <main.h>

/**
 * function that prints the sign of a number
 * Return 1, o, -1 with message
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar("%d", +);
		return (1);
	}
	else if (n == 0)
	{
		_putchar("%d", 0);
		return (0);
	}
	else
	{
		_putchar("%d", -);
		return (-1);
	}
}
