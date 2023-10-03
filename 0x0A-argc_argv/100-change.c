#include "main.h"
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money
 * @argc: number of arguments passed to main
 * @argv: pointer to array of arguments passed to main
 *
 * Return: (0) Always success
 */

int main(int argc, char *argv[])
{
	int cent, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= 25)
		{
			cent -= 25;
			sum++;
		}
		else if (cent >= 10)
		{
			cent -= 10;
			sum++;
		}
		else if (cent >= 5)
		{
			cent -= 5;
			sum++;
		}
		else if (cent >= 2)
		{
			cent -= 2;
			sum++;
		}
		else
		{
			cent -= 1;
			sum++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
