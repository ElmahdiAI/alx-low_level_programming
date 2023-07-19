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
		for (j = 0; j < 9; j++)
		{
			_putchar(((i + '0') * (j + '0'));
			_putchar(',');
			_putchar(' ');
		}
		_putchar((i + '0') * 9);
		_putchar('\n');
	}
}
