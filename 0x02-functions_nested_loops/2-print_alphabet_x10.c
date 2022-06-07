#include "main.h"

/**
 * void function
 * print_alphabet_x10 the lowercase alphabet
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char ix10;

	while (count <= 9)
	{
		for (ix10 = 'a'; 'a' <= 'z'; ix10++)
		_putchar(ix10);

		_putchar('\n');

		count++;
	}
}
