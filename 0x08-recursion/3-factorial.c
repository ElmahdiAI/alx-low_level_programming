#include "main.h"
/**
* factorial- a function that returns the factorial of a given number
* @n: number to calculate factoriel for
* Return: factoriel of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
