#include "variadic_functions.h"

/**
 * pick_data - choose datatype and prints accordly
 * @data: chosen datatype
 * @args: args
 *
 */

void pick_data(char data, va_list args)
{
	char *str;

	switch (data)
	{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%.2f", va_arg(args, double));
			break;
		case 's':
			{
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				printf("%s", str);
			}
			break;
		default:
			break;
	}
}

/**
 * print_all - prints anything
 * @format:  list of types of arguments passed to the function
 */

void print_all(const char *const format, ...)
{
	int count = 0, i = 0;
	va_list args;
	char data;
	char valid_types[] = {'c', 'i', 'f', 's'};

	while (format[i] != '\0')
	{
		count++;
		i++;
	}

	va_start(args, format);

	i = 0;
	while (i < count && format[i] != '\0')
	{
		data = format[i];
		pick_data(data, args);
		i++;
		if (i < count && format[i] != '\0' && strchr(valid_types, format[i]))
		{
			printf(", ");
		}
	}

	printf("\n");
	va_end(args);
}
