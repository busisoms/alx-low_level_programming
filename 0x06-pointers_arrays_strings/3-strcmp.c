#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if s1 and s2 are equal
 * else less than 0 if s1 less than s2
 * otherwise greater than 0 if s1 greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	/* compare s1 and s2 */
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	result = *s1 - *s2;

	return (result);
}

