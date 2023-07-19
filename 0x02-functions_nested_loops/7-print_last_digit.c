#include "main.h"
/**
 *  print_last_digit- check the code
 * @n: targeted number
 * * Return: Success 0.
 */
int print_last_digit(int n)
{
	int m, last_digit;

	m = n % 10;
	if (m < 0)
		last_digit *= -1;
	_putchar('0' + last_digit);
	return (last_digit);
}
