#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2-dimensional grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Pointer to the created grid, NULL when allocation fails
 */
int **alloc_grid(int width, int height)
{
	int **grd;
	int c, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	grd = malloc(sizeof(int *) * height);

	if (grd == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		grd[c] = malloc(sizeof(int) * width);

		if (grd[c] == NULL)
		{
			for (; c >= 0; c--)
				free(grd[c]);

			free(grd);
			return (NULL);
		}
	}

	for (c = 0 ; c < height ; c++)
	{
		for (d = 0 ; d  < width ; d++)
			grd[c][d] = 0;
	}
	return (grd);
}
