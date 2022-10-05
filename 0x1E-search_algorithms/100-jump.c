#include <math.h>
#include "search_algos.h"

/**
 * min - compare two numbers
 * @first: first number
 * @second: second number
 * Return: the smallest number
 */
size_t min(size_t first, size_t second)
{
	if (first > second)
		return (second);
	else
		return (first);
}

/**
 * jump_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: searches for a value in an array of integers
 * using the jump search algorithm
 * Return: index of searched value,
 * If it is not present in array or if array is NULL,
 * your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, step, new_prev;

	if (!array)
		return (-1);

	step = sqrt(size);

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%li] = [%i]\n",  prev, array[prev]);
		new_prev = prev;
		prev = step;
		step += sqrt(size);
		if (prev >= size)
		{
			printf("Value found between indexes [%li] and [%li]\n",  new_prev, prev);
			return (-1);
		}
	}

	while (array[prev] < value)
	{
		printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
		new_prev = prev;
		prev++;
		if (prev == min(step, size))
		{
			return (-1);
		}
	}
	printf("Value found between indexes [%li] and [%li]\n",  new_prev, prev);
	if (array[prev] == value)
		return (prev);

	return (-1);
}
