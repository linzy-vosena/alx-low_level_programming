#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a listint_t list
 * @head: first node of the linked list
 * @index: index of the node to return
 *
 * Return: the nth node of a listint_t linked list,
 *or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int f = 0;
	listint_t *temp = head;

	while (temp && f < index)
	{
		temp = temp->next;
		f++;
	}

	return (temp ? temp : NULL);
}
