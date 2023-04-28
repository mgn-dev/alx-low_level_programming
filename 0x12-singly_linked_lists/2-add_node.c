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
    int str_len;

    if (str == NULL)
        return NULL);
    while (str != NULL && str != '\0')

    if (*head == NULL)
    {

    }
    else
    {
        while (*head != NULL)
            *head = *head->next;

        *head = malloc(sizeof(list_t));

        *head->
    }

    head = malloc(sizeof(list_t));

    if (head == NULL)

    *head->str = malloc(sizeof(str));

	return (0);
}
