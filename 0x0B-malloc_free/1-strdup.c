#include "main.h"

/**
 * _strdup- a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: string to add
 * Return: NULL if str = NULL, NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *string;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	string = malloc(sizeof(char) * (size + 1));
	if (string == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		string[i] = str[i];
	}
	string[size] = '\0';
	return (string);
}
