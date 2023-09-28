#include "main.h"
/**
 * _pow_recursion - calculates the value of x to the power of y
 * @x: is the base
 * @y: is the exponent
 *
 * Return: the result of @x to the power of @y
 * else return (-1) if @y in < 0
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
