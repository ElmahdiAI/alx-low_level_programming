#include "main.h"
/**
 * main - check the code
 *
 * Return: Success 0.
 */
int main(void)
{
	char word[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
