#include "main.h"

/*******************************************************
 *********************MEHDI**AI*************************
 * _strncpy - copies a string
 * @src: string source
 * @dest: string destinataire
 * @n : bytes to take from src
 *******************************************************
 *******************************************************/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (*dest)
	{
		for(i = 0; i < n; i++)
		{
			*(dest + i) = *(src + i);
		}
	}
	return *dest;
}
