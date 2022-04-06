#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid -  initialize grid to 0.
 * @width: columns of grid
 * @height: rows of grid
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **grid, h = 0, w = 0, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}
	while (h < height)
	{
		while (w < width)
		{
			*(grid + (h * width) + w) = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
