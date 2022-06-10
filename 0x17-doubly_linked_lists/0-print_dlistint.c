#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t nodes;

	current = h;
	nodes = 0;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		nodes++;
	}

	return (nodes);
}
