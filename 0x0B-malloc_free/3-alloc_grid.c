#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that  fills memory with a constant byte.
 *
 * @width: w
 * @height: h
 *
 * Return: pointer m
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = malloc(sizeof(*grid) * height);
	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}
	else
		for (i = 0; i < height ; i++)
		{
			grid[i] = malloc(sizeof(int) * width);
			if (grid[i] == 0)
			{
				while (i--)
					free(grid[i]);
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width ; j++)
				grid[i][j] = 0;
		}
	return (grid);
}
