#include "lists.h"
#include <string.h>

/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: pointer to a head pointer.
* @str: the string to store in node.
*
* Return: the modified linked list.
*/
list_t *add_node_end(list_t **head, const char *str)
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
		list_t *temp = NULL;

		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = str_len;
		new_node->next = NULL;

		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (*head);
}
