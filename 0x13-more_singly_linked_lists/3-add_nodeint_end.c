#include "lists.h"

/**
* add_nodeint_end - function that adds a new node at the end of
* a listint_t list.
* @head: head to a linked list.
* @n: value stored in node.
*
* Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (*head == NULL)
	{
		(*head) = malloc(sizeof(listint_t));

		if (*head == NULL)
			return (NULL);

		(*head)->n = n;

		(*head)->next = NULL;
	}
	else
	{
		listint_t *new_node = malloc(sizeof(listint_t));
		listint_t *temp = NULL;

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (*head);
}
