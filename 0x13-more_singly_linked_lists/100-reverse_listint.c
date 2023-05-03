#include "lists.h"
#include <stdio.h>

/**
* reverse_listint - function that reverses a listint_t linked list.
* @head: pointer to a linked list head.
*
* Return: pointer to the new head to linked list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *new_head;

	if ((*head) == NULL || head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
	{
		return (*head);
	}
	else if ((*head)->next->next == NULL)
	{
		new_head = (*head)->next;
		new_head->next = (*head);
		(*head)->next = NULL;
		(*head) = new_head;

		return (*head);
	}
	else
	{
		new_head = (*head)->next;
		temp = new_head->next;
		(*head)->next = NULL;

		while (temp != NULL)
		{
			new_head->next = *head;
			*head = new_head;
			new_head = temp;
			temp = temp->next;
		}

		new_head->next = *head;
		(*head) = new_head;

		return (*head);
	}
}
