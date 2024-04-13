#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	int first;
	unsigned long int i;
	hash_node_t *items;

	if (ht == NULL)
		return;

	first = 1;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		items = ht->array[i];

		while (items != NULL)
		{
			if (!first)
				printf(", ");

			printf("'%s': '%s'", items->key, items->value);

			first = 0;
			items = items->next;
		}
	}
	printf("}\n");
}
