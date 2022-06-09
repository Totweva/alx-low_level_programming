#include "main.h"

/**
 * print_numbers - prints numbers from 1 through 9
 * _putchar: to print
 * Return: always 0
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
