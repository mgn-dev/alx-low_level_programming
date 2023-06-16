#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position.
 * @h: pointer to head of dlistint_t list.
 * @idx: the index of the list where the new node should be added.
 * @n: value of node.
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp = NULL;
	unsigned int i;

	if (h == NULL && idx == 0)
	{
		new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
	}
	else
	{
		temp = *h;

		for (i = 0; temp != NULL && i < idx; i++)
			temp = temp->next;

		if (temp != NULL && i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));

			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = temp;
			new_node->prev = temp->prev;
			temp->prev->next = new_node;
			temp->prev = new_node;
		}
	}

	return (new_node);
}
