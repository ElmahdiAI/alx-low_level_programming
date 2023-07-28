#include "main.h"
/*******************************************************
 *********************MEHDI**AI*************************
 * _strcat - concatenates two strings
 * @src: string source
 * @dest: string destinataire
 * Return: returns poiner
 *******************************************************
 *******************************************************/
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i]; i++)
		dest[len++] = src[i];
	return (dest);
}
