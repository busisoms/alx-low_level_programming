#include "main.h"
/**
* _strlen - returns the length of a string
* @s: any string passed to _strlen
*
* Return: length of a string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
