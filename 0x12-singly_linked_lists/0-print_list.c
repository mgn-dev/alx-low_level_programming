#include "lists.h"
#include <stdio.h>

/**
* print_list - function that prints all the elements of a list_t list.
* @h: a linked list node.
*
* Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}
