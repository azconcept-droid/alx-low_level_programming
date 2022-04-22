#include "list.h"
/**
 * free_list - free list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	free(head);
}
