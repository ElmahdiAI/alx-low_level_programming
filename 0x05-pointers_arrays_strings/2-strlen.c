#include "main.h"
/**
 *  *_strlen - returns the length of a string
 *   * @s: string
 *    *Return: returns lenght;
 *     */
int _strlen(char *s)
{
	int len;
	
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
