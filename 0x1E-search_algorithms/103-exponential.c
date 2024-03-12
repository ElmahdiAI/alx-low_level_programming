#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @left: Left element
 * @right: Right element
 * @value: value to search for
 * Return: index of value or -1 if not found
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		size_t mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array to search in
 * @value: value to search for
 * Return: the index of the searched element, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound < size)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, bound);
		return (_binary_search(array, bound / 2, (bound < size - 1) ? bound : size - 1, value));
	}

	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, size - 1);
	return (_binary_search(array, bound / 2, size - 1, value));
}
