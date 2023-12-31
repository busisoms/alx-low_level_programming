#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: pointer to memory area
* @b: constant byte to fill memory @s
* @n: size of memory to be filled
*
* Return: pointer @s to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
