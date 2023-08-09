#include "main.h"

/**
 * free_grid- a function that frees a 2 dimensional grid previously.
 * @grid: width of array
 * @height: hight of array
 * Return: return NULL on failure
 * If width or height is 0 or negative, return NULL
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
