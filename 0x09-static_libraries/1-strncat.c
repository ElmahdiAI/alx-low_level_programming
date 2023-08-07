#include "main.h"
/*******************************************************
 *********************MEHDI**AI*************************
 * _strncat- concatenates two strings
 * @src: string source
 * @dest: string destinataire
 * @n : bytes to take from src
 * Return: returns new concatenated string
 *******************************************************
 *******************************************************
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];

	return (dest);
}
