#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int chr;

	chr = 48;
	while (chr <= 57)
	{
		putchar(chr);
		if (chr != 57)
		{
			putchar(',');
			putchar(' ');
		}
		chr++;
	}
	putchar('\n');

	return (0);
}

