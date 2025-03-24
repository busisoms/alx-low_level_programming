#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src
 *
 * Return: a pointer to the resulting string  dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_org = dest;
	int count;

	if (n <= 0)
		return (dest);

	/* move dest pointer to '\0' */
	while (*dest != '\0')
	{
		dest++;
	}

	/* copy src to dest */
	count = 0;
	while (count < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';

	return (dest_org);
}

