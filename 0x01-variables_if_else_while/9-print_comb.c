#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'another C code in ALX program'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
