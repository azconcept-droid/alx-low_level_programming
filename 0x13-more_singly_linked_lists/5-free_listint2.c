#include "lists.h"
/**
 * free_listint2- function that frees a listint_t list.
 * @head: pointer to head address
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
