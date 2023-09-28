#include "main.h"

/**
 * prime_check - helper function to check if a number is prime
 * @n: input number to check
 * @m: the current divisor to test
 *
 * Return: 1 if @n is prime, 0 otherwise
 */

int prime_check(int n, int m)
{
	if (n <= 1)
	{
		return (0);
	}
	if (m == 1)
	{
		return (1);
	}
	if (n % m == 0)
	{
		return (0);
	}

	return (prime_check(n, m - 1));
}


/**
 * is_prime_number - checks if a number is a prime number or not
 * @n: input number to be checked
 *
 * Return: 1 if @n is a prime number
 * otherwise return 0
 */

int is_prime_number(int n)
{
	return (prime_check(n, n - 1));
}
