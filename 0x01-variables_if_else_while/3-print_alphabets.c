#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char charLower, charUpper;

	charLower = 'a';
	while (charLower <= 'z')
	{
		putchar(charLower);
		charLower++;
	}

	charUpper = 'A';
	while (charUpper <= 'Z')
	{
		putchar(charUpper);
		charUpper++;
	}
	putchar('\n');

	return (0);
}

