#include <stdio.h>
/**
* main - prints all possible different combinations of two digits
*
* Return: (0) success
*/

int main(void)
{
	int a;
	int b;

	a = 48;
	while (a <= 57)
	{
		b = a + 1;
		while (b <= 57)
		{
			putchar(a);
			putchar(b);

			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
