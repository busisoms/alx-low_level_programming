#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int num_1, num_2, num_3, total;

	num_1 = 0;
	num_2 = 1;
	num_3 = 0;
	total = 0;

	while (1)
	{
		num_3 = num_1 + num_2;
		if (num_3 > 4000000)
			break;

		if (num_3 % 2 == 0)
			total += num_3;

		num_1 = num_2;
		num_2 = num_3;
	}
	printf("%ld\n", total);
	return (0);
}

