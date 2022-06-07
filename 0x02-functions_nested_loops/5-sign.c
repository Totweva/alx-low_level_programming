#include "main.h"

/**
 * print_sign - that prints the sign of a number
 * @n: the int to check
 * Return 1, o, -1 with message
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
