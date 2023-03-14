#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the allocated 2D array
 * @grid: a pointe to the 2D array
 * @height: an integer containing the height of the 2D array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
