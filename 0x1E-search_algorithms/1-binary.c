#include "search_algos.h"

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

	do {
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
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	} while (L <= R);

	return (-1);
}
