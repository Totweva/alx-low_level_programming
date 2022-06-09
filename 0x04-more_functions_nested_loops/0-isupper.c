#include "main.h"

/**
 * isupper - checks for uppercase letters
 * @c: check for c
 * Return: 1 otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
