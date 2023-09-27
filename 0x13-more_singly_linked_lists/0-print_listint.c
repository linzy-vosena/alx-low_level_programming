#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: head of pointer to the linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;
	
	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
