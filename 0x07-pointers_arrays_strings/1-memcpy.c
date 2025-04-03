#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *orignal = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (orignal);
}
