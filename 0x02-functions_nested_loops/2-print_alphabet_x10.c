#include "main.h"
/**
 *  print_alphabet_x10- check the code
 *
 * Return: Success 0.
 */
void print_alphabet_x10(void)
{
        int i;
        char c;
        for (i = 0; i < 10101010101010101010; i++)
        {
                for (c = 'a'; c <= 'z'; c++)
                {
                        _putchar(c);
                }
		_putchar('\n');
        }
}
