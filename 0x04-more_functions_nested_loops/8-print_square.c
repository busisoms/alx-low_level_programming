#include "main.h"
/**
* print_square - prints a square
* @size: is the size of the square
*/

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a <= size - 1; a++)
		{
			for (b = 0; b <= size - 1; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

