#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to head address
 * @index:  index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev, *next;

	prev = *head, i = 0;
	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);
	if (index != 0)
	{
		while (i < index - 1 && prev)
			prev = prev->next, i++;
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}
	return (1);
}
