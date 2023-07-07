#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *trv;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	if (value == NULL || strcmp(value, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	trv = ht->array[index];
	while (trv != NULL)
	{
		if (strcmp(trv->key, key) == 0)
		{
			trv->value = strdup(value);
			return (1);
		}
		trv = trv->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
