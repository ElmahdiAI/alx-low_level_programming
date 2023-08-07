#include "main.h"
/**
 * _islower- verifie if a letter is lowercase
 *@c: character to be verified
 * Return: Success 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
