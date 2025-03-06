#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int chrSlow, chrFast;

	chrSlow = 48;
	while (chrSlow != 57)
	{
		chrFast = chrSlow + 1;
		while (chrFast <= 57)
		{
			putchar(chrSlow);
			putchar(chrFast);
			if (chrSlow != 56)
			{
				putchar(',');
				putchar(' ');
			}
			chrFast++;
		}
		chrSlow++;
	}
	putchar('\n');
	return (0);
}
