#include "main.h"

/*******************************************************
 *********************MEHDI**AI*************************
 * _strncat - concatenates two strings
 * @src: string source
 * @dest: string destinataire
 * @n : bytes to take from src
 *******************************************************
 *******************************************************/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (*dest)
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return *dest;
}
