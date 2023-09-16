#include "main.h"
/**
* print_diagonal - draws a line on the terminal
* @n: number of time to draw (\)
*
*/

void print_diagonal(int n)
{
	int m, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			for (p = 1; p <= m; p++)
			{
				if (p == m)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
