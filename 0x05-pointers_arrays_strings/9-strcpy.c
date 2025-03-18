#include "main.h"

/**
 * _strcpy - copies a strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *safe_point = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (safe_point);
}

