#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int **alloc_grid - function that returns a pointer to a 2 dimensional array
 *
 * @width: row
 * @height: column
 * Return: width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **x, i, j;

	x = malloc(sizeof(*x) * height);
	if (width <= 0 || height <= 0 || x == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			x[i] = malloc(sizeof(**x) * width);
			if (x[i] == 0)
			{
				while (i--)
					free(x[i]);
				free(x);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				x[i][j] = 0;
		}
	}
	return (x);
}
