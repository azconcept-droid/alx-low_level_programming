#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: pointer to pointer to head
 * @index: index of the node that should be deleted
 *
 * Description: deletes the node at index
 * index of a dlistint_t linked list.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *before, *after;
	unsigned int i;

	current = *head;
	before = NULL;
	after = NULL;
	i = 0;

	if (*head == NULL)
		return (-1);

	while (current != NULL)
	{
		if (index == i + 1)
			before = current;
		if (i == index)
			temp = current;
		if (i == index + 1)
		{
			after = current;
			break;
		}
		current = current->next;
		i++;
	}
	free(temp);
	before->next = after;
	after->prev = before;
	return (1);
}
