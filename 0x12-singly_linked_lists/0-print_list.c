#include "lists.h"
/**
 * print_list - prints all the elements of a list.
 * @h: pointer to head of list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h->str == NULL)
		printf("[%l] (nil)\n");

}
