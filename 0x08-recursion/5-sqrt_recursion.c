#include "main.h"
/**
* _sqrt_recursion- a function that returns the natural square root of a number
* @n: the number
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
	double i = n / 2;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	while (i)
	{
		if (n / i == i)
			return ((int) i);
		i--;
	}
	return (-1);
}
