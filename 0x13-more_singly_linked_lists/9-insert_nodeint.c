#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head address
 * @idx: index where node is inserted
 * @n: node data
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *new_h;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	new_h = *head;
	new_node->n = n;
	i = 0;

	if (new_node == NULL)
		return (NULL);
	if (idx != 0)
	{
		while ((i < idx - 1) && (new_h != NULL))
			new_h = new_h->next, i++;
	}
	if (new_h == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = new_h->next;
		new_h->next = new_node;
	}
	return (new_node);
}
