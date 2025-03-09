#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: number for the times table
 *
 */

void print_times_table(int n)
{
	int num_1, num_2, result, next_result;

	if (n > 15)
	{
		return;
	}

	num_1 = 0;
	while (num_1 <= n)
	{
		num_2 = 0;
		while (num_2 <= n)
		{
			result = num_2 * num_1;
			next_result = (num_2 + 1) * num_1;

			if (result <= 9)
			{
				_putchar('0' + result);
			}
			else if (result > 9 && result < 100)
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			else if (result >= 100)
			{
				_putchar('0' + (result / 100));
				_putchar('0' + ((result % 100) / 10));
				_putchar('0' + (result % 10));
			}

			/* spacing */

			if (num_2 != n)
			{
				_putchar(',');
				_putchar(' ');
				if (next_result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (next_result >= 10 && next_result < 100)
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
