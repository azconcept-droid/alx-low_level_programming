#include "lists.h"
/**
 * free_listint2- function that frees a listint_t list.
 * @head: pointer to head address
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (*head == NULL)
		return;
	current = *head;
	while (current)
	{
		temp = current;
		current = temp->next;
		free(temp);
	}
	*head = NULL;
	head = NULL;
}
