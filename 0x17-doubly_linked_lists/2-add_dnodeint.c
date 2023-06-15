#include "lists.h"

/**
* add_dnodeint - function that adds a new node
* at the beginning of a dlistint_t list.
* @head: pointer to head of dlistint_t list.
* @n: value stored in node.
*
* Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (*head == NULL)
	{
		new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		(*head)->prev = new_node;
		*head = new_node;
	}

	return (new_node);
}
