#include "main.h"

/**
 * cap_string - capitalizes all world of a string
 * @s: string
 *
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int cap_next = 1;
	int i, is_separator;
	char *s_org = s;
	char separators[] = " \t\n,;.!?\"(){}";

	while (*s != '\0')
	{
		is_separator = 0;
		for (i = 0; separators[i] != '\0'; i++)
		{
			if (*s == separators[i])
			{
				is_separator = 1;
				break;
			}
		}

		if (cap_next && (*s >= 97 && *s <= 122))
		{
			*s -= 32;
			cap_next = 0;
		}

		cap_next = is_separator;
		s++;
	}
	return (s_org);
}

