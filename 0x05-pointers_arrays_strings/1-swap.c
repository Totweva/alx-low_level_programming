#include "main.h"

/**
 * swap_int - swaps the value of twp integers
 * @a: int parameter one
 * @b: parameter two
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
