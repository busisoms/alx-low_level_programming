#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: specific char
 *
 * Return: pointer to array, otherwise return NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * (size + 1));

	if (s != NULL)
	{
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
		s[size] = '\0';
		return (s);
	}
	return (NULL);
}
