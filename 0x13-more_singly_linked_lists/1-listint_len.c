#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a listint_t lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elements = 0;

	while (h)
	{
		num_elements++;
		h = h->next;
	}

	return (num_elements);
}
