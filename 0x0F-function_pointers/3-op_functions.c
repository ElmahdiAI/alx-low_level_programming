#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add- calculate the sum of a and b.
* @a: first integer
* @b: second integer
* Return: the sum of a and b.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub- calculate the sub of a and b.
* @a: first integer
* @b: second integer
* Return: the sub of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul- calculate the mul of a and b.
* @a: first integer
* @b: second integer
* Return: the mul of a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div- calculate the div of a and b.
* @a: first integer
* @b: second integer
* Return: the div of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod- calculate the mod of a and b.
* @a: first integer
* @b: second integer
* Return: the mod of a and b.
*/
int op_mod(int a, int b)
{
	return (a % b);
}
