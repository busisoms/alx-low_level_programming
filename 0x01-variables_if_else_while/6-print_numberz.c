#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	num = 48;
	while (num != 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}

