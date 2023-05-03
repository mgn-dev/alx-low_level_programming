#include "lists.h"

/**
* sum_listint - function that returns the sum of all the data (n) of
* a listint_t linked list.
* @head: head to a linked list.
*
* Return: return the sum of values stored in nodes.
*/
int sum_listint(listint_t *head)
{
	int sum = 0, i;
	listint_t *temp = head;

	for (i = 0; temp != NULL; i++)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
