#include "main.h"

/**
 * _memcpy - copies a memory area
 *  @dest: pointer to copy to
 *  @src: pointer to copy from
 *  @n: the the amount of available memory
 *  Return: Apointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
