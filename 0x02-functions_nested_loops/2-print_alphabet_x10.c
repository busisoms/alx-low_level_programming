#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int chr, i;

	i = 0;
	while (i != 10)
	{
		chr = 97;
		while (chr <= 122)
		{
			_putchar(chr);
			chr++;
		}
		_putchar('\n');
		i++;
	}
}
