#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers
 * @a: array
 * @n: number of element of the array
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp, *start = a, *end = a + (n - 1);

	while (i < n / 2)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
		i++;
	}
}

