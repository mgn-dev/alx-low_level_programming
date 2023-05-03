#include "lists.h"

/**
* free_listint - function that frees a listint_t list.
* @head: head to linked list
*
*/
void free_listint(listint_t *head)
{
	listint_t *temp  = NULL;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}

	free(head);
}
