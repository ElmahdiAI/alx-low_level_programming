#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator- a function that executes a function given
* as a parameter on each element of an array
* @array: targeted array
* @size: array size
* @action: pointer to function
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
