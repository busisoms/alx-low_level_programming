#include "main.h"
#include <string.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: size of array @av
 * @av: array of strings
 *
 * Return: pointer to new string, otherwise return NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0;
	int total_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		total_len += len + 1;
	}
	str = malloc((total_len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		strcpy(str + j, av[i]);
		j += len;
		str[j] = '\n';
		j++;
	}
	str[j] = '\0';
	return (str);
}
