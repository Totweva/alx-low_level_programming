#include "main.h"

/**
 * 
 * print_alphabet in lowercase followed by a new line
 *
 * Return: always 0
 * 
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; 'a' <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
