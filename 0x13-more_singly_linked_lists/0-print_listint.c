#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head node of list
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count_node;

	count_node = 0;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count_node++;
	}
	if (h == NULL)
	{
		printf("%i\n", h->n);
		count_node++;
	}
	return (count_node);
}
