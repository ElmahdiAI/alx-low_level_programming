#include "main.h"

/**
 * array_range- a function that creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 *If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array, size, i;

	size = max - min + 1;
	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}
	return (array);
}
