#include "lists.h"
#include <stdio.h>

/**
* dlistint_len - function that returns the number of elements
* in a linked dlistint_t list.
* @h: pointer to the head of dlistint_t list.
*
* Return: number of elements.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}

	return (size);
}

/**
 * reset_head - resets pointer to head to point to
 * the node with prev = null.
 * @h: pointer to current node pointer.
 *
*/
void reset_head(dlistint_t **h)
{
	while ((*h)->prev != NULL)
	{
		*h = (*h)->prev;
	}
}

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

	if (*h == NULL && idx == 0)
	{
		new_node = add_dnodeint(h, n);
		*h = new_node;
	}
	else
	{
		temp = *h;
		for (i = 0; temp->next != NULL && i < idx; i++)
			temp = temp->next;

		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->prev = temp->prev;
			temp->prev = new_node;
			new_node->next = temp;
			if (new_node->prev != NULL)
				new_node->prev->next = new_node;
			reset_head(h);
		}
		else if (idx == dlistint_len(*h))
		{
			new_node = add_dnodeint_end(h, n);
			reset_head(h);
		}
	}

	return (new_node);
}
