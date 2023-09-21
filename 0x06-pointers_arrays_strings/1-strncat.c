#include "main.h"
/**
* _strncat - concatenates two strings, use at most n bytes from src
* @dest: pointer to destination string
* @src: pointer to source string
* @n: number of char to use
*
* Return: a pointer to the resulting string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
