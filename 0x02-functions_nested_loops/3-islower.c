#include "main.h"
/**
* _islower - checks for lowercase character
*@c: The character to check
*
* Return: (1) if c is lowercase
* else returns (0)
*/

int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
