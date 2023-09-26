#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of pointer to the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h!= NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
