#include "lists.h"

/**
 * listint_len -  count number of nodes
 * @h: pointer to head
 *
 * Return: returns the number of nodes
 */
unsigned int listint_len(const dlistint_t *h)
{
	unsigned int node;

	node = 0;
	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
/**
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current, *before_node;
	unsigned int list_len;
	unsigned int i;

	i = 0;
	current = *h;
	before_node = NULL;

	list_len = listint_len(*h);

	printf("lenght of list = %i\n", list_len);

	if (*h == NULL && idx > list_len)
	       return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	while (current != NULL)
	{
		if (idx == i + 1)
			before_node = current;

		if (i == idx)
		{
			current->prev = new_node;
			new_node->next = current;
			new_node->prev = before_node;
			before_node->next = new_node;
			break;
		}
		current = current->next;
		i++;
	}

	return (new_node);
}
