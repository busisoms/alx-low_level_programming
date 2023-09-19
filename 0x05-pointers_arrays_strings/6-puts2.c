#include "main.h"
/**
* puts2 - prints every other character of a string
* @str: pointer to a string to be printed
*
*/

void puts2(char *str)
{

	int print = 1;

	while (*str != '\0')
	{
		if (print)
		{
			_putchar(*str);
		}
		print = !print;
		str++;
	}
	_putchar('\n');
}
