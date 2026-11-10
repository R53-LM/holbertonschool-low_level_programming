#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: number of columns of the grid
* @height: number of rows of the grid
*
* Return: pointer to the grid, or NULL if it fails
*/
int **alloc_grid(int width, int height)
{
int i;
int j;
int y;

int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(height * sizeof(int *));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (y = 0; y < i; y++)
			{
				free(s[y]);
			}
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
