#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to head
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *current;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	while (head->prev != NULL)
	{
		current = head;
		head = head->prev;
		free(current);
	}
}
