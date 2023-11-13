#include <stdio.h>
/**
 * add- function
 * @a: first
 * @b: second
 * return: result
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub- function
 * @a: first
 * @b: second
 * return: result
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul- function
 * @a: first
 * @b: second
 * return: result
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div- function
 * @a: first
 * @b: second
 * return: result
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
/*
 * mod- function
 * @a: first
 * @b: second
 * return: result
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
