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
		chr++;
	}

	chr = 97;
	while (chr <= 102)
	{
		putchar(chr);
		chr++;
	}
	putchar('\n');
	return (0);
}
