#include "search_algos.h"

/**
 * print_search - prints the output of binary search
 * @array: a pointer to the first element of the array
 * @left: the lower boundary
 * @right: the upper boundary
 */
void print_search(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		printf("%i", array[left]);
		if (right != left)
			printf(", ");
		left++;
	}
	printf("\n");
}

/**
 * binary_search -  searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: searches for a value in an array of integers
 * using the Binary search algorithm
 * Return: index of searched value,
 * If it is not present in array or if array is NULL,
 * your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	/*@L: Left boundary, @R: Right Boundary @m: middle index*/
	size_t L = 0, R = size - 1, m;

	if (!array)
		return (-1);

	while (R >= L)
	{
		print_search(array, L, R);
		m = (L + R) / 2;

		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}

	return (-1);
}
