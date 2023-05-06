#include "lists.h"
#include <stdio.h>

/**
* print_listint_safe - function that prints a listint_t linked list.
* @head: first node to a linked list.
*
* Return: the number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *ptr, *start;

	if (head == NULL)
		exit(98);

	start = head;
	ptr = head->next;

	for (i = 0; ptr != NULL && (start != ptr) && i < 9; i++)
	{
		if (i == 0)
			printf("[%p] %i\n", (void *)head, head->n);
		else
			printf("[%p] %i\n", (void *)ptr, ptr->n);

		ptr = ptr->next;
	}

	return (i);
}
