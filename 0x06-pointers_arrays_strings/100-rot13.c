#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 *
 * Return: pointer to string
 */

char *rot13(char *s)
{
	char *original = s;
	char replace[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotate[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	while (*s != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (replace[i] == *s)
			{
				*s = rotate[i];
				break;
			}
		}
		s++;
	}
	return (original);
}

