#include "main.h"
/**
 * _calloc- a function that allocates memory for an array, using malloc.
 * @nmemb: number of array members
 * @size: size of each member
 * Return: a pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array)
	{
		for (i = 0; i < nmemb * size; i++)
		{
			*((char *)array + i) = 0;
		}
		return (array);
	}
	else
		return (NULL);
}
