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
 * delete_dnodeint_at_index - function that deletes the node at
 * index of a dlistint_t linked list.
 * @head: pointer to the node with prev = null.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i;

	if (*head == NULL || index >= dlistint_len(*head))
		return (-1);

	temp = *head;
	for (i = 0; temp->next != NULL && i < index; i++)
		temp = temp->next;

	if (temp->next == NULL && temp->prev == NULL)
	{
		free(temp);
		*head = NULL;
	}
	else if (temp->prev == NULL)
	{
		*head = temp->next;
		temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
	}
	else if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		temp->prev = NULL;
		free(temp);
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
	}

	return (1);
}
