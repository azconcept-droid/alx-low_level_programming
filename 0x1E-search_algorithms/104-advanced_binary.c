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
 * bin_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @L: Left boundary
 * @R: Right Boundary
 * @value: value to search for
 *
 * Description: searches for a value in an array of integers
 * using the Binary search algorithm
 * Return: index of searched value,
 * If it is not present in array or if array is NULL,
 * your function must return -1
 */
int bin_search(int *array, size_t L, size_t R, int value)
{
	/*@m: middle index*/
	size_t m;

	if (R >= L)
	{
		m = (L + R) / 2;

		printf("Searching in array: ");
		for (; L <= R; L++)
		{
			printf("%i", array[L]);
			if (R != L)
				printf(", ");
		}
		printf("\n");
		if (array[m] < value)
			return (bin_search(array, m + 1, R, value));
		else if (array[m] > value)
			return (bin_search(array, L, m - 1, value));
		else
			return (m);
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: searches for a value in an array of integers
 * using the advanced binary search algorithm
 * Return: index of searched value,
 * If it is not present in array or if array is NULL,
 * your function must return -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	/*@mini: minimum, @mid: middle, @bound: exponential bound jump*/
	size_t bound = 1, mini, mid;
	int value_index;

	if (!array || size <= 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] <= value)
	{
		bound *= 2;
	}

	mid = bound / 2;
	mini = min(bound, size - 1);

	value_index = bin_search(array, mid, mini, value);

	return (value_index);
}
