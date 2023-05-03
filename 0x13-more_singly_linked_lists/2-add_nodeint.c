#include "lists.h"

/**
* add_nodeint - function that adds a new node at the beginning of
* a listint_t list.
* @head: a pointer to a head of a linked list.
* @n: value to be stored in node.
*
* Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
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

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;

		(*head) = new_node;
	}

	return (*head);
}
