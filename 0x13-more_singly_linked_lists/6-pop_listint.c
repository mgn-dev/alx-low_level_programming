#include "lists.h"

/**
* pop_listint - function that deletes the head node of a listint_t linked list
* and returns the head node’s data (n).
* @head: head pointing to a head to a linked list.
*
* Return: contents of the node.
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp  = NULL;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head);
	(*head) = temp->next;
	free(temp);

	return (n);
}
