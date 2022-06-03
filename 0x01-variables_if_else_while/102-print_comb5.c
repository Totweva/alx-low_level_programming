#include <stdio.h>

/**
 * main - Entry point
 * putchar the combination of two two digits
 * Return: 0
 */

int main(void)
{
	int twodigi1, twodigi2;

	for (twodigi1 = 0; twodigi1 <= 98; twodigi1++)
	{
		for (twodigi2 = twodigi1 + 1; twodigi2 <= 99; twodigi2++)
		{
			putchar((twodigi1 / 10) + '0');
			putchar((twodigi1 % 10) + '0');
			putchar(' ');
			putchar((twodigi2 / 10) + '0');
			putchar((twodigi2 % 10) + '0');

			if (twodigi1 == 98 && twodigi2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
