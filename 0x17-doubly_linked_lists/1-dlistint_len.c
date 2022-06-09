#include "lists.h"
/**
 * dlistint_len -  count number of nodes
 * @h: pointer to head
 *
 * Return: returns the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}

	return (node);
}
