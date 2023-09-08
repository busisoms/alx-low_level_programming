#include <stdio.h>
/**
* main - prints the alphabet in lowercase, and then in uppercase
*
* Return: (0) success
*/

int main(void)
{
	char a;
	char b;
	int c;
	int d;

	a = 'a';
	b = 'A';
	c = 0;
	while (c < 26)
	{
		putchar(a);
		c++;
		a++;
	}
	d = 0;
	while (d < 26)
	{
		putchar(b);
		d++;
		b++;

	}
	putchar('\n');
	return (0);
}
