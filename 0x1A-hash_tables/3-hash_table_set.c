#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table
 * @key: is the key
 * @value: is the value associated with the @key
 *
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *items;

	if (ht == NULL || key == NULL || *key == '\0' ||
			value == NULL)
		return (0);

	items = malloc(sizeof(hash_node_t));
	if (items == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	items->key = strdup(key);
	if (items->key == NULL)
	{
		free(items);
		return (0);
	}

	items->value = strdup(value);
	if (items->value == NULL)
	{
		free(items->key);
		free(items);
		return (0);
	}

	items->next = NULL;

	if (ht->array[idx] != NULL)
		items->next = ht->array[idx];
	ht->array[idx] = items;

	return (1);
}
