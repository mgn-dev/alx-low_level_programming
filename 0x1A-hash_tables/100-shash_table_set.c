#include "hash_tables.h"
#include <string.h>

/**
 * validate - function that parameters parsed.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 *
 * Returns: 0 if inputs are invalid, 1 otherwise.
*/
int validate(shash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	if (value == NULL || strcmp(value, "") == 0)
		return (0);

	return (1);
}

/**
 * collision_handling - function that checks for collision.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 * @i: the hash function result.
 *
 * Returns: 1 if insert successful, 0 otherwise.
*/
int collision_handling(shash_table_t *ht, const char *key, const char *value, int i)
{
	shash_node_t *trv;

	trv = ht->array[i];
	while (trv != NULL)
	{
		if (strcmp(trv->key, key) == 0)
		{
			trv->value = strdup(value);
			return (1);
		}
		trv = trv->next;
	}

	return (0);
}

/**
 * sorted_insert - insert node to a sorted linked list.
 * @head: pointer to shash_node_t head.
 * @tail: pointer to shash_node_t tail.
 * @node: pointer to shash_node_t snode.
 *
*/
void sorted_insert(shash_node_t **head, shash_node_t **tail, shash_node_t *node)
{
	if (*head == NULL)
	{
		*head = node;
		*tail = node;
	}
	else if (*head != NULL && *head == *tail)
	{
		if (strcmp(node->key, (*head)->key) < 0)
		{
			node->snext = *head;
			(*head)->sprev = node;
			*head = node;
		}
		else
		{
			node->sprev = *head;
			(*head)->snext = node;
			*tail = node;
		}
	}
	else
	{
		shash_node_t *trv = *head;

		while (trv->snext != NULL && strcmp(node->key, trv->key) < 0)
			trv = trv->snext;

		if (trv->sprev == NULL)
		{
			node->snext = *head;
			(*head)->sprev = node;
			*head = node;
		}
		else if (trv->snext == NULL)
		{
			node->sprev = *tail;
			(*tail)->snext = node;
			*tail = node;
		}
		else
		{
			node->sprev = trv->sprev;
			trv->sprev->snext = node;
			node->snext = trv;
			trv->sprev = node;

			while ((*tail)->snext != NULL)
				*tail = (*tail)->snext;
		}
	}
}

/**
 * shash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL, *trv;
	unsigned long int index;

	if (validate(ht, key, value) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if(collision_handling(ht, key, value, index) == 1)
		return (1);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;

	sorted_insert(&ht->shead, &ht->stail, new_node);

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
