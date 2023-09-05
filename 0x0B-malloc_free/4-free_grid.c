#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - the ntry
*@grid: the rows
*@height: the columns
* Return: the pointer to 2 dimensional array of int
*/
void free_grid(int **grid, int height)
{
	int n;
	int *p;

	for (n = 0; n < height; n++)
	{
		p = grid[n];
		free(p);
	}
	free(grid);
}
