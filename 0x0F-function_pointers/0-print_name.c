#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name to be printed
 * @f: pointer to function to print name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}

