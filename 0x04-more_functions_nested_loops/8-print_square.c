#include "main.h"

/**
 * print_square - prints square
 * prints a new line is size is less that zero
 * @size: size of the square
 */

void print_square(int size)
{
	int l, b;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');

			if (l == size - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
