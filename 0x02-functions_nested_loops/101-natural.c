#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int start, stop, total;

	start = 1;
	stop = 1024;
	total = 0;

	while (start < stop)
	{
		if (start % 3 == 0 || start % 5 == 0)
		{
			total += start;
		}
		start++;
	}
	printf("%d\n", total);
	return (0);
}
