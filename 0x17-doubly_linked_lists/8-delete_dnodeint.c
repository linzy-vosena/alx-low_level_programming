#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c;
	dlistint_t *c1;
	unsigned int i;

	c = *head;

	if (c != NULL)
		while (c->prev != NULL)
			c = c->prev;

	i = 0;

	while (c != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = c->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				c1->next = c->next;

				if (c->next != NULL)
					c->next->prev = c1;
			}

			free(c);
			return (1);
		}
		c1 = c;
		c = c->next;
		i++;
	}

	return (-1);
}
