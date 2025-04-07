#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

