#include <math.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: searches for a value in an array of integers
 * using the interpolation search algorithm
 * Return: index of searched value,
 * If it is not present in array or if array is NULL,
 * your function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (array[high] != array[low] && (value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}

	if (array[low] == value)
		return (low);

return (-1);
}
