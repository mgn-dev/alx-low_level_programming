#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key: the key you are looking for.
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = -1;

	if (ht == NULL)
		return (NULL);
	if (key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	else
	{
		while (ht->array[index] != NULL)
		{
			if (strcmp(ht->array[index]->key, key) == 0)
				return (ht->array[index]->value);
			ht->array[index] = ht->array[index]->next;
		}
	}

	return (NULL);
}
