#include "main.h"
#include <string.h>

/**
 * *string_nconcat -  concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first bytes of s2
 *
 * Return: pointer to new string, otherwise return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i;
	unsigned int len, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}

	len = len1 + n;
	s3 = malloc(sizeof(char) * (len + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s3[i + len1] = s2[i];
	}
	s3[len] = '\0';
	return (s3);
}
