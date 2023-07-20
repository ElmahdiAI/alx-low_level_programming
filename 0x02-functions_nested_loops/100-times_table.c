#include "main.h"
/**
 *  print_times_table - sum of two integers
 * @n: start number
 * Return: Success 0.
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n > 0 && n < 15)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				result = i * j;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				if (result <= 9)
					_putchar(result);
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
