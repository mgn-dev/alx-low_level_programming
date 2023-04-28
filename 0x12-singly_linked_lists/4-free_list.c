#include "lists.h"
#include <stdio.h>

/**
* free_list - function that frees a list_t list.
* @head: pointer to a linked list.
*
*/
void free_list(list_t *head)
{
	list_t *temp  = NULL;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp->str);
		free(temp);
	}

	free(head->str);
	free(head);
}
