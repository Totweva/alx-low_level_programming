#include "main.h"

/**
 * print_most_numbers - print most nubers excerpt 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
