#include "lists.h"
#include <stdio.h>

/**
* print_listint - unction that prints all the elements of a listint_t list.
* @h: the head node of the linked list.
*
* Return: size of the linked list.
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (i);
}
