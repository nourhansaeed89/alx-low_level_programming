#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  function that frees a 2 dimensional grid previously created
 * @grid: pointer
 *
 * @height: column
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
