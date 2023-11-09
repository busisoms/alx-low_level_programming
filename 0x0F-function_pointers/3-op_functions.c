#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number to add
 * @b: second number to add
 *
 * Return: returns the sum of @a and @b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number to subtract
 * @b: second number to subtract
 *
 * Return: returns the difference of @a and @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number to multiply
 * @b: second number to multiply
 *
 * Return: returns the product of @a and @b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number to be divided
 * @b: second number to be divided
 *
 * Return: returns the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the reminder of the division of two numbers
 * @a: first number in calculation
 * @b: second number in calculation
 *
 * Return: returns the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

