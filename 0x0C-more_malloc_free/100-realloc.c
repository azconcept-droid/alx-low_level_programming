#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocate memory
 * @ptr: pointer to old memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Return: pointer ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
