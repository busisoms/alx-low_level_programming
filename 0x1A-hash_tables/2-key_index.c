#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: is the key
 * @size: is the size of the array of the hash_table
 *
 * Return: the index at  which key/value pair should be
 * stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
