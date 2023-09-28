#include "main.h"
/**
 * factorial - calculates the factorial of a given number
 * @n: input number
 *
 * Return: (-1) if @n is < 0
 * else return factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
