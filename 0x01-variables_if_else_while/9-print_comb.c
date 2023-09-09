#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
*
* Return: (0) success
*/

int main(void)
{
	char a;

	a = 48;

	while (a <= 57)
	{
		putchar(a);

		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
