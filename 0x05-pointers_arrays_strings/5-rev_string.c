#include "main.h"
/**
* rev_string - reverses a string
* @s: pointer to string to be reversed
*
*/

void rev_string(char *s)
{
	int i, len = 0;
	char new_s;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		new_s = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = new_s;
	}
}

