#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located
 * substring or NULL is substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *n, *h;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;

		}
		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
