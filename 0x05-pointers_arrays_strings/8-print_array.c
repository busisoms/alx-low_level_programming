#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a: pointer array to be printed
* @n: number of elements of the array to be printed
*
*/

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", *(a + i));
		}
		printf("%d\n", *(a + n - 1));
	}
}
