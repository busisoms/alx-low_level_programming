#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements to print
 *
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		return;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d\n", *(a + n - 1));
}

