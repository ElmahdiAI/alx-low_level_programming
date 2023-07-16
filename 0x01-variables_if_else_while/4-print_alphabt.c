#include <stdio.h>
/**
 * main - Entry point
 * Description: 'another C code in ALX program'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z')
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar('c');
	}
	putchar('\n');
	return (0);
}
