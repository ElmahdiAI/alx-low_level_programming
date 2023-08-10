#include "main.h"

/**
 * string_nconcat- a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: hight of array
 * Return: If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len_s1 = 0, len_s2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[++len_s1])
		;
	while (s2[++len_s2])
		;
	if (n >= len_s2)
	{
		concat = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
		if (!concat)
			return (NULL);
		for (i = 0; i < len_s1; i++)
			concat[i] = s1[i];
		for (i = 0; i < len_s2; i++)
			concat[len_s1 + i] = s2[i];
			concat[len_s1 + len_s2] = '\0';
	}
	else
	{
		concat = malloc(sizeof(char) * (len_s1 + n + 1));
		if (!concat)
			return (NULL);
		for (i = 0; i < len_s1; i++)
			concat[i] = s1[i];
		for (i = 0; i < n; i++)
			concat[len_s1 + i] = s2[i];
			concat[len_s1 + n] = '\0';
	}
	return (concat);
}
