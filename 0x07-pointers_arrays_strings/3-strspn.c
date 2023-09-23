#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: pointer to input string
* @accept: pointer to string to be matched with @s
*
* Return: number of bytes in the initial segment of @s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *a;

	while (*s != '\0')
	{
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				n++;
				break;
			}
			a++;
		}

		if (*a == '\0')
		{
			break;
		}

		s++;
	}
	return (n);
}
