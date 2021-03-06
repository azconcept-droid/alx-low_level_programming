#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory allocated memory
 * @d: pointer to the memory address
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
