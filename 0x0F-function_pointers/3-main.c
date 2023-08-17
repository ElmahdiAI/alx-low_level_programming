#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main- the main function of the program.
* @argc: the argument count
* @argv: an array of argument strings
* Return: 0 in success.
*/
int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(op)(a, b);
	printf("%d\n", result);
	return (0);
}
