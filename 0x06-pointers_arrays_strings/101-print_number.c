#include "main.h"
/**
* print_number - prints an integer
* @n: number to be printed
*
*/

void print_number(int n)
{
	char num[20];
	int i, j;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;	
	}

	i = 0;

	while (n > 0)
	{
		num[i++] = '0' + (n % 10);
		n /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(num[j]);
	}

}
