#include "main.h"

/**
 * alloc_grid- a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width of array
 * @height: hight of array
 * Return: return NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * width);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * height);
		if (grid[i] != NULL)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
		else
		{
			for (i = 0, i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
