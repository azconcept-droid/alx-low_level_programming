#include "lists.h"

/**
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current, *temp;
	unsigned int i;

	i = 0;
	current = *h;
	temp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	
	while (current != NULL)
	{
		if (idx == i - 1)
			temp = current;
		if (idx == i)
		{
			current->prev = new_node;
			new_node->next = current;
			new_node->prev = temp;
			temp->next = new_node;
		}
		else
		{
			return (NULL);
		}
		current = current->next;
		i++;
	}
	return (new_node);
}
