#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - function that creates a hash table.
 * @size: size of hash table
 *
 * Return: pointer to new hash table or NULL upon failure.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = malloc(sizeof(shash_table_t));
	unsigned long int i;

	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(shash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * validate - function that parameters parsed.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 *
 * Return: 0 if inputs are invalid, 1 otherwise.
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
 * collisions - function that checks for collision.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 * @i: the hash function result.
 *
 * Return: 1 if insert successful, 0 otherwise.
*/
int collisions(shash_table_t *ht, const char *key, const char *value, int i)
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
 * mid_insert - function that insert node in the middle of linked list.
 * @head: pointer to shash_node_t head.
 * @tail: pointer to shash_node_t tail.
 * @node: pointer to shash_node_t snode.
 *
*/
void mid_insert(shash_node_t **head, shash_node_t **tail, shash_node_t *node)
{
	shash_node_t *trv = *head;

	while (trv->snext != NULL && strcmp(node->key, trv->key) > 0)
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

/**
 * sort_insert - insert node to a sorted linked list.
 * @head: pointer to shash_node_t head.
 * @tail: pointer to shash_node_t tail.
 * @node: pointer to shash_node_t snode.
 *
*/
void sort_insert(shash_node_t **head, shash_node_t **tail, shash_node_t *node)
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
		mid_insert(head, tail, node);
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
	shash_node_t *new_node = NULL;
	unsigned long int index;

	if (validate(ht, key, value) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (collisions(ht, key, value, index) == 1)
		return (1);

	new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;

	sort_insert(&ht->shead, &ht->stail, new_node);

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}

/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key: the key you are looking for.
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
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

/**
 * shash_table_print - function that prints a hash table.
 * @ht: the hash table.
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *trv = NULL;

	if (ht == NULL)
		return;

	printf("{");

	trv = ht->shead;

	while (trv != NULL)
	{
		printf("'%s': '%s'", trv->key, trv->value);

		if (trv->snext != NULL)
			printf(", ");

		trv = trv->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - function that prints a hash table.
 * @ht: the hash table.
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *trv = NULL;
	shash_node_t *chain_trv = NULL;

	if (ht == NULL)
		return;

	printf("{");

	trv = ht->stail;

	while (trv != NULL)
	{
		chain_trv = trv;

		do {
			printf("'%s': '%s'", chain_trv->key, chain_trv->value);
			if (chain_trv->next != NULL)
				printf(", ");
			chain_trv = trv->next;
		} while (chain_trv != NULL);

		if (trv->sprev != NULL)
			printf(", ");

		trv = trv->sprev;
	}

	printf("}\n");
}

/**
 * hash_table_print - function that prints a hash table
 * according to bucket.
 * @ht: the hash table.
 *
 */
void ht_print_bucket(const shash_table_t *ht)
{
	unsigned long int i, f = 0;
	shash_node_t *trv = NULL;

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

/**
 * shash_table_delete - function that deletes a hash table.
 * @ht: the hash table.
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *trv = NULL;
	shash_node_t *prev = NULL;

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
