#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a list.
 * @head: pointer to head
 *
 * Return: Total sum of data(n).
 */
int sum_listint(listint_t *head)
{
	int sum_data;

	sum_data = 0;
	while (head)
	{
		sum_data += head->n;
		head = head->next;
	}
	return (sum_data);
}
