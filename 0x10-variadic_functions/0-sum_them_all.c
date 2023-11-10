#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of args
 *
 * Return: returns the sum of all its parameters, otherwise return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum = 0;
	unsigned int add;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		add = va_arg(args, int);
		sum += add;
	}
	va_end(args);
	return (sum);
}

