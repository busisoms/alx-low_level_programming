#include "main.h"
/**
* _strchr - locates a character in a string
* @s: pointer to input string
* @c: search character
*
* Return: pointer to first occurrence of @c in @s
* else return NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
