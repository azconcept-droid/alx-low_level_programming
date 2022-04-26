#include "lists.h"
/**
 * listint_len -  count number of elements in a linked
 * @h: pointer to head of list
 *
 * Return: the number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_element;

	num_element = 0;
	while (h)
	{
		h = h->next;
		num_element++;
	}
	return (num_element);
}
