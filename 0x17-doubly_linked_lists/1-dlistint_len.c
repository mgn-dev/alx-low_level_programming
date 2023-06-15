#include "lists.h"

/**
* dlistint_len - function that returns the number of elements
* in a linked dlistint_t list.
* @h: pointer to the head of dlistint_t list.
*
* Return: number of elements.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}

	return (size);
}
