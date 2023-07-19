#include "main.h"
/**
 *  times_table - check the code
 * Return: Success 0.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			int result;

			result = i * j;
			_putchar(',');
			_putchar(' ');
			if (result <= 9)
				_putchar(result + '0');
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
