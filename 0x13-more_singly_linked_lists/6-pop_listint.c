#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int h_node_data;
	listint_t *new_h, *temp;

	if (*head == NULL)
		return (0);
	temp = *head;

	h_node_data = temp->n;

	new_h = temp->next;

	free(temp);
	*head = new_h;
	return (h_node_data);
}
