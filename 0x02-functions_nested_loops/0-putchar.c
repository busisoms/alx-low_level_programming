#include "main.h"
/**
* main - prints _putchar
*
* Return: (0) success
*/

int main(void)
{
	int i = 0;
	char *str = "_putchar";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);


}
