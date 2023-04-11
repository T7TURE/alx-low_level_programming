#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If width or height is 0 or negative,
 *or if memory allocation fails - NULL.
 * Otherwise - a pointer to the 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = calloc(height, sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}

