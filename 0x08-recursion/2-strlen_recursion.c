#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: the string
 * Return: lenght of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}