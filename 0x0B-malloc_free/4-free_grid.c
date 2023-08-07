#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by alloc_grid function
 *
 * @grid: the grid to be freed
 * @height: number of rows
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}

