#include "main.h"
#include <math.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int number = 612852475143;
	long int max_prime = 1;
	long int divisor;

	while(number % 2 == 0)
	{
		max_prime = 2;
		number /= 2;
	}

	for (divisor = 3; divisor <= sqrt(number); divisor += 2)
	{
		while (number % divisor == 0)
		{
			max_prime = divisor;
			number /= divisor;
		}
	}

	if (number > 2)
	{
		max_prime = number;
	}

	printf("%ld\n", max_prime);
	return (0);
}

