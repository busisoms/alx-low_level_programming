#include "main.h"
/**
* print_number - prints an integer
* @n: number to be printed
* 
*/

void print_number(int n)
{
	int i, j;

	if ( n < 0)
	{
		_putchar('-');
		n = -n;
	}

	i = 1;
	j = n;

	while (j >= 10)
	{
		i *= 10;
		j /= 10;
	}

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (i > 0)
		{
			_putchar('0' + ((n / i) % 10));
			i /= 10;
		}
	}
}
