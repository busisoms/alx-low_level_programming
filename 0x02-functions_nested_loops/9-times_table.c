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
			if (num > 9)
			{
				_putchar('0' + (num / 10));
				_putchar('0' + (num % 10));
			}
			else
			{
				_putchar(num + '0');

				if (m != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}

			if ((m != 9) && (num > 9))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
