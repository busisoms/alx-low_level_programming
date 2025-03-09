#include "main.h"

/**
 * print_alphabet - prints alphabet, in lowercase.
 *
 */

void print_alphabet(void)
{
	int chr = 97;

	while (chr <= 122)
	{
		_putchar(chr);
		chr++;
	}
	_putchar('\n');
}

