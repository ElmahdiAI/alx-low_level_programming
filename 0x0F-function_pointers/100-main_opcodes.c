#include <stdio.h>
#include <stdlib.h>

/**
 *main -  program that prints the opcodes of its own main function.
 *@argc: number of arguments passed to the program
 *@argv: array of arguments
 *
 *Return: on success, 1 or 2 in case of failure
 */

int main(int argc, char *argv[])
{
	int i, numBytes;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	numBytes = atoi(argv[1]);
	if (numBytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = (unsigned char *)main;
	for (i = 0; i < numBytes; i++)
	{
		printf("%02x", *ptr);
		ptr++;
	}
	printf("\n");
	return (0);
}
