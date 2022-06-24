#include "main.h"

/**
 * _strncat - concatenate two strings
 * @src: old string
 * @dest: new string
 * @n: number of bytes of str to concatenate
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}

	while (y < n && src[y] != 0)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = 0;

	return (dest);
}
