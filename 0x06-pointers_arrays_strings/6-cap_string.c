#include "main.h"
/**
* cap_string - capitalizes all words of a string
* @s: pointer to string to be capitalized
*
* Return: pointer to capitalized string
*/

char *cap_string(char *s)
{
	char separator[] = " \t\n,;!?\"(){}";
	int i, j;


	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - ('a' - 'A');
	}

	for (j = 1; s[j] != '\0'; j++)
	{
		for (i = 0; i < 13; i++)
		{
			if (s[j] == separator[i])
			{
				if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
				{
					s[j + 1] = s[j + 1] - ('a' - 'A');
				}
			}
		}
	}
	return (s);
}
