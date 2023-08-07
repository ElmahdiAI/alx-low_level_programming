#include "main.h"

/*******************************************************
 *********************MEHDI**AI*************************
 * _strncpy- copies a string
 * @src: string source
 * @dest: string destinataire
 * @n : bytes to take from src
 * Return: returns dest
 *******************************************************
 *******************************************************
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
