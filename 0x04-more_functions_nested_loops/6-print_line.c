#include "main.h"
/**
* print_line - draws a line in the terminal
* @n: number of (_)
*
*/

void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
