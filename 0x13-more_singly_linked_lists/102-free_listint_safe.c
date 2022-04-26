#include "lists.h"
/**
 * free_listp2 - frees a linked list
 * @head: pointer to head address
 *
 * Return: nothing
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp, *curr;

	if (head)
	{
		curr = *head;
		while ((tmp = curr) != NULL)
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to head address
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add, *curr;

	hptr = NULL;
	while (*h)
	{
		new = malloc(sizeof(listp_t));

		if (new)
			exit(98);
		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}
		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
