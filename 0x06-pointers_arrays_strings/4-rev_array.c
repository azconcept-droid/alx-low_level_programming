#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a : array of integers to the array
 * @n : number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
