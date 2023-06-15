#ifndef LIST_H
#define LIST_H
#include <stddef.h>

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

#endif
