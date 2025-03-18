#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 *
 */

void print_rev(char *s)
{
	int len = 0, index;
	char *s_cpy = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	printf("%d\n", len);

	index = len - 1;
	while (index >= 0)
	{
		_putchar(s_cpy[index]);
		index--;
	}
	_putchar('\n');
}


