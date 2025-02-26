#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = strlen(message);

	write(2, message, length);
	return (1);
}

