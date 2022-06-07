#include <main.h>

/**
 * a function that checks for alphabet characters
 * @c - letter c
 * Return 1 if it is else return 0 
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
