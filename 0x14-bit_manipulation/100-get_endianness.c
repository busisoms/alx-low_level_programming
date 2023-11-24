#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int check_endian = 1;
	char *check_ptr = (char *)&check_endian;

	return (*check_ptr == 1);
}

