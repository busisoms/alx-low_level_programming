#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy from source string
 *
 * Return: pointer to destination string
 */


char *_strncpy(char *dest, char *src, int n)
{
	char *dest_org = dest;
	int count;

	if (n < 0)
		return (dest);

	/* copy src to dest */
	count = 0;
	while (count < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}


	while (count < n)
	{
		*dest = '\0';
		dest++;
		count++;
	}

	return (dest_org);
}

