#include "main.h"

/**
 * main - entry point
 * prints alphabet in lowercase followed by a new line
 * 
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; 'a' <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
