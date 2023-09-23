#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer to string to search through
* @accept: pointer to set of bytes to search in @s
*
* Return: a pointer to bytes in @s
* else return NULL if no byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
