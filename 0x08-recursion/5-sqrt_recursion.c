#include "main.h"
/**
 * _sqrt_recursion- a function that returns the natural square root of a number
 * @n: the number to calculate square root for
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0));
}
/**
 * find_sqrt- a function that returns the natural square root of a number
 * @n: the number targeted
 * @i: iterator for square root
 * Return: square root of n
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);
	return (find_sqrt(n, i + 1));
}

