#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char charLower;

	charLower = 'z';
	while (charLower >= 'a')
	{
		putchar(charLower);
		charLower--;
	}
	putchar('\n');

	return (0);
}

