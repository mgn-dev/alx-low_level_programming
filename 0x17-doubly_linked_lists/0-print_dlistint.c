#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - function that prints all the elements of a dlistint_t list.
* @h: head to a dlistint_t list.
*
* Return: the number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
