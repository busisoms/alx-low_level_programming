#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associateed with key
 * @ht: is the hash_table
 * @key: is the key
 *
 * Return: the value associated with the element or NUll if key
 * couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *item;

	idx = key_index((const unsigned char *)key, ht->size);

	item = ht->array[idx];
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
