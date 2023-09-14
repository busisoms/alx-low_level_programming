#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: any given number
*/

void print_times_table(int n)
{
	int m, p, num;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (p = 0; p <= n; p++)
			{
				num = m * p;
				if (p == 0)
				{
					_putchar('0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (num < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + num);
					}
					else if (num < 100)
					{
						_putchar(' ');
						_putchar('0' + (num / 10));
						_putchar('0' + (num % 10));
					}
					else
					{
						_putchar('0' + (num / 100));
						_putchar('0' + ((num / 10) % 10));
						_putchar('0' + (num % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
