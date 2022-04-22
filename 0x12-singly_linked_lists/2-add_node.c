#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to head of list
 * @str: string passed
 *
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	len = 0;
	while (str[len])
		len++;
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
