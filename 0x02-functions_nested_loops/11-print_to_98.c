#include <stdio.h>
#include "main.h"
/**
* print_to_98 - prints all natural numbers from n to 98
* @n: any given number
*/

void print_to_98(int n)
{
	int m;

	if (n <= 98)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%d", m);
			if (m != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else
	{
		for (m = n; m >= 98; m--)
		{
			printf("%d", m);
			if (m != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}

