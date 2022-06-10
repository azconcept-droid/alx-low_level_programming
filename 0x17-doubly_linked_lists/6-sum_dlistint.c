#include "lists.h"

/**
 * sum_dlistint - calculate sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to head
 *
 * Return: sum of data else 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	sum = 0;
	current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
