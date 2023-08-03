#include "main.h"
/**
* _print_rev_recursion- a function that prints a string in reverse
* @s: targeted string
* Return: string
*/
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	return (s);
}
