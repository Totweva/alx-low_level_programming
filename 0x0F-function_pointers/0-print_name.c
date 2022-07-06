#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to be print
 * @f: the point to a function
 * Return: void point
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
