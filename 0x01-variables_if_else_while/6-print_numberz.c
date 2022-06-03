#include <stdio.h>

/**
 * main - Entry point
 * putchar prints all single digit of base 10
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((num % 10) + '0');
	
	putchar('\n');

	return (0);
}
