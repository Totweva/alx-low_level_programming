#include "main.h"

/**
 * prints all natural numbers from n to 98
 * prototype function
 * Numbers printed in order
 * the first printed number should be the number past to your function
 * the last printed number should be 98
 * allowed to use standard library
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
