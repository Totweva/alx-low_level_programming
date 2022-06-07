#include <ctype.h>
#include <main.h>

/**
 * prototype function that checks for lowercase
 * @c - letter c
 * Return 1 if it is lowercase and return 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
