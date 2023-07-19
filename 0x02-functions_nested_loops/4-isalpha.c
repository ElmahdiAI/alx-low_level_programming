#include "main.h"
/**
 *  _isalpha(int c)- check the code
 * @c: character to be verified
 * Return: Success 0.
 */
int _isalpha(int c)
{
	if ((c <= 'a' && c <= 'z') || (c  'A' && c >= 'Z'))
	{
		return (1);
	}
	return (0);
}
