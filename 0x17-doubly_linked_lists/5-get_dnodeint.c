#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list.
 * @head: pointer to head of dlistint_t list.
 * @index: the index of the node, starting from 0
 *
 * Return: node or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i;

	temp = head;

	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}

	return (temp);
}
