#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: he converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 or if b is NULL
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int i = 0;


	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		total = total * 2 + (b[i] - '0');
		i++;
	}

	return (total);
}
