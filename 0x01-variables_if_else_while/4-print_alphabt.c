#include <stdio.h>
/**
* main - prints the alphabet in lowercase, except q and e
*
* Return: (0) success
*/

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
