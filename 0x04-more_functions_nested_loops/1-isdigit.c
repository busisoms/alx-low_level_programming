#include "main.h"

/**
 * _isdigit - checks for a digit (0 - 9)
 * @c: number to check
 *
 * Return: 1 if c is a digit
 * else return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
