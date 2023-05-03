#include "lists.h"

/**
* delete_nodeint_at_index - function that deletes the node
* at index index of a listint_t linked list.
* @head: pointer to a linked list head.
* @index: position of node to delete in list.
*
* Return: 1 if succeeds, -1 if fails.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL, *curr = NULL, *prev = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);

		return (1);
	}
	else
	{
		unsigned int i;

		prev = (*head);
		curr = (*head)->next;

		for (i = 1; curr != NULL; i++)
		{
			if (i == index)
			{
				temp = curr;
				curr = curr->next;
				prev->next = curr;
				free(temp);

				return (1);
			}

			prev = curr;
			curr = curr->next;
		}

		return (-1);
	}
}
