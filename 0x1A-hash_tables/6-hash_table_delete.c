#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *trv = NULL;
	hash_node_t *prev = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			trv = ht->array[i];

			do {
				prev = trv;
				trv = trv->next;
				free(prev->value);
				free(prev->key);
				free(prev);
			} while (trv != NULL);
		}
	}

	free(ht->array);
	free(ht);
}
