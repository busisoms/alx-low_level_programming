#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: pointer to the destination string
* @src: pointer to the source string
*
* Return: a pointer to the string @dest
*/

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);

}
