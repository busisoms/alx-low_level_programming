#include "main.h"
/**
* _strcmp - compare two strings
* @s1: pointer to string to be compared
* @s2: pointer to string to be compared
*
* Return: (0) if @s1 is equal to @s2
* else return negative number if @s1 is less than @s2
* otherwise return a positive number is @s1 is greater than @s2
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
