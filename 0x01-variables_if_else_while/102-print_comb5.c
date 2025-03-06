#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int chr1, chr2;

	chr1 = 0;
	while (chr1 < 99)
	{
		chr2 = chr1 + 1;
		while (chr2 <= 99)
		{
			putchar('0' + (chr1 / 10));
			putchar('0' + (chr1 % 10));
			putchar(' ');

			putchar('0' + (chr2 / 10));
			putchar('0' + (chr2 % 10));

			if (chr1 != 98 || chr2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			chr2++;
		}
		chr1++;
	}
	putchar('\n');
	return (0);
}

