#include "main.h"

/**
 * more_numbers - prints 1 to 14, 10 times
 * Return: 0
 */

void more_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		for (num = 1; num < 15; num++)
			_putchar((num % 10) + '0');

		_putchar('\n');
		num++;
	}
	_putchar('\n');
}
