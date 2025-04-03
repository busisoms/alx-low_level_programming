#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to buffer
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: pointer to filled buffer
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *original = s;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (original);
}

