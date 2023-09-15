#include "main.h"
/**
* _isdigit - checks for a digit (0 through 9)
* @c: any given character
*
* Return: 1 if @c is a digit
* else return 0
*/

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
