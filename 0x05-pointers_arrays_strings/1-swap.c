#include "main.h"
/**
* swap_int - swaps the values of two integers
* @a: pointer to int to be swapped with @b
* @b: pointer to int to be swapped with @a
*
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
