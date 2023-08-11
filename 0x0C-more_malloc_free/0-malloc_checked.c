#include "main.h"
/**
 * malloc_checked- a function that allocates memory using malloc.
 * @b: width of array
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);
	if (array == NULL)
		exit (98);
	return (array);
}
