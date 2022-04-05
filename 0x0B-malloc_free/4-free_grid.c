#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Free a 2 dimensional grid 
 *
 * @grid: Two dimensional array
 * @height: Height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
