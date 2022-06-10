#include "lists.h"
/**
 * add_dnodeint_end - add node at end
 * @head: pointer t pointer to head
 * @n: data to insert
 *
 * Return: new node address else NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *find_end;

	find_end = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (find_end->next != NULL)
	{
		find_end = find_end->next;
	}
	find_end->prev = new_node;

	return (new_node);
}
