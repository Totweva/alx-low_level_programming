#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char ix10;

	while (count < 10)
	{
		for (ix10 = 'a'; ix10 <= 'z'; ix10++)
		{
			_putchar(ix10);
		}

		_putchar('\n');

		count++;
	}
}
