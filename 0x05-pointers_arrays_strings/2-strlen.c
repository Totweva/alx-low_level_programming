#include "main.h"

/**
 * int _strlen - returns the length of a string
 * @s: string at s
 * Return: length
 */

int _strlen(char *s)
{
	int count = 0;
	char s;

	while (s != '\0')
	{
		count = count + 1;
		s++;
	}

	return (count);
}
