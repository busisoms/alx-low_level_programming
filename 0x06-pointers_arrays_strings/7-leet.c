#include "main.h"
/**
* leet - encodes a string into leet
* @s: pointer to a string to be encoded
*
* Return: pointer resulting string @s
*/

char *leet(char *s)
{
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j += 2)
		{
			if (s[i] == a[j] || s[i] == a[j + 1])
			{
				s[i] = b[j / 2];
				break;
			}
		}
	}
	return (s);
}
