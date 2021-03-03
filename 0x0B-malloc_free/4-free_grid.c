#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - clean a two-dimensional matrix
 * @grid: receive a pointer
 * @height: get the height
 * Return: void                                     --
 *
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
	free(grid[x]);
	}
	free(grid);
}
