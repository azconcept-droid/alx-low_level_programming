#include "lists.h"
/**
 * free_list_p - frees the linked list
 * @head: pointer to head address
 *
 * Return: nothing
 */
void free_list_p(listp_t **head)
{
	listp_t *current, *temp;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to head of list
 *
 * Description: This function can print lists with a loop
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = hptr;
		hptr = new;
		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list_p(&hptr);
				return (nnodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_list_p(&hptr);
	return (nnodes);
}
