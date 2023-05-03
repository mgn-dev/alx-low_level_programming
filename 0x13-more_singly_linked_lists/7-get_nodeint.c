#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node of
* a listint_t linked list.
* @head: head to a linked list.
* @index: position of node to return.
*
* Return: node at index position.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
	}

	return (NULL);
}
