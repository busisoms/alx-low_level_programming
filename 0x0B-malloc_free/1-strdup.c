#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 *
 * Return: a pointer to copy of @str, otherwise return NULL
 */

char *_strdup(char *str)
{
	char *s;
	int i, length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	s = malloc(length + 1);

	if (s != NULL)
	{
		for (i = 0; i < length; i++)
		{
			s[i] = str[i];
		}
		s[length] = '\0';
		return (s);
	}
	return (NULL);
}
