#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Alway 0 (success)
 */

int main(void)
{
	unsigned long a_low = 1, b_low = 2, next_low;
	unsigned long a_high = 0, b_high = 0, next_high;
	unsigned long split = 1000000000000000000UL;
	int count;

	printf("%lu, %lu", a_low, b_low);

	for (count = 3; count <= 98; count++)
	{
		next_high = a_high + b_high;
		next_low = a_low + b_low;

		if (next_low >= split)
		{
			next_high += next_low / split;
			next_low %= split;
		}

		a_high = b_high;
		a_low = b_low;
		b_high = next_high;
		b_low = next_low;

		printf(" ,");
		if (b_high)
			printf("%lu%018lu", b_high, b_low);
		else
			printf("%lu", b_low);
	}
	putchar('\n');
	return (0);
}
