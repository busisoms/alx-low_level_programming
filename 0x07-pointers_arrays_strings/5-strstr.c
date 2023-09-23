#include "main.h"
/**
* _strstr - locates a substring
* @haystack: pointer to string to be searched
* @needle: pointer to substring to be located
*
* Return: pointer to beginning of located substring
* or return NULL if substring not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

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
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
