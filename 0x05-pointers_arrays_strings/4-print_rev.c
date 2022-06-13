#include "main.h"

/**
 * print_rev - founction that prints the reverse
 * @s: print the s string
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
	{
		len++;
	}

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
