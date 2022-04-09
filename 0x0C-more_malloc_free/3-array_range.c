#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum element
 * @max: maximum element
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
		return (NULL);

	array = malloc(((max - min) + 1) *  sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		array[j] = i;

	return (array);
}
