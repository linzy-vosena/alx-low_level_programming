#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid - function that frees memory allocated for a 2-dimensional grid
 * @grid: the 2-dimensional grid
 * @height: height dimension of the grid
 * Description: This function frees the memory of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}

	free(grid);
}
