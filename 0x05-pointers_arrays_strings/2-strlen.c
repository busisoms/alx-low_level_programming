#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string
 *
 * Return: return the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

