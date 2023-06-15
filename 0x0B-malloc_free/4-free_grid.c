#include "main.h"
#include <stdlib.h>
/**
 * free_grid - allocates a grid & make and free spaces
 * @grid: width of grid
 * @height: height
 * Return: grid
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
