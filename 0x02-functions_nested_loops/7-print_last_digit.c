#include "main.h"
/**
 *  print_last_digit- check the code
 * @n: targeted number
 * * Return: Success 0.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
