#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: head of pointer to the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
