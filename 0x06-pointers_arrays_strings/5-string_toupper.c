#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @s: string
 *
 * Return: pointer to changed string
 */

char *string_toupper(char *s)
{
	char *s_org = s;

	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		{
			*s -= 32;
		}
		s++;
	}

	return (s_org);
}
