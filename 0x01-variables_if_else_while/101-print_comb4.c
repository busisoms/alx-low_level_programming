#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int chr1, chr2, chr3;

	chr1 = 48;
	while (chr1 <= 55)
	{
		chr2 = chr1 + 1;
		while (chr2 <= 56)
		{
			chr3 = chr2 + 1;
			while (chr3 <= 57)
			{
				putchar(chr1);
				putchar(chr2);
				putchar(chr3);

				if (chr1 != 55)
				{
					putchar(',');
					putchar(' ');
				}
				chr3++;
			}
			chr2++;
		}
		chr1++;
	}
	putchar('\n');
	return (0);
}
