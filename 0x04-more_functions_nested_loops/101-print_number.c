#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 *
 */

void print_number(int n)
{
	unsigned int num, power;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		num = -(n);
	}
	else
	{
		num = n;
	}

	power = 1;
	while (num / power >= 10)
	{
		power *= 10;
	}

	while (power > 0)
	{
		_putchar('0' + (num / power));
		num %= power;
		power /= 10;
	}
}

