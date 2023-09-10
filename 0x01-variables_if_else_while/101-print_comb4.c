#include <stdio.h>
/**
* main - prints all possible different combinations of three digits
*
* Return: (0) success
*/

int main(void)
{
	int a;
	int b;
	int c;

	a = 48;
	while (a <= 57)
	{
		b = a + 1;
		while (b <= 57)
		{
			c = b + 1;
			while (c <= 57)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
