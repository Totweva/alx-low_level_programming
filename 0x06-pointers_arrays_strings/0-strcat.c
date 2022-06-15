#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: point from this string
 * @dest: points to this string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[j])
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] += '\0';

	return (dest);
}
