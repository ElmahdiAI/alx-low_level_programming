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
 	int i, **grid;

 	if (width <= 0|| height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int*) * width);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * height);
		if (grid[i] == NULL)
			return (NULL);
	}
	return (grid);
 }
