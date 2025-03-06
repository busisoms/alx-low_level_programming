#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char charLower;

	charLower = 'a';
	while (charLower <= 'z')
	{
		if (charLower == 'e' || charLower == 'q')
		{
			charLower++;
		}
		putchar(charLower);
		charLower++;
	}
	putchar('\n');
	return (0);
}


