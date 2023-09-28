#include "main.h"

/**
 * sqrt_check - helper function to calculate the square root
 * @n: number to find the square root of
 * @guess: the current guess for the square root
 *
 * Return: the square root if found, or -1 if not
 */

int sqrt_check(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_check(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: number to square root
 *
 * Return: the square root of a number
 * else return (-1) if n < 0 and return (1) if n == 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sqrt_check(n, 1));
	}
}
