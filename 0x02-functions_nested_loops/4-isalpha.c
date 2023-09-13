#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: character to be checked
*
* Return: (1) if c is a letter, lowercase or uppercase
* else return (0)
*/

int _isalpha(int c)
{
	int i, j;

	for (i = 65, j = 97; i <= 90 && j <= 122; i++, j++)
	{
		if (c == i || c == j)
		{
			return (1);
		}
	}
	return (0);
}
