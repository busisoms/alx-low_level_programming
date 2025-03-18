#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{
	int len = 0, index;
	char *cpy_str = str;

	while (*cpy_str != '\0')
	{
		len++;
		cpy_str++;
	}

	if (len % 2 == 0)
	{
		index = len / 2;
		while (index < len)
		{
			_putchar(str[index]);
			index++;
		}
	}
	else
	{
		index = (len - 1) / 2;
		while (index < len)
		{
			_putchar(str[index]);
			index++;
		}
	}
	_putchar('\n');
}

