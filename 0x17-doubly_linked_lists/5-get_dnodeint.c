#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list.
 * @head: pointer to head.
 * @index: index of node to get
 *
 * Return: the nth node else NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;

	while (current != NULL)
	{
		if (i == index)
			return (current);

		current = current->next;
		i++;
	}

	return (NULL);
}
