#include "main.h"

/**
 * leet - encodes a sting into 1337
 * @s: string
 *
 * Return: pointer to string
 */

char *leet(char *s)
{
	char replace_with[] = "43071";
	char replace1[] = "aeotl";
	char replace2[] = "AEOTL";
	char *original = s;
	int i;

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == replace1[i] || *s == replace2[i])
			{
				*s = replace_with[i];
			}
		}
		s++;
	}
	return (original);
}
