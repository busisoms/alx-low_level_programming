#include "3-calc.h"

/**
 * main -  a program that performs simple operations
 * @argc: size of argv
 * @argv: array of input
 *
 * Return: (0) success or status 98, 99, and 100
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	char *operator = argv[2];
	int (*cal)(int, int) = get_op_func(operator);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);


	if (cal == NULL)
	{
		printf("Error\n");
		exit(99);
	}


	if (num2 == 0 && (operator[0] == '/' || operator[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}


	result = cal(num1, num2);
	printf("%d\n", result);
	return (0);
}




