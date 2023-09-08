#include <stdio.h>
/**
* main - prints the alphabet in lowercase
*
* Return: (0) success
*/

int main(void)
{
	char a;
	int b;

	a = 'a';
	b = 0;
	while (b < 26)
	{
		putchar(a);
		b++;
		a++;
	}
	putchar('\n');
	return (0);
}
