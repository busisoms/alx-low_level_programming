#include "main.h"
/**
* _strcpy - copies the string pointed to by scr to dest
* @dest: pointer to sring destination
* @scr: pointer to source of string
*
* Return: the pointer to @dest
*/

char *_strcpy(char *dest, char *src)
{
	char *cpy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (cpy);
}

