#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head
 * @str: string data
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;
	unsigned int len;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	last = *head;

	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;
	return (new_node);
}
