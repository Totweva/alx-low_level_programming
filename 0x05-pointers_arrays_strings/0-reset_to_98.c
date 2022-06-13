#include "main.h"

/**
 * reset_to_98 - that prints *p to int
 * @n: points to n
 */

void reset_to_98(int *n)
{
	int p;

	p  = 80;
	n = &p;
	*n = 98;

	_putchar('\n');
}


