#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{
	char *start = s, *end = s, temp;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

}

