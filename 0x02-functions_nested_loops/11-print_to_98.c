#include "main.h"

/**
 * print_to_98- all natural numbers from n to 98
 * 
 * Return always zero
 */

void print_to_98(int n)
{
	for (n = 1; n <= 98; n++)
	{
		if (n >= 1 && n <= 98)
			_putchar(n);

		_putchar(',');
		_putchar(' ');

	}
}
