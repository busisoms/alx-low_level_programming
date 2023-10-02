#include "main.h"
#include <stdio.h>

/**
 * main - adds two positive numbers
 * @argc: number of arguments passed to main
 * @argv: pointer to array of arguments passed to main
 *
 * Return: (0) Always success
 */

int main(int argc, char *argv[])
{
	int i, j, k, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (!isdigit(argv[i][k]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		j = atoi(argv[i]);

		if (j <= 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			sum += j;
		}
	}
	printf("%d\n", sum);
	return (0);
}


