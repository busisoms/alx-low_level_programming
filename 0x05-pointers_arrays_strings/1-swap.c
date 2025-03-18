#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: number to be swapped
 * @b: number to be swapped
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

