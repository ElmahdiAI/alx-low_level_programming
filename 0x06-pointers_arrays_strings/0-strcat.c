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
	int i = 0, j = 0;

	while (*dest)
	{
		i++;
	}
	while (*src)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return dest;
}
