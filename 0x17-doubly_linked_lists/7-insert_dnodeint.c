#include "lists.h"

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
		add_dnodeint(h, n);
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
			while (temp->prev != NULL)
				temp = temp->prev;
			 *h = temp;
		}
		else if (idx == (unsigned int)dlistint_len(*h))
		{
			add_dnodeint_end(h, n);
		}
	}

	return (new_node);
}
