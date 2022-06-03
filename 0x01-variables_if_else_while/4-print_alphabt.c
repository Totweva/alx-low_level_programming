#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 * putchar print lowercase except e and q
 * Return: Always 0.
 */

int main(void)
{

	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i != 'e') && (i != 'q'))
		putchar(i);
	}

	putchar('\n');


	return (0);
}
