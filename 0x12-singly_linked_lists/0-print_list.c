#include "lists.h"
/**
 * print_list - prints all the elements of a list.
 * @h: pointer to head of list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
