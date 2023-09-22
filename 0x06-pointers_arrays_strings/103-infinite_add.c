#include "main.h"
/**
* infinite_add - adds two numbers that are strings
* @n1: pointer to number to be added
* @n2: pointer to number to be added
* @r: buffer that stores result
* @size_r: is the buffer size
* Return: pointer to result, else return 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int r1 = 0, r2 = 0, sum;
	int temp[size_r];
	int i = 0, j = 0;

	while (*n1 >= '0' && *n1 <= '9')
	{
		r1 = r1 * 10 + (*n1 - '0');
		n1++;
	}
	while (*n2 >= '0' && *n2 <= '9')
	{
		r2 = r2 * 10 + (*n2 - '0');
		n2++;
	}
	sum = r1 + r2;

	while (sum > 0)
	{
		if (i >= size_r)
		{
			return (0);
		}
		temp[i] = sum % 10;
		sum /= 10;
		i++;
	}
	if (i == 0)
	{
		if (i >= size_r)
		{
			return (0);
		}
		temp[i++] = 0;
	}
	for (j = 0; j < i; j++)
	{
		r[i] = temp[i - j - 1] + '0';
	}
	r[i] = '\0';
	return (r);
}
