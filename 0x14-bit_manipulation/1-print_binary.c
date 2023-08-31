#include <stdio.h>
#include "main.h"
/**
 * print_binary- prints the binary representation of a number.
 * @n: number to print its binary format
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
	}
	_putchar('0' + n % 2);
}
