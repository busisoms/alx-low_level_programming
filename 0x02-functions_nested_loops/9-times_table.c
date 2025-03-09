#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int num_1, num_2, result, next_result;

	num_1 = 0;
	while (num_1 <= 9)
	{
		num_2 = 0;
		while (num_2 <= 9)
		{
			result = num_2 * num_1;
			next_result = (num_2 + 1) * num_1;

			if (result <= 9)
			{
				_putchar('0' + (result));
			}
			else if (result > 9)
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}

			if (num_2 != 9)
			{
				_putchar(',');
				_putchar(' ');

				if (next_result <= 9)
				{
					_putchar(' ');
				}
			}
			num_2++;
		}
		_putchar('\n');
		num_1++;
	}
}
