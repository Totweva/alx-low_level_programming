#include "main.h"

/**
 * char *_strcpy - copy string a points to a pointer
 * @dest: first value
 * @src: second value
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
