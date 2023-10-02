#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to main
 * @argv: pointer to array of arguments passed to main
 *
 * Return: (0) Always success
 */

int main(int argc, char *argv[])
{
	int i, j, product = 1;

	if (argc <= 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = atoi(argv[i]);
			product *= j;
		}
		printf("%d\n", product);
		return (0);
	}
}
