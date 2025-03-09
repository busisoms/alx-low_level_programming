#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int num_1, num_2, total, start;

	num_1 = 1;
	num_2 = 2;
	printf("%ld, %ld", num_1, num_2);

	start = 1;
	while (start <= 48)
	{
		total = num_1 + num_2;
		num_1 = num_2;
		num_2 = total;
		start++;
		printf(", %ld", total);
	}
	putchar('\n');
	return (0);
}
