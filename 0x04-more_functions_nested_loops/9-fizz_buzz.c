#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		printf(" ");
		num++;
	}
	putchar('\n');
	return (0);
}
