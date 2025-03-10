#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Alway 0 (success)
 */

int main(void)
{
	unsigned long num_1, num_2, num_3, count;

	num_1 = 0;
	num_2 = 1;
	count = 1;

	while (count <= 98)
	{
		num_3 = num_1 + num_2;
		num_1 = num_2;
		num_2 = num_3;

		if (count != 98)
		{
			printf("%lu, ", num_3);
		}
		else
		{
			printf("%lu", num_3);
		}
		count++;
	}
	putchar('\n');
	return (0);
}
