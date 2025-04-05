#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of character c
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	if (c == '\0')
		return (NULL);

	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}
	return (s);
}

