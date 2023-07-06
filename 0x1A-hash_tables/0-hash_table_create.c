#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of hash table
 *
 * Return: pointer to new hash table or NULL upon failure.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	return (new_table);
}
