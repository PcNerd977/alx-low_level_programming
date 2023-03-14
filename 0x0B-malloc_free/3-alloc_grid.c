#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - an array that allocate space for 2D array
 * @width: an integer of the width of the array
 * @height: an integer of the height of the array
 * Return: a pointer to the created 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));
	if (!ptr)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
