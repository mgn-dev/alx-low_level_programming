#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to head of dlistint_t list.
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}

	free(head);

	head = NULL;
}
