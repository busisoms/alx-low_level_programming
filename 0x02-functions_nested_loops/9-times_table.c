#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*
*/

void times_table(void)
{
	int n, m, num;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			num = n * m;
			if (m == 0)
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
				}
				else
				{
					_putchar('0' + (num / 10));
				}

				_putchar('0' + (num % 10));
			}
		}
		_putchar('\n');
	}
}


