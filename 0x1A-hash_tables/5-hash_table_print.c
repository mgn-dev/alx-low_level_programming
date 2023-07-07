#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, f = 0;
	hash_node_t *trv = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (f > 0)
				printf(", ");

			trv = ht->array[i];

			do {
				printf("'%s': '%s'", trv->key, trv->value);
				if (trv->next != NULL)
					printf(", ");
				trv = trv->next;
				f++;
			} while (trv != NULL);
		}
	}
	printf("}\n");
}
