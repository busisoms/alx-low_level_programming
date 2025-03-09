#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int abs, ret;

	if (n < 0)
	{
		abs = n * -1;
	}
	else
	{
		abs = n;
	}

	ret = abs % 10;
	_putchar('0' + ret);
	return (ret);
}


