#include "main.h"

/**
 * print_from_n_to_98 - prints all natural n to 98
 * @n: starting number
 *
 */

void print_from_n_to_98(int n)
{
	while (n >= 98)
	{
		if (n >= 100)
		{
			_putchar('0' + (n / 100));
			_putchar('0' + ((n % 100) / 10));
			_putchar('0' + (n % 10));
		}
		else if (n < 100)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
}

/**
 * if_n_neg - helper function if n is negative
 * @n: starting number
 *
 */

void if_n_neg(int n)
{
	int neg;

	if (n < -9)
	{
		neg = n * -1;

		_putchar('-');
		_putchar('0' + (neg / 10));
		_putchar('0' + (neg % 10));
	}
	else if (n >= -9 && n < 0)
	{
		neg = n * -1;

		_putchar('-');
		_putchar('0' + neg);
	}
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				if_n_neg(n);
			}
			else if (n <= 9 && n >= 0)
			{
				_putchar('0' + n);
			}
			else if (n > 9)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		print_from_n_to_98(n);
	}
	_putchar('\n');
}
