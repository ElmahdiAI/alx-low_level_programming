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
	int i,j;
	for (i = 0; i < 9; i++)
	{
		for (j = i+1; j < 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
