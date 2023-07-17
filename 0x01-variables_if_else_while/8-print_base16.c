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
	int i = 0;
	char c;

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	for (c = 'A'; c <= 'F'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
