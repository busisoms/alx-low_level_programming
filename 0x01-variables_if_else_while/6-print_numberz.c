#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 starting from 0
* using putchar
*
* Return: (0) success
*/

int main(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
