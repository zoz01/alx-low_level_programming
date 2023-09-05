#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - the ntry pint
*@width:the rows matrix
*@height: the columns of string
* Return: the pointer to 2 dimensional array of int
*/
int **alloc_grid(int width, int height)
{
	int **matrix;
	int n;
	int u;
	int r;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		*(matrix + n) = (int *)malloc(width * sizeof(int));
		if (*(matrix + n) == NULL)
		{
			for (n = 0; n < height; n++)
			{
				p = matrix[n];
				free(p);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (r = 0; r < height; r++)
	{
		for (u = 0; u < width; u++)
		{
			matrix[r][u] = 0;
		}
	}
	return (matrix);
}
