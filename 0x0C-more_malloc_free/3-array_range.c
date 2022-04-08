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

	array = malloc(max * sizeof(int));

	if (array == NULL)
		return (NULL);
	j = 0;
	while (j < max)
	{
		for (i = min; i <= max; i++)
			array[j] = i;
		j++;
	}

	return (array);
}
