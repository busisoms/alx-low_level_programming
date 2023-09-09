#include <stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase
*
* Return: (0) success
*/

int main(void)
{
	char a;
	char b;

	a = 48;
	while (a <= 57)
	{
		putchar(a);
		a++;
	}

	b = 'a';
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
