#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: number of arguments passed to main
 * @argv: pointer to array of arguments passed to main
 *
 * Return: (0) Always success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
