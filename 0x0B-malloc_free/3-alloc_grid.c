#include <stdio.h>
/**
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid, h = 0, w = 0;

	if (width <= 0 || height <=0)
		return (NULL);
	grid = malloc(width * height * sizeof(int));
	if (grid == NULL)
		return (NULL);
	while (h < height)
	{
		while (w < width)
		{
			*(*(grid + h) + w) = 0;
			w++;
		}
		_putchar('\n');
		h++;
	}
	return (grid);

}
