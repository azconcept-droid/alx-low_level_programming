#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);
	return (check);
}
