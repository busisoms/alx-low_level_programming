#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to new concatenated string, otherwise return NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, length, length1, length2;

	if (s1 == NULL)
	{
		s1 ="";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = strlen(s1);
	length2 = strlen(s2);
	length = length1 + length2;

	s3 = malloc(length + 1);

	if (s3 != NULL)
	{
		for (i = 0; i < length1; i++)
		{
			s3[i] = s1[i];
		}
		for (i = 0; i < length2; i++)
		{
			s3[i + length1] = s2[i];
		}
		s3[length] = '\0';
		return (s3);
	}
	return (NULL);
}
