#include <stdlib>
/**
 * _realloc - reallocate memory
 * @ptr: pointer to old memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Return: pointer to reallocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	void *new_ptr;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		for (i = 0; i < old_size; i++)
			new_ptr[i] = 0;
		return (new_ptr);
	}
}
