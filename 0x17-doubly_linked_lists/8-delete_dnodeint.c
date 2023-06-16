#include "lists.h"
#include <stdio.h>

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

	if (*head == NULL)
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
