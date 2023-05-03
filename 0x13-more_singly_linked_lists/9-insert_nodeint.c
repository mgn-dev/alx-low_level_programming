#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts new node at given position.
* @head: pointer to a linked list head.
* @idx: position to insert new node.
* @n: value to store in new node.
*
* Return: pointer to new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;

		return (*head);
	}
	else
	{
		listint_t *temp = (*head);
		unsigned int i;

		for (i = 1; temp != NULL; i++)
		{
			if (i == idx)
			{
				new_node->next = temp->next;
				temp->next = new_node;
				return (new_node);
			}

			temp = temp->next;
		}

		return (NULL);
	}
}
