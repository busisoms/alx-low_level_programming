#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int i, j, space, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	space = size - 1;
	for (i = 0; i < size; i++)
	{

		for (j = space; j > 0; j--)
		{
			_putchar(' ');
		}

		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		space--;
	}
}
