#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a
 * square matrix of integers
 * @a: pointer to array
 * @size: size of the array
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		sum_diag2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
