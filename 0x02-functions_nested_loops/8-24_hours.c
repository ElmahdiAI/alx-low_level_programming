#include "main.h"
/**
 * jack_bauer- check the code
 * Return: Success 0.
 */
void jack_bauer(void)
{
	int min, hour;
	
	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(':');
			_putchar(min / 10);
			_putchar(hour % 10);
			_putchar('\n');
		}
	}

}
