#include "lists.h"
#include <string.h>

/**
* add_node - function that adds a new node at the beginning of a list_t list.
* @head: first node of a linked list.
* @str: string to store in a node.
*
* Return: modified linked list.
*/
list_t *add_node(list_t **head, const char *str)
{
	int str_len = 0;

	while (str != NULL && str[str_len] != '\0')
		str_len++;

	if (*head == NULL)
	{
		(*head) = malloc(sizeof(list_t));

		if (*head == NULL)
			return (NULL);

		(*head)->str = strdup(str);
		(*head)->len = str_len;

		(*head)->next = NULL;
	}
	else
	{
		list_t *new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = str_len;
		new_node->next = (*head);

		(*head) = new_node;
	}

	return (*head);
}
