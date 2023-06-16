#ifndef LIST_H
#define LIST_H
#include <stddef.h>
#include <stdlib.h>

/**
 * struct dlistint_t - singly linked list
 * @n: integer value
 * @prev: points to the next node
 * @next: points to the next node
 *
 */
typedef struct dlistint_t
{
	int n;
	struct dlistint_t *prev;
	struct dlistint_t *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

#endif
